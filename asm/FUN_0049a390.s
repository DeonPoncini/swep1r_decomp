; FUN_0049a390
SUB ESP,0x1c
MOV EAX,dword ptr [ESP + 0x30]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x2c]
LEA ECX,[EAX + EAX*0x2]
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x3c]
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],ECX
LEA ECX,[EDI + EAX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,EAX
XOR EDX,EDX
MOV ESI,0xdfa140
SHL ECX,0x4
CMP EAX,EDX
MOV dword ptr [0x00dfaa04],EDX
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [0x00df9eac],0xdf9eb8
MOV dword ptr [0x00dfa13c],EBX
MOV dword ptr [0x00df9eb0],0xdfa500
MOV dword ptr [ESP + 0x14],EDX
LEA ECX,[ECX + EBX*0x1 + -0x10]
MOV dword ptr [ESP + 0x18],EBP
JLE 0x0049a6e7
XOR EBP,EBP
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x30]
MOV EAX,dword ptr [ESP + 0x10]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x30]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
FCOMP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a452
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a6bb
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a646
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a646
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049a49a
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049a646
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x30]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x4]
FXCH
FSUB dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [EAX]
FXCH
FST dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FXCH
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x0049a506
FDIV dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x40]
FLD dword ptr [EAX + 0x30]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x40]
TEST AH,0x1
JZ 0x0049a52c
FCHS
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a543
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049a55f
MOV EAX,dword ptr [ESP + 0x10]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x40]
JMP 0x0049a56d
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
FSUB dword ptr [EAX]
FDIV dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FSTP dword ptr [ESI + EBP*0x1]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EBP*0x1 + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
LEA ESI,[EAX*0x8 + 0x0]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
INC EAX
ADD EBP,0xc
FMUL ST1
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EAX + 0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EBP*0x1 + -0x4]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EAX + 0x4]
FMUL ST1
FADD dword ptr [EAX + 0x4]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1 + 0x4]
FLD dword ptr [EBX]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EDX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDX*0x1 + 0x4]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDX*0x1 + 0x8]
FLD dword ptr [EBX + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
ADD EDX,0x10
FSTP dword ptr [ECX + EDX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a6bd
MOV ECX,dword ptr [ESP + 0x18]
ADD ESI,EBP
ADD EBP,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV EAX,[0x00df9eb0]
MOV ECX,EBX
ADD EAX,EDX
MOV ESI,dword ptr [ECX]
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0xc]
INC ESI
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [ESP + 0x14],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0x10
JMP 0x0049a6bd
FSTP ST0
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x1c],EDI
MOV dword ptr [ESP + 0x10],EAX
ADD EAX,0xc
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,EBX
ADD EDI,0x8
ADD EBX,0x10
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x0049a412
MOV EAX,dword ptr [ESP + 0x14]
CMP EAX,0x3
JGE 0x0049a6f8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
MOV EAX,[0x00dfa138]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [0x00df9ea8]
MOV EDX,dword ptr [0x00df9eac]
XOR EAX,ESI
MOV dword ptr [ESP + 0x40],ECX
XOR ESI,EAX
MOV EBX,dword ptr [0x00dfa13c]
XOR EAX,ESI
MOV EBP,dword ptr [0x00df9eb0]
LEA ECX,[ECX + ECX*0x2]
XOR EDI,EDX
XOR EDX,EDI
XOR EBX,EBP
LEA ECX,[EAX + ECX*0x4 + -0xc]
XOR EDI,EDX
MOV dword ptr [ESP + 0x10],ECX
MOV ECX,dword ptr [ESP + 0x40]
XOR EBP,EBX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EDI + ECX*0x8 + -0x8]
XOR EBX,EBP
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x40]
SHL ECX,0x4
CMP dword ptr [ESP + 0x40],0x0
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9eac],EDX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [0x00df9eb0],EBP
MOV dword ptr [0x00dfa13c],EBX
MOV dword ptr [ESP + 0x14],0x0
LEA ECX,[ECX + EBX*0x1 + -0x10]
MOV dword ptr [ESP + 0x18],EAX
JLE 0x0049aa89
MOV EAX,dword ptr [ESP + 0x40]
XOR EDX,EDX
XOR EBP,EBP
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x28]
MOV EAX,dword ptr [ESP + 0x10]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x28]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
FCOMP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049a7d7
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049aa40
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a9cb
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049a9cb
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x41
JZ 0x0049a81f
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a9cb
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x28]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x4]
FXCH
FSUB dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [EAX]
FXCH
FST dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FXCH
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x0049a88b
FDIV dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x40]
FLD dword ptr [EAX + 0x28]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x40]
TEST AH,0x1
JZ 0x0049a8b1
FCHS
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x0049a8c8
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049a8e4
MOV EAX,dword ptr [ESP + 0x10]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x40]
JMP 0x0049a8f2
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
FSUB dword ptr [EAX]
FDIV dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FSTP dword ptr [ESI + EBP*0x1]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EBP*0x1 + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
LEA ESI,[EAX*0x8 + 0x0]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
INC EAX
ADD EBP,0xc
FMUL ST1
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EAX + 0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EBP*0x1 + -0x4]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EAX + 0x4]
FMUL ST1
FADD dword ptr [EAX + 0x4]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1 + 0x4]
FLD dword ptr [EBX]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EDX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDX*0x1 + 0x4]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDX*0x1 + 0x8]
FLD dword ptr [EBX + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
ADD EDX,0x10
FSTP dword ptr [ECX + EDX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049aa42
MOV ECX,dword ptr [ESP + 0x18]
ADD ESI,EBP
ADD EBP,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV EAX,[0x00df9eb0]
MOV ECX,EBX
ADD EAX,EDX
MOV ESI,dword ptr [ECX]
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0xc]
INC ESI
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [ESP + 0x14],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0x10
JMP 0x0049aa42
FSTP ST0
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x1c],EDI
MOV dword ptr [ESP + 0x10],EAX
ADD EAX,0xc
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,EBX
ADD EDI,0x8
ADD EBX,0x10
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x0049a797
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00df9ea8]
MOV EDX,dword ptr [0x00df9eac]
MOV EBX,dword ptr [0x00dfa13c]
MOV EBP,dword ptr [0x00df9eb0]
MOV ECX,dword ptr [ESP + 0x14]
CMP ECX,0x3
JGE 0x0049aa9c
MOV EAX,ECX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
XOR EBX,EBP
XOR EAX,ESI
XOR EBP,EBX
XOR ESI,EAX
MOV dword ptr [0x00df9eb0],EBP
XOR EBX,EBP
MOV EBP,dword ptr [ESP + 0x14]
XOR EDI,EDX
XOR EAX,ESI
XOR EDX,EDI
LEA ECX,[EBP + EBP*0x2]
XOR EDI,EDX
MOV dword ptr [0x00df9eac],EDX
XOR EDX,EDX
LEA ECX,[EAX + ECX*0x4 + -0xc]
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [ESP + 0x10],ECX
LEA ECX,[EDI + EBP*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,EBP
SHL ECX,0x4
TEST EBP,EBP
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [0x00dfa13c],EBX
MOV dword ptr [ESP + 0x40],EBP
MOV dword ptr [ESP + 0x14],EDX
LEA ECX,[ECX + EBX*0x1 + -0x10]
JLE 0x0049ae0f
XOR EBP,EBP
ADD EAX,0x8
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x2c]
MOV EAX,dword ptr [ESP + 0x10]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x2c]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [ESP + 0x40]
FLD dword ptr [EAX + -0x4]
FXCH
FMULP
FNSTSW AX
TEST AH,0x41
JNZ 0x0049ab5a
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049addc
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049ad64
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049ad64
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x41
JZ 0x0049aba4
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JZ 0x0049ad64
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + -0x4]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x2c]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + -0x4]
FXCH
FSUB dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x24]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049ac1c
FDIV dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x40]
FLD dword ptr [EAX + 0x2c]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x40]
TEST AH,0x1
JZ 0x0049ac42
FCHS
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x0049ac59
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049ac75
MOV EAX,dword ptr [ESP + 0x10]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x40]
JMP 0x0049ac84
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
FSUB dword ptr [EAX + 0x8]
FDIV dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + -0x8]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX]
FLD dword ptr [ESP + 0x24]
FXCH
MOV EAX,dword ptr [ESP + 0x14]
FMUL ST2
SHL EAX,0x3
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x14]
INC EAX
ADD EBP,0xc
MOV dword ptr [ESP + 0x14],EAX
FSTP dword ptr [ESI + EBP*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
MOV ESI,dword ptr [ESP + 0x40]
FXCH ST2
FSTP dword ptr [EAX + EBP*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EBP*0x1 + -0x4]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EAX + 0x4]
FMUL ST1
FADD dword ptr [EAX + 0x4]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1 + 0x4]
FLD dword ptr [EBX]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EDX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDX*0x1 + 0x4]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDX*0x1 + 0x8]
FLD dword ptr [EBX + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
ADD EDX,0x10
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EDX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EAX]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049adde
MOV ECX,dword ptr [ESP + 0x18]
ADD ESI,EBP
ADD ECX,-0x8
ADD EBP,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV EAX,[0x00df9eb0]
MOV ECX,EBX
ADD EAX,EDX
MOV ESI,dword ptr [ECX]
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0xc]
INC ESI
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [ESP + 0x14],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0x10
JMP 0x0049adde
FSTP ST0
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x1c],EDI
ADD EDI,0x8
LEA ECX,[EAX + -0x8]
ADD EAX,0xc
MOV dword ptr [ESP + 0x10],ECX
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,EBX
ADD EBX,0x10
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x0049ab15
MOV EDX,dword ptr [ESP + 0x14]
CMP EDX,0x3
JGE 0x0049ae20
MOV EAX,dword ptr [ESP + 0x14]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
MOV EDI,dword ptr [0x00df9ea8]
MOV ECX,dword ptr [0x00df9eac]
MOV EBX,dword ptr [0x00dfa13c]
MOV EAX,[0x00dfa138]
XOR EDI,ECX
XOR EAX,ESI
XOR ECX,EDI
XOR ESI,EAX
MOV dword ptr [0x00df9eac],ECX
XOR EDI,ECX
MOV ECX,dword ptr [0x00df9eb0]
XOR EAX,ESI
XOR EBX,ECX
XOR EBP,EBP
XOR ECX,EBX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],ECX
XOR EBX,ECX
LEA ECX,[EDX + EDX*0x2]
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9ea8],EDI
MOV dword ptr [0x00dfa13c],EBX
LEA ECX,[EAX + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x40],EDX
MOV dword ptr [ESP + 0x10],ECX
LEA ECX,[EDI + EDX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,EDX
SHL ECX,0x4
TEST EDX,EDX
MOV dword ptr [ESP + 0x14],EBP
LEA ECX,[ECX + EBX*0x1 + -0x10]
JLE 0x0049b1ab
XOR EDX,EDX
ADD EAX,0x8
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x20]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [ESP + 0x40]
FLD dword ptr [EAX + -0x4]
FXCH
FMULP
FNSTSW AX
TEST AH,0x1
JZ 0x0049aef6
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049b178
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b100
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b100
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x40]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049af40
MOV EAX,dword ptr [ESP + 0x18]
FCOM dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049b100
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + -0x4]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x20]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + -0x4]
FXCH
FSUB dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x24]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049afb8
FDIV dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x40]
FLD dword ptr [EAX + 0x20]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x40]
TEST AH,0x1
JZ 0x0049afde
FCHS
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x0049aff5
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049b011
MOV EAX,dword ptr [ESP + 0x10]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x40]
JMP 0x0049b020
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
FSUB dword ptr [EAX + 0x8]
FDIV dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + -0x8]
MOV EAX,dword ptr [ESP + 0x10]
FSUB dword ptr [EAX]
FLD dword ptr [ESP + 0x24]
FXCH
MOV EAX,dword ptr [ESP + 0x14]
FMUL ST2
SHL EAX,0x3
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x14]
INC EAX
ADD EBP,0xc
MOV dword ptr [ESP + 0x14],EAX
FSTP dword ptr [ESI + EBP*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
MOV ESI,dword ptr [ESP + 0x40]
FXCH ST2
FSTP dword ptr [EAX + EBP*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EBP*0x1 + -0x4]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1]
MOV EAX,dword ptr [ESP + 0x1c]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EAX + 0x4]
FMUL ST1
FADD dword ptr [EAX + 0x4]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + ESI*0x1 + 0x4]
FLD dword ptr [EBX]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EDX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDX*0x1 + 0x4]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDX*0x1 + 0x8]
FLD dword ptr [EBX + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
ADD EDX,0x10
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EDX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EAX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049b17a
MOV ECX,dword ptr [ESP + 0x18]
ADD ESI,EBP
ADD ECX,-0x8
ADD EBP,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI]
MOV dword ptr [ESI + EAX*0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],ECX
MOV EAX,[0x00df9eb0]
MOV ECX,EBX
ADD EAX,EDX
MOV ESI,dword ptr [ECX]
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0xc]
INC ESI
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [ESP + 0x14],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0x10
JMP 0x0049b17a
FSTP ST0
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x1c],EDI
ADD EDI,0x8
LEA ECX,[EAX + -0x8]
ADD EAX,0xc
MOV dword ptr [ESP + 0x10],ECX
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,EBX
ADD EBX,0x10
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x0049aeb1
MOV EBP,dword ptr [ESP + 0x14]
CMP EBP,0x3
JGE 0x0049b1bc
MOV EAX,dword ptr [ESP + 0x14]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
MOV EAX,[0x00df9ea8]
MOV ECX,dword ptr [0x00df9eac]
MOV EDI,dword ptr [0x00dfa13c]
XOR EAX,ECX
MOV EBX,dword ptr [0x00dfa138]
XOR ECX,EAX
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
XOR EBX,ESI
XOR EDI,ECX
XOR ESI,EBX
XOR ECX,EDI
XOR EBX,ESI
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
MOV ECX,EBP
MOV dword ptr [0x00dfa138],EBX
MOV dword ptr [ESP + 0x40],ECX
XOR EDX,EDX
LEA EBP,[ECX + ECX*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00dfa13c],EDI
LEA EBX,[EBX + EBP*0x4 + -0xc]
LEA EBP,[EAX + ECX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],EBP
MOV EBP,EDI
SHL ECX,0x4
CMP dword ptr [ESP + 0x40],EDX
MOV dword ptr [ESP + 0x24],EAX
LEA ECX,[ECX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x18],EBP
JLE 0x0049b48d
MOV EAX,[0x00dfa138]
XOR EDI,EDI
ADD EAX,0x4
MOV dword ptr [ESP + 0x14],EDI
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049b283
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049b445
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b3cc
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b3cc
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049b2d9
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049b3cc
MOV EAX,dword ptr [ESP + 0x30]
MOV EBP,dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EBP]
FXCH
FSUB dword ptr [EBX + 0x4]
FXCH
FSUB dword ptr [EBX + 0x4]
MOV EBP,dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x14]
FDIVP
MOV dword ptr [ESI + EAX*0x1 + 0x4],EBP
MOV ESI,dword ptr [ESP + 0x20]
MOV EBP,dword ptr [0x00df9eb4]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [EBX + 0x8]
FMUL ST1
FADD dword ptr [EBX + 0x8]
FSTP dword ptr [EBP + EAX*0x1 + 0x8]
FLD dword ptr [ESI + -0x4]
FSUB dword ptr [EBX]
MOV ESI,dword ptr [0x00df9eb4]
FMUL ST1
FADD dword ptr [EBX]
MOV EBX,dword ptr [ESP + 0x24]
FSTP dword ptr [ESI + EAX*0x1]
MOV ESI,dword ptr [ESP + 0x1c]
MOV EBP,dword ptr [0x00df9eac]
FLD dword ptr [EBX]
FSUB dword ptr [ESI]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [EBP + EDX*0x8]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV EBP,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [ESI + 0x4]
MOV ESI,dword ptr [0x00df9eac]
FSTP dword ptr [ESI + EDX*0x8 + 0x4]
FLD dword ptr [EBP]
FSUB dword ptr [ECX]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EDI*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [ESI + EDI*0x1 + 0x4]
FLD dword ptr [EBP + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV ESI,dword ptr [0x00df9eb0]
ADD EAX,0xc
MOV dword ptr [ESP + 0x14],EAX
INC EDX
FMUL ST1
ADD EDI,0x10
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EDI*0x1 + -0x8]
FLD dword ptr [EBP + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EDI*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ECX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049b445
LEA EAX,[ECX + -0x4]
MOV ECX,dword ptr [ESP + 0x14]
ADD ESI,ECX
ADD ECX,0xc
MOV EBX,dword ptr [EAX]
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EAX,dword ptr [ESP + 0x24]
MOV EBX,dword ptr [0x00df9eac]
MOV ESI,dword ptr [EAX]
MOV dword ptr [EBX + EDX*0x8],ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + EDX*0x8 + 0x4],EAX
MOV EAX,[0x00df9eb0]
MOV ESI,EBP
ADD EAX,EDI
INC EDX
ADD EDI,0x10
MOV EBX,dword ptr [ESI]
MOV dword ptr [EAX],EBX
MOV EBX,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0x4],EBX
MOV EBX,dword ptr [ESI + 0x8]
MOV dword ptr [EAX + 0x8],EBX
MOV ESI,dword ptr [ESI + 0xc]
MOV dword ptr [EAX + 0xc],ESI
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,EBP
ADD EBP,0x10
LEA EBX,[EAX + -0x4]
ADD EAX,0xc
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ESP + 0x40]
DEC EAX
MOV dword ptr [ESP + 0x18],EBP
MOV dword ptr [ESP + 0x40],EAX
JNZ 0x0049b25a
MOV EBX,dword ptr [0x00dfa138]
MOV EAX,[0x00df9ea8]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x0049b493
MOV EBX,dword ptr [0x00dfa138]
CMP EDX,0x3
JGE 0x0049b4ae
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
MOV ECX,dword ptr [ESP + 0x30]
CMP dword ptr [ECX],0x0
JZ 0x0049b769
MOV ECX,dword ptr [0x00df9eac]
XOR EBX,ESI
XOR EAX,ECX
MOV EBP,EDX
XOR ECX,EAX
XOR ESI,EBX
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
XOR EBX,ESI
XOR EDI,ECX
MOV dword ptr [0x00dfa138],EBX
XOR ECX,EDI
XOR EDX,EDX
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
LEA ECX,[EBP + EBP*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00dfa13c],EDI
LEA EBX,[EBX + ECX*0x4 + -0xc]
LEA ECX,[EAX + EBP*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,EBP
SHL ECX,0x4
TEST EBP,EBP
MOV dword ptr [ESP + 0x40],EBP
LEA ECX,[ECX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x24],EAX
MOV dword ptr [ESP + 0x18],EDI
JLE 0x0049b764
MOV EAX,[0x00dfa138]
XOR EBP,EBP
ADD EAX,0x4
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049b570
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049b72f
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b6b6
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b6b6
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EBX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049b5c6
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x30]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049b6b6
MOV EAX,dword ptr [ESP + 0x30]
MOV EDI,dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EDI]
FXCH
FSUB dword ptr [EBX + 0x4]
FXCH
FSUB dword ptr [EBX + 0x4]
MOV EDI,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
FDIVP
MOV dword ptr [ESI + EAX*0x1 + 0x4],EDI
MOV ESI,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [0x00df9eb4]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [EBX + 0x8]
FMUL ST1
FADD dword ptr [EBX + 0x8]
FSTP dword ptr [EDI + EAX*0x1 + 0x8]
FLD dword ptr [ESI + -0x4]
FSUB dword ptr [EBX]
MOV ESI,dword ptr [0x00df9eb4]
MOV EDI,dword ptr [ESP + 0x24]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ESI + EAX*0x1]
MOV ESI,dword ptr [ESP + 0x1c]
MOV EBX,dword ptr [0x00df9eac]
FLD dword ptr [EDI]
FSUB dword ptr [ESI]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [EBX + EDX*0x8]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV EDI,dword ptr [ESP + 0x18]
FMUL ST1
FADD dword ptr [ESI + 0x4]
MOV ESI,dword ptr [0x00df9eac]
FSTP dword ptr [ESI + EDX*0x8 + 0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ECX]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBP*0x1]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [ESI + EBP*0x1 + 0x4]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV ESI,dword ptr [0x00df9eb0]
ADD EAX,0xc
MOV dword ptr [ESP + 0x14],EAX
INC EDX
FMUL ST1
ADD EBP,0x10
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EBP*0x1 + -0x8]
FLD dword ptr [EDI + 0xc]
FSUB dword ptr [ECX + 0xc]
FMUL ST1
FADD dword ptr [ECX + 0xc]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EBP*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [ECX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049b72f
LEA EAX,[ECX + -0x4]
MOV ECX,dword ptr [ESP + 0x14]
ADD ESI,ECX
ADD ECX,0xc
MOV EBX,dword ptr [EAX]
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EAX,dword ptr [ESP + 0x24]
MOV EBX,dword ptr [0x00df9eac]
MOV ESI,dword ptr [EAX]
MOV dword ptr [EBX + EDX*0x8],ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + EDX*0x8 + 0x4],EAX
MOV EAX,[0x00df9eb0]
MOV ESI,EDI
ADD EAX,EBP
INC EDX
ADD EBP,0x10
MOV EBX,dword ptr [ESI]
MOV dword ptr [EAX],EBX
MOV EBX,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0x4],EBX
MOV EBX,dword ptr [ESI + 0x8]
MOV dword ptr [EAX + 0x8],EBX
MOV ESI,dword ptr [ESI + 0xc]
MOV dword ptr [EAX + 0xc],ESI
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,EDI
ADD EDI,0x10
LEA EBX,[EAX + -0x4]
ADD EAX,0xc
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ESP + 0x40]
DEC EAX
MOV dword ptr [ESP + 0x18],EDI
MOV dword ptr [ESP + 0x40],EAX
JNZ 0x0049b547
CMP EDX,0x3
JL 0x0049b7c3
MOV EAX,dword ptr [ESP + 0x34]
CMP ESI,EAX
JZ 0x0049b7c3
LEA ECX,[EDX + EDX*0x2]
MOV EDI,EAX
SHL ECX,0x2
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EDI,dword ptr [ESP + 0x38]
LEA ECX,[EDX*0x8 + 0x0]
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eb0]
MOV EDI,dword ptr [ESP + 0x3c]
MOV ECX,EDX
SHL ECX,0x4
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
POP EDI
POP ESI
POP EBP
MOV EAX,EDX
POP EBX
ADD ESP,0x1c
RET
