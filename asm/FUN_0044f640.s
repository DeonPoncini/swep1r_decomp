; FUN_0044f640
FILD dword ptr [0x00ec86c4]
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
FMUL qword ptr [0x004accd8]
FSTP dword ptr [EAX]
FILD dword ptr [0x00ec85e8]
FMUL qword ptr [0x004acce0]
FSTP dword ptr [ECX]
RET
