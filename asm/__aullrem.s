; __aullrem
PUSH EBX
MOV EAX,dword ptr [ESP + 0x14]
OR EAX,EAX
JNZ 0x004a6c21
MOV ECX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0xc]
XOR EDX,EDX
DIV ECX
MOV EAX,dword ptr [ESP + 0x8]
DIV ECX
MOV EAX,EDX
XOR EDX,EDX
JMP 0x004a6c71
MOV ECX,EAX
MOV EBX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x8]
SHR ECX,0x1
RCR EBX,0x1
SHR EDX,0x1
RCR EAX,0x1
OR ECX,ECX
JNZ 0x004a6c2f
DIV EBX
MOV ECX,EAX
MUL dword ptr [ESP + 0x14]
XCHG EAX,ECX
MUL dword ptr [ESP + 0x10]
ADD EDX,ECX
JC 0x004a6c5a
CMP EDX,dword ptr [ESP + 0xc]
JA 0x004a6c5a
JC 0x004a6c62
CMP EAX,dword ptr [ESP + 0x8]
JBE 0x004a6c62
SUB EAX,dword ptr [ESP + 0x10]
SBB EDX,dword ptr [ESP + 0x14]
SUB EAX,dword ptr [ESP + 0x8]
SBB EDX,dword ptr [ESP + 0xc]
NEG EDX
NEG EAX
SBB EDX,0x0
POP EBX
RET 0x10
