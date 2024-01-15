; FUN_00499840
SUB ESP,0xc
MOV EDX,dword ptr [ESP + 0x14]
XOR EAX,EAX
PUSH EBX
MOV [0x00dfaa04],EAX
MOV dword ptr [ESP + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x28]
LEA ECX,[EAX + EAX*0x2]
MOV ESI,0xdfa140
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [0x00df9eac],0xdf9eb8
LEA ECX,[EDX + ECX*0x4 + -0xc]
LEA EBX,[EDI + EAX*0x8 + -0x8]
MOV EBP,EDI
JLE 0x00499a00
XOR EDI,EDI
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x2c]
FLD dword ptr [EAX + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x004998c6
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x004999df
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x2c]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499995
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499995
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x2c]
FNSTSW AX
TEST AH,0x1
JNZ 0x004998fe
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00499995
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x2c]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x2c]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDI,0xc
SHL EAX,0x3
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + EDI*0x1 + -0xc]
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + -0x8]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0x4]
FLD dword ptr [EBP]
FSUB dword ptr [EBX]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ECX + EAX*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EBX + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x004999e1
MOV EAX,EDX
ADD ESI,EDI
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBP]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EBP + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD EDI,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x004999e1
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
MOV EBX,EBP
ADD EDX,0xc
ADD EBP,0x8
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x0049989a
MOV EDI,dword ptr [0x00df9ea8]
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [0x00dfa138]
CMP EAX,0x3
JL 0x0049a383
MOV ECX,dword ptr [0x00df9eac]
XOR EDX,ESI
XOR EDI,ECX
XOR ESI,EDX
XOR ECX,EDI
XOR EDX,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EDI,ECX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [ESP + 0x10],0x0
LEA ECX,[EDX + ECX*0x4 + -0xc]
LEA EBX,[EDI + EAX*0x8 + -0x8]
MOV EBP,EDI
JLE 0x00499bc6
XOR EDI,EDI
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x2c]
FLD dword ptr [EAX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00499a8c
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499ba5
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x2c]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499b5b
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499b5b
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x2c]
FNSTSW AX
TEST AH,0x41
JZ 0x00499ac4
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x00499b5b
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x2c]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x2c]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDI,0xc
SHL EAX,0x3
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + EDI*0x1 + -0xc]
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + -0x8]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0x4]
FLD dword ptr [EBP]
FSUB dword ptr [EBX]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ECX + EAX*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EBX + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499ba7
MOV EAX,EDX
ADD ESI,EDI
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBP]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EBP + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD EDI,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x00499ba7
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
MOV EBX,EBP
ADD EDX,0xc
ADD EBP,0x8
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00499a60
MOV EDI,dword ptr [0x00df9ea8]
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
CMP EDX,0x3
JL 0x0049a381
MOV ECX,dword ptr [0x00df9eac]
XOR EAX,ESI
XOR EDI,ECX
XOR ESI,EAX
XOR ECX,EDI
XOR EAX,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EDI,ECX
LEA ECX,[EDX + EDX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EDX,EDX
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [ESP + 0x2c],EDX
MOV dword ptr [ESP + 0x10],0x0
LEA ECX,[EAX + ECX*0x4 + -0xc]
LEA EBX,[EDI + EDX*0x8 + -0x8]
MOV EBP,EDI
JLE 0x00499da1
LEA EDI,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EDX,EDX
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00499c5c
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499d7a
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499d2f
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499d2f
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x00499c96
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x1
JZ 0x00499d2f
FLD dword ptr [EDI]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EDI + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDX,0xc
SHL EAX,0x3
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x14]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EDX*0x1 + -0xc]
FLD dword ptr [EDI + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EBP]
FSUB dword ptr [EBX]
MOV ECX,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ECX + EAX*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EBX + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDI]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499d7c
LEA EAX,[EDI + -0x8]
ADD ESI,EDX
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBP]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EBP + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD EDX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x00499d7c
FSTP ST0
MOV EAX,dword ptr [ESP + 0x2c]
LEA ECX,[EDI + -0x8]
MOV EBX,EBP
ADD EDI,0xc
ADD EBP,0x8
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00499c2f
MOV EDI,dword ptr [0x00df9ea8]
MOV EAX,[0x00dfa138]
MOV EDX,dword ptr [ESP + 0x10]
CMP EDX,0x3
JL 0x0049a381
MOV ECX,dword ptr [0x00df9eac]
XOR EAX,ESI
XOR EDI,ECX
XOR ESI,EAX
XOR ECX,EDI
XOR EAX,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EDI,ECX
LEA ECX,[EDX + EDX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EDX,EDX
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [ESP + 0x2c],EDX
MOV dword ptr [ESP + 0x10],0x0
LEA ECX,[EAX + ECX*0x4 + -0xc]
LEA EBX,[EDI + EDX*0x8 + -0x8]
MOV EBP,EDI
JLE 0x00499f77
LEA EDI,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EDX,EDX
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x00499e32
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x00499f50
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499f05
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499f05
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499e6c
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JNZ 0x00499f05
FLD dword ptr [EDI]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EDI + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDX,0xc
SHL EAX,0x3
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x14]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EDX*0x1 + -0xc]
FLD dword ptr [EDI + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EBP]
FSUB dword ptr [EBX]
MOV ECX,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ECX + EAX*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EBX + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x00499f52
LEA EAX,[EDI + -0x8]
ADD ESI,EDX
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBP]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EBP + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD EDX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x00499f52
FSTP ST0
MOV EAX,dword ptr [ESP + 0x2c]
LEA ECX,[EDI + -0x8]
MOV EBX,EBP
ADD EDI,0xc
ADD EBP,0x8
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00499e05
MOV EDI,dword ptr [0x00df9ea8]
MOV EAX,[0x00dfa138]
MOV EBX,dword ptr [ESP + 0x10]
CMP EBX,0x3
JGE 0x00499f8a
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV ECX,dword ptr [0x00df9eac]
XOR EAX,ESI
XOR EDI,ECX
XOR ESI,EAX
XOR ECX,EDI
XOR EAX,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EDI,ECX
LEA ECX,[EBX + EBX*0x2]
XOR EDX,EDX
TEST EBX,EBX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [ESP + 0x2c],EBX
LEA ECX,[EAX + ECX*0x4 + -0xc]
LEA EBP,[EDI + EBX*0x8 + -0x8]
MOV dword ptr [ESP + 0x14],EDI
JLE 0x0049a152
LEA EBX,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EDI,EDI
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a002
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049a12a
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a0df
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a0df
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049a050
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a0df
MOV EAX,dword ptr [ESP + 0x20]
ADD EDI,0xc
FLD dword ptr [EBX]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x4]
FDIVP
MOV dword ptr [ESI + EDI*0x1 + -0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
LEA EAX,[EDX*0x8 + 0x0]
INC EDX
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EDI*0x1 + -0x4]
FLD dword ptr [EBX + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0xc]
MOV ECX,dword ptr [ESP + 0x14]
MOV ESI,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [EBP]
FMUL ST1
FADD dword ptr [EBP]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EBP + 0x4]
MOV ESI,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBP + 0x4]
FSTP dword ptr [ESI + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049a0e3
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049a12a
LEA EAX,[EBX + -0x4]
ADD ESI,EDI
INC EDX
ADD EDI,0xc
MOV EBP,dword ptr [EAX]
MOV dword ptr [ESI],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EBP
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI + EDX*0x8 + -0x8],EAX
MOV EAX,[0x00df9eac]
MOV ECX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + EDX*0x8 + -0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EBX + -0x4]
MOV EBP,EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00499fdd
MOV EDI,dword ptr [0x00df9ea8]
CMP EDX,0x3
JGE 0x0049a16d
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV ECX,dword ptr [ESP + 0x20]
CMP dword ptr [ECX],0x0
JZ 0x0049a346
MOV EAX,[0x00df9eac]
MOV ECX,dword ptr [0x00dfa138]
XOR EDI,EAX
XOR ECX,ESI
XOR EAX,EDI
XOR ESI,ECX
MOV [0x00df9eac],EAX
XOR EDI,EAX
MOV EAX,EDX
XOR ECX,ESI
XOR EDX,EDX
MOV dword ptr [0x00dfa138],ECX
LEA EBX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00df9ea8],EDI
LEA ECX,[ECX + EBX*0x4 + -0xc]
LEA EBP,[EDI + EAX*0x8 + -0x8]
MOV dword ptr [ESP + 0x14],EDI
JLE 0x0049a341
MOV EDI,dword ptr [0x00dfa138]
XOR EBX,EBX
ADD EDI,0x4
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049a1f7
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a31f
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a2d4
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a2d4
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a245
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049a2d4
MOV EAX,dword ptr [ESP + 0x20]
ADD EBX,0xc
FLD dword ptr [EDI]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
FDIVP
MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
LEA EAX,[EDX*0x8 + 0x0]
INC EDX
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EBX*0x1 + -0x4]
FLD dword ptr [EDI + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0xc]
MOV ECX,dword ptr [ESP + 0x14]
MOV ESI,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [EBP]
FMUL ST1
FADD dword ptr [EBP]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EBP + 0x4]
MOV ESI,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBP + 0x4]
FSTP dword ptr [ESI + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049a2d8
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a31f
LEA EAX,[EDI + -0x4]
ADD ESI,EBX
INC EDX
ADD EBX,0xc
MOV EBP,dword ptr [EAX]
MOV dword ptr [ESI],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EBP
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI + EDX*0x8 + -0x8],EAX
MOV EAX,[0x00df9eac]
MOV ECX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + EDX*0x8 + -0x4],ECX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDI + -0x4]
MOV EBP,EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EDI,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x0049a1d2
CMP EDX,0x3
JL 0x0049a381
MOV EDI,dword ptr [ESP + 0x24]
CMP ESI,EDI
JZ 0x0049a381
LEA ECX,[EDX + EDX*0x2]
SHL ECX,0x2
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EDI,dword ptr [ESP + 0x28]
LEA ECX,[EDX*0x8 + 0x0]
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
