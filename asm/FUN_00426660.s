; FUN_00426660
MOV EAX,[0x0050b5ec]
PUSH EBP
XOR EBP,EBP
TEST EAX,EAX
JLE 0x0042670d
PUSH EDI
PUSH ESI
MOV EDI,0xe9edc0
MOV ESI,dword ptr [EDI]
TEST ESI,ESI
JZ 0x004266fa
MOV EAX,dword ptr [ESI + 0x100]
TEST EAX,0x80000000
JNZ 0x004266fa
TEST EAX,0x10000000
JZ 0x004266fa
PUSH ESI
CALL 0x00426330
MOV EAX,dword ptr [ESI + 0x100]
ADD ESP,0x4
AND EAX,0xf
LEA ECX,[EAX + -0x2]
CMP ECX,0xa
JA 0x004266fa
XOR EDX,EDX
MOV DL,byte ptr [ECX + 0x426728]
JMP dword ptr [EDX*0x4 + 0x426710]
PUSH ESI
CALL 0x00426080
JMP 0x004266f7
CMP EAX,0xb
JNZ 0x004266d4
PUSH 0x0
PUSH ESI
CALL 0x004260f0
ADD ESP,0x8
JMP 0x004266fa
PUSH 0x1
PUSH ESI
CALL 0x004260f0
ADD ESP,0x8
JMP 0x004266fa
PUSH ESI
CALL 0x00425f00
JMP 0x004266f7
PUSH ESI
CALL 0x00425d10
JMP 0x004266f7
PUSH ESI
CALL 0x00425de0
ADD ESP,0x4
MOV EAX,[0x0050b5ec]
INC EBP
ADD EDI,0x4
CMP EBP,EAX
JL 0x00426677
POP ESI
POP EDI
POP EBP
RET