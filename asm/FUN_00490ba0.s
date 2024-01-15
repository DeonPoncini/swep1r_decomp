; FUN_00490ba0
MOV EAX,dword ptr [ESP + 0x4]
XOR ECX,ECX
OR EDX,0xffffffff
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX],ECX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x14],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x2c],EDX
MOV dword ptr [EAX + 0x28],EDX
MOV dword ptr [EAX + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,0x3
MOV dword ptr [EAX + 0x8],0x4
MOV dword ptr [EAX + 0xc],EDX
MOV dword ptr [EAX + 0x30],0x4
MOV dword ptr [EAX + 0x34],EDX
MOV dword ptr [EAX + 0x3c],ECX
MOV EAX,0x1
RET
