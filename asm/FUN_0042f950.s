; FUN_0042f950
SUB ESP,0xc
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x10]
PUSH ECX
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
FSTP dword ptr [ESP]
FSTP ST0
CALL 0x00480670
ADD ESP,0x4
ADD ESP,0xc
RET
