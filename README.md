# deadlock-dumper

External offset/interface/schema dumper for **Deadlock** (Valve, Source 2).  
Windows only. Reads process memory via `ReadProcessMemory` — no kernel drivers required.

## What it dumps

| File | Contents |
|------|----------|
| `interfaces.*` | CreateInterface pointers for every loaded module |
| `offsets.*` | Key game pointers (entity list, local player, view matrix, …) |
| `client.dll.*`, `server.dll.*`, … | Full Source 2 schema: all class fields + enums |

Output formats: **hpp · json · rs · cs**

## Build

### Requirements

- Windows 10/11
- CMake ≥ 3.20
- MSVC 2022 **or** MinGW-w64 (clang/gcc with C++20)

### Steps

```bat
:: 1. Get nlohmann/json (single-header, ~1 MB)
mkdir include
curl -L https://raw.githubusercontent.com/nlohmann/json/v3.11.3/single_include/nlohmann/json.hpp -o include/json.hpp

:: 2. Configure & build
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release

:: 3. Run (game must already be running)
.\build\Release\deadlock-dumper.exe
```

## Usage

```
deadlock-dumper.exe [options]

Options:
  -p, --process <name>   Game process name  (default: Deadlock.exe)
  -o, --output  <dir>    Output directory   (default: output)
  -f, --formats <list>   Comma-separated: hpp,json,rs,cs  (default: all four)
  -i, --indent  <n>      Spaces per indent level (default: 4)
  -h, --help
```

Run the dumper as **Administrator** so that `ReadProcessMemory` can access the game process.

## Updating patterns

Valve updates Deadlock frequently. When offsets stop working, update the patterns in [`src/analysis.cpp`](src/analysis.cpp) — the `kOffsets[]` table near the top of the file.  
Each entry has:

```cpp
{ "module.dll", "symbolName", "AA BB ?? ?? ?? ?? CC", disp_offset, instr_size }
```

- **pattern** — IDA-style hex with `??` wildcards  
- **disp_offset** — byte offset inside the instruction to the 32-bit RIP displacement  
- **instr_size** — total instruction length (used to compute RIP = match + instr_size)

For a `mov rax, [rip+X]` (opcode `48 8B 05 ?? ?? ?? ??`): disp_offset = 3, instr_size = 7.

## Project layout

```
deadlock-dumper-cpp/
├── CMakeLists.txt
├── include/
│   └── json.hpp          ← nlohmann/json (you download this)
└── src/
    ├── main.cpp           ← CLI entry point
    ├── memory.hpp/cpp     ← ReadProcessMemory wrapper
    ├── patterns.hpp/cpp   ← IDA-style pattern scanner
    ├── source2.hpp        ← Source 2 in-memory data structures
    ├── analysis.hpp/cpp   ← Interface / offset / schema extraction
    └── output.hpp/cpp     ← Code generation (hpp, json, rs, cs)
```

## License

MIT
