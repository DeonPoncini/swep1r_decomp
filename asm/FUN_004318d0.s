; FUN_004318d0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JL 0x004318ee
CMP EAX,0x4
JGE 0x004318ee
LEA ECX,[EAX + EAX*0x4]
LEA ECX,[ECX + ECX*0x8]
LEA EDX,[EAX + ECX*0x2]
LEA EAX,[EDX*0x4 + 0xdfb040]
RET
XOR EAX,EAX
RET