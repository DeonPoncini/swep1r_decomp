; FUN_004a15c0
PUSH EBX
MOV EBX,dword ptr [ESP + 0xc]
PUSH EBP
MOV EBP,dword ptr [ESP + 0xc]
PUSH ESI
MOV ESI,EBP
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],EBP
JG 0x004a15db
XOR EAX,EAX
POP ESI
POP EBP
POP EBX
RET
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
PUSH EDI
CALL 0x004a1710
ADD ESP,0x4
DEC EBX
JZ 0x004a1610
PUSH EDI
CALL 0x004a6810
AND EAX,0xffff
ADD ESP,0x4
CMP EAX,0xffff
JZ 0x004a1629
MOV word ptr [ESI],AX
ADD ESI,0x2
CMP AX,0xa
JZ 0x004a1610
DEC EBX
JNZ 0x004a15ec
MOV word ptr [ESI],0x0
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
CALL 0x004a1780
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET
CMP ESI,EBP
JNZ 0x004a1610
PUSH EDI
XOR ESI,ESI
CALL 0x004a1780
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET