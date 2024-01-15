; FUN_004286f0
MOV AX,word ptr [ESP + 0x4]
TEST AX,AX
JL 0x00428714
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
MOVSX EAX,AX
SHL EAX,0x5
MOV dword ptr [EAX + 0xe9ba68],ECX
MOV dword ptr [EAX + 0xe9ba6c],EDX
RET
