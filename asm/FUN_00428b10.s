; FUN_00428b10
MOVSX ECX,word ptr [ESP + 0x4]
MOV DX,word ptr [ESP + 0xc]
MOV EAX,ECX
SHL EAX,0x5
SUB EAX,ECX
MOV ECX,dword ptr [0x004b91c4]
SHL EAX,0x2
MOV word ptr [ECX + EAX*0x1 + 0xc],DX
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [EDX + EAX*0x1 + 0x10],ECX
RET
