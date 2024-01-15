; FUN_00431820
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EAX + 0x10]
MOV dword ptr [ECX + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [ECX + 0xc],EDX
MOV EDX,dword ptr [EAX + 0x18]
MOV dword ptr [ECX + 0x10],EDX
MOV EAX,dword ptr [EAX + 0x1c]
MOV dword ptr [ECX + 0x14],EAX
RET
