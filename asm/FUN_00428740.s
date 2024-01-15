; FUN_00428740
MOV AX,word ptr [ESP + 0x4]
CMP AX,0xff99
JNZ 0x00428772
MOV AL,byte ptr [ESP + 0x8]
MOV CL,byte ptr [ESP + 0xc]
MOV DL,byte ptr [ESP + 0x10]
MOV [0x0050b704],AL
MOV AL,byte ptr [ESP + 0x14]
MOV byte ptr [0x0050b705],CL
MOV byte ptr [0x0050b706],DL
MOV [0x0050b707],AL
RET
CMP AX,0xff98
JNZ 0x004287a0
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV AL,byte ptr [ESP + 0x10]
MOV byte ptr [0x0050b708],CL
MOV CL,byte ptr [ESP + 0x14]
MOV byte ptr [0x0050b709],DL
MOV [0x0050b70a],AL
MOV byte ptr [0x0050b70b],CL
RET
TEST AX,AX
JL 0x004287d3
MOV DL,byte ptr [ESP + 0x8]
MOV CL,byte ptr [ESP + 0xc]
MOVSX EAX,AX
SHL EAX,0x5
MOV byte ptr [EAX + 0xe9ba78],DL
MOV DL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0xe9ba79],CL
MOV CL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0xe9ba7a],DL
MOV byte ptr [EAX + 0xe9ba7b],CL
RET
