; FUN_0041bd10
SUB ESP,0x104
LEA EAX,[ESP]
PUSH EAX
CALL 0x00486f50
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x0041bd47
LEA ECX,[ESP + 0x58]
PUSH 0x40
PUSH ECX
PUSH 0x4ea098
CALL 0x0048c380
ADD ESP,0xc
MOV EAX,0x4ea098
ADD ESP,0x104
RET
XOR EAX,EAX
ADD ESP,0x104
RET
