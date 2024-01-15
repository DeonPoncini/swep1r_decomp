; FUN_0042f6e0
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX]
FADD dword ptr [ECX]
FSTP dword ptr [EDX]
FLD dword ptr [ECX + 0x4]
FADD dword ptr [EAX + 0x4]
FSTP dword ptr [EDX + 0x4]
RET
