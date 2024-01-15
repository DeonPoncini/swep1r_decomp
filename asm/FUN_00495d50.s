; FUN_00495d50
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x8]
SUB ESP,0x8
LEA ECX,[EAX + EAX*0x2]
PUSH EBX
PUSH EBP
PUSH ESI
XOR EBP,EBP
MOV EBX,EDX
MOV ESI,0xdfa140
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
CMP EAX,EBP
MOV dword ptr [0x00dfaa04],EBP
MOV dword ptr [0x00dfa138],EBX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EDX + ECX*0x4 + -0xc]
JLE 0x00495f1e
XOR EBX,EBX
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x30]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FLD dword ptr [EDI + 0x30]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FMUL dword ptr [EDX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00495dbf
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00495f02
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495ed9
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495ed9
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495df7
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495ed9
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x30]
FLD dword ptr [EDX]
FSUB dword ptr [ECX]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + 0x4]
FXCH
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00495e41
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x30]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x00495e61
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00495e78
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00495e90
FLD ST0
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x00495e9a
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [ECX]
FDIV dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x10]
FSTP dword ptr [ESI + EBX*0x1]
MOV EAX,[0x00df9eb4]
INC EBP
FXCH
FSTP dword ptr [EAX + EBX*0x1 + 0x4]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
ADD EBX,0xc
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00495f04
MOV EAX,EDX
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x00495f04
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00495d93
MOV EBX,dword ptr [0x00dfa138]
CMP EBP,0x3
JL 0x004966e2
XOR EBX,ESI
MOV EAX,EBP
XOR ESI,EBX
XOR EBP,EBP
XOR EBX,ESI
LEA ECX,[EAX + EAX*0x2]
TEST EAX,EAX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EBX
LEA ECX,[EBX + ECX*0x4 + -0xc]
MOV EDX,EBX
JLE 0x004960d9
XOR EBX,EBX
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x28]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FLD dword ptr [EDI + 0x28]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FMUL dword ptr [EDX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495f80
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x004960c3
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049609a
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049609a
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x41
JZ 0x00495fb8
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x0049609a
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x28]
FLD dword ptr [EDX]
FSUB dword ptr [ECX]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + 0x4]
FXCH
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00496002
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x28]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x00496022
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00496039
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00496051
FLD ST0
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x0049605b
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [ECX]
FDIV dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x10]
FSTP dword ptr [ESI + EBX*0x1]
MOV EAX,[0x00df9eb4]
INC EBP
FXCH
FSTP dword ptr [EAX + EBX*0x1 + 0x4]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
ADD EBX,0xc
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x004960c5
MOV EAX,EDX
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x004960c5
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00495f54
CMP EBP,0x3
JL 0x004966e2
MOV EDX,dword ptr [0x00dfa138]
MOV EAX,EBP
XOR EDX,ESI
XOR EBP,EBP
XOR ESI,EDX
LEA ECX,[EAX + EAX*0x2]
XOR EDX,ESI
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
LEA ECX,[EDX + ECX*0x4 + -0xc]
JLE 0x0049629e
XOR EBX,EBX
ADD EDX,0x8
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x2c]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FLD dword ptr [EDX + -0x4]
FMUL dword ptr [EDI + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00496143
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00496287
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049625d
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049625d
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x41
JZ 0x0049617d
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x0049625d
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x2c]
FLD dword ptr [EDX]
FSUB dword ptr [ECX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + -0x4]
FXCH
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EDX]
FLD dword ptr [ECX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x10]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x004961cf
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x2c]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x004961eb
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00496202
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049621a
FLD ST1
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x00496223
FLD ST0
FSUB dword ptr [ECX + 0x8]
FDIV dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + -0x8]
FSUB dword ptr [ECX]
INC EBP
ADD EBX,0xc
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + EBX*0x1 + -0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00496289
LEA EAX,[EDX + -0x8]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x00496289
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00496116
CMP EBP,0x3
JL 0x004966e2
MOV EDX,dword ptr [0x00dfa138]
MOV EAX,EBP
XOR EDX,ESI
XOR EBP,EBP
XOR ESI,EDX
LEA ECX,[EAX + EAX*0x2]
XOR EDX,ESI
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
LEA ECX,[EDX + ECX*0x4 + -0xc]
JLE 0x00496463
XOR EBX,EBX
ADD EDX,0x8
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x20]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FLD dword ptr [EDX + -0x4]
FMUL dword ptr [EDI + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x00496308
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049644c
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496422
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496422
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x1
JNZ 0x00496342
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00496422
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x20]
FLD dword ptr [EDX]
FSUB dword ptr [ECX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + -0x4]
FXCH
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EDX]
FLD dword ptr [ECX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x10]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496394
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x20]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x004963b0
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x004963c7
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x004963df
FLD ST1
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x004963e8
FLD ST0
FSUB dword ptr [ECX + 0x8]
FDIV dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + -0x8]
FSUB dword ptr [ECX]
INC EBP
ADD EBX,0xc
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + EBX*0x1 + -0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049644e
LEA EAX,[EDX + -0x8]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x0049644e
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x004962db
CMP EBP,0x3
JL 0x004966e2
MOV EDX,dword ptr [0x00dfa138]
MOV EAX,EBP
XOR EDX,ESI
XOR EBP,EBP
XOR ESI,EDX
LEA ECX,[EAX + EAX*0x2]
XOR EDX,ESI
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
LEA ECX,[EDX + ECX*0x4 + -0xc]
JLE 0x0049658a
XOR EBX,EBX
ADD EDX,0x4
MOV dword ptr [ESP + 0x24],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x004964bd
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049656f
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496544
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496544
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004964ef
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00496544
FLD dword ptr [EDX]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EDI + 0x4]
INC EBP
FDIVP
MOV dword ptr [ESI + EBX*0x1 + 0x4],EAX
MOV EAX,[0x00df9eb4]
ADD EBX,0xc
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0xc]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049656f
LEA EAX,[EDX + -0x4]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x24]
LEA ECX,[EDX + -0x4]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x24],EAX
JNZ 0x004964a0
MOV EDX,dword ptr [0x00dfa138]
CMP EBP,0x3
JGE 0x004965a5
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
CMP dword ptr [EDI],0x0
JZ 0x004966c5
XOR EDX,ESI
MOV EAX,EBP
XOR ESI,EDX
XOR EBP,EBP
XOR EDX,ESI
LEA ECX,[EAX + EAX*0x2]
TEST EAX,EAX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EDX
LEA ECX,[EDX + ECX*0x4 + -0xc]
JLE 0x004966c0
XOR EBX,EBX
ADD EDX,0x4
MOV dword ptr [ESP + 0x24],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x004965f9
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004966ab
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496680
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00496680
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049662b
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00496680
FLD dword ptr [EDX]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EDI + 0x8]
INC EBP
FDIVP
MOV dword ptr [ESI + EBX*0x1 + 0x4],EAX
MOV EAX,[0x00df9eb4]
ADD EBX,0xc
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0xc]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004966ab
LEA EAX,[EDX + -0x4]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x24]
LEA ECX,[EDX + -0x4]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x24],EAX
JNZ 0x004965dc
CMP EBP,0x3
JL 0x004966e2
MOV EDI,dword ptr [ESP + 0x20]
CMP ESI,EDI
JZ 0x004966e2
LEA ECX,[EBP + EBP*0x2]
SHL ECX,0x2
MOV EDX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EDX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
POP EDI
MOV EAX,EBP
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
