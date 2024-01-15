; FUN_004a2380
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX]
ADD ECX,0x4
MOV dword ptr [EAX],ECX
MOV EAX,ECX
MOV AX,word ptr [EAX + -0x4]
RET
