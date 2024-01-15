; FUN_00431b20
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
OR ECX,0xffffffff
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x8],ECX
XOR ECX,ECX
MOV dword ptr [EAX],EDX
TEST DH,0x40
MOV word ptr [EAX + 0xc],CX
MOV word ptr [EAX + 0xe],CX
MOV dword ptr [EAX + 0x10],ECX
JZ 0x00431b85
CMP EDX,0xd065
MOV dword ptr [EAX + 0x14],ECX
MOV dword ptr [EAX + 0x18],ECX
JNZ 0x00431b85
MOV EDX,0x3f800000
MOV dword ptr [EAX + 0x4c],ECX
MOV dword ptr [EAX + 0x50],ECX
MOV dword ptr [EAX + 0x54],ECX
MOV dword ptr [EAX + 0x1c],EDX
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x24],ECX
MOV dword ptr [EAX + 0x28],ECX
MOV dword ptr [EAX + 0x2c],EDX
MOV dword ptr [EAX + 0x30],ECX
MOV dword ptr [EAX + 0x34],ECX
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0x3c],EDX
MOV dword ptr [EAX + 0x40],ECX
MOV dword ptr [EAX + 0x44],ECX
MOV dword ptr [EAX + 0x48],ECX
RET
