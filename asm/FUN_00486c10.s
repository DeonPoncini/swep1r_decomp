; FUN_00486c10
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,[0x00513868]
CMP ECX,EAX
JBE 0x00486c23
MOV EAX,0x1
RET
MOV EAX,ECX
PUSH EDI
SHL EAX,0x3
MOV EDI,dword ptr [ESP + 0xc]
SUB EAX,ECX
PUSH ESI
MOV ECX,0x46
LEA EAX,[EAX + EAX*0x4]
LEA ESI,[EAX*0x8 + 0x510260]
MOVSD.REP ES:EDI,ESI
POP ESI
POP EDI
RET