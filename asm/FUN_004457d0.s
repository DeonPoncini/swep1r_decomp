; FUN_004457d0
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
JNZ 0x00445853
PUSH 0x0
PUSH 0x4a646765
CALL 0x00450b30
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00445853
PUSH 0x0
PUSH 0x4a646765
CALL 0x00450b30
MOV AX,word ptr [EAX + 0x6]
ADD ESP,0x8
AND EAX,0x1000
TEST AX,AX
JZ 0x00445845
MOV AL,[0x0050c048]
MOV ECX,0x1
TEST CL,AL
JZ 0x00445853
MOV EDX,dword ptr [0x00e98eb0]
MOV EAX,0x200
TEST EAX,EDX
JNZ 0x0044582e
TEST dword ptr [0x00e98eb4],EAX
JZ 0x00445853
CMP dword ptr [0x0050c5f0],ECX
JZ 0x00445840
MOV EAX,[0x00e98e90]
TEST AH,0x4
JZ 0x00445853
JMP 0x004456b0
CALL 0x00462d40
TEST EAX,EAX
JZ 0x00445853
JMP 0x004456b0
RET
