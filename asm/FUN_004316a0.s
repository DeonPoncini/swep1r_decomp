; FUN_004316a0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
MOV EDX,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0x8],EDX
XOR EDX,EDX
MOV dword ptr [EAX + 0xc],EDX
MOV ESI,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0x10],ESI
MOV ESI,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0x14],ESI
MOV ESI,dword ptr [ECX + 0x30]
MOV dword ptr [EAX + 0x18],ESI
MOV dword ptr [EAX + 0x1c],EDX
MOV ESI,dword ptr [ECX + 0x34]
MOV dword ptr [EAX + 0x20],ESI
MOV ESI,dword ptr [ECX + 0x38]
MOV dword ptr [EAX + 0x24],ESI
MOV ESI,dword ptr [ECX + 0x3c]
MOV dword ptr [EAX + 0x28],ESI
MOV dword ptr [EAX + 0x2c],EDX
MOV EDX,dword ptr [ECX + 0x40]
POP ESI
MOV dword ptr [EAX + 0x30],EDX
MOV EDX,dword ptr [ECX + 0x44]
MOV dword ptr [EAX + 0x34],EDX
MOV ECX,dword ptr [ECX + 0x48]
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0x3c],0x3f800000
RET
