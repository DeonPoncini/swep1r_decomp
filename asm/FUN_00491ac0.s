; FUN_00491ac0
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH EBP
PUSH ESI
CMP EAX,0x4
PUSH EDI
JA 0x00492389
JMP dword ptr [EAX*0x4 + 0x492390]
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x20]
XOR EBX,EBX
XOR ECX,ECX
CMP dword ptr [EAX],EBX
JBE 0x00491bc6
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,dword ptr [EDI + 0xc]
ADD EBX,ESI
INC ECX
MOV EBP,dword ptr [EDX]
ADD ESI,0xc
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EBX + 0x8],EDX
MOV EDX,dword ptr [EAX]
CMP ECX,EDX
JC 0x00491aee
MOV EAX,EDX
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x20]
XOR EBX,EBX
XOR ECX,ECX
CMP dword ptr [EAX],EBX
JBE 0x00491bc6
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,dword ptr [EDI + 0xc]
ADD EBX,ESI
INC ECX
MOV EBP,dword ptr [EDX]
ADD ESI,0xc
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EBX + 0x8],EDX
MOV EDX,dword ptr [EAX]
CMP ECX,EDX
JC 0x00491b3b
MOV EAX,EDX
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x18]
CMP EAX,0x3
JA 0x00492389
JMP dword ptr [EAX*0x4 + 0x4923a4]
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x20]
XOR EBX,EBX
XOR ECX,ECX
CMP dword ptr [EAX],EBX
JBE 0x00491c0f
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,dword ptr [EDI + 0xc]
ADD EBX,ESI
INC ECX
MOV EBP,dword ptr [EDX]
ADD ESI,0xc
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EBX + 0x8],EDX
MOV EDX,dword ptr [EAX]
CMP ECX,EDX
JC 0x00491b98
MOV EAX,dword ptr [EAX]
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x20]
XOR EBX,EBX
XOR ECX,ECX
CMP dword ptr [EAX],EBX
JBE 0x00491c0f
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,dword ptr [EDI + 0xc]
ADD EBX,ESI
INC ECX
MOV EBP,dword ptr [EDX]
ADD ESI,0xc
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EBX + 0x8],EDX
MOV EDX,dword ptr [EAX]
CMP ECX,EDX
JC 0x00491be1
MOV EAX,dword ptr [EAX]
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
XOR EBX,EBX
CMP dword ptr [ECX + 0x18],EBX
JZ 0x00491dab
MOV EAX,dword ptr [ECX]
XOR EDI,EDI
CMP EAX,EBX
JBE 0x004922f3
XOR ESI,ESI
MOV dword ptr [ESP + 0x20],EBX
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0xc]
MOV EBP,dword ptr [EDX + 0xc]
MOV EAX,dword ptr [EAX + EDI*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EBX + EAX*0x4]
MOV EBX,dword ptr [ESP + 0x20]
ADD EBX,EBP
MOV EBP,dword ptr [EAX]
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EBX + 0x8],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1]
FADD dword ptr [ESI + EBP*0x1]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491c9e
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x00491ca6
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x00491ca6
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
FADD dword ptr [ESI + EBP*0x1 + 0x4]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491ce7
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x00491cef
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x00491cef
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
FADD dword ptr [ESI + EBP*0x1 + 0x8]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491d31
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x00491d39
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x00491d39
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491d7c
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491d74
FLD dword ptr [EBX]
JMP 0x00491d82
FLD dword ptr [0x004af928]
JMP 0x00491d82
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EDI
ADD EBP,0xc
FSTP dword ptr [ESI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD ESI,0x10
CMP EDI,EAX
MOV dword ptr [ESP + 0x20],EBP
JC 0x00491c3d
MOV ECX,EAX
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBP
POP EBX
RET
CMP dword ptr [ECX],EBX
JBE 0x004922f3
XOR ESI,ESI
MOV dword ptr [ESP + 0x20],EBX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBP,dword ptr [EDX + 0xc]
MOV EAX,dword ptr [EAX + EBX*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EDI + EAX*0x4]
MOV EDI,dword ptr [ESP + 0x20]
ADD EDI,EBP
MOV EBP,dword ptr [EAX]
MOV dword ptr [EDI],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [EDI + 0x4],EBP
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDI + 0x8],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
ADD EDI,EAX
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491e19
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491e11
FLD dword ptr [EDI]
JMP 0x00491e1f
FLD dword ptr [0x004af928]
JMP 0x00491e1f
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0x4]
LEA EDI,[EAX + EDI*0x1 + 0x4]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491e61
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491e59
FLD dword ptr [EDI]
JMP 0x00491e67
FLD dword ptr [0x004af928]
JMP 0x00491e67
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0x8]
LEA EDI,[EAX + EDI*0x1 + 0x8]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491eaa
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491ea2
FLD dword ptr [EDI]
JMP 0x00491eb0
FLD dword ptr [0x004af928]
JMP 0x00491eb0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [ESI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0xc]
LEA EDI,[EAX + EDI*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491ef3
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491eeb
FLD dword ptr [EDI]
JMP 0x00491ef9
FLD dword ptr [0x004af928]
JMP 0x00491ef9
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EBX
ADD EBP,0xc
FSTP dword ptr [ESI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD ESI,0x10
CMP EBX,EAX
MOV dword ptr [ESP + 0x20],EBP
JC 0x00491db9
MOV ECX,EAX
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x18]
XOR EBX,EBX
CMP EAX,EBX
JL 0x00492389
CMP EAX,0x2
JLE 0x004922fc
CMP EAX,0x3
JNZ 0x00492389
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
CMP dword ptr [ECX + 0x18],EBX
JZ 0x0049212a
MOV EAX,dword ptr [ECX]
XOR ESI,ESI
CMP EAX,EBX
MOV dword ptr [ESP + 0x20],ESI
JBE 0x004922f3
MOV dword ptr [ESP + 0x18],EBX
MOV dword ptr [ESP + 0x1c],EBX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBX,dword ptr [EDX + 0xc]
MOV EAX,dword ptr [EAX + ESI*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EDI + EAX*0x4]
MOV EDI,dword ptr [ESP + 0x1c]
ADD EDI,EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [EDI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [EDI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDI + 0x8],EAX
MOV EDI,dword ptr [ECX + 0x8]
MOV EBX,dword ptr [EDX + 0x10]
LEA EAX,[ESI*0x8 + 0x0]
MOV ESI,dword ptr [EDI + ESI*0x4]
MOV EDI,dword ptr [ECX + 0x10]
MOV EBP,dword ptr [EDI + ESI*0x8]
MOV dword ptr [EBX + EAX*0x1],EBP
MOV ESI,dword ptr [EDI + ESI*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x24]
MOV dword ptr [EBX + EAX*0x1 + 0x4],ESI
MOV ESI,dword ptr [EDX + 0x10]
FLD dword ptr [EDI]
FADD dword ptr [ESI + EAX*0x1]
ADD ESI,EAX
FSTP dword ptr [ESI]
MOV ESI,dword ptr [EDX + 0x10]
FLD dword ptr [ESI + EAX*0x1 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA EAX,[ESI + EAX*0x1 + 0x4]
MOV ESI,dword ptr [ESP + 0x20]
FSTP dword ptr [EAX]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EBX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1]
MOV EDI,dword ptr [ESP + 0x18]
FADD dword ptr [EDI + EBX*0x1]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00492015
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049201d
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x0049201d
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [EDI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
FADD dword ptr [EDI + EBP*0x1 + 0x4]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049205e
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x00492066
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x00492066
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
FADD dword ptr [EDI + EBP*0x1 + 0x8]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004920a8
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x004920b0
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x004920b0
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004920f3
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004920eb
FLD dword ptr [EBX]
JMP 0x004920f9
FLD dword ptr [0x004af928]
JMP 0x004920f9
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
MOV EBP,dword ptr [ESP + 0x1c]
INC ESI
ADD EBP,0xc
FSTP dword ptr [EDI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDI,0x10
CMP ESI,EAX
MOV dword ptr [ESP + 0x20],ESI
MOV dword ptr [ESP + 0x1c],EBP
MOV dword ptr [ESP + 0x18],EDI
JC 0x00491f6b
MOV ECX,EAX
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ECX]
XOR ESI,ESI
CMP EAX,EBX
MOV dword ptr [ESP + 0x20],ESI
JBE 0x004922f3
MOV dword ptr [ESP + 0x18],EBX
MOV dword ptr [ESP + 0x1c],EBX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBX,dword ptr [EDX + 0xc]
MOV EAX,dword ptr [EAX + ESI*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EDI + EAX*0x4]
MOV EDI,dword ptr [ESP + 0x1c]
ADD EDI,EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [EDI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [EDI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDI + 0x8],EAX
MOV EDI,dword ptr [ECX + 0x8]
MOV EBX,dword ptr [EDX + 0x10]
LEA EAX,[ESI*0x8 + 0x0]
MOV ESI,dword ptr [EDI + ESI*0x4]
MOV EDI,dword ptr [ECX + 0x10]
MOV EBP,dword ptr [EDI + ESI*0x8]
MOV dword ptr [EBX + EAX*0x1],EBP
MOV ESI,dword ptr [EDI + ESI*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x24]
MOV dword ptr [EBX + EAX*0x1 + 0x4],ESI
MOV ESI,dword ptr [EDX + 0x10]
FLD dword ptr [EDI]
FADD dword ptr [ESI + EAX*0x1]
ADD ESI,EAX
FSTP dword ptr [ESI]
MOV ESI,dword ptr [EDX + 0x10]
FLD dword ptr [ESI + EAX*0x1 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA EAX,[ESI + EAX*0x1 + 0x4]
MOV ESI,dword ptr [ESP + 0x20]
FSTP dword ptr [EAX]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
ADD EDI,EAX
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004921e7
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004921df
FLD dword ptr [EDI]
JMP 0x004921ed
FLD dword ptr [0x004af928]
JMP 0x004921ed
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
MOV EDI,dword ptr [ESP + 0x18]
FSTP dword ptr [EDI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
LEA EBX,[EAX + EBX*0x1 + 0x4]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00492233
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x0049222b
FLD dword ptr [EBX]
JMP 0x00492239
FLD dword ptr [0x004af928]
JMP 0x00492239
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
LEA EBX,[EAX + EBX*0x1 + 0x8]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049227c
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00492274
FLD dword ptr [EBX]
JMP 0x00492282
FLD dword ptr [0x004af928]
JMP 0x00492282
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + ESI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004922c5
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004922bd
FLD dword ptr [EBX]
JMP 0x004922cb
FLD dword ptr [0x004af928]
JMP 0x004922cb
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [EDX + 0x14]
MOV EBP,dword ptr [ESP + 0x1c]
INC ESI
ADD EBP,0xc
FSTP dword ptr [EDI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDI,0x10
CMP ESI,EAX
MOV dword ptr [ESP + 0x20],ESI
MOV dword ptr [ESP + 0x1c],EBP
MOV dword ptr [ESP + 0x18],EDI
JC 0x00492142
MOV ECX,dword ptr [ECX]
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
MOV ESI,dword ptr [ESP + 0x20]
XOR ECX,ECX
CMP dword ptr [EAX],EBX
JBE 0x00492385
MOV dword ptr [ESP + 0x1c],EBX
MOV EDX,dword ptr [EAX + 0x4]
MOV EDI,dword ptr [EAX + 0xc]
MOV EBP,dword ptr [ESI + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EDI + EDX*0x4]
MOV EDI,dword ptr [ESP + 0x1c]
ADD EDI,EBP
MOV EBX,dword ptr [EDX]
MOV dword ptr [EDI],EBX
MOV EBX,dword ptr [EDX + 0x4]
MOV dword ptr [EDI + 0x4],EBX
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EDI + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV EDI,dword ptr [EAX + 0x10]
MOV ESI,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [EDX + ECX*0x4]
MOV EBX,dword ptr [EDI + EDX*0x8]
MOV dword ptr [ESI + ECX*0x8],EBX
MOV EDX,dword ptr [EDI + EDX*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x24]
MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
MOV ESI,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
MOV EDX,dword ptr [ESI + 0x10]
FADD dword ptr [EDX + ECX*0x8]
LEA EDX,[EDX + ECX*0x8]
FSTP dword ptr [EDX]
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDX + ECX*0x8 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA EDX,[EDX + ECX*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x1c]
INC ECX
ADD EDI,0xc
MOV dword ptr [ESP + 0x1c],EDI
FSTP dword ptr [EDX]
CMP ECX,dword ptr [EAX]
JC 0x0049230e
MOV EAX,dword ptr [EAX]
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
