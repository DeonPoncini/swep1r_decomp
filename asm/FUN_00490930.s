; FUN_00490930
MOV EAX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX + 0x4]
FADD dword ptr [EAX + 0x8]
FADD dword ptr [EAX]
FMUL dword ptr [0x004af7d4]
RET
