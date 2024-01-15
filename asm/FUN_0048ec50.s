; FUN_0048ec50
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EAX]
FSUB dword ptr [ECX]
FXCH ST2
MOV EAX,dword ptr [ESP + 0x8]
FMUL dword ptr [EAX + 0x4]
FXCH
FMUL dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
RET
