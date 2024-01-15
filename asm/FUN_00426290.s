; FUN_00426290
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
FLD dword ptr [ESI + 0x114]
FSUB dword ptr [ESP + 0xc]
FLD dword ptr [ESI + 0xdc]
FXCH
FCOM dword ptr [0x004ac468]
OR dword ptr [ESI + 0x100],0x20000000
FNSTSW AX
FLD ST1
TEST AH,0x1
FSTP dword ptr [ESI + 0xe0]
JZ 0x004262c8
FCHS
FSUB qword ptr [0x00e22a40]
FXCH
MOV EAX,dword ptr [ESP + 0xc]
PUSH ESI
MOV dword ptr [ESI + 0x114],EAX
FDIVP
FSTP dword ptr [ESI + 0xe4]
CALL 0x00426220
FLD dword ptr [ESI + 0x114]
ADD ESP,0x4
MOV dword ptr [ESI + 0xe8],EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x10]
PUSH ESI
MOV dword ptr [ESI + 0xec],EAX
MOV dword ptr [ESI + 0x114],ECX
CALL 0x00426220
ADD ESP,0x4
MOV dword ptr [ESI + 0x118],EAX
PUSH ESI
CALL 0x00426330
ADD ESP,0x4
POP ESI
RET
