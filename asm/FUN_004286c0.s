; FUN_004286c0
MOV AX,word ptr [ESP + 0x4]
TEST AX,AX
JL 0x004286e8
MOV CX,word ptr [ESP + 0x8]
MOV DX,word ptr [ESP + 0xc]
MOVSX EAX,AX
SHL EAX,0x5
MOV word ptr [EAX + 0xe9ba64],CX
MOV word ptr [EAX + 0xe9ba66],DX
RET
