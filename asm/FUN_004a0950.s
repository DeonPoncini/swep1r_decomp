; FUN_004a0950
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
PUSH ESI
CALL 0x004a1710
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x004a0990
ADD ESP,0xc
MOV EDI,EAX
PUSH ESI
CALL 0x004a1780
ADD ESP,0x4
MOV EAX,EDI
POP EDI
POP ESI
RET
