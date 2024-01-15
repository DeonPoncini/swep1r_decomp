; FUN_0042f700
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX]
FMUL dword ptr [ESP + 0x8]
FSTP dword ptr [ECX]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ESP + 0x8]
FSTP dword ptr [ECX + 0x4]
RET
