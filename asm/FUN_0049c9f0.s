; FUN_0049c9f0
SUB ESP,0x14
MOV EAX,dword ptr [ESP + 0x1c]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ECX,dword ptr [EAX]
MOV dword ptr [0x00dfaa04],0x0
MOV EBX,dword ptr [EAX + 0xc]
PUSH EDI
MOV dword ptr [0x00dfaa1c],EBX
MOV EBP,dword ptr [EAX + 0x10]
MOV dword ptr [0x00dfaa08],EBP
MOV EDI,dword ptr [EAX + 0x14]
MOV dword ptr [0x00dfaa20],EDI
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [0x00dfaa18],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV [0x00dfaa24],EAX
MOV ESI,dword ptr [ECX + 0xc]
MOV dword ptr [0x00dfaa14],ESI
MOV ESI,dword ptr [ECX + 0x10]
MOV dword ptr [0x00dfaa0c],ESI
MOV ECX,dword ptr [ECX + 0x14]
MOV dword ptr [0x00dfaa10],ECX
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x2c],0x0
MOV EAX,dword ptr [EAX + ECX*0x4 + -0x4]
LEA ESI,[ECX*0x4 + 0x0]
MOV ECX,dword ptr [EDX + ECX*0x4 + -0x4]
LEA EAX,[EBP + EAX*0x8]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,[0x00dfaa18]
LEA EDX,[ECX + ECX*0x2]
MOV ESI,dword ptr [EAX]
LEA EDX,[EBX + EDX*0x4]
LEA EAX,[ESI + ESI*0x2]
SHL ECX,0x4
LEA EBX,[EBX + EAX*0x4]
MOV EAX,[0x00dfaa24]
SHL ESI,0x4
MOV EAX,dword ptr [EAX]
ADD ECX,EDI
ADD ESI,EDI
MOV dword ptr [ESP + 0x1c],EBX
LEA EBP,[EBP + EAX*0x8]
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
MOV dword ptr [ESP + 0x20],EBP
JLE 0x0049cd1d
XOR EDI,EDI
MOV dword ptr [ESP + 0x10],0x4
MOV dword ptr [ESP + 0x30],EDI
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049caed
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049ccb6
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049cc33
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049cc33
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049cb3d
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049cc33
MOV EAX,dword ptr [ESP + 0x28]
MOV EBP,dword ptr [0x00dfaa14]
FLD dword ptr [EBX + 0x4]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [EDX + 0x4]
FXCH
FSUB dword ptr [EDX + 0x4]
MOV EBX,dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x30]
FDIVP
MOV dword ptr [EBP + EAX*0x1 + 0x4],EBX
MOV EBX,dword ptr [ESP + 0x1c]
MOV EBP,dword ptr [0x00dfaa14]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
FSTP dword ptr [EBP + EAX*0x1 + 0x8]
FLD dword ptr [EBX]
FSUB dword ptr [EDX]
MOV EBP,dword ptr [ESP + 0x20]
FMUL ST1
FADD dword ptr [EDX]
MOV EDX,dword ptr [0x00dfaa14]
FSTP dword ptr [EDX + EAX*0x1]
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [0x00dfaa0c]
FLD dword ptr [EBP]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x2c]
FSTP dword ptr [EDX + EAX*0x8]
MOV EDX,dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EDX + 0x4]
FMUL ST1
FADD dword ptr [EDX + 0x4]
MOV EDX,dword ptr [0x00dfaa0c]
FSTP dword ptr [EDX + EAX*0x8 + 0x4]
FLD dword ptr [ESI]
FSUB dword ptr [ECX]
MOV EDX,dword ptr [0x00dfaa10]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EDX + EDI*0x1]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EDX,dword ptr [0x00dfaa10]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EDX + EDI*0x1 + 0x4]
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EDX,dword ptr [0x00dfaa10]
INC EAX
MOV dword ptr [ESP + 0x2c],EAX
ADD EDI,0x10
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EDX + EDI*0x1 + -0x8]
FLD dword ptr [ESI + 0xc]
FSUB dword ptr [ECX + 0xc]
MOV EAX,[0x00dfaa10]
MOV EDX,dword ptr [ESP + 0x30]
ADD EDX,0xc
FMUL ST1
MOV dword ptr [ESP + 0x30],EDX
FADD dword ptr [ECX + 0xc]
FSTP dword ptr [EAX + EDI*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
MOV ECX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049ccb6
MOV EDX,dword ptr [0x00dfaa14]
MOV EAX,dword ptr [ESP + 0x30]
MOV ECX,EBX
ADD EDX,EAX
MOV EAX,dword ptr [ECX]
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x2c]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],ECX
MOV ECX,dword ptr [0x00dfaa0c]
MOV EDX,dword ptr [EBP]
MOV dword ptr [ECX + EAX*0x8],EDX
MOV ECX,dword ptr [0x00dfaa0c]
MOV EDX,dword ptr [EBP + 0x4]
MOV dword ptr [ECX + EAX*0x8 + 0x4],EDX
MOV EDX,dword ptr [0x00dfaa10]
MOV EAX,ESI
ADD EDX,EDI
MOV ECX,dword ptr [EAX]
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [EDX + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV EAX,dword ptr [EAX + 0xc]
ADD ECX,0xc
MOV dword ptr [EDX + 0xc],EAX
MOV EDX,dword ptr [ESP + 0x2c]
INC EDX
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x2c],EDX
ADD EDI,0x10
MOV ECX,dword ptr [0x00dfaa18]
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x18],EBP
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ECX + EDX*0x1]
MOV EDX,EBX
MOV EBX,dword ptr [0x00dfaa1c]
LEA ECX,[EAX + EAX*0x2]
SHL EAX,0x4
LEA EBX,[EBX + ECX*0x4]
MOV ECX,dword ptr [0x00dfaa24]
MOV dword ptr [ESP + 0x1c],EBX
MOV ECX,dword ptr [ECX + EBP*0x1]
MOV EBP,dword ptr [0x00dfaa08]
LEA EBP,[EBP + ECX*0x8]
MOV ECX,ESI
MOV ESI,dword ptr [0x00dfaa20]
MOV dword ptr [ESP + 0x20],EBP
ADD EAX,ESI
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x10]
ADD EAX,0x4
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x14]
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x0049cac7
MOV EAX,dword ptr [ESP + 0x2c]
CMP EAX,0x3
JGE 0x0049cd2d
OR dword ptr [0x00dfaa04],0x40
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
