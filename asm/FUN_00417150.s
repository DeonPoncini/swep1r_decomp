; FUN_00417150
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JZ 0x00417194
PUSH EDI
PUSH ESI
LEA ESI,[EAX + 0xc]
LEA EDI,[EAX + 0x8]
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX],0x0
MOV EAX,dword ptr [ESP + 0xc]
PUSH ESI
PUSH EDI
PUSH EAX
MOV dword ptr [ESI],0x0
MOV dword ptr [EDI],0x0
CALL 0x00417120
MOV ECX,dword ptr [EDI]
MOV EAX,dword ptr [ESI]
ADD ESP,0xc
DEC ECX
DEC EAX
MOV dword ptr [EDI],ECX
MOV dword ptr [ESI],EAX
POP ESI
POP EDI
RET