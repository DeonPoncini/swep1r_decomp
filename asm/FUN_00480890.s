; FUN_00480890
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0xc]
FLD dword ptr [EDX + 0x4]
FLD dword ptr [EDX + 0x8]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EDX]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0xc]
FXCH ST3
FMUL dword ptr [ECX]
FXCH
FADDP ST2,ST0
FADDP
FSUBP
FLD ST0
FMUL dword ptr [ECX]
FLD ST1
FXCH
FSTP dword ptr [EAX]
FMUL dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + 0x4]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x4]
FXCH
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [EDX]
FADD dword ptr [EAX]
FLD dword ptr [EAX + 0x8]
FXCH
FSTP dword ptr [EAX]
FXCH
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + 0x4]
FADD dword ptr [EDX + 0x8]
FSTP dword ptr [EAX + 0x8]
RET
