; FUN_0048ad10
MOV ECX,dword ptr [0x0052d56c]
PUSH ESI
TEST ECX,ECX
PUSH EDI
JZ 0x0048ad47
MOV EAX,dword ptr [ESP + 0xc]
CMP EAX,ECX
JNC 0x0048ad47
LEA ECX,[EAX + EAX*0x2]
MOV EDI,dword ptr [ESP + 0x10]
LEA ECX,[ECX + ECX*0x8]
LEA EDX,[EAX + ECX*0x4]
MOV ECX,0xd
MOV EAX,0x1
LEA ESI,[EDX*0x8 + 0x52d870]
MOVSD.REP ES:EDI,ESI
POP EDI
POP ESI
RET
POP EDI
XOR EAX,EAX
POP ESI
RET
