; FUN_0048bfc0
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV ECX,0x2
LEA ESI,[EDI + -0x1]
CMP ESI,ECX
JLE 0x0048bfed
MOV EAX,EDI
CDQ
IDIV ECX
TEST EDX,EDX
JZ 0x0048bfe8
INC ECX
CMP ECX,ESI
JL 0x0048bfd2
MOV EAX,0x1
POP EDI
POP ESI
RET
XOR EAX,EAX
POP EDI
POP ESI
RET
POP EDI
MOV EAX,0x1
POP ESI
RET
