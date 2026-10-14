# Ghidra installation for REA

Installed Ghidra **12.1.4** from the Homebrew core arm64_tahoe bottle. Reused the existing full **OpenJDK 21.0.11**. No JDK upgrade or native compiler build was required.

- `GHIDRA_INSTALL_DIR=/opt/homebrew/opt/ghidra/libexec`
- `JAVA_HOME=/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home`
- REA launcher: `/Users/carte/.nvm/versions/node/v22.22.0/bin/rea`
- Use Node 22.22.0 on PATH.

Run `source analysis/setup/ghidra/env.sh` in the workspace to select these tools in a shell. This file does not change global shell defaults or Codex registration.

`rea doctor --provider ghidra --json` exited 0 and reported `healthy: true`. All nine scoped checks passed: Node, Ghidra configuration, host, architecture, installation, version, headless launcher, native decompiler, and Java. The decompiler header reports Mach-O arm64. Full doctor output is `rea-doctor.json`; focused output is `health-summary.json`. No target was opened as part of setup validation.

The first ordinary Homebrew install began downloading newer transitive Java dependencies; it was interrupted before any formula was installed. The successful second command used `--ignore-dependencies` to reuse the installed compatible JDK. `brew list --versions` afterward still reported `openjdk@21 21.0.11`. Full install logs are retained.

Release source: https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build
Homebrew bottle digest: `d2a6222389d18d32d48e55079407c1d877d90f86d692911b0399a6ff5e440a9a`
