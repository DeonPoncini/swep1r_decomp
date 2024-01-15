; FUN_0048ba20
MOV EAX,[0x0052e630]
XOR ECX,ECX
CMP EAX,ECX
MOV EAX,dword ptr [ESP + 0x4]
JNZ 0x0048ba47
MOV [0x0052e634],EAX
MOV [0x0052e630],EAX
MOV dword ptr [EAX + 0x8c],ECX
MOV dword ptr [EAX + 0x90],ECX
JMP 0x0048ba6a
MOV EDX,dword ptr [0x0052e634]
MOV dword ptr [EDX + 0x90],EAX
MOV EDX,dword ptr [0x0052e634]
MOV dword ptr [EAX + 0x8c],EDX
MOV dword ptr [EAX + 0x90],ECX
MOV [0x0052e634],EAX
MOV ECX,dword ptr [0x0052e62c]
INC ECX
MOV dword ptr [0x0052e62c],ECX
MOV ECX,dword ptr [0x0052e618]
MOV EAX,dword ptr [EAX + 0x84]
SUB dword ptr [ECX + 0x138],EAX
RET
