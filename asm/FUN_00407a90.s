; FUN_00407a90
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
PUSH ESI
PUSH EDI
XOR EDI,EDI
CMP dword ptr [EBP],-0x1
JZ 0x00407aea
MOV EBX,dword ptr [ESP + 0x14]
MOV EAX,EBP
MOV ESI,EBP
MOV EAX,dword ptr [EAX + 0x4]
PUSH EAX
CALL 0x00421470
ADD ESP,0x4
PUSH EAX
PUSH EBX
CALL 0x00421470
ADD ESP,0x4
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00407ae1
MOV ECX,dword ptr [ESI + 0x8]
ADD ESI,0x8
INC EDI
CMP ECX,-0x1
MOV EAX,ESI
JNZ 0x00407aa8
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [EBP + EDI*0x8]
POP EDI
POP ESI
POP EBP
POP EBX
RET
POP EDI
POP ESI
POP EBP
OR EAX,0xffffffff
POP EBX
RET
