; FUN_00493310
SUB ESP,0x70
MOV ECX,dword ptr [ESP + 0x74]
PUSH EBP
MOV EDX,dword ptr [ECX + 0x14]
MOV EBP,dword ptr [ECX + 0x4]
MOV EAX,dword ptr [ECX + 0x10]
MOV dword ptr [ESP + 0x18],EBP
TEST EDX,EDX
JNZ 0x00493b6e
PUSH EDI
PUSH ESI
TEST EAX,EAX
PUSH EBX
JZ 0x00493b07
CMP dword ptr [EAX],0x0
JNZ 0x00493b07
ADD EAX,0x8
MOV dword ptr [ESP + 0x1c],0x8
MOV dword ptr [ESP + 0x34],EAX
MOV EBX,EAX
CMP dword ptr [EBX],0x0
JZ 0x00493422
MOV EBP,dword ptr [EBX + 0x5de8]
LEA EAX,[EBX + 0x20]
MOV dword ptr [ESP + 0x2c],EBP
MOV dword ptr [ESP + 0x20],0x0
MOV EDX,dword ptr [EBP + 0x58]
MOV ECX,dword ptr [EBP + 0x5c]
TEST EDX,EDX
JBE 0x00493422
LEA EDI,[ECX + 0x44]
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,dword ptr [EDI]
XOR ESI,ESI
TEST ECX,ECX
JZ 0x00493400
MOV EAX,dword ptr [EDI + -0x4]
DEC ECX
MOV dword ptr [ESP + 0x30],ECX
MOV EAX,dword ptr [EBX + EAX*0x4 + 0x20]
CMP EAX,ECX
JZ 0x00493400
MOV EDX,dword ptr [EDI + 0x4]
LEA ECX,[EAX + 0x1]
FLD dword ptr [EBX + 0x5de0]
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
FCOMP dword ptr [EDX + EAX*0x8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00493400
LEA EAX,[ECX + 0x1]
MOV EBP,EAX
SHL EBP,0x3
SUB EBP,EAX
LEA EDX,[EDX + EBP*0x8]
MOV EBP,dword ptr [ESP + 0x30]
CMP ECX,EBP
JNZ 0x004933d8
MOV ESI,0x1
JMP 0x004933f2
FLD dword ptr [EBX + 0x5de0]
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x004933ee
MOV ESI,0x1
JMP 0x004933f2
INC ECX
ADD EDX,0x38
TEST ESI,ESI
JZ 0x004933cd
MOV EDX,dword ptr [ESP + 0x18]
MOV EBP,dword ptr [ESP + 0x2c]
MOV dword ptr [EDX],ECX
MOV EAX,dword ptr [ESP + 0x20]
MOV ESI,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [EBP + 0x58]
INC EAX
ADD ESI,0x4
ADD EDI,0x4c
CMP EAX,ECX
MOV dword ptr [ESP + 0x20],EAX
MOV dword ptr [ESP + 0x18],ESI
JC 0x00493385
MOV EAX,dword ptr [ESP + 0x1c]
ADD EBX,0x5df4
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00493352
MOV EAX,dword ptr [ESP + 0x24]
XOR ECX,ECX
MOV dword ptr [ESP + 0x2c],ECX
MOV EDX,dword ptr [EAX + 0x74]
MOV EDI,dword ptr [EAX + 0x78]
CMP EDX,ECX
JBE 0x00493b43
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x20],ECX
ADD EDI,0x80
XOR EAX,EAX
MOV ESI,dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x44],EAX
XOR ECX,ECX
MOV dword ptr [ESP + 0x48],EAX
XOR EDX,EDX
MOV dword ptr [ESP + 0x4c],EAX
MOV dword ptr [ESP + 0x38],ECX
MOV dword ptr [ESP + 0x68],EDX
MOV dword ptr [ESP + 0x74],EAX
MOV dword ptr [ESP + 0x3c],ECX
MOV dword ptr [ESP + 0x6c],EDX
MOV dword ptr [ESP + 0x78],EAX
MOV dword ptr [ESP + 0x40],ECX
MOV dword ptr [ESP + 0x70],EDX
MOV dword ptr [ESP + 0x7c],EAX
MOV dword ptr [ESP + 0x28],0x8
MOV EBP,dword ptr [ESI + 0x5de8]
TEST EBP,EBP
JZ 0x0049385b
MOV ECX,dword ptr [EBP + 0x4c]
MOV EAX,dword ptr [EDI + 0x4]
TEST EAX,ECX
JZ 0x004934cc
MOV EBX,dword ptr [ESI + 0xc]
JMP 0x004934cf
MOV EBX,dword ptr [ESI + 0x8]
TEST byte ptr [ESI],0x2
JZ 0x0049385b
MOV ECX,dword ptr [EDI]
LEA EDX,[ECX + ECX*0x8]
LEA EAX,[ECX + EDX*0x2]
MOV EDX,dword ptr [EBP + 0x5c]
LEA EDX,[EDX + EAX*0x4]
MOV EAX,dword ptr [EDX + 0x44]
TEST EAX,EAX
JZ 0x0049385b
CMP EBX,dword ptr [ESP + 0x18]
JL 0x0049385b
CMP EBX,dword ptr [ESP + 0x1c]
JGE 0x00493516
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004af964]
FNSTSW AX
TEST AH,0x1
JZ 0x0049385b
CMP dword ptr [EBP + 0x58],ECX
JBE 0x0049385b
MOV ECX,dword ptr [ESI + ECX*0x4 + 0x20]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
MOV ECX,dword ptr [EDX + 0x48]
FLD dword ptr [ESI + 0x5de0]
FSUB dword ptr [ECX + EAX*0x8]
LEA EAX,[ECX + EAX*0x8]
MOV ECX,dword ptr [EAX + 0x4]
TEST CL,0x1
JZ 0x00493575
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FADD dword ptr [EAX + 0x8]
FXCH ST2
FADD dword ptr [EAX + 0xc]
FXCH
FADD dword ptr [EAX + 0x10]
FXCH ST2
FSTP dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x60]
FSTP dword ptr [ESP + 0x64]
JMP 0x0049358d
LEA EDX,[EAX + 0x8]
MOV EBP,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x5c],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [ESP + 0x60],EBP
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ESP + 0x64],EDX
TEST CL,0x2
JZ 0x004935c0
FLD dword ptr [EAX + 0x2c]
FLD dword ptr [EAX + 0x30]
FLD dword ptr [EAX + 0x34]
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FADD dword ptr [EAX + 0x14]
FXCH ST2
FADD dword ptr [EAX + 0x18]
FXCH
FADD dword ptr [EAX + 0x1c]
FXCH ST2
FSTP dword ptr [ESP + 0x50]
FSTP ST2
JMP 0x004935e1
ADD EAX,0x14
FSTP ST0
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x50],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x54],EDX
MOV EAX,dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x54]
MOV dword ptr [ESP + 0x58],EAX
FLD dword ptr [ESP + 0x58]
FLD dword ptr [ESP + 0x5c]
FLD dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x50]
FXCH ST3
FSUB dword ptr [EDI + 0x28]
PUSH ECX
FSTP dword ptr [ESP + 0x60]
FXCH
FSUB dword ptr [EDI + 0x2c]
FXCH
FSUB dword ptr [EDI + 0x30]
FXCH ST4
FSUB dword ptr [EDI + 0x38]
FXCH ST3
FSUB dword ptr [EDI + 0x3c]
FXCH ST2
FSUB dword ptr [EDI + 0x34]
FXCH
FSTP dword ptr [ESP + 0x64]
FXCH ST3
FSTP dword ptr [ESP + 0x68]
FXCH
FSTP dword ptr [ESP + 0x58]
FSTP dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP]
CALL 0x0048c910
MOV ECX,dword ptr [ESP + 0x58]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x50]
PUSH ECX
CALL 0x0048c910
MOV EDX,dword ptr [ESP + 0x5c]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x54]
PUSH EDX
CALL 0x0048c910
FLD dword ptr [ESI + 0x18]
FCOMP dword ptr [0x004af964]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x1
JZ 0x004936bf
FLD dword ptr [ESI + 0x18]
FLD dword ptr [ESI + 0x18]
FLD dword ptr [ESI + 0x18]
FLD dword ptr [ESI + 0x18]
FLD dword ptr [ESI + 0x18]
FLD dword ptr [ESI + 0x18]
FXCH ST5
FMUL dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x5c]
FXCH ST3
FMUL dword ptr [ESP + 0x60]
FXCH ST2
FMUL dword ptr [ESP + 0x64]
FXCH
FMUL dword ptr [ESP + 0x50]
FXCH ST3
FMUL dword ptr [ESP + 0x54]
FXCH ST4
FMUL dword ptr [ESP + 0x58]
FXCH ST2
FSTP dword ptr [ESP + 0x60]
FSTP dword ptr [ESP + 0x64]
FXCH
FSTP dword ptr [ESP + 0x50]
FXCH
FSTP dword ptr [ESP + 0x54]
FSTP dword ptr [ESP + 0x58]
MOV EAX,dword ptr [ESP + 0x1c]
CMP EBX,EAX
JNZ 0x00493733
FLD dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x4c]
FLD dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x40]
FXCH ST5
FADD dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x10]
FXCH ST4
FADD dword ptr [ESP + 0x60]
FSTP dword ptr [ESP + 0x48]
FXCH ST2
FADD dword ptr [ESP + 0x64]
FXCH
FADD dword ptr [ESP + 0x50]
FXCH ST2
FADD dword ptr [ESP + 0x54]
FXCH ST4
FADD dword ptr [ESP + 0x58]
FXCH ST3
FADD dword ptr [ESI + 0x18]
FXCH
FSTP dword ptr [ESP + 0x4c]
FXCH
FSTP dword ptr [ESP + 0x38]
FXCH ST2
FSTP dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x40]
FSTP dword ptr [ESP + 0x10]
JMP 0x0049385b
JLE 0x004937b1
MOV ECX,dword ptr [ESP + 0x44]
MOV EDX,dword ptr [ESP + 0x48]
MOV dword ptr [ESP + 0x68],ECX
MOV ECX,dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x6c],EDX
MOV EDX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x70],ECX
MOV ECX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESP + 0x74],EDX
MOV EDX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x78],ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x7c],EDX
MOV EDX,dword ptr [ESP + 0x5c]
MOV dword ptr [ESP + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x64]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x60]
MOV dword ptr [ESP + 0x44],EDX
MOV EDX,dword ptr [ESP + 0x50]
MOV dword ptr [ESP + 0x48],EAX
MOV EAX,dword ptr [ESP + 0x54]
MOV dword ptr [ESP + 0x4c],ECX
MOV ECX,dword ptr [ESP + 0x58]
MOV dword ptr [ESP + 0x38],EDX
MOV EDX,dword ptr [ESI + 0x18]
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x3c],EAX
MOV dword ptr [ESP + 0x40],ECX
MOV dword ptr [ESP + 0x10],EDX
JMP 0x0049385b
CMP EBX,dword ptr [ESP + 0x18]
JLE 0x004937f4
MOV EAX,dword ptr [ESP + 0x5c]
MOV ECX,dword ptr [ESP + 0x60]
MOV EDX,dword ptr [ESP + 0x64]
MOV dword ptr [ESP + 0x68],EAX
MOV EAX,dword ptr [ESP + 0x50]
MOV dword ptr [ESP + 0x6c],ECX
MOV ECX,dword ptr [ESP + 0x54]
MOV dword ptr [ESP + 0x70],EDX
MOV EDX,dword ptr [ESP + 0x58]
MOV dword ptr [ESP + 0x74],EAX
MOV EAX,dword ptr [ESI + 0x18]
MOV dword ptr [ESP + 0x78],ECX
MOV dword ptr [ESP + 0x7c],EDX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x18],EBX
JMP 0x0049385b
FLD dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x6c]
FLD dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x78]
FLD dword ptr [ESP + 0x7c]
FXCH ST5
FADD dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x14]
FXCH ST4
FADD dword ptr [ESP + 0x60]
FSTP dword ptr [ESP + 0x6c]
FXCH ST2
FADD dword ptr [ESP + 0x64]
FXCH
FADD dword ptr [ESP + 0x50]
FXCH ST2
FADD dword ptr [ESP + 0x54]
FXCH ST4
FADD dword ptr [ESP + 0x58]
FXCH ST3
FADD dword ptr [ESI + 0x18]
FXCH
FSTP dword ptr [ESP + 0x70]
FXCH
FSTP dword ptr [ESP + 0x74]
FXCH ST2
FSTP dword ptr [ESP + 0x78]
FSTP dword ptr [ESP + 0x7c]
FSTP dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x28]
ADD ESI,0x5df4
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x004934af
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004af964]
FNSTSW AX
TEST AH,0x1
JZ 0x00493975
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af960]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493975
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004af964]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493903
FLD dword ptr [0x004af964]
FDIV dword ptr [ESP + 0x14]
FLD ST0
FLD ST1
FLD ST2
FLD ST3
FLD ST4
FXCH ST4
FMUL dword ptr [ESP + 0x68]
FSTP dword ptr [ESP + 0x68]
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FXCH
FMUL dword ptr [ESP + 0x70]
FXCH ST2
FMUL dword ptr [ESP + 0x74]
FXCH ST3
FMUL dword ptr [ESP + 0x78]
FXCH ST4
FMUL dword ptr [ESP + 0x7c]
FXCH
FSTP dword ptr [ESP + 0x6c]
FXCH
FSTP dword ptr [ESP + 0x70]
FXCH
FSTP dword ptr [ESP + 0x74]
FXCH
FSTP dword ptr [ESP + 0x78]
FSTP dword ptr [ESP + 0x7c]
FLD dword ptr [0x004af964]
FSUB dword ptr [ESP + 0x10]
FLD ST0
FLD ST1
FLD ST2
FLD ST3
FLD ST4
FXCH ST4
FMUL dword ptr [ESP + 0x68]
FADD dword ptr [ESP + 0x44]
FSTP dword ptr [ESP + 0x44]
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FXCH
FMUL dword ptr [ESP + 0x70]
FXCH ST2
FMUL dword ptr [ESP + 0x74]
FXCH ST3
FMUL dword ptr [ESP + 0x78]
FXCH ST4
FMUL dword ptr [ESP + 0x7c]
FXCH
FADD dword ptr [ESP + 0x48]
FXCH ST2
FADD dword ptr [ESP + 0x4c]
FXCH ST3
FADD dword ptr [ESP + 0x38]
FXCH ST4
FADD dword ptr [ESP + 0x3c]
FXCH
FADD dword ptr [ESP + 0x40]
FXCH ST2
FSTP dword ptr [ESP + 0x48]
FXCH ST2
FSTP dword ptr [ESP + 0x4c]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
JMP 0x004939d6
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004af964]
FNSTSW AX
TEST AH,0x41
JNZ 0x004939de
FLD dword ptr [0x004af964]
FDIV dword ptr [ESP + 0x10]
FLD ST0
FLD ST1
FLD ST2
FLD ST3
FLD ST4
FXCH ST4
FMUL dword ptr [ESP + 0x44]
FSTP dword ptr [ESP + 0x44]
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FXCH
FMUL dword ptr [ESP + 0x4c]
FXCH ST2
FMUL dword ptr [ESP + 0x38]
FXCH ST3
FMUL dword ptr [ESP + 0x3c]
FXCH ST4
FMUL dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x48]
FXCH
FSTP dword ptr [ESP + 0x4c]
FXCH
FSTP dword ptr [ESP + 0x38]
FXCH
FSTP dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESP + 0x38]
PUSH ECX
CALL 0x0048c910
MOV EDX,dword ptr [ESP + 0x40]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x38]
PUSH EDX
CALL 0x0048c910
MOV EAX,dword ptr [ESP + 0x44]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x3c]
PUSH EAX
CALL 0x0048c910
FLD dword ptr [EDI + 0x28]
FLD dword ptr [EDI + 0x2c]
FLD dword ptr [EDI + 0x30]
FLD dword ptr [EDI + 0x34]
FLD dword ptr [EDI + 0x38]
FXCH ST5
FSTP dword ptr [ESP + 0x44]
FLD dword ptr [EDI + 0x3c]
FXCH ST4
FADD dword ptr [ESP + 0x48]
MOV ESI,dword ptr [ESP + 0x88]
MOV EBX,dword ptr [ESP + 0x34]
MOV ECX,EBX
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x1c]
LEA EDX,[ESP + 0x44]
FSTP dword ptr [ESP + 0x44]
FXCH ST2
FADD dword ptr [ESP + 0x48]
FXCH
FADD dword ptr [ESP + 0x4c]
FXCH ST2
FADD dword ptr [ESP + 0x38]
FXCH ST4
FADD dword ptr [ESP + 0x3c]
FXCH ST3
FADD dword ptr [ESP + 0x40]
FXCH
FSTP dword ptr [ESP + 0x48]
FXCH
FSTP dword ptr [ESP + 0x4c]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
ADD ECX,EAX
LEA EAX,[ESP + 0x38]
FSTP dword ptr [ESP + 0x3c]
PUSH EDX
PUSH EAX
FSTP dword ptr [ESP + 0x48]
PUSH ECX
CALL 0x004924b0
MOV ECX,dword ptr [ESI + 0x20]
MOV EDX,dword ptr [ESP + 0x2c]
ADD ECX,EDX
ADD ESP,0xc
FLD dword ptr [ECX]
FCOMP dword ptr [0x004af960]
FNSTSW AX
TEST AH,0x40
JZ 0x00493ac4
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004af960]
FNSTSW AX
TEST AH,0x40
JZ 0x00493ac4
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [0x004af960]
FNSTSW AX
TEST AH,0x40
JNZ 0x00493ad5
MOV EDX,dword ptr [ESI + 0x1c]
MOV EAX,EBX
ADD EAX,EDX
PUSH ECX
PUSH EAX
CALL 0x00493130
ADD ESP,0x8
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x2c]
ADD ECX,0xc
INC EAX
MOV dword ptr [ESP + 0x20],ECX
MOV ECX,dword ptr [ESP + 0x24]
ADD EBX,0x30
ADD EDI,0x124
MOV EDX,dword ptr [ECX + 0x74]
MOV dword ptr [ESP + 0x2c],EAX
CMP EAX,EDX
MOV dword ptr [ESP + 0x30],EBX
JC 0x0049345d
JMP 0x00493b43
MOV EDX,dword ptr [EBP + 0x74]
MOV EAX,dword ptr [EBP + 0x78]
XOR EBX,EBX
TEST EDX,EDX
JBE 0x00493b43
XOR EDX,EDX
ADD EAX,0xc0
JMP 0x00493b23
MOV ECX,dword ptr [ESP + 0x84]
MOV ESI,dword ptr [ECX + 0x1c]
MOV EDI,EDX
ADD EDI,ESI
MOV ECX,0xc
MOV ESI,EAX
ADD EAX,0x124
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [EBP + 0x74]
INC EBX
ADD EDX,0x30
CMP EBX,ECX
JC 0x00493b1c
MOV EAX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x88]
MOV ESI,dword ptr [ESP + 0x84]
PUSH EDX
MOV ECX,dword ptr [EAX + 0x78]
PUSH ECX
PUSH ESI
CALL 0x00490d10
ADD ESP,0xc
CALL 0x0048db80
MOV dword ptr [ESI + 0x18],EAX
POP EBX
POP ESI
POP EDI
POP EBP
ADD ESP,0x70
RET
