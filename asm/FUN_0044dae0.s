; FUN_0044dae0
PUSH EDI
MOV EDI,dword ptr [ESP + 0x8]
TEST EDI,EDI
JZ 0x0044db66
PUSH ESI
PUSH EBP
PUSH EBX
PUSH EDI
CALL 0x00431770
MOV ECX,dword ptr [EDI + 0x10]
ADD ESP,0x4
MOV ESI,EAX
MOV AX,word ptr [EDI + 0xe]
PUSH EAX
PUSH ECX
CALL 0x0044c440
ADD ESP,0x8
MOV EBP,EAX
TEST ESI,0x4000
JZ 0x0044db49
PUSH EDI
CALL 0x00431780
MOV EBX,EAX
ADD ESP,0x4
XOR ESI,ESI
TEST EBX,EBX
JLE 0x0044db5a
MOV EDX,dword ptr [EDI + 0x18]
MOV EAX,dword ptr [EDX + ESI*0x4]
TEST EAX,EAX
JZ 0x0044db36
PUSH EAX
CALL 0x0044dae0
ADD ESP,0x4
INC ESI
CMP ESI,EBX
JL 0x0044db23
PUSH EBP
CALL 0x0044c4c0
ADD ESP,0x4
POP EBX
POP EBP
POP ESI
POP EDI
RET
TEST ESI,0x3064
JZ 0x0044db5a
PUSH EDI
CALL 0x0044ceb0
ADD ESP,0x4
PUSH EBP
CALL 0x0044c4c0
ADD ESP,0x4
POP EBX
POP EBP
POP ESI
POP EDI
RET
