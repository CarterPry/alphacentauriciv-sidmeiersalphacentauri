# Launcher analysis

The macOS application shown in the screenshots is a CrossOver helper for the installed Windows game. Static wrapper metadata and code are retained with their SHA-256 identities in [launch-chain-files.json](launch-chain-files.json).

1. The application's `Info.plist` specifies executable `Menu Helper`, bottle `Steam`, and a `CrossOverHelperCommand` pointing to a generated CrossOver menu shell script.
2. That exact script executes CrossOver's `wine` with `--bottle "Steam" --check --wait-children --start` and the game's Windows Start Menu `.url` path.
3. Both the Start Menu and desktop `.url` files contain `URL=steam://rungameid/2204130` at line 2.
4. `appmanifest_2204130.acf` confirms app ID `2204130`, install directory `Sid Meier's Alpha Centauri`, and build ID `12965079`. The manifest's `LauncherPath` is Windows Steam. These fields identify the installation; they do not specify which executable Steam launches.

The installed `axstart.exe` then provides a game-selection launcher. REA CLI with Ghidra 12.1.4 decompiled its function at **0x407620**. The request used interior address `0x407790`, and REA resolved the containing function. Complete, unfiltered REA Evidence is in [launch-process-decompile.json](launch-process-decompile.json); the extracted pseudocode is in [launch-process.c](launch-process.c).

- **Evidence ID:** `ev_e40c3fcf098cf2f7771c7acbd9cb67fef4929869eb3cbd0c1cd53d4ce1b30e2b`
- **Executable SHA-256:** `b1b5ac399584e569bd7ec00a1cb405360f1408e8fb9b036155eb9f8e691750cd`
- **Observed static flow:** initialize startup/process records → initialize UI → process events until its active flag clears → read selection `DAT_00484d58` → skip launch for values 0 or 4 → launch the indexed command with `CreateProcessA` → wait for the child process → close process and thread handles.

The crucial decompiler expression is:

```c
CreateProcessA(NULL, (LPSTR)(&DAT_0047a0cc)[selection],
               NULL, NULL, 0, 0, NULL, NULL, &startup, &process);
WaitForSingleObject(process.hProcess, 0xffffffff);
```

This excerpt uses descriptive local variable names for readability; [launch-process.c](launch-process.c) retains the exact generated names. The source-bound raw table inspection in `launch-chain-files.json` resolves:

| Selection | Slot VA | Stored pointer | String |
|---|---|---|---|
| 1 | `0x47a0d0` | `0x47a134` | `terran.exe` |
| 2 | `0x47a0d4` | `0x47a128` | `terranx.exe` |

Thus the executable code and literal table jointly establish that selection 1 starts the base-game executable and selection 2 starts the expansion executable. The selected filename is supplied as the command-line argument with a null application-name argument; `CreateProcessA` then supplies Windows process creation. The wrapper waits for the launched process to finish.

A second REA decompilation, **0x407830**, shows the startup helper copying the literal `movies\\logo.wve` into a local buffer and passing it to `FUN_00406710` with values `0x280`, `0x1e0`, and `0xc`, followed by a call to `FUN_00407060`. The first two numbers are 640 and 480 and plausibly represent video dimensions, but this pass did not decode the callee's parameter semantics or playback implementation. Complete Evidence: `ev_982a9e26ec5d5cdf8522028828070cd12b956bb66fd460062771efe348faafe2`, [launcher-init-decompile.json](launcher-init-decompile.json), with extracted pseudocode in [launcher-init.c](launcher-init.c).

The initial exact-string xref query returned an empty list (`ev_e390fbd2ac5541b76700f8d2bfac500776e63f79683a9e279ae6087fc333dd6e`, [terranx-string-xrefs.json](terranx-string-xrefs.json)). This bounded negative result is consistent with table-based selection; it is not evidence that the string is unused. The subsequent `WinExec` import xref found a separate call site `0x43e242` (`ev_1de8e89af12e24004f7956f4eaa1a8f590d0a7c38915c2ef7f0d98ff0cc49b12`, [winexec-xrefs.json](winexec-xrefs.json)); that unrelated helper was not needed for the proven launch path.

Limits: these are static artifacts and generated pseudocode, not a record of user interaction or process execution. The exact launcher UI control labels and mapping from input events to selection values were not traced. Steam's app-specific executable selection was not recovered, so the metadata proves the route into Steam and the executable proves what `axstart.exe` does when invoked; the bridge between those two was not dynamically observed. No game or launcher was executed. Dedicated REA CLI invocations used ephemeral Ghidra projects and did not modify the shared MCP active target or installed binaries.
