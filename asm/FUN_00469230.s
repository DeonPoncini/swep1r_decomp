; FUN_00469230
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
PUSH EDI
CALL 0x004691c0
MOV ESI,EAX
ADD ESP,0x4
CMP ESI,-0x1
JNZ 0x0046924b
XOR EAX,EAX
POP EDI
POP ESI
RET
MOV EAX,ESI
SUB EAX,0x0
JZ 0x0046927a
DEC EAX
JZ 0x00469276
DEC EAX
JZ 0x0046925d
XOR EAX,EAX
POP EDI
POP ESI
RET
PUSH 0x0
PUSH EDI
CALL 0x00466ec0
ADD ESP,0x8
MOV dword ptr [EDI + 0xb8],ESI
MOV EAX,0x1
POP EDI
POP ESI
RET
PUSH 0x2
JMP 0x0046927c
PUSH 0x1
PUSH EDI
CALL 0x00469200
ADD ESP,0x8
MOV dword ptr [EDI + 0xb8],ESI
MOV EAX,0x1
POP EDI
POP ESI
RET
