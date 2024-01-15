; FUN_004310b0
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0x14],EDX
MOV EDX,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX]
XOR ECX,ECX
MOV dword ptr [EAX + 0x28],EDX
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x1c],ECX
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x24],ECX
MOV dword ptr [EAX + 0x2c],ECX
MOV dword ptr [EAX + 0x30],ECX
MOV dword ptr [EAX + 0x34],ECX
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0x3c],0x3f800000
RET
