; FUN_0042be60
SUB ESP,0x30
PUSH EBX
PUSH EBP
PUSH ESI
LEA EAX,[ESP + 0x34]
PUSH EDI
LEA ECX,[ESP + 0x3c]
PUSH EAX
LEA EDX,[ESP + 0x18]
PUSH ECX
LEA EAX,[ESP + 0x20]
PUSH EDX
LEA ECX,[ESP + 0x2c]
PUSH EAX
PUSH ECX
CALL 0x00431c40
MOV EDI,dword ptr [ESP + 0x2c]
MOV EBP,dword ptr [ESP + 0x28]
MOV EAX,EDI
MOV EDX,dword ptr [ESP + 0x34]
IMUL EAX,dword ptr [0x00ec85e8]
ADD EAX,EBP
ADD ESP,0x14
MOV dword ptr [ESP + 0x34],EAX
XOR EAX,EAX
MOV dword ptr [ESP + 0x1c],EAX
MOV ECX,dword ptr [EAX + 0x4b94c8]
TEST ECX,ECX
JL 0x0042bf8f
MOV ECX,dword ptr [EAX + 0xe9a480]
MOV ESI,dword ptr [EAX + 0xe9a488]
CMP ECX,0xfffffe0c
JGE 0x0042beda
MOV dword ptr [EAX + 0xe9a3c0],0x32
JMP 0x0042bf8f
MOV EAX,ECX
MOV dword ptr [ESP + 0x10],0x0
NEG EAX
LEA EBX,[EAX + 0xc]
MOV dword ptr [ESP + 0x24],EBX
MOV EBX,dword ptr [0x00ec86c4]
LEA EAX,[EBX + EAX*0x1 + -0x8]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,ESI
NEG EAX
ADD ESI,-0x4
LEA EBX,[EAX + 0xc]
IMUL ESI,EDI
MOV dword ptr [ESP + 0x2c],EBX
MOV EBX,dword ptr [0x00ec85e8]
LEA EAX,[EBX + EAX*0x1 + -0x8]
MOV dword ptr [ESP + 0x30],EAX
LEA EAX,[ECX + -0x4]
IMUL EAX,EDX
MOV ECX,EBP
ADD ECX,ESI
ADD EAX,ECX
XOR ESI,ESI
XOR ECX,ECX
CMP ECX,dword ptr [ESP + 0x24]
JL 0x0042bf62
CMP ECX,dword ptr [ESP + 0x28]
JGE 0x0042bf62
CMP ESI,dword ptr [ESP + 0x2c]
JL 0x0042bf62
CMP ESI,dword ptr [ESP + 0x30]
JGE 0x0042bf62
CMP EAX,EBP
JC 0x0042bf66
CMP EAX,dword ptr [ESP + 0x34]
JNC 0x0042bf66
CMP EDX,0x1
JNZ 0x0042bf56
CMP byte ptr [EAX],0xff
JNZ 0x0042bf62
CMP EDX,0x2
JNZ 0x0042bf66
CMP word ptr [EAX],0xffff
JZ 0x0042bf66
INC dword ptr [ESP + 0x10]
ADD EAX,EDX
INC ECX
CMP ECX,0x8
JL 0x0042bf2a
LEA ECX,[EDX*0x8 + 0x0]
MOV EBX,EDI
SUB EBX,ECX
ADD EAX,EBX
INC ESI
CMP ESI,0x8
JL 0x0042bf28
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0xe9a3c0],ECX
ADD EAX,0x4
CMP EAX,0x8
MOV dword ptr [ESP + 0x1c],EAX
JL 0x0042bea9
LEA EAX,[EDX + -0x1]
CMP EAX,0x3
JA 0x0042bfce
JMP dword ptr [EAX*0x4 + 0x42c188]
FLD dword ptr [0x004b94b0]
JMP 0x0042bfd2
FLD dword ptr [0x004b94b4]
JMP 0x0042bfd2
FLD dword ptr [0x004b94bc]
JMP 0x0042bfd2
FLD dword ptr [0x004b94b8]
JMP 0x0042bfd2
FLD dword ptr [ESP + 0x3c]
XOR EBX,EBX
MOV ECX,dword ptr [EBX + 0xe9a720]
MOV dword ptr [EBX + 0xe9a7e0],0xc47a0000
TEST ECX,ECX
JL 0x0042c045
MOV ESI,dword ptr [EBX + 0xe9a780]
MOV EAX,EDX
IMUL ESI,EDI
IMUL EAX,ECX
FLD dword ptr [0x004ac5b8]
MOV ECX,EBP
ADD ECX,ESI
ADD EAX,ECX
TEST EDX,EDX
JLE 0x0042c03d
LEA ESI,[EDX + EAX*0x1]
LEA EAX,[EDX*0x8 + 0x0]
MOV EBP,EDX
XOR ECX,ECX
LEA EDI,[EAX + -0x8]
MOV CL,byte ptr [ESI + -0x1]
SUB EAX,0x8
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EDI
MOV EDI,dword ptr [ESP + 0x34]
SHL EDI,CL
DEC ESI
DEC EBP
MOV dword ptr [ESP + 0x34],EDI
FIADD dword ptr [ESP + 0x34]
JNZ 0x0042c012
MOV EDI,dword ptr [ESP + 0x18]
MOV EBP,dword ptr [ESP + 0x14]
FMUL ST1
FSTP dword ptr [EBX + 0xe9a7e0]
ADD EBX,0x4
CMP EBX,0x50
JL 0x0042bfd4
MOV ESI,0xe99d80
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],ESI
MOV AL,byte ptr [EBX + 0xe9a6e0]
TEST AL,AL
JZ 0x0042c0cf
MOV ECX,dword ptr [EBX*0x4 + 0xe99ce0]
MOV dword ptr [ESI],0xc47a0000
TEST ECX,ECX
JL 0x0042c0cf
MOV EBP,dword ptr [EBX*0x4 + 0xe99c40]
MOV EAX,EDX
IMUL EBP,EDI
IMUL EAX,ECX
FLD dword ptr [0x004ac5b8]
MOV ECX,dword ptr [ESP + 0x14]
ADD ECX,EBP
ADD EAX,ECX
TEST EDX,EDX
JLE 0x0042c0cb
LEA ESI,[EDX + EAX*0x1]
LEA EAX,[EDX*0x8 + 0x0]
MOV EBP,EDX
XOR ECX,ECX
LEA EDI,[EAX + -0x8]
MOV CL,byte ptr [ESI + -0x1]
SUB EAX,0x8
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EDI
MOV EDI,dword ptr [ESP + 0x34]
SHL EDI,CL
DEC ESI
DEC EBP
MOV dword ptr [ESP + 0x34],EDI
FIADD dword ptr [ESP + 0x34]
JNZ 0x0042c0a0
MOV EDI,dword ptr [ESP + 0x18]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST1
FSTP dword ptr [ESI]
ADD ESI,0x4
INC EBX
CMP ESI,0xe99e20
MOV dword ptr [ESP + 0x1c],ESI
JL 0x0042c058
MOV EAX,[0x0050c088]
XOR EBX,EBX
TEST EAX,EAX
JLE 0x0042c179
MOV ESI,0xe9a8e0
MOV dword ptr [ESP + 0x1c],ESI
MOV ECX,dword ptr [EBX*0x4 + 0xe9a8a0]
MOV dword ptr [ESI],0xc47a0000
TEST ECX,ECX
JL 0x0042c168
MOV EBP,dword ptr [EBX*0x4 + 0xe9a920]
MOV EAX,EDX
IMUL EBP,EDI
IMUL EAX,ECX
FLD dword ptr [0x004ac5b8]
MOV ECX,dword ptr [ESP + 0x14]
ADD ECX,EBP
ADD EAX,ECX
TEST EDX,EDX
JLE 0x0042c164
LEA ESI,[EDX + EAX*0x1]
LEA EAX,[EDX*0x8 + 0x0]
MOV EBP,EDX
XOR ECX,ECX
LEA EDI,[EAX + -0x8]
MOV CL,byte ptr [ESI + -0x1]
SUB EAX,0x8
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EDI
MOV EDI,dword ptr [ESP + 0x34]
SHL EDI,CL
DEC ESI
DEC EBP
MOV dword ptr [ESP + 0x34],EDI
FIADD dword ptr [ESP + 0x34]
JNZ 0x0042c139
MOV EDI,dword ptr [ESP + 0x18]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST1
FSTP dword ptr [ESI]
MOV EAX,[0x0050c088]
INC EBX
ADD ESI,0x4
CMP EBX,EAX
MOV dword ptr [ESP + 0x1c],ESI
JL 0x0042c0fb
FSTP ST0
CALL 0x00431cd0
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x30
RET
