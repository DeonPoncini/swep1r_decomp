; FUN_0048ba90
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [0x0052e630]
XOR EDX,EDX
PUSH ESI
CMP EAX,ECX
PUSH EDI
JNZ 0x0048bad6
MOV ECX,dword ptr [EAX + 0x90]
CMP ECX,EDX
MOV dword ptr [0x0052e630],ECX
JZ 0x0048bace
MOV dword ptr [ECX + 0x8c],EDX
MOV ECX,dword ptr [0x0052e630]
CMP dword ptr [ECX + 0x90],EDX
JNZ 0x0048bb12
MOV dword ptr [0x0052e634],ECX
JMP 0x0048bb12
MOV dword ptr [0x0052e634],EDX
JMP 0x0048bb12
MOV ECX,dword ptr [0x0052e634]
CMP EAX,ECX
MOV ECX,dword ptr [EAX + 0x8c]
JNZ 0x0048baf4
MOV dword ptr [0x0052e634],ECX
MOV dword ptr [ECX + 0x90],EDX
JMP 0x0048bb12
MOV ESI,dword ptr [EAX + 0x90]
MOV dword ptr [ECX + 0x90],ESI
MOV ECX,dword ptr [EAX + 0x90]
MOV ESI,dword ptr [EAX + 0x8c]
MOV dword ptr [ECX + 0x8c],ESI
MOV ECX,dword ptr [0x0052e62c]
DEC ECX
MOV dword ptr [0x0052e62c],ECX
MOV ECX,dword ptr [0x0052e618]
MOV ESI,dword ptr [EAX + 0x84]
MOV EDI,dword ptr [ECX + 0x138]
ADD EDI,ESI
MOV dword ptr [ECX + 0x138],EDI
POP EDI
MOV dword ptr [EAX + 0x90],EDX
MOV dword ptr [EAX + 0x8c],EDX
MOV dword ptr [EAX + 0x88],EDX
POP ESI
RET
