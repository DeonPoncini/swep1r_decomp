; FUN_00428720
MOV AX,word ptr [ESP + 0x4]
TEST AX,AX
JL 0x0042873a
MOV ECX,dword ptr [ESP + 0x8]
MOVSX EAX,AX
SHL EAX,0x5
MOV dword ptr [EAX + 0xe9ba70],ECX
RET