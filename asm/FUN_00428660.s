; FUN_00428660
MOV AX,word ptr [ESP + 0x4]
CMP AX,0xff37
JNZ 0x00428692
MOVSX EAX,word ptr [ESP + 0x8]
MOVSX ECX,word ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x8],EAX
FILD dword ptr [ESP + 0x8]
MOV dword ptr [ESP + 0x8],ECX
FSTP dword ptr [0x004b91bc]
FILD dword ptr [ESP + 0x8]
FSTP dword ptr [0x004b91c0]
RET
TEST AX,AX
JL 0x004286b5
MOV DX,word ptr [ESP + 0x8]
MOV CX,word ptr [ESP + 0xc]
MOVSX EAX,AX
SHL EAX,0x5
MOV word ptr [EAX + 0xe9ba60],DX
MOV word ptr [EAX + 0xe9ba62],CX
RET
