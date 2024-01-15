; FUN_0042f910
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x8]
FXCH ST2
FST dword ptr [ESP + 0x4]
FXCH
FST dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x4]
FXCH
FMUL dword ptr [ESP + 0x8]
FLD ST2
FMUL ST3
FXCH
FADDP ST2,ST0
FADDP
FSTP ST1
RET
