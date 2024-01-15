; FUN_0042f7d0
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],EAX
RET
