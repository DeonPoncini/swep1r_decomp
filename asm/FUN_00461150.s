; FUN_00461150
PUSH ESI
CALL 0x0045d350
CMP EAX,0x2
JNZ 0x004611b1
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [0x00e27820]
CMP EAX,ECX
JNZ 0x00461181
XOR ESI,ESI
LEA ECX,[ESI + 0x1b]
PUSH 0x0
PUSH ECX
CALL 0x004285d0
ADD ESP,0x8
INC ESI
CMP ESI,0x6
JL 0x0046116b
JMP 0x004611c7
XOR ESI,ESI
LEA EDX,[ESI + 0x23]
PUSH 0x0
PUSH EDX
CALL 0x004285d0
ADD ESP,0x8
INC ESI
CMP ESI,0x6
JL 0x00461183
PUSH 0x0
PUSH 0x29
CALL 0x004285d0
ADD ESP,0x8
PUSH 0x0
PUSH 0x2a
CALL 0x004285d0
ADD ESP,0x8
POP ESI
RET
XOR ESI,ESI
LEA EAX,[ESI + 0x1b]
PUSH 0x0
PUSH EAX
CALL 0x004285d0
ADD ESP,0x8
INC ESI
CMP ESI,0x6
JL 0x004611b3
PUSH 0x0
PUSH 0x21
CALL 0x004285d0
ADD ESP,0x8
PUSH 0x0
PUSH 0x22
CALL 0x004285d0
ADD ESP,0x8
POP ESI
RET
