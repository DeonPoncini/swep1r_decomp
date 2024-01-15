; FUN_00482ee0
MOV EAX,dword ptr [ESP + 0x4]
FLD dword ptr [0x004ae08c]
FDIV dword ptr [EAX + 0x134]
FSUB dword ptr [0x004ae090]
FMUL dword ptr [EAX + 0x150]
FSUB dword ptr [0x004ae088]
FMUL dword ptr [EAX + 0x148]
FSTP dword ptr [EAX + 0x154]
RET
