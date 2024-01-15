; FUN_004a67d0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX]
ADD ECX,0x4
MOV dword ptr [EAX],ECX
MOV EAX,ECX
MOV EAX,dword ptr [EAX + -0x4]
RET
