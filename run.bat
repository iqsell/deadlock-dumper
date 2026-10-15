@echo off
setlocal
cd /d "%~dp0"
set "VSW=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%VSW%" ( echo vswhere not found - install Visual Studio with "Desktop development with C++" & goto :end )
for /f "usebackq delims=" %%i in (`"%VSW%" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do set "VS=%%i"
if not defined VS ( echo No Visual Studio with C++ tools found - install workload "Desktop development with C++" & goto :end )
call "%VS%\VC\Auxiliary\Build\vcvars64.bat" >nul || goto :end
if not exist build mkdir build
cl /nologo /std:c++20 /O2 /EHsc /utf-8 /DNOMINMAX /DWIN32_LEAN_AND_MEAN /I include /I src src\main.cpp src\memory.cpp src\analysis.cpp src\output.cpp src\patterns.cpp /Fo:build\ /Fe:build\deadlock-dumper.exe || ( echo build failed & goto :end )
build\deadlock-dumper.exe -o output
:end
pause
