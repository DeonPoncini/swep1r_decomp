; FUN_00422a90
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JL 0x00422ab0
MOV ECX,dword ptr [0x004b6d34]
CMP EAX,dword ptr [ECX + 0x20]
JGE 0x00422ab0
MOV ECX,dword ptr [ECX + 0x28]
LEA EDX,[EAX + EAX*0x8]
LEA EAX,[EAX + EDX*0x2]
LEA EAX,[ECX + EAX*0x4]
RET
XOR EAX,EAX
RET