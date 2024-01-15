; FUN_004910a0
MOV EAX,dword ptr [ESP + 0x8]
PUSH EBX
PUSH EBP
PUSH ESI
CMP EAX,0x4
PUSH EDI
JA 0x00491a91
JMP dword ptr [EAX*0x4 + 0x491a98]
MOV EAX,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x24]
XOR EDX,EDX
XOR ECX,ECX
CMP dword ptr [EAX],EDX
JBE 0x004910f8
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
JC 0x004910ca
MOV ECX,dword ptr [0x00df7f2c]
MOV EDX,dword ptr [ECX]
MOV ECX,dword ptr [ESP + 0x14]
CMP EDX,0x1
MOV EDX,dword ptr [EAX]
MOV EAX,dword ptr [EDI + 0xc]
PUSH EDX
PUSH EAX
PUSH ECX
JNZ 0x00491120
CALL 0x00494c60
ADD ESP,0xc
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
CALL 0x00495600
ADD ESP,0xc
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x24]
XOR EDX,EDX
XOR ECX,ECX
CMP dword ptr [EAX],EDX
JBE 0x00491214
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EBP,dword ptr [EDI + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,ESI
ADD EBX,EBP
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
JC 0x00491145
JMP 0x00491214
MOV EAX,dword ptr [ESP + 0x1c]
CMP EAX,0x3
JA 0x00491a91
JMP dword ptr [EAX*0x4 + 0x491aac]
MOV EAX,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x24]
XOR EDX,EDX
XOR ECX,ECX
CMP dword ptr [EAX],EDX
JBE 0x00491214
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EBP,dword ptr [EDI + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,ESI
ADD EBX,EBP
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
JC 0x004911a0
JMP 0x00491214
MOV EAX,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x24]
XOR EDX,EDX
XOR ECX,ECX
CMP dword ptr [EAX],EDX
JBE 0x00491214
XOR ESI,ESI
MOV EDX,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
MOV EBP,dword ptr [EDI + 0xc]
MOV EDX,dword ptr [EDX + ECX*0x4]
LEA EDX,[EDX + EDX*0x2]
LEA EDX,[EBX + EDX*0x4]
MOV EBX,ESI
ADD EBX,EBP
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
JC 0x004911e4
MOV ECX,dword ptr [0x00df7f2c]
MOV EDX,dword ptr [ECX]
MOV ECX,dword ptr [ESP + 0x14]
CMP EDX,0x1
MOV EDX,dword ptr [EAX]
MOV EAX,dword ptr [EDI + 0xc]
PUSH EDX
PUSH EAX
PUSH ECX
JNZ 0x0049123c
CALL 0x00495d50
ADD ESP,0xc
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
CALL 0x004966f0
ADD ESP,0xc
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV ECX,dword ptr [ESP + 0x20]
MOV ESI,dword ptr [ESP + 0x24]
XOR EDX,EDX
CMP dword ptr [ECX + 0x18],EDX
JZ 0x004913d8
MOV EAX,dword ptr [ECX]
XOR EDI,EDI
CMP EAX,EDX
JBE 0x00491548
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0xc]
MOV EBP,dword ptr [ESI + 0xc]
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
FADD dword ptr [EDX + EBP*0x1]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004912cf
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x004912d7
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x004912d7
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EAX + EDX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
FADD dword ptr [EDX + EBP*0x1 + 0x4]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491318
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x00491320
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x00491320
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EAX + EDX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
FADD dword ptr [EDX + EBP*0x1 + 0x8]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491362
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049136a
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x0049136a
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EAX + EDX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDI*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004913ad
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004913a5
FLD dword ptr [EBX]
JMP 0x004913b3
FLD dword ptr [0x004af928]
JMP 0x004913b3
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EDI
ADD EBP,0xc
FSTP dword ptr [EAX + EDX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDX,0x10
CMP EDI,EAX
MOV dword ptr [ESP + 0x20],EBP
JC 0x0049126e
JMP 0x00491548
MOV EAX,dword ptr [ECX]
XOR EBX,EBX
CMP EAX,EDX
JBE 0x00491548
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBP,dword ptr [ESI + 0xc]
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
JNZ 0x00491448
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491440
FLD dword ptr [EDI]
JMP 0x0049144e
FLD dword ptr [0x004af928]
JMP 0x0049144e
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDX + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0x4]
LEA EDI,[EAX + EDI*0x1 + 0x4]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491490
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491488
FLD dword ptr [EDI]
JMP 0x00491496
FLD dword ptr [0x004af928]
JMP 0x00491496
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDX + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0x8]
LEA EDI,[EAX + EDI*0x1 + 0x8]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004914d9
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004914d1
FLD dword ptr [EDI]
JMP 0x004914df
FLD dword ptr [0x004af928]
JMP 0x004914df
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDX + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EBX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1 + 0xc]
LEA EDI,[EAX + EDI*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491522
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x0049151a
FLD dword ptr [EDI]
JMP 0x00491528
FLD dword ptr [0x004af928]
JMP 0x00491528
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EBX
ADD EBP,0xc
FSTP dword ptr [EDX + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDX,0x10
CMP EBX,EAX
MOV dword ptr [ESP + 0x20],EBP
JC 0x004913e8
MOV EDX,dword ptr [0x00df7f2c]
CMP dword ptr [EDX],0x1
JNZ 0x00491572
MOV EAX,dword ptr [ECX]
MOV ECX,dword ptr [ESI + 0x14]
MOV EDX,dword ptr [ESI + 0xc]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00496e40
ADD ESP,0x10
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV ECX,dword ptr [ECX]
MOV EDX,dword ptr [ESI + 0x14]
MOV EAX,dword ptr [ESI + 0xc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x18]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00497da0
ADD ESP,0x10
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
XOR EDX,EDX
CMP EAX,EDX
JL 0x00491a91
CMP EAX,0x2
JLE 0x004919a7
CMP EAX,0x3
JNZ 0x00491a91
MOV ECX,dword ptr [ESP + 0x20]
MOV ESI,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x1c],EDX
MOV EAX,dword ptr [ECX + 0x18]
CMP EAX,EDX
MOV EAX,dword ptr [ECX]
JZ 0x00491795
CMP EAX,EDX
JBE 0x00491956
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBX,dword ptr [ESI + 0xc]
MOV EAX,dword ptr [EAX + EDX*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EDI + EAX*0x4]
MOV EDI,dword ptr [ESP + 0x20]
ADD EDI,EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [EDI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [EDI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDI + 0x8],EAX
MOV EDI,dword ptr [ECX + 0x8]
MOV EBX,dword ptr [ESI + 0x10]
LEA EAX,[EDX*0x8 + 0x0]
MOV EDX,dword ptr [EDI + EDX*0x4]
MOV EDI,dword ptr [ECX + 0x10]
MOV EBP,dword ptr [EDI + EDX*0x8]
MOV dword ptr [EBX + EAX*0x1],EBP
MOV EDX,dword ptr [EDI + EDX*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x28]
MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDI]
FADD dword ptr [EDX + EAX*0x1]
ADD EDX,EAX
FSTP dword ptr [EDX]
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDX + EAX*0x1 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA EAX,[EDX + EAX*0x1 + 0x4]
MOV EDX,dword ptr [ESP + 0x1c]
FSTP dword ptr [EAX]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EBX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EDI*0x1]
MOV EDI,dword ptr [ESP + 0x24]
FADD dword ptr [EDI + EBX*0x1]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491684
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049168c
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x0049168c
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
FADD dword ptr [EDI + EBP*0x1 + 0x4]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004916cd
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x004916d5
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x004916d5
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
FADD dword ptr [EDI + EBP*0x1 + 0x8]
FCOM dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491717
FCOM dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049171f
FSTP ST0
FLD dword ptr [0x004af928]
JMP 0x0049171f
FSTP ST0
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491762
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x0049175a
FLD dword ptr [EBX]
JMP 0x00491768
FLD dword ptr [0x004af928]
JMP 0x00491768
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EDX
ADD EBP,0xc
FSTP dword ptr [EDI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDI,0x10
CMP EDX,EAX
MOV dword ptr [ESP + 0x1c],EDX
MOV dword ptr [ESP + 0x20],EBP
MOV dword ptr [ESP + 0x24],EDI
JC 0x004915da
JMP 0x00491956
CMP EAX,EDX
JBE 0x00491956
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0xc]
MOV EBX,dword ptr [ESI + 0xc]
MOV EAX,dword ptr [EAX + EDX*0x4]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EDI + EAX*0x4]
MOV EDI,dword ptr [ESP + 0x20]
ADD EDI,EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [EDI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [EDI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDI + 0x8],EAX
MOV EDI,dword ptr [ECX + 0x8]
MOV EBX,dword ptr [ESI + 0x10]
LEA EAX,[EDX*0x8 + 0x0]
MOV EDX,dword ptr [EDI + EDX*0x4]
MOV EDI,dword ptr [ECX + 0x10]
MOV EBP,dword ptr [EDI + EDX*0x8]
MOV dword ptr [EBX + EAX*0x1],EBP
MOV EDX,dword ptr [EDI + EDX*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x28]
MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDI]
FADD dword ptr [EDX + EAX*0x1]
ADD EDX,EAX
FSTP dword ptr [EDX]
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDX + EAX*0x1 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA EAX,[EDX + EAX*0x1 + 0x4]
MOV EDX,dword ptr [ESP + 0x1c]
FSTP dword ptr [EAX]
MOV EAX,dword ptr [ECX + 0x4]
MOV EDI,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
ADD EDI,EAX
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049184a
FLD dword ptr [EDI]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491842
FLD dword ptr [EDI]
JMP 0x00491850
FLD dword ptr [0x004af928]
JMP 0x00491850
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
MOV EDI,dword ptr [ESP + 0x24]
FSTP dword ptr [EDI + EAX*0x1]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x4]
LEA EBX,[EAX + EBX*0x1 + 0x4]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491896
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x0049188e
FLD dword ptr [EBX]
JMP 0x0049189c
FLD dword ptr [0x004af928]
JMP 0x0049189c
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0x8]
LEA EBX,[EAX + EBX*0x1 + 0x8]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x004918df
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x004918d7
FLD dword ptr [EBX]
JMP 0x004918e5
FLD dword ptr [0x004af928]
JMP 0x004918e5
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
FSTP dword ptr [EDI + EAX*0x1 + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
MOV EBX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [EAX + EDX*0x4]
SHL EAX,0x4
FLD dword ptr [EAX + EBX*0x1 + 0xc]
LEA EBX,[EAX + EBX*0x1 + 0xc]
FCOMP dword ptr [0x004af918]
FNSTSW AX
TEST AH,0x1
JNZ 0x00491928
FLD dword ptr [EBX]
FCOMP dword ptr [0x004af928]
FNSTSW AX
TEST AH,0x41
JZ 0x00491920
FLD dword ptr [EBX]
JMP 0x0049192e
FLD dword ptr [0x004af928]
JMP 0x0049192e
FLD dword ptr [0x004af918]
MOV EAX,dword ptr [ESI + 0x14]
MOV EBP,dword ptr [ESP + 0x20]
INC EDX
ADD EBP,0xc
FSTP dword ptr [EDI + EAX*0x1 + 0xc]
MOV EAX,dword ptr [ECX]
ADD EDI,0x10
CMP EDX,EAX
MOV dword ptr [ESP + 0x1c],EDX
MOV dword ptr [ESP + 0x20],EBP
MOV dword ptr [ESP + 0x24],EDI
JC 0x004917a5
MOV EDX,dword ptr [0x00df7f2c]
CMP dword ptr [EDX],0x1
JNZ 0x00491984
MOV EAX,dword ptr [ECX]
MOV ECX,dword ptr [ESI + 0x14]
MOV EDX,dword ptr [ESI + 0x10]
PUSH EAX
MOV EAX,dword ptr [ESI + 0xc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x1c]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0049a390
ADD ESP,0x14
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EDX,dword ptr [ECX]
MOV EAX,dword ptr [ESI + 0x14]
MOV ECX,dword ptr [ESI + 0x10]
PUSH EDX
MOV EDX,dword ptr [ESI + 0xc]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0049b7d0
ADD ESP,0x14
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x20]
XOR ECX,ECX
MOV dword ptr [ESP + 0x1c],ECX
MOV ESI,dword ptr [EAX]
CMP ESI,EDX
MOV ESI,dword ptr [ESP + 0x24]
JBE 0x00491a4d
MOV dword ptr [ESP + 0x20],EDX
MOV EDI,dword ptr [EAX + 0x4]
MOV EBX,dword ptr [EAX + 0xc]
LEA EDX,[ECX*0x4 + 0x0]
MOV EBP,dword ptr [ESI + 0xc]
SHL ECX,0x3
MOV EDI,dword ptr [EDI + EDX*0x1]
LEA EDI,[EDI + EDI*0x2]
LEA EDI,[EBX + EDI*0x4]
MOV EBX,dword ptr [ESP + 0x20]
ADD EBX,EBP
MOV EBP,dword ptr [EDI]
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDI + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EDI,dword ptr [EDI + 0x8]
MOV dword ptr [EBX + 0x8],EDI
MOV EDI,dword ptr [EAX + 0x8]
MOV EBX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [EDI + EDX*0x1]
MOV EDI,dword ptr [EAX + 0x10]
MOV EBP,dword ptr [EDI + EDX*0x8]
MOV dword ptr [EBX + ECX*0x1],EBP
MOV EDX,dword ptr [EDI + EDX*0x8 + 0x4]
MOV EDI,dword ptr [ESP + 0x28]
MOV dword ptr [EBX + ECX*0x1 + 0x4],EDX
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDI]
FADD dword ptr [EDX + ECX*0x1]
ADD EDX,ECX
FSTP dword ptr [EDX]
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [EDX + ECX*0x1 + 0x4]
FADD dword ptr [EDI + 0x4]
LEA ECX,[EDX + ECX*0x1 + 0x4]
MOV EDI,dword ptr [ESP + 0x20]
ADD EDI,0xc
MOV dword ptr [ESP + 0x20],EDI
FSTP dword ptr [ECX]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [EAX]
INC ECX
CMP ECX,EDX
MOV dword ptr [ESP + 0x1c],ECX
JC 0x004919c3
MOV ECX,dword ptr [0x00df7f2c]
CMP dword ptr [ECX],0x1
JNZ 0x00491a77
MOV EDX,dword ptr [EAX]
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [ESI + 0xc]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00498a60
ADD ESP,0x10
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [EAX]
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ESI + 0xc]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00499840
ADD ESP,0x10
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
