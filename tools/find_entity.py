#!/usr/bin/env python3
"""
find_entity.py - live entity finder for Deadlock (Source 2), external RPM only.

Usage:
    python find_entity.py                 # list ALL entities (index, addr, designerName)
    python find_entity.py point_camera    # only entities whose designerName matches
    python find_entity.py camera          # substring match, case-insensitive

Offsets are for client build 6701 and come from the deadlock-dumper output:
    dwGameEntitySystem = client.dll + 0x3925518   (offsets.hpp)
Entity-list layout (verified against the live client.dll):
    chunk array   @ CGameEntitySystem + 0x10   (8 bytes per chunk, 512 ents/chunk)
    identity      = chunk + 0x70 * (index & 0x1FF)
    entity ptr    = *(identity + 0x00)
    m_EHandle     =  identity + 0x10   (uint32)
    m_designerName=  identity + 0x20   (const char*)
"""
import sys, struct, ctypes, ctypes.wintypes as w

try:  # чтобы кириллица не падала на cp1252-консоли
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
except Exception:
    pass

DW_GAME_ENTITY_SYSTEM = 0x3925518   # client.dll + X  (from offsets.hpp)
CHUNK_ARRAY_OFF = 0x10
IDENTITY_STRIDE = 0x70
DESIGNER_NAME_OFF = 0x20
MAX_INDEX = 0x8000

# C_PointCamera fields (client_dll.hpp)
CAM_M_FOV = 0x5f0     # float32
CAM_M_ACTIVE = 0x60c  # bool

k32 = ctypes.windll.kernel32

def pid_of(name: bytes):
    class PE(ctypes.Structure):
        _fields_ = [("dwSize", w.DWORD), ("cntUsage", w.DWORD), ("pid", w.DWORD),
                    ("defHeap", ctypes.POINTER(ctypes.c_ulong)), ("modID", w.DWORD),
                    ("cntThreads", w.DWORD), ("ppid", w.DWORD), ("pri", ctypes.c_long),
                    ("flags", w.DWORD), ("exe", ctypes.c_char * 260)]
    snap = k32.CreateToolhelp32Snapshot(0x2, 0)
    pe = PE(); pe.dwSize = ctypes.sizeof(pe)
    ok = k32.Process32First(snap, ctypes.byref(pe))
    while ok:
        if pe.exe.lower() == name:
            k32.CloseHandle(snap); return pe.pid
        ok = k32.Process32Next(snap, ctypes.byref(pe))
    k32.CloseHandle(snap); return None

def module_base(pid, name: bytes):
    class ME(ctypes.Structure):
        _fields_ = [("dwSize", w.DWORD), ("modID", w.DWORD), ("pid", w.DWORD),
                    ("glblUsage", w.DWORD), ("procUsage", w.DWORD),
                    ("base", ctypes.POINTER(ctypes.c_byte)), ("size", w.DWORD),
                    ("hModule", w.HMODULE), ("modName", ctypes.c_char * 256),
                    ("exePath", ctypes.c_char * 260)]
    snap = k32.CreateToolhelp32Snapshot(0x8 | 0x10, pid)
    me = ME(); me.dwSize = ctypes.sizeof(me)
    ok = k32.Module32First(snap, ctypes.byref(me))
    while ok:
        if me.modName.lower() == name:
            base = ctypes.cast(me.base, ctypes.c_void_p).value
            k32.CloseHandle(snap); return base, me.size
        ok = k32.Module32Next(snap, ctypes.byref(me))
    k32.CloseHandle(snap); return None, None

def main():
    flt = sys.argv[1].lower() if len(sys.argv) > 1 else None

    pid = pid_of(b"deadlock.exe")
    if not pid:
        print("[-] deadlock.exe не запущен"); return
    cbase, csize = module_base(pid, b"client.dll")
    if not cbase:
        print("[-] client.dll не найден"); return
    cend = cbase + csize
    h = k32.OpenProcess(0x10 | 0x400, False, pid)  # VM_READ | QUERY_INFORMATION
    if not h:
        print("[-] OpenProcess failed (запусти от админа)"); return

    def rd(addr, n):
        buf = ctypes.create_string_buffer(n); got = ctypes.c_size_t(0)
        if k32.ReadProcessMemory(h, ctypes.c_void_p(addr), buf, n, ctypes.byref(got)) and got.value == n:
            return buf.raw
        return None
    def rq(addr):
        b = rd(addr, 8); return struct.unpack("<Q", b)[0] if b else None
    def rstr(addr, n=96):
        b = rd(addr, n); return b.split(b"\0")[0].decode("latin1", "replace") if b else ""
    def rf32(addr):
        b = rd(addr, 4); return struct.unpack("<f", b)[0] if b else None

    gesys = rq(cbase + DW_GAME_ENTITY_SYSTEM)
    print(f"[+] deadlock.exe pid={pid}  client.dll=0x{cbase:x}")
    print(f"[+] CGameEntitySystem=0x{(gesys or 0):x}")
    if not gesys:
        print("[-] entity system == null (ты в меню, не в матче)"); return
    chunk_array = gesys + CHUNK_ARRAY_OFF

    found = 0
    for idx in range(MAX_INDEX):
        chunk = rq(chunk_array + 8 * (idx >> 9))
        if not chunk:
            continue
        identity = chunk + IDENTITY_STRIDE * (idx & 0x1FF)
        ent = rq(identity)
        if not ent or not (0x10000 < ent < 0x00007fffffffffff):
            continue
        vt = rq(ent)
        if not (vt and cbase <= vt < cend):
            continue
        name = rstr(rq(identity + DESIGNER_NAME_OFF) or 0)
        if flt and flt not in name.lower():
            continue
        print(f"  idx={idx:<5} addr=0x{ent:012x}  {name}")
        if "point_camera" in name:            # поля есть только у C_PointCamera
            fov = rf32(ent + CAM_M_FOV)
            act = rd(ent + CAM_M_ACTIVE, 1)
            fov_s = f"{fov:.1f}" if fov is not None else "?"
            # готовые абсолютные адреса полей — вставляй прямо в Cheat Engine
            print(f"        m_FOV     @ 0x{ent + CAM_M_FOV:012x} = {fov_s}   (Float)")
            print(f"        m_bActive @ 0x{ent + CAM_M_ACTIVE:012x} = {bool(act and act[0])}   (Byte)")
        found += 1
    print(f"[i] найдено сущностей: {found}"
          + (f" (фильтр '{flt}')" if flt else ""))

if __name__ == "__main__":
    main()
