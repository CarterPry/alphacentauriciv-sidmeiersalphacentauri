"""Small stdio MCP client to retain one REA analysis session across queries.

Uses the installed public `rea mcp` interface. Input is JSON-lines with
tool, arguments, and save fields. Full responses are retained on disk.
"""
import json
import os
import subprocess
import sys
from pathlib import Path

root = Path(__file__).resolve().parents[1]
env = dict(os.environ)
env.update(
    PATH='/Users/carte/.nvm/versions/node/v22.22.0/bin:/opt/homebrew/bin:/usr/bin:/bin:/usr/sbin:/sbin',
    HOPPER_LAUNCHER_PATH='/Users/carte/Applications/Hopper Disassembler.app/Contents/MacOS/hopper',
    GHIDRA_INSTALL_DIR='/opt/homebrew/opt/ghidra/libexec',
    JAVA_HOME='/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home',
)
log = (root / 'native' / 'startup-rea-server.log').open('a')
proc = subprocess.Popen(['/Users/carte/.nvm/versions/node/v22.22.0/bin/rea', 'mcp'],
                        env=env, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                        stderr=log, text=True, bufsize=1)
seq = 0


def request(method, params):
    global seq
    seq += 1
    proc.stdin.write(json.dumps(dict(jsonrpc='2.0', id=seq, method=method, params=params)) + '\n')
    proc.stdin.flush()
    while line := proc.stdout.readline():
        reply = json.loads(line)
        if reply.get('id') == seq:
            if 'error' in reply:
                return {'protocol_error': reply['error']}
            return reply['result']
    raise RuntimeError(f'REA process ended: {proc.poll()}')


try:
    init = request('initialize', dict(protocolVersion='2025-03-26', capabilities={},
                                    clientInfo=dict(name='local-evidence-client', version='1')))
    proc.stdin.write(json.dumps(dict(jsonrpc='2.0', method='notifications/initialized')) + '\n')
    proc.stdin.flush()
    print(json.dumps({'initialized': init.get('serverInfo')}), flush=True)
    for line in sys.stdin:
        command = json.loads(line)
        if command.get('quit'):
            print(json.dumps(request('tools/call', {'name': 'close_binary', 'arguments': {}})), flush=True)
            break
        method = command.get('method', 'tools/call')
        params = command.get('params', dict(name=command.get('tool'), arguments=command.get('arguments', {})))
        result = request(method, params)
        save = root / 'native' / command['save']
        save.write_text(json.dumps(result, indent=2) + '\n')
        content = result.get('structuredContent')
        if content is None:
            texts = [x.get('text', '') for x in result.get('content', []) if x.get('type') == 'text']
            try:
                content = json.loads(texts[0]) if len(texts) == 1 else result
            except ValueError:
                content = result
        if command.get('quiet'):
            preview = {'isError': result.get('isError'), 'keys': list(content or result)}
        else:
            preview = content
        print(json.dumps({'saved': str(save), 'result': preview})[:16000], flush=True)
finally:
    proc.stdin.close()
    try:
        proc.wait(timeout=10)
    except subprocess.TimeoutExpired:
        proc.terminate()
        proc.wait(timeout=10)
    log.close()
