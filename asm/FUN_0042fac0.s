; FUN_0042fac0
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX]
FLD dword ptr [ECX]
FXCH
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x10]
FADDP
FSTP dword ptr [EDX]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x10]
FADDP
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x10]
FADDP
FSTP dword ptr [EDX + 0x8]
RET
