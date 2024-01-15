; FUN_00498a60
SUB ESP,0x10
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x1c]
XOR EDX,EDX
CMP dword ptr [ESP + 0x20],0x0
PUSH EBX
MOV dword ptr [0x00dfaa04],EDX
MOV dword ptr [ESP + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x24]
PUSH EBP
PUSH ESI
PUSH EDI
LEA EDI,[EDX + EDX*0x2]
MOV ESI,0xdfa140
MOV dword ptr [0x00dfa138],ECX
LEA EBP,[ECX + EDI*0x4 + -0xc]
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00df9eac],0xdf9eb8
LEA EDX,[EAX + EDX*0x8 + -0x8]
MOV EDI,ECX
MOV EBX,EAX
JLE 0x00498cc3
MOV EAX,dword ptr [ESP + 0x30]
XOR ECX,ECX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EAX + 0x30]
FMUL dword ptr [EBP + 0x4]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x30]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FCOMP dword ptr [ESP + 0x30]
FMUL dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00498af4
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x00498c9d
FLD dword ptr [EBP]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498c54
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498c54
FLD dword ptr [EBP]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x1
JNZ 0x00498b2e
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498c54
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EBP + 0x4]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EDI]
FLD dword ptr [EAX + 0x30]
FXCH
FSUB dword ptr [EBP]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EBP + 0x4]
FXCH ST2
FMUL dword ptr [EBP]
FXCH
FST dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EDI]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00498b80
FDIV dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x30]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x30]
TEST AH,0x1
JZ 0x00498ba6
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x00498bbd
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00498bd5
FLD ST0
FSUB dword ptr [EBP + 0x4]
FDIV dword ptr [ESP + 0x30]
JMP 0x00498be0
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [EBP]
FDIV dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + ECX*0x1]
MOV EAX,[0x00df9eb4]
MOV ESI,dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [EAX + ECX*0x1 + 0x4]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [EBP + 0x8]
LEA EAX,[ESI*0x8 + 0x0]
INC ESI
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
FMUL ST1
ADD ECX,0xc
FADD dword ptr [EBP + 0x8]
FSTP dword ptr [ESI + ECX*0x1 + -0x4]
FLD dword ptr [EBX]
FSUB dword ptr [EDX]
MOV ESI,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [EDX + 0x4]
FMUL ST1
FADD dword ptr [EDX + 0x4]
MOV EDX,dword ptr [0x00df9eac]
FSTP dword ptr [EDX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x00498c9f
MOV EAX,EDI
ADD ESI,ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [EBX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EBX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD ECX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x00498c9f
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
MOV EBP,EDI
MOV EDX,EBX
ADD EDI,0xc
ADD EBX,0x8
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00498ac3
MOV ECX,dword ptr [0x00dfa138]
MOV EAX,[0x00df9ea8]
MOV EDX,dword ptr [ESP + 0x10]
CMP EDX,0x3
JGE 0x00498cd6
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV EDX,dword ptr [0x00df9eac]
XOR ECX,ESI
XOR EAX,EDX
XOR ESI,ECX
XOR EDX,EAX
XOR ECX,ESI
MOV dword ptr [0x00df9eac],EDX
XOR EAX,EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV [0x00df9ea8],EAX
MOV dword ptr [ESP + 0x30],EDX
MOV EBP,EAX
LEA EDI,[EDX + EDX*0x2]
LEA EDX,[EAX + EDX*0x8 + -0x8]
MOV EAX,dword ptr [ESP + 0x30]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],ECX
MOV dword ptr [ESP + 0x10],0x0
LEA EDI,[ECX + EDI*0x4 + -0xc]
MOV EBX,ECX
JLE 0x00498f21
XOR ECX,ECX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EAX + 0x28]
FMUL dword ptr [EDI + 0x4]
FLD dword ptr [EDI]
FLD dword ptr [EAX + 0x28]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FCOMP dword ptr [ESP + 0x30]
FMUL dword ptr [EBX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498d60
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00498f06
FLD dword ptr [EDI]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498ebc
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498ebc
FLD dword ptr [EDI]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x41
JZ 0x00498d98
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x1
JZ 0x00498ebc
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [EDI + 0x4]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FLD dword ptr [EAX + 0x28]
FXCH
FSUB dword ptr [EDI]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EBX + 0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x4]
FXCH ST2
FMUL dword ptr [EDI]
FXCH
FST dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004af9a8]
FXCH
FMUL dword ptr [EBX]
FNSTSW AX
TEST AH,0x40
FSUBP
JNZ 0x00498de8
FDIV dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x28]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x30]
TEST AH,0x1
JZ 0x00498e0e
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x00498e25
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00498e3d
FLD ST0
FSUB dword ptr [EDI + 0x4]
FDIV dword ptr [ESP + 0x30]
JMP 0x00498e47
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [EDI]
FDIV dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + ECX*0x1]
MOV EAX,[0x00df9eb4]
MOV ESI,dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [EAX + ECX*0x1 + 0x4]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [EDI + 0x8]
LEA EAX,[ESI*0x8 + 0x0]
INC ESI
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [0x00df9eb4]
FMUL ST1
ADD ECX,0xc
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [ESI + ECX*0x1 + -0x4]
FLD dword ptr [EBP]
FSUB dword ptr [EDX]
MOV ESI,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [EDX + 0x4]
FMUL ST1
FADD dword ptr [EDX + 0x4]
MOV EDX,dword ptr [0x00df9eac]
FSTP dword ptr [EDX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00498f08
MOV EAX,EBX
ADD ESI,ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [EBP]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EBP + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD ECX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x00498f08
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,EBX
MOV EDX,EBP
ADD EBX,0xc
ADD EBP,0x8
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00498d30
MOV ECX,dword ptr [ESP + 0x10]
CMP ECX,0x3
JGE 0x00498f34
MOV EAX,ECX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV EBX,dword ptr [0x00df9ea8]
MOV EAX,[0x00df9eac]
MOV EBP,dword ptr [0x00dfa138]
XOR EBX,EAX
XOR EAX,EBX
XOR EBP,ESI
MOV [0x00df9eac],EAX
XOR EBX,EAX
MOV EAX,ECX
XOR ESI,EBP
XOR EBP,ESI
XOR ECX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
LEA EDI,[EBP + EDX*0x4 + -0xc]
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9ea8],EBX
MOV dword ptr [ESP + 0x10],ECX
LEA EDX,[EBX + EAX*0x8 + -0x8]
JLE 0x0049919b
ADD EBP,0x8
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EAX + 0x2c]
FMUL dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FXCH
FSTP dword ptr [ESP + 0x30]
FCOMP dword ptr [ESP + 0x30]
FLD dword ptr [EBP + -0x4]
FMUL dword ptr [EAX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498fbc
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049917b
FLD dword ptr [EDI + 0x8]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499130
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499130
FLD dword ptr [EDI + 0x8]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x41
JZ 0x00498ff8
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x00499130
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EDI + 0x4]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x2c]
FXCH
FSUB dword ptr [EDI + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EBP]
FLD dword ptr [EDI + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x18]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00499052
FDIV dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x2c]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x30]
TEST AH,0x1
JZ 0x00499078
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x0049908f
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x004990a7
FLD ST0
FSUB dword ptr [EDI + 0x4]
FDIV dword ptr [ESP + 0x30]
JMP 0x004990b2
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [EDI + 0x8]
FDIV dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EDI]
FLD dword ptr [ESP + 0x18]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
ADD ECX,0xc
FMUL ST2
SHL EAX,0x3
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EDI]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + ECX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + ECX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + ECX*0x1 + -0x4]
FLD dword ptr [EBX]
FSUB dword ptr [EDX]
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x30]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [EDX + 0x4]
FMUL ST1
FADD dword ptr [EDX + 0x4]
MOV EDX,dword ptr [0x00df9eac]
FSTP dword ptr [EDX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049917d
LEA EAX,[EBP + -0x8]
ADD ESI,ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [EBX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EBX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD ECX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x0049917d
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
LEA EDI,[EBP + -0x8]
MOV EDX,EBX
ADD EBP,0xc
ADD EBX,0x8
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00498f8a
MOV ECX,dword ptr [ESP + 0x10]
CMP ECX,0x3
JGE 0x004991ac
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV EBX,dword ptr [0x00df9ea8]
MOV EAX,[0x00df9eac]
MOV EBP,dword ptr [0x00dfa138]
XOR EBX,EAX
XOR EAX,EBX
XOR EBP,ESI
MOV [0x00df9eac],EAX
XOR EBX,EAX
MOV EAX,ECX
XOR ESI,EBP
XOR EBP,ESI
XOR ECX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
LEA EDI,[EBP + EDX*0x4 + -0xc]
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9ea8],EBX
MOV dword ptr [ESP + 0x10],ECX
LEA EDX,[EBX + EAX*0x8 + -0x8]
JLE 0x00499413
ADD EBP,0x8
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EAX + 0x20]
FMUL dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FXCH
FSTP dword ptr [ESP + 0x30]
FCOMP dword ptr [ESP + 0x30]
FLD dword ptr [EBP + -0x4]
FMUL dword ptr [EAX + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x00499234
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004993f3
FLD dword ptr [EDI + 0x8]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x40
JNZ 0x004993a8
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x004993a8
FLD dword ptr [EDI + 0x8]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x1
JNZ 0x00499270
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JNZ 0x004993a8
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EDI + 0x4]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x20]
FXCH
FSUB dword ptr [EDI + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x4]
FXCH
FSUB dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EBP]
FLD dword ptr [EDI + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x18]
FXCH ST2
FMULP ST4
FXCH ST2
FMULP ST2
FXCH
FSUBP ST2,ST0
FCOMP dword ptr [0x004af9a8]
FNSTSW AX
TEST AH,0x40
JNZ 0x004992ca
FDIV dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [EAX + 0x20]
FXCH
FCOMP dword ptr [0x004af9a8]
FMUL ST1
FNSTSW AX
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x30]
TEST AH,0x1
JZ 0x004992f0
FCHS
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af9a8]
FLD dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x00499307
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0049931f
FLD ST0
FSUB dword ptr [EDI + 0x4]
FDIV dword ptr [ESP + 0x30]
JMP 0x0049932a
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [EDI + 0x8]
FDIV dword ptr [ESP + 0x14]
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EDI]
FLD dword ptr [ESP + 0x18]
FXCH
MOV EAX,dword ptr [ESP + 0x10]
ADD ECX,0xc
FMUL ST2
SHL EAX,0x3
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x10]
FADD dword ptr [EDI]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + ECX*0x1 + -0xc]
MOV EAX,[0x00df9eb4]
FXCH ST2
FSTP dword ptr [EAX + ECX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FXCH
FSTP dword ptr [EAX + ECX*0x1 + -0x4]
FLD dword ptr [EBX]
FSUB dword ptr [EDX]
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x30]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [EDX + 0x4]
FMUL ST1
FADD dword ptr [EDX + 0x4]
MOV EDX,dword ptr [0x00df9eac]
FSTP dword ptr [EDX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x004993f5
LEA EAX,[EBP + -0x8]
ADD ESI,ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [EBX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EBX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV ESI,dword ptr [0x00df9eb4]
INC EAX
ADD ECX,0xc
MOV dword ptr [ESP + 0x10],EAX
JMP 0x004993f5
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
LEA EDI,[EBP + -0x8]
MOV EDX,EBX
ADD EBP,0xc
ADD EBX,0x8
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00499202
MOV ECX,dword ptr [ESP + 0x10]
CMP ECX,0x3
JGE 0x00499424
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV EDI,dword ptr [0x00df9ea8]
MOV EAX,[0x00df9eac]
MOV EBX,dword ptr [0x00dfa138]
XOR EDI,EAX
XOR EAX,EDI
XOR EBX,ESI
MOV [0x00df9eac],EAX
XOR EDI,EAX
MOV EAX,ECX
XOR ESI,EBX
XOR EBX,ESI
XOR EDX,EDX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
TEST EAX,EAX
MOV dword ptr [0x00dfa138],EBX
MOV dword ptr [0x00df9ea8],EDI
LEA ECX,[EBX + ECX*0x4 + -0xc]
LEA EBP,[EDI + EAX*0x8 + -0x8]
MOV dword ptr [ESP + 0x30],EDI
JLE 0x004995f8
XOR EDI,EDI
ADD EBX,0x4
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x004994a1
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004995c8
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049957c
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049957c
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004994ef
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049957c
MOV EAX,dword ptr [ESP + 0x24]
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
MOV ECX,dword ptr [ESP + 0x30]
MOV ESI,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [EBP]
FMUL ST1
FADD dword ptr [EBP]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EBP + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBP + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004995c8
LEA ECX,[EBX + -0x4]
ADD ESI,EDI
INC EDX
ADD EDI,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x30]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI + EDX*0x8 + -0x8],ECX
MOV ECX,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + EDX*0x8 + -0x4],EAX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x30]
LEA ECX,[EBX + -0x4]
MOV EBP,EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x1c]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x0049947c
MOV EDI,dword ptr [0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
JMP 0x00499604
MOV EBP,dword ptr [0x00dfa138]
MOV EDI,dword ptr [0x00df9ea8]
CMP EDX,0x3
JGE 0x0049961f
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV EAX,dword ptr [ESP + 0x24]
CMP dword ptr [EAX],0x0
JZ 0x004997ee
MOV EAX,[0x00df9eac]
XOR EBP,ESI
XOR EDI,EAX
XOR ESI,EBP
XOR EAX,EDI
XOR EBP,ESI
MOV [0x00df9eac],EAX
XOR EDI,EAX
MOV EAX,EDX
XOR EDX,EDX
TEST EAX,EAX
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9ea8],EDI
LEA ECX,[EBP + ECX*0x4 + -0xc]
LEA EBX,[EDI + EAX*0x8 + -0x8]
MOV dword ptr [ESP + 0x30],EDI
JLE 0x004997e9
XOR EDI,EDI
ADD EBP,0x4
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049969e
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004997c7
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049977a
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049977a
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004996ee
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049977a
MOV EAX,dword ptr [ESP + 0x24]
ADD EDI,0xc
FLD dword ptr [EBP]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
FDIVP
MOV dword ptr [ESI + EDI*0x1 + -0x8],EAX
MOV ESI,dword ptr [0x00df9eb4]
LEA EAX,[EDX*0x8 + 0x0]
INC EDX
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EDI*0x1 + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0xc]
MOV ECX,dword ptr [ESP + 0x30]
MOV ESI,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [EBX]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ESI + EAX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EBX + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EBP]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004997c7
LEA ECX,[EBP + -0x4]
ADD ESI,EDI
INC EDX
ADD EDI,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x30]
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eac]
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI + EDX*0x8 + -0x8],ECX
MOV ECX,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + EDX*0x8 + -0x4],EAX
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x30]
LEA ECX,[EBP + -0x4]
MOV EBX,EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x1c]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00499678
CMP EDX,0x3
JL 0x00499829
MOV EDI,dword ptr [ESP + 0x28]
CMP ESI,EDI
JZ 0x00499829
LEA ECX,[EDX + EDX*0x2]
SHL ECX,0x2
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EDI,dword ptr [ESP + 0x2c]
LEA ECX,[EDX*0x8 + 0x0]
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
ADD ESP,0x10
RET
