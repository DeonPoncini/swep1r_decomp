; FUN_0042b560
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
PUSH EDI
JZ 0x0042b5d7
PUSH ESI
CALL 0x00431770
ADD ESP,0x4
CMP EAX,0x3064
JNZ 0x0042b599
MOV EDX,dword ptr [ESI + 0x14]
XOR ECX,ECX
TEST EDX,EDX
JLE 0x0042b5d7
MOV ESI,dword ptr [ESI + 0x18]
MOV EAX,dword ptr [ESI]
MOV EAX,dword ptr [EAX]
TEST EAX,EAX
JNZ 0x0042b5d9
INC ECX
ADD ESI,0x4
CMP ECX,EDX
JL 0x0042b586
POP EDI
POP ESI
RET
PUSH ESI
CALL 0x00431770
ADD ESP,0x4
TEST AH,0x40
JZ 0x0042b5d7
PUSH ESI
XOR EDI,EDI
CALL 0x00431780
ADD ESP,0x4
TEST EAX,EAX
JLE 0x0042b5d7
MOV ECX,dword ptr [ESI + 0x18]
MOV EDX,dword ptr [ECX + EDI*0x4]
PUSH EDX
CALL 0x0042b560
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x0042b5d9
PUSH ESI
INC EDI
CALL 0x00431780
ADD ESP,0x4
CMP EDI,EAX
JL 0x0042b5b6
XOR EAX,EAX
POP EDI
POP ESI
RET
