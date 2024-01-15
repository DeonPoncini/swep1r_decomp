; FUN_0042f8c0
PUSH ECX
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX + 0x8]
MOV ECX,dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV dword ptr [ESP],EDX
MOV dword ptr [ESP + 0x8],ECX
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP]
FLD ST2
FMUL ST3
FXCH
FADDP ST2,ST0
PUSH ECX
FADDP
FSTP dword ptr [ESP]
FSTP ST0
CALL 0x00480670
ADD ESP,0x4
POP ECX
RET
