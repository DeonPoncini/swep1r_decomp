; FUN_0042de30
SUB ESP,0xc
MOV EAX,dword ptr [ESP + 0x14]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV dword ptr [ESP + 0x14],0x0
MOV dword ptr [ESP + 0x10],0x0
XOR EBP,EBP
MOV ECX,dword ptr [ESP + 0x20]
MOV DL,byte ptr [EBP + ECX*0x1]
TEST DL,DL
JNZ 0x0042de61
MOV dword ptr [ESP + 0x10],0x1
CMP DL,0x7e
JNZ 0x0042de84
MOV CL,byte ptr [EBP + ECX*0x1 + 0x1]
INC EBP
CMP CL,0x6e
JNZ 0x0042de7a
MOV dword ptr [ESP + 0x10],0x1
JMP 0x0042de84
CMP CL,0x7e
SETNZ DL
DEC EDX
AND EDX,0x7e
TEST DL,DL
JZ 0x0042df51
MOV ECX,dword ptr [ESP + 0x10]
TEST ECX,ECX
JNZ 0x0042df51
CMP DL,0x5f
MOV byte ptr [ESP + 0x24],DL
JNZ 0x0042dea7
MOV DL,0x20
MOV byte ptr [ESP + 0x24],DL
CMP DL,0x61
JC 0x0042debe
CMP DL,0x7a
JA 0x0042debe
CMP byte ptr [EAX + 0x5b],0x61
JNC 0x0042debe
ADD DL,0xe0
MOV byte ptr [ESP + 0x24],DL
XOR ECX,ECX
CMP DL,0x96
JBE 0x0042df19
MOV EDI,dword ptr [EAX + 0x60]
TEST EDI,EDI
JZ 0x0042df19
MOV ESI,dword ptr [ESP + 0x24]
MOV EBX,ESI
AND EBX,0xff
MOV BL,byte ptr [EBX + 0x4bf9c2]
CMP BL,0xff
JZ 0x0042df1d
AND EBX,0xff
SHL EBX,0x1
MOV DL,byte ptr [EBX + 0x4bfa10]
MOV byte ptr [ESP + 0x18],DL
MOV DL,byte ptr [EBX + 0x4bfa11]
CMP DL,0xff
MOV byte ptr [ESP + 0x24],DL
JNZ 0x0042df19
MOV ECX,dword ptr [ESP + 0x18]
AND ECX,0xff
SHL ECX,0x4
ADD ECX,EDI
XOR DL,DL
MOV byte ptr [ESP + 0x24],DL
MOV ESI,dword ptr [ESP + 0x24]
MOV EDI,dword ptr [EAX + 0x5c]
TEST EDI,EDI
JZ 0x0042df45
MOV BL,byte ptr [EAX + 0x5a]
CMP DL,BL
JC 0x0042df45
CMP DL,byte ptr [EAX + 0x5b]
JA 0x0042df45
AND ESI,0xff
AND EBX,0xff
SUB ESI,EBX
SHL ESI,0x4
ADD ESI,EDI
MOV ECX,ESI
TEST ECX,ECX
JZ 0x0042df51
MOVSX ECX,word ptr [ECX + 0x2]
ADD dword ptr [ESP + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x10]
INC EBP
TEST ECX,ECX
JZ 0x0042de4d
MOV EAX,dword ptr [ESP + 0x14]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
