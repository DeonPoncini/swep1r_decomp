; FUN_0042f750
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV dword ptr [ESP + 0x4],ECX
PUSH ECX
FLD dword ptr [ESP + 0x8]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL ST2
FADDP
FSTP dword ptr [ESP]
FSTP ST0
CALL 0x00480670
ADD ESP,0x4
RET
