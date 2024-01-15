; FUN_00449e00
MOV EAX,dword ptr [ESP + 0x4]
OR EDX,0xffffffff
XOR ECX,ECX
MOV dword ptr [EAX],EDX
MOV dword ptr [EAX + 0x4],EDX
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0xc],EDX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x14],0x3f800000
MOV word ptr [EAX + 0x1c],0x40
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x28],ECX
RET
