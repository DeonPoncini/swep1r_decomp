; FUN_004315a0
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX]
PUSH ESI
MOV dword ptr [ESI],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
CALL 0x0042f9b0
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0x4
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [EAX]
FXCH ST2
FMUL dword ptr [ESI + 0x4]
FXCH ST3
FSTP ST0
FXCH
FMUL dword ptr [ESI]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0xc]
POP ESI
RET
