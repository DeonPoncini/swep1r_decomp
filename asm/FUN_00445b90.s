; FUN_00445b90
MOV EAX,[0x00e98204]
SUB ESP,0x40
TEST EAX,EAX
PUSH ESI
PUSH EDI
MOV ESI,0x1
JZ 0x00445bcf
MOV EDI,0xe98204
MOV EAX,[0x0050c608]
TEST EAX,EAX
JZ 0x00445bc4
PUSH ESI
LEA EAX,[ESP + 0xc]
PUSH 0x4c17ec
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
MOV EAX,dword ptr [EDI + 0x4]
ADD EDI,0x4
INC ESI
TEST EAX,EAX
JNZ 0x00445ba8
MOV ECX,dword ptr [0x00e981e4]
MOV EAX,dword ptr [ESI*0x4 + 0xe981fc]
CMP ECX,EAX
JA 0x00445be2
JMP 0x00445be0
POP EDI
POP ESI
ADD ESP,0x40
RET
