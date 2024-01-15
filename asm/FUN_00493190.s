; FUN_00493190
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FXCH ST2
FMULP ST4
FMULP ST2
FXCH
FADDP ST2,ST0
FMUL dword ptr [EAX]
FADDP
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMULP ST3
FMUL dword ptr [ECX + 0x8]
FADDP ST2,ST0
FMUL dword ptr [ECX]
FADDP
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMULP ST3
FMUL dword ptr [ECX + 0x8]
FADDP ST2,ST0
FMUL dword ptr [ECX]
FADDP
FSTP dword ptr [EDX + 0x8]
RET
