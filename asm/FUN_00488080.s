; FUN_00488080
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,[0x0052d444]
CMP ECX,EAX
JNC 0x004880b3
MOV EAX,ECX
PUSH EDI
SHL EAX,0x3
SUB EAX,ECX
MOV EDI,dword ptr [ESP + 0xc]
PUSH ESI
LEA EAX,[EAX + EAX*0x2]
LEA ECX,[ECX + EAX*0x8]
XOR EAX,EAX
LEA ESI,[ECX*0x4 + 0x52a9f8]
MOV ECX,0xa9
MOVSD.REP ES:EDI,ESI
POP ESI
POP EDI
RET
MOV EAX,0x1
RET
