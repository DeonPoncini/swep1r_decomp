; FUN_0044b750
MOV EAX,[0x0050c6f4]
MOV dword ptr [0x004c3c0c],0x1
CMP EAX,0x20
JGE 0x0044b7df
MOV ECX,dword ptr [ESP + 0x4]
INC EAX
MOV [0x0050c6f4],EAX
MOV EDX,dword ptr [ECX]
LEA EAX,[EAX + EAX*0x2]
SHL EAX,0x4
MOV dword ptr [EAX + 0xe375c0],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0xe375c4],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0xe375c8],EDX
MOV EDX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xe375cc],EDX
MOV EDX,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0xe375d0],EDX
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [EAX + 0xe375d4],EDX
MOV EDX,dword ptr [ECX + 0x18]
MOV dword ptr [EAX + 0xe375d8],EDX
MOV EDX,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX + 0xe375dc],EDX
MOV EDX,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0xe375e0],EDX
MOV EDX,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0xe375e4],EDX
MOV EDX,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0xe375e8],EDX
MOV ECX,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0xe375ec],ECX
RET
