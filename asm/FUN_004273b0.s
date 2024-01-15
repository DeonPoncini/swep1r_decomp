; FUN_004273b0
MOVSX EAX,word ptr [0x0050b6dc]
MOV CX,word ptr [ESP + 0x4]
MOV word ptr [EAX*0x2 + 0x4b85e0],CX
INC EAX
CDQ
MOV ECX,0x3
IDIV ECX
MOV word ptr [0x0050b6dc],DX
RET
