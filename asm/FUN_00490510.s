; FUN_00490510
MOV EAX,dword ptr [ESP + 0x4]
XOR ECX,ECX
MOV EDX,0x3f800000
MOV dword ptr [EAX + 0x4],0x2
MOV dword ptr [EAX + 0x8],0x1
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x14],ECX
MOV dword ptr [EAX + 0x18],EDX
MOV dword ptr [EAX + 0x1c],EDX
MOV dword ptr [EAX + 0x20],EDX
MOV dword ptr [EAX + 0x24],ECX
MOV dword ptr [EAX + 0x28],ECX
MOV dword ptr [EAX + 0x2c],ECX
MOV EAX,0x1
RET
