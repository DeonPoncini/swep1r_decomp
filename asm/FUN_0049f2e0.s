; FUN_0049f2e0
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
PUSH EDI
LEA ESI,[EAX + 0xf]
MOV EAX,[0x004d422c]
AND ESI,0xfffffff0
CMP ESI,EAX
JA 0x0049f322
PUSH 0x9
CALL 0x004a1670
MOV ECX,ESI
ADD ESP,0x4
SHR ECX,0x4
PUSH ECX
CALL 0x004a34c0
ADD ESP,0x4
MOV EDI,EAX
PUSH 0x9
CALL 0x004a16f0
ADD ESP,0x4
TEST EDI,EDI
JZ 0x0049f322
MOV EAX,EDI
POP EDI
POP ESI
RET
MOV EDX,dword ptr [0x00ecd604]
PUSH ESI
PUSH 0x0
PUSH EDX
CALL dword ptr [0x004ac1a8]
POP EDI
POP ESI
RET
