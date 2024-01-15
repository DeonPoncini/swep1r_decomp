; FUN_00494c60
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
JLE 0x00494e2e
XOR EBX,EBX
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x24]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FLD dword ptr [EDI + 0x24]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FMUL dword ptr [EDX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00494ccf
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00494e12
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x00494de9
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00494de9
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x1
JNZ 0x00494d07
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00494de9
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x24]
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
JNZ 0x00494d51
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x24]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x00494d71
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00494d88
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00494da0
FLD ST0
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x00494daa
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
JZ 0x00494e14
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
JMP 0x00494e14
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00494ca3
MOV EBX,dword ptr [0x00dfa138]
CMP EBP,0x3
JL 0x004955f2
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
JLE 0x00494fe9
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
JNZ 0x00494e90
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00494fd3
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x00494faa
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00494faa
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x41
JZ 0x00494ec8
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x00494faa
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
JNZ 0x00494f12
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x28]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x00494f32
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00494f49
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00494f61
FLD ST0
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x00494f6b
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
JNZ 0x00494fd5
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
JMP 0x00494fd5
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00494e64
CMP EBP,0x3
JL 0x004955f2
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
JLE 0x004951ae
XOR EBX,EBX
ADD EDX,0x8
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [EDI + 0x1c]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x24]
FLD dword ptr [EDX + -0x4]
FMUL dword ptr [EDI + 0x1c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495053
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495197
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049516d
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049516d
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x41
JZ 0x0049508d
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x0049516d
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDI + 0x1c]
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
JNZ 0x004950df
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x1c]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x004950fb
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00495112
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049512a
FLD ST1
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x00495133
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
JNZ 0x00495199
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
JMP 0x00495199
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x00495026
CMP EBP,0x3
JL 0x004955f2
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
JLE 0x00495373
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
JZ 0x00495218
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x0049535c
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495332
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495332
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495252
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495332
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
JNZ 0x004952a4
FDIV dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x20]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FLD dword ptr [ESP + 0x24]
TEST AH,0x1
JZ 0x004952c0
FCHS
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x004952d7
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x004952ef
FLD ST1
FSUB dword ptr [ECX + 0x4]
FDIV dword ptr [ESP + 0x24]
JMP 0x004952f8
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
JZ 0x0049535e
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
JMP 0x0049535e
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x14],EAX
JNZ 0x004951eb
CMP EBP,0x3
JL 0x004955f2
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
JLE 0x0049549a
XOR EBX,EBX
ADD EDX,0x4
MOV dword ptr [ESP + 0x24],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x004953cd
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049547f
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495454
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495454
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004953ff
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00495454
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
JNZ 0x0049547f
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
JNZ 0x004953b0
MOV EDX,dword ptr [0x00dfa138]
CMP EBP,0x3
JGE 0x004954b5
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
JZ 0x004955d5
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
JLE 0x004955d0
XOR EBX,EBX
ADD EDX,0x4
MOV dword ptr [ESP + 0x24],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495509
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004955bb
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495590
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495590
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049553b
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495590
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
JZ 0x004955bb
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
JNZ 0x004954ec
CMP EBP,0x3
JL 0x004955f2
MOV EDI,dword ptr [ESP + 0x20]
CMP ESI,EDI
JZ 0x004955f2
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
