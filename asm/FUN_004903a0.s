; FUN_004903a0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
ADD EAX,0x5c
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],EDX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xc],ECX
RET
