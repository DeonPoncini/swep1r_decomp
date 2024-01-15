; FUN_00496e40
SUB ESP,0x14
MOV EDX,dword ptr [ESP + 0x1c]
XOR EAX,EAX
MOV [0x00dfaa04],EAX
MOV dword ptr [ESP],EAX
MOV EAX,dword ptr [ESP + 0x24]
PUSH EBX
PUSH EBP
PUSH ESI
LEA ECX,[EAX + EAX*0x2]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x30]
MOV ESI,0xdfa140
LEA ECX,[EDX + ECX*0x4 + -0xc]
MOV EBX,EDI
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EAX
SHL ECX,0x4
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EDX
MOV dword ptr [0x00dfa13c],EBX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],0xdfa500
LEA ECX,[ECX + EDI*0x1 + -0x10]
MOV EBP,EDX
JLE 0x004970e5
XOR EBX,EBX
XOR EDX,EDX
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x30]
MOV EAX,dword ptr [ESP + 0x34]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x30]
FXCH ST2
FSTP dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x1c]
FMUL dword ptr [EBP + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00496ee0
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004970bc
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497067
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497067
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00496f22
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497067
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x30]
FXCH
MOV EAX,dword ptr [ESP + 0x34]
FSUB dword ptr [EAX]
FXCH ST2
FSTP dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FXCH
FSUB dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [EAX]
FXCH
FST dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00496f7c
FDIV dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x30]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x14]
TEST AH,0x1
JZ 0x00496fa2
FCHS
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x00496fb9
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00496fd5
MOV EAX,dword ptr [ESP + 0x34]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x14]
JMP 0x00496fe3
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [EAX]
FDIV dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
ADD EBX,0x10
FSTP dword ptr [ESI + EDX*0x1]
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0xc
FXCH
FSTP dword ptr [ESI + EDX*0x1 + -0x8]
FLD dword ptr [EBP + 0x8]
FSUB dword ptr [EAX + 0x8]
MOV ESI,dword ptr [ESP + 0x10]
INC ESI
FMUL ST1
MOV dword ptr [ESP + 0x10],ESI
FADD dword ptr [EAX + 0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004970be
MOV EAX,EBP
ADD ESI,EDX
ADD EDX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ECX,dword ptr [0x00df9eb0]
MOV EAX,EDI
ADD ECX,EBX
MOV ESI,dword ptr [EAX]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0xc]
INC ESI
MOV dword ptr [ECX + 0xc],EAX
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EBX,0x10
JMP 0x004970be
FSTP ST0
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x34],EBP
MOV ECX,EDI
ADD EBP,0xc
ADD EDI,0x10
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x00496ea7
MOV EDX,dword ptr [0x00dfa138]
MOV EBX,dword ptr [0x00dfa13c]
MOV EAX,dword ptr [ESP + 0x10]
CMP EAX,0x3
JGE 0x004970f6
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [0x00df9eb0]
XOR EDX,ESI
XOR EBX,ECX
XOR ESI,EDX
XOR ECX,EBX
XOR EDX,ESI
MOV dword ptr [0x00df9eb0],ECX
XOR EBX,ECX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EDX
MOV dword ptr [0x00dfa13c],EBX
LEA ECX,[EDX + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],0x0
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EAX
SHL ECX,0x4
TEST EAX,EAX
LEA ECX,[ECX + EBX*0x1 + -0x10]
MOV EBP,EDX
MOV EDI,EBX
JLE 0x00497382
XOR EBX,EBX
XOR EDX,EDX
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x28]
MOV EAX,dword ptr [ESP + 0x34]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x28]
FXCH ST2
FSTP dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x1c]
FMUL dword ptr [EBP + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497189
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497365
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497310
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497310
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x41
JZ 0x004971cb
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x00497310
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x28]
FXCH
MOV EAX,dword ptr [ESP + 0x34]
FSUB dword ptr [EAX]
FXCH ST2
FSTP dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FXCH
FSUB dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [EAX]
FXCH
FST dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00497225
FDIV dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x28]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x14]
TEST AH,0x1
JZ 0x0049724b
FCHS
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x00497262
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049727e
MOV EAX,dword ptr [ESP + 0x34]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x14]
JMP 0x0049728c
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [EAX]
FDIV dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
ADD EBX,0x10
FSTP dword ptr [ESI + EDX*0x1]
MOV ESI,dword ptr [0x00df9eb4]
ADD EDX,0xc
FXCH
FSTP dword ptr [ESI + EDX*0x1 + -0x8]
FLD dword ptr [EBP + 0x8]
FSUB dword ptr [EAX + 0x8]
MOV ESI,dword ptr [ESP + 0x10]
INC ESI
FMUL ST1
MOV dword ptr [ESP + 0x10],ESI
FADD dword ptr [EAX + 0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497367
MOV EAX,EBP
ADD ESI,EDX
ADD EDX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ECX,dword ptr [0x00df9eb0]
MOV EAX,EDI
ADD ECX,EBX
MOV ESI,dword ptr [EAX]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0xc]
INC ESI
MOV dword ptr [ECX + 0xc],EAX
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EBX,0x10
JMP 0x00497367
FSTP ST0
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x34],EBP
MOV ECX,EDI
ADD EBP,0xc
ADD EDI,0x10
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x00497150
MOV ECX,dword ptr [ESP + 0x10]
CMP ECX,0x3
JGE 0x00497395
MOV EAX,ECX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV EDI,dword ptr [0x00dfa13c]
MOV EAX,[0x00df9eb0]
MOV EBP,dword ptr [0x00dfa138]
XOR EDI,EAX
XOR EAX,EDI
XOR EBP,ESI
MOV [0x00df9eb0],EAX
XOR EDI,EAX
MOV EAX,ECX
XOR ESI,EBP
XOR EBP,ESI
XOR EDX,EDX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00dfa13c],EDI
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EAX
SHL ECX,0x4
TEST EAX,EAX
LEA ECX,[ECX + EDI*0x1 + -0x10]
JLE 0x00497646
XOR EBX,EBX
ADD EBP,0x8
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x2c]
MOV EAX,dword ptr [ESP + 0x34]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP + -0x4]
FMUL dword ptr [EAX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497430
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497622
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x40
JNZ 0x004975cc
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x004975cc
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x41
JZ 0x00497474
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x004975cc
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x2c]
FXCH
MOV EAX,dword ptr [ESP + 0x34]
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x1c]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x004974d6
FDIV dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x2c]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
TEST AH,0x1
JZ 0x004974fc
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x00497513
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049752f
MOV EAX,dword ptr [ESP + 0x34]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x18]
JMP 0x0049753e
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [EAX + 0x8]
FDIV dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x34]
ADD EDX,0xc
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EAX]
FLD dword ptr [ESP + 0x1c]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
ADD EBX,0x10
FMUL ST2
INC EAX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x34]
FADD dword ptr [EAX]
FSTP dword ptr [ESI + EDX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + EDX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497624
LEA EAX,[EBP + -0x8]
ADD ESI,EDX
ADD EDX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ECX,dword ptr [0x00df9eb0]
MOV EAX,EDI
ADD ECX,EBX
MOV ESI,dword ptr [EAX]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0xc]
INC ESI
MOV dword ptr [ECX + 0xc],EAX
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EBX,0x10
JMP 0x00497624
FSTP ST0
MOV EAX,dword ptr [ESP + 0x20]
LEA ECX,[EBP + -0x8]
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EDI
ADD EBP,0xc
ADD EDI,0x10
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x004973f6
MOV EDX,dword ptr [ESP + 0x10]
CMP EDX,0x3
JGE 0x00497657
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV EDI,dword ptr [0x00dfa13c]
MOV EAX,[0x00df9eb0]
MOV EBP,dword ptr [0x00dfa138]
XOR EDI,EAX
XOR EAX,EDI
XOR EBP,ESI
MOV [0x00df9eb0],EAX
XOR EDI,EAX
MOV EAX,EDX
XOR ESI,EBP
XOR EBP,ESI
XOR EDX,EDX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00dfa13c],EDI
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EAX
SHL ECX,0x4
TEST EAX,EAX
LEA ECX,[ECX + EDI*0x1 + -0x10]
JLE 0x00497908
XOR EBX,EBX
ADD EBP,0x8
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x20]
MOV EAX,dword ptr [ESP + 0x34]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP + -0x4]
FMUL dword ptr [EAX + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x004976f2
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004978e4
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049788e
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049788e
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX + 0x8]
FCOMP dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497736
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049788e
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x20]
FXCH
MOV EAX,dword ptr [ESP + 0x34]
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x1c]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497798
FDIV dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x20]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
TEST AH,0x1
JZ 0x004977be
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x004977d5
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x004977f1
MOV EAX,dword ptr [ESP + 0x34]
FLD ST0
FSUB dword ptr [EAX + 0x4]
FDIV dword ptr [ESP + 0x18]
JMP 0x00497800
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [EAX + 0x8]
FDIV dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x34]
ADD EDX,0xc
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EAX]
FLD dword ptr [ESP + 0x1c]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
ADD EBX,0x10
FMUL ST2
INC EAX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x34]
FADD dword ptr [EAX]
FSTP dword ptr [ESI + EDX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + EDX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + EDX*0x1 + -0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ECX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb0]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004978e6
LEA EAX,[EBP + -0x8]
ADD ESI,EDX
ADD EDX,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ECX,dword ptr [0x00df9eb0]
MOV EAX,EDI
ADD ECX,EBX
MOV ESI,dword ptr [EAX]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0xc]
INC ESI
MOV dword ptr [ECX + 0xc],EAX
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
ADD EBX,0x10
JMP 0x004978e6
FSTP ST0
MOV EAX,dword ptr [ESP + 0x20]
LEA ECX,[EBP + -0x8]
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,EDI
ADD EBP,0xc
ADD EDI,0x10
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x004976b8
MOV EDX,dword ptr [ESP + 0x10]
CMP EDX,0x3
JGE 0x00497919
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
MOV EBX,dword ptr [0x00df9eb0]
XOR ECX,ESI
MOV EAX,EDX
XOR ESI,ECX
XOR ECX,ESI
XOR EDI,EBX
LEA EDX,[EAX + EAX*0x2]
MOV dword ptr [0x00dfa138],ECX
XOR EBX,EDI
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[ECX + EDX*0x4 + -0xc]
MOV EDX,EAX
XOR EDI,EBX
MOV dword ptr [0x00df9eb0],EBX
SHL EDX,0x4
TEST EAX,EAX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x10],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x34],EDI
JLE 0x00497b33
MOV EBX,dword ptr [0x00dfa138]
XOR EBP,EBP
XOR EDI,EDI
ADD EBX,0x4
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x004979ab
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497af9
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497a9d
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497a9d
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004979f9
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00497a9d
MOV EAX,dword ptr [ESP + 0x28]
ADD EDI,0xc
FLD dword ptr [EBX]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x4]
ADD EBP,0x10
FDIVP
MOV dword ptr [ESI + EDI*0x1 + -0x8],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00df9eb4]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDI*0x1 + -0x4]
FLD dword ptr [EBX + -0x4]
FSUB dword ptr [ECX]
MOV EAX,dword ptr [ESP + 0x34]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0xc]
FLD dword ptr [EAX]
FSUB dword ptr [EDX]
MOV ECX,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ECX + EBP*0x1 + -0x10]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV ECX,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [ECX + EBP*0x1 + -0xc]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBP*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497af9
LEA ECX,[EBX + -0x4]
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [ECX]
MOV dword ptr [ESI],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x34]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV EDX,dword ptr [0x00df9eb0]
MOV ECX,dword ptr [EAX]
ADD EDX,EBP
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [EDX + 0x8],ECX
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [EDX + 0xc],EAX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EBP,0x10
MOV EAX,dword ptr [ESP + 0x34]
LEA ECX,[EBX + -0x4]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x34],EAX
MOV EAX,dword ptr [ESP + 0x20]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x00497986
MOV ECX,dword ptr [0x00dfa138]
MOV EBP,dword ptr [ESP + 0x10]
MOV EBX,dword ptr [0x00df9eb0]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x00497b3d
MOV EBP,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [0x00dfa138]
CMP EBP,0x3
JGE 0x00497b58
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV EDX,dword ptr [ESP + 0x28]
CMP dword ptr [EDX],0x0
JZ 0x00497d5a
XOR ECX,ESI
MOV EAX,EBP
XOR ESI,ECX
XOR EDI,EBX
XOR ECX,ESI
LEA EDX,[EAX + EAX*0x2]
MOV dword ptr [0x00dfa138],ECX
XOR EBX,EDI
LEA ECX,[ECX + EDX*0x4 + -0xc]
MOV EDX,EAX
XOR EDI,EBX
XOR EBP,EBP
SHL EDX,0x4
TEST EAX,EAX
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],EBX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x10],EBP
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x34],EDI
JLE 0x00497d55
MOV EBX,dword ptr [0x00dfa138]
XOR EDI,EDI
ADD EBX,0x4
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497be1
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x00497d2f
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497cd3
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497cd3
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x00497c2f
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497cd3
MOV EAX,dword ptr [ESP + 0x28]
ADD EDI,0xc
FLD dword ptr [EBX]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
ADD EBP,0x10
FDIVP
MOV dword ptr [ESI + EDI*0x1 + -0x8],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00df9eb4]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EDI*0x1 + -0x4]
FLD dword ptr [EBX + -0x4]
FSUB dword ptr [ECX]
MOV EAX,dword ptr [ESP + 0x34]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0xc]
FLD dword ptr [EAX]
FSUB dword ptr [EDX]
MOV ECX,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ECX + EBP*0x1 + -0x10]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV ECX,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [ECX + EBP*0x1 + -0xc]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBP*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x00497d2f
LEA ECX,[EBX + -0x4]
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [ECX]
MOV dword ptr [ESI],EDX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x34]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV EDX,dword ptr [0x00df9eb0]
MOV ECX,dword ptr [EAX]
ADD EDX,EBP
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [EDX + 0x8],ECX
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [EDX + 0xc],EAX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EBP,0x10
MOV EAX,dword ptr [ESP + 0x34]
LEA ECX,[EBX + -0x4]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x34],EAX
MOV EAX,dword ptr [ESP + 0x20]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x20],EAX
JNZ 0x00497bbc
MOV EBP,dword ptr [ESP + 0x10]
CMP EBP,0x3
JL 0x00497d94
MOV EDI,dword ptr [ESP + 0x2c]
CMP ESI,EDI
JZ 0x00497d94
LEA ECX,[EBP + EBP*0x2]
SHL ECX,0x2
MOV EDX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EDX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eb0]
MOV EDI,dword ptr [ESP + 0x30]
MOV ECX,EBP
SHL ECX,0x4
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
POP EDI
MOV EAX,EBP
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
