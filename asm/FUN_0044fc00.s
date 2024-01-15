; FUN_0044fc00
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
PUSH EDI
JZ 0x0044fcb0
MOV ECX,dword ptr [ESI]
MOV EDI,dword ptr [ESI + 0x8]
OR CH,0x80
TEST EDI,EDI
MOV dword ptr [ESI],ECX
JZ 0x0044fcb0
MOVSX EAX,word ptr [EDI + 0x4]
MOVSX ECX,word ptr [ESI + 0x4]
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],ECX
FMUL dword ptr [ESP + 0x10]
FIADD dword ptr [ESP + 0xc]
CALL 0x0049ed20
MOV word ptr [ESI + 0x4],AX
MOV CX,word ptr [EDI + 0x4]
CMP AX,CX
JLE 0x0044fc54
SUB EAX,ECX
MOV word ptr [ESI + 0x4],AX
MOV AX,word ptr [ESI + 0x4]
TEST AX,AX
JGE 0x0044fc68
MOV DX,word ptr [EDI + 0x4]
ADD DX,AX
MOV word ptr [ESI + 0x4],DX
MOVSX EAX,word ptr [EDI + 0x6]
MOVSX ECX,word ptr [ESI + 0x6]
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],ECX
FMUL dword ptr [ESP + 0x14]
FIADD dword ptr [ESP + 0xc]
CALL 0x0049ed20
MOV word ptr [ESI + 0x6],AX
MOV CX,word ptr [EDI + 0x6]
CMP AX,CX
JLE 0x0044fc9c
SUB EAX,ECX
MOV word ptr [ESI + 0x6],AX
MOV AX,word ptr [ESI + 0x6]
TEST AX,AX
JGE 0x0044fcb0
MOV DX,word ptr [EDI + 0x6]
ADD DX,AX
MOV word ptr [ESI + 0x6],DX
POP EDI
POP ESI
RET
