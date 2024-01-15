; FUN_0042f720
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX]
FMUL dword ptr [ESP + 0xc]
FADD dword ptr [ECX]
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ESP + 0xc]
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EDX + 0x4]
RET
