; FUN_0042d520
SUB ESP,0xc
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x14]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
LEA EBP,[EDX + 0xfffff000]
MOV ESI,0x1
MOV dword ptr [ESP + 0x10],0x0
MOV CL,byte ptr [EDX]
INC EDX
MOVSX ECX,CL
XOR EBX,EBX
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESP + 0x24],EBX
MOV EDI,0x1
MOV CL,BL
SHL EDI,CL
MOV ECX,dword ptr [ESP + 0x14]
TEST ECX,EDI
JZ 0x0042d576
MOVSX ECX,byte ptr [EDX]
INC EDX
MOV byte ptr [EAX],CL
INC EAX
MOV byte ptr [ESI + EBP*0x1],CL
INC ESI
AND ESI,0xfff
JMP 0x0042d5cb
MOVSX EBX,byte ptr [EDX]
MOVSX ECX,byte ptr [EDX + 0x1]
INC EDX
MOV EDI,EBX
AND EDI,0xf
INC EDX
SHL EDI,0x8
ADD ECX,EDI
MOV dword ptr [ESP + 0x20],EDX
SAR EBX,0x4
TEST ECX,ECX
MOV dword ptr [ESP + 0x18],ECX
JZ 0x0042d5e0
INC EBX
MOV EDI,0x0
JS 0x0042d5cb
JMP 0x0042d5a6
MOV ECX,dword ptr [ESP + 0x18]
ADD ECX,EDI
XOR EDX,EDX
AND ECX,0xfff
INC EAX
INC ESI
MOV DL,byte ptr [ECX + EBP*0x1]
MOV byte ptr [EAX + -0x1],DL
MOV byte ptr [ESI + EBP*0x1 + -0x1],DL
AND ESI,0xfff
INC EDI
CMP EDI,EBX
JLE 0x0042d5a2
MOV EDX,dword ptr [ESP + 0x20]
MOV EBX,dword ptr [ESP + 0x24]
INC EBX
CMP BX,0x8
MOV dword ptr [ESP + 0x24],EBX
JL 0x0042d552
JMP 0x0042d5e8
MOV dword ptr [ESP + 0x10],0x1
CMP word ptr [ESP + 0x10],0x0
JZ 0x0042d542
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
