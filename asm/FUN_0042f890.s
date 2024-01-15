; FUN_0042f890
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
RET
