; FUN_004317e0
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JNZ 0x004317ff
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [EAX + 0x2c]
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x28]
MOV dword ptr [ECX],EAX
RET
MOV EDX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX],0x0
MOV dword ptr [EAX],0x0
RET
