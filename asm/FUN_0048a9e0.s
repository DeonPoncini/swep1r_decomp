; FUN_0048a9e0
MOV ECX,dword ptr [ESP + 0x4]
PUSH ESI
MOV ESI,dword ptr [0x0052e618]
MOV EAX,dword ptr [ESI + 0x20]
CMP ECX,EAX
JC 0x0048a9fd
MOV EAX,dword ptr [ESI + 0x28]
CMP ECX,EAX
JA 0x0048a9fd
MOV EDX,ECX
JMP 0x0048a9ff
MOV EDX,EAX
MOV EAX,dword ptr [ESI + 0x24]
MOV ECX,dword ptr [ESP + 0xc]
CMP ECX,EAX
JC 0x0048aa13
MOV EAX,dword ptr [ESI + 0x2c]
CMP ECX,EAX
JA 0x0048aa13
MOV EAX,ECX
MOV ECX,dword ptr [ESI + 0x1c]
TEST ECX,ECX
JZ 0x0048aa30
CMP EDX,EAX
JZ 0x0048aa30
JBE 0x0048aa22
MOV EAX,EDX
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [ECX],EAX
MOV dword ptr [EDX],EAX
POP ESI
RET
MOV ECX,dword ptr [ESP + 0x10]
POP ESI
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX],EAX
RET
