; FUN_00486a10
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
XOR EAX,EAX
PUSH EDI
MOV AL,byte ptr [ESI + 0x24]
SUB EAX,0x2
JZ 0x00486a98
DEC EAX
JZ 0x00486a61
DEC EAX
JNZ 0x00486ac1
MOV EAX,[0x0050fec8]
CMP EAX,0x8
JNC 0x00486ac1
LEA ECX,[EAX + EAX*0x4]
SHL ECX,0x3
SUB ECX,EAX
LEA EDX,[EAX + ECX*0x4]
MOV ECX,0x91
INC EAX
LEA EDI,[EDX*0x4 + 0xec9ea0]
MOVSD.REP ES:EDI,ESI
MOV [0x0050fec8],EAX
MOV EAX,0x1
POP EDI
POP ESI
RET 0x8
MOV EAX,[0x0050febc]
CMP EAX,0x4
JNC 0x00486ac1
LEA ECX,[EAX + EAX*0x4]
SHL ECX,0x3
SUB ECX,EAX
LEA EDX,[EAX + ECX*0x4]
MOV ECX,0x91
MOV EAX,0x1
LEA EDI,[EDX*0x4 + 0x50d658]
MOVSD.REP ES:EDI,ESI
MOV dword ptr [0x0050febc],0x1
POP EDI
POP ESI
RET 0x8
MOV EAX,[0x0050fec0]
CMP EAX,0x4
JNC 0x00486ac1
LEA ECX,[EAX + EAX*0x4]
SHL ECX,0x3
SUB ECX,EAX
LEA EDX,[EAX + ECX*0x4]
MOV ECX,0x91
INC EAX
LEA EDI,[EDX*0x4 + 0xecb240]
MOVSD.REP ES:EDI,ESI
MOV [0x0050fec0],EAX
POP EDI
MOV EAX,0x1
POP ESI
RET 0x8
