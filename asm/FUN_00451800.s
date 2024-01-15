; FUN_00451800
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
TEST EDI,EDI
JZ 0x00451a27
MOV AX,word ptr [EDI + 0xa]
TEST AX,AX
JZ 0x00451a27
TEST AL,0x10
JZ 0x0045192d
MOV EBP,dword ptr [ESP + 0x14]
XOR EAX,EAX
MOV AL,byte ptr [EDI + 0xc]
XOR ECX,ECX
MOV dword ptr [ESP + 0x14],EAX
XOR EDX,EDX
FILD dword ptr [ESP + 0x14]
XOR EAX,EAX
LEA EBX,[EBP + 0x374]
LEA ESI,[EBP + 0x38c]
FSTP dword ptr [EBP + 0x368]
MOV CL,byte ptr [EDI + 0xd]
PUSH ESI
MOV dword ptr [ESP + 0x18],ECX
XOR ECX,ECX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x36c]
MOV DL,byte ptr [EDI + 0xe]
MOV dword ptr [ESP + 0x18],EDX
XOR EDX,EDX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x370]
MOV AL,byte ptr [EDI + 0xf]
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x380]
MOV CL,byte ptr [EDI + 0x10]
MOV dword ptr [ESP + 0x18],ECX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x384]
MOV DL,byte ptr [EDI + 0x11]
MOV dword ptr [ESP + 0x18],EDX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x388]
FLD dword ptr [EDI + 0x14]
FSTP dword ptr [EBX]
FLD dword ptr [EDI + 0x18]
FSTP dword ptr [EBP + 0x378]
FLD dword ptr [EDI + 0x1c]
FSTP dword ptr [EBP + 0x37c]
FLD dword ptr [EDI + 0x20]
FSTP dword ptr [ESI]
FLD dword ptr [EDI + 0x24]
FSTP dword ptr [EBP + 0x390]
FLD dword ptr [EDI + 0x28]
FSTP dword ptr [EBP + 0x394]
CALL 0x0042f9b0
MOV AL,byte ptr [EDI + 0xa]
ADD ESP,0x4
TEST AL,0x4
FSTP ST0
LEA ESI,[EBP + 0x364]
JZ 0x004518f5
MOV EAX,dword ptr [ESI]
OR AL,0x8
MOV dword ptr [ESI],EAX
JMP 0x00451907
MOV EDX,dword ptr [ESI]
PUSH EBX
AND EDX,0xfffffff7
MOV dword ptr [ESI],EDX
CALL 0x0042f9b0
FSTP ST0
ADD ESP,0x4
TEST byte ptr [EDI + 0xa],0x8
MOV EAX,dword ptr [ESI]
JZ 0x0045191e
OR AL,0x4
LEA EBX,[EBP + 0x330]
MOV dword ptr [ESI],EAX
JMP 0x00451a37
AND AL,0xfb
LEA EBX,[EBP + 0x330]
MOV dword ptr [ESI],EAX
JMP 0x00451a37
MOV EBP,dword ptr [ESP + 0x14]
XOR EAX,EAX
MOV AL,byte ptr [EDI + 0xc]
XOR ECX,ECX
MOV dword ptr [ESP + 0x14],EAX
XOR EDX,EDX
FILD dword ptr [ESP + 0x14]
XOR EAX,EAX
LEA ESI,[EBP + 0x358]
PUSH ESI
FSTP dword ptr [EBP + 0x334]
MOV CL,byte ptr [EDI + 0xd]
MOV dword ptr [ESP + 0x18],ECX
XOR ECX,ECX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x338]
MOV DL,byte ptr [EDI + 0xe]
MOV dword ptr [ESP + 0x18],EDX
XOR EDX,EDX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x33c]
MOV AL,byte ptr [EDI + 0xf]
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x34c]
MOV CL,byte ptr [EDI + 0x10]
MOV dword ptr [ESP + 0x18],ECX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x350]
MOV DL,byte ptr [EDI + 0x11]
MOV dword ptr [ESP + 0x18],EDX
FILD dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x354]
FLD dword ptr [EDI + 0x14]
FSTP dword ptr [EBP + 0x340]
FLD dword ptr [EDI + 0x18]
FSTP dword ptr [EBP + 0x344]
FLD dword ptr [EDI + 0x1c]
FSTP dword ptr [EBP + 0x348]
FLD dword ptr [EDI + 0x20]
FSTP dword ptr [ESI]
FLD dword ptr [EDI + 0x24]
FSTP dword ptr [EBP + 0x35c]
FLD dword ptr [EDI + 0x28]
FSTP dword ptr [EBP + 0x360]
CALL 0x0042f9b0
MOV AL,byte ptr [EDI + 0xa]
ADD ESP,0x4
TEST AL,0x4
FSTP ST0
LEA EBX,[EBP + 0x330]
JZ 0x004519fb
MOV EAX,dword ptr [EBX]
OR AL,0x8
MOV dword ptr [EBX],EAX
JMP 0x00451a13
MOV EDX,dword ptr [EBX]
LEA EAX,[EBP + 0x340]
AND EDX,0xfffffff7
PUSH EAX
MOV dword ptr [EBX],EDX
CALL 0x0042f9b0
FSTP ST0
ADD ESP,0x4
TEST byte ptr [EDI + 0xa],0x8
MOV EAX,dword ptr [EBX]
JZ 0x00451a21
OR AL,0x4
MOV dword ptr [EBX],EAX
JMP 0x00451a40
AND AL,0xfb
MOV dword ptr [EBX],EAX
JMP 0x00451a40
MOV EBP,dword ptr [ESP + 0x14]
LEA EBX,[EBP + 0x330]
LEA ESI,[EBP + 0x364]
MOV ECX,0xd
MOV EDI,EBX
MOVSD.REP ES:EDI,ESI
MOV EAX,dword ptr [EBP + 0x2e4]
MOV EDX,dword ptr [EBX]
AND AL,0xf3
POP EDI
OR EAX,EDX
POP ESI
MOV dword ptr [EBP + 0x2e4],EAX
OR AL,0x3
FLD qword ptr [0x00e22a40]
FADD ST0,ST0
MOV dword ptr [EBP + 0x2e4],EAX
FSUB qword ptr [0x004acdd8]
FSTP dword ptr [EBP + 0x398]
POP EBP
POP EBX
RET
