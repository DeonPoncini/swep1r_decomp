; FUN_00415810
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x00415840
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX + 0x4e0],ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x4e4],EDX
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [EAX + 0x4e8],ECX
MOV dword ptr [EAX + 0x4ec],EDX
RET
