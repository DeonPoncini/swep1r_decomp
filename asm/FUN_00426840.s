; FUN_00426840
FLD dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
FSTP dword ptr [ESI + 0x114]
CALL 0x00426220
MOV dword ptr [ESI + 0x118],EAX
MOV EAX,dword ptr [ESI + 0x100]
ADD ESP,0x4
OR EAX,0x1000000
MOV dword ptr [ESI + 0x100],EAX
POP ESI
RET