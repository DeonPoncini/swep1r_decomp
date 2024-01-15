; FUN_0049b7d0
SUB ESP,0x14
MOV ECX,dword ptr [ESP + 0x1c]
PUSH EBX
MOV EAX,dword ptr [ESP + 0x24]
PUSH EBP
XOR EDX,EDX
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x34]
MOV dword ptr [0x00dfaa04],EDX
MOV dword ptr [ESP + 0x14],EDX
MOV EDX,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x34]
MOV dword ptr [0x00dfa13c],EDI
MOV EBP,ECX
LEA EDI,[EDX + EDX*0x2]
MOV dword ptr [ESP + 0x18],EBX
MOV EBX,dword ptr [ESP + 0x38]
MOV ESI,0xdfa140
LEA ECX,[ECX + EDI*0x4 + -0xc]
LEA EDI,[EAX + EDX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],EDI
MOV EDI,dword ptr [ESP + 0x34]
SHL EDX,0x4
TEST EBX,EBX
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00df9eac],0xdf9eb8
MOV dword ptr [0x00df9eb0],0xdfa500
MOV EDI,EBP
MOV dword ptr [ESP + 0x10],EAX
JLE 0x0049c7fb
MOV EAX,dword ptr [ESP + 0x38]
XOR EBP,EBP
XOR EBX,EBX
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FCOMP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x0049b891
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x0049ba1b
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b9a5
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049b9a5
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049b8c9
FCOM dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049b9a5
FLD dword ptr [EDI]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x20]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x14]
SHL EAX,0x3
FSTP dword ptr [ESI + EBX*0x1]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [ESI + EBX*0x1 + 0x4]
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + 0x8]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX]
FSUB dword ptr [ESI]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBP*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBP*0x1 + 0x4]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
ADD EBX,0xc
FMUL ST1
INC EAX
ADD EBP,0x10
MOV dword ptr [ESP + 0x14],EAX
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBP*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049b9a9
MOV ECX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EDI]
FNSTSW AX
TEST AH,0x41
JZ 0x0049ba1d
MOV EAX,EDI
ADD ESI,EBX
ADD EBX,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EDX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV EDX,dword ptr [0x00df9eb0]
MOV ESI,dword ptr [ECX]
ADD EDX,EBP
INC EAX
ADD EBP,0x10
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [EDX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],ESI
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x0049ba1d
FSTP ST0
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,EDI
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EDI,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049b865
MOV EAX,[0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
MOV EDX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [0x00dfa13c]
CMP EDX,0x3
JL 0x0049c7f1
MOV ECX,dword ptr [0x00df9eac]
MOV dword ptr [ESP + 0x38],EDX
XOR EAX,ECX
XOR EBP,ESI
XOR ECX,EAX
XOR ESI,EBP
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
XOR EBP,ESI
XOR EDI,ECX
LEA EBX,[EAX + EDX*0x8 + -0x8]
XOR ECX,EDI
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
LEA ECX,[EDX + EDX*0x2]
MOV dword ptr [0x00dfa13c],EDI
SHL EDX,0x4
MOV dword ptr [ESP + 0x18],EDI
MOV dword ptr [0x00dfa138],EBP
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV EDI,dword ptr [ESP + 0x38]
TEST EDI,EDI
MOV [0x00df9ea8],EAX
MOV dword ptr [ESP + 0x14],0x0
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x10],EAX
JLE 0x0049bcf2
MOV EAX,dword ptr [ESP + 0x38]
XOR EBX,EBX
XOR EDI,EDI
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FCOMP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049bb1b
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049bca9
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049bc32
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049bc32
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x41
JZ 0x0049bb55
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x0049bc32
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x20]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x14]
SHL EAX,0x3
FSTP dword ptr [ESI + EDI*0x1]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [ESI + EDI*0x1 + 0x4]
FLD dword ptr [EBP + 0x8]
FSUB dword ptr [ECX + 0x8]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + 0x8]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX]
FSUB dword ptr [ESI]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + 0x4]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
ADD EDI,0xc
FMUL ST1
INC EAX
ADD EBX,0x10
MOV dword ptr [ESP + 0x14],EAX
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049bc36
MOV ECX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049bcab
MOV EAX,EBP
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EDX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV EDX,dword ptr [0x00df9eb0]
MOV ESI,dword ptr [ECX]
ADD EDX,EBX
INC EAX
ADD EBX,0x10
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [EDX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],ESI
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x0049bcab
FSTP ST0
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,EBP
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049baee
MOV EBX,dword ptr [ESP + 0x14]
MOV EAX,[0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x0049bcfc
MOV EDI,dword ptr [0x00dfa13c]
MOV EBX,dword ptr [ESP + 0x14]
CMP EBX,0x3
JGE 0x0049bd0b
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [0x00df9eac]
XOR EBP,ESI
XOR EAX,ECX
XOR ESI,EBP
XOR ECX,EAX
XOR EBP,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
LEA EDX,[EBX + EBX*0x2]
XOR EDI,ECX
MOV dword ptr [0x00df9eb4],ESI
XOR ECX,EDI
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
LEA ECX,[EBP + EDX*0x4 + -0xc]
LEA EDX,[EAX + EBX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],EDX
MOV EDX,EBX
SHL EDX,0x4
TEST EBX,EBX
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x38],EBX
MOV dword ptr [ESP + 0x14],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x18],EDI
JLE 0x0049bf9c
MOV EAX,EBP
XOR EBX,EBX
XOR EDI,EDI
LEA EBP,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FCOMP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049bdbf
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049bf52
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049beda
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049beda
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x41
JZ 0x0049bdfb
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x0049beda
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EBP + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x14]
SHL EAX,0x3
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x20]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EDI*0x1]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + 0x8]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX]
FSUB dword ptr [ESI]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBX*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + 0x4]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
ADD EDI,0xc
INC EAX
ADD EBX,0x10
FMUL ST1
MOV dword ptr [ESP + 0x14],EAX
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049bede
MOV ECX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049bf54
LEA EAX,[EBP + -0x8]
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EDX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV EDX,dword ptr [0x00df9eb0]
MOV ESI,dword ptr [ECX]
ADD EDX,EBX
INC EAX
ADD EBX,0x10
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [EDX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],ESI
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x0049bf54
FSTP ST0
MOV EAX,dword ptr [ESP + 0x10]
LEA ECX,[EBP + -0x8]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049bd91
MOV EAX,[0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
MOV EBX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x0049bfa0
MOV EBX,dword ptr [ESP + 0x14]
CMP EBX,0x3
JGE 0x0049bfaf
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [0x00df9eac]
XOR EBP,ESI
XOR EAX,ECX
XOR ESI,EBP
XOR ECX,EAX
XOR EBP,ESI
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
LEA EDX,[EBX + EBX*0x2]
XOR EDI,ECX
MOV dword ptr [0x00df9eb4],ESI
XOR ECX,EDI
MOV dword ptr [0x00dfa138],EBP
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
LEA ECX,[EBP + EDX*0x4 + -0xc]
LEA EDX,[EAX + EBX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],EDX
MOV EDX,EBX
SHL EDX,0x4
TEST EBX,EBX
MOV [0x00df9ea8],EAX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x38],EBX
MOV dword ptr [ESP + 0x14],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x18],EDI
JLE 0x0049c240
MOV EAX,EBP
XOR EDI,EDI
XOR EBX,EBX
LEA EBP,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x28]
FCOMP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x0049c063
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x0049c1f6
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c17e
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c17e
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049c09f
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049c17e
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EBP + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x14]
SHL EAX,0x3
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x20]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [ECX + 0x4]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + 0x8]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX]
FSUB dword ptr [ESI]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV ECX,dword ptr [0x00df9eac]
FMUL ST1
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ECX + EAX*0x1 + 0x4]
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EDI*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + 0x4]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
MOV EAX,dword ptr [ESP + 0x14]
ADD EBX,0xc
INC EAX
ADD EDI,0x10
FMUL ST1
MOV dword ptr [ESP + 0x14],EAX
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EDI*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049c182
MOV ECX,dword ptr [ESP + 0x18]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x0049c1f8
LEA EAX,[EBP + -0x8]
ADD ESI,EBX
ADD EBX,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EDX]
MOV dword ptr [ESI + EAX*0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eac]
MOV EDX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + EAX*0x8 + 0x4],EDX
MOV EDX,dword ptr [0x00df9eb0]
MOV ESI,dword ptr [ECX]
ADD EDX,EDI
INC EAX
ADD EDI,0x10
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [EDX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],ESI
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x0049c1f8
FSTP ST0
MOV EAX,dword ptr [ESP + 0x10]
LEA ECX,[EBP + -0x8]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049c035
MOV EAX,[0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
MOV EBX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x0049c244
MOV EBX,dword ptr [ESP + 0x14]
CMP EBX,0x3
JGE 0x0049c253
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [0x00df9eac]
MOV dword ptr [ESP + 0x38],EBX
XOR EAX,ECX
XOR EBP,ESI
XOR ECX,EAX
XOR ESI,EBP
MOV dword ptr [0x00df9eac],ECX
XOR EAX,ECX
MOV ECX,dword ptr [0x00df9eb0]
XOR EBP,ESI
XOR EDI,ECX
XOR EDX,EDX
XOR ECX,EDI
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
LEA ECX,[EBX + EBX*0x2]
LEA EBX,[EAX + EBX*0x8 + -0x8]
MOV dword ptr [ESP + 0x1c],EBX
MOV EBX,dword ptr [ESP + 0x38]
SHL EBX,0x4
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x18],EDI
LEA EBX,[EBX + EDI*0x1 + -0x10]
MOV EDI,dword ptr [ESP + 0x38]
TEST EDI,EDI
MOV dword ptr [0x00dfa138],EBP
MOV [0x00df9ea8],EAX
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],EAX
JLE 0x0049c4ea
MOV EAX,[0x00dfa138]
XOR EBP,EBP
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [ESP + 0x20],EBP
LEA EDI,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049c307
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049c4ae
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c42f
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c42f
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049c355
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049c42f
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EBP,dword ptr [EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x20]
FDIVP
MOV dword ptr [ESI + EAX*0x1 + 0x4],EBP
MOV ESI,dword ptr [0x00df9eb4]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [ESI + EAX*0x1 + 0x8]
FLD dword ptr [EDI + -0x4]
FSUB dword ptr [ECX]
MOV ESI,dword ptr [ESP + 0x1c]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x10]
MOV EBP,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [ESI]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [EBP + EDX*0x8]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESI + 0x4]
MOV ECX,dword ptr [0x00df9eac]
MOV EBP,dword ptr [ESP + 0x14]
FMUL ST1
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ECX + EDX*0x8 + 0x4]
MOV ECX,dword ptr [ESP + 0x18]
MOV ESI,dword ptr [0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EBX]
FMUL ST1
FADD dword ptr [EBX]
FSTP dword ptr [ESI + EBP*0x1]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EBX]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EBX + 0x4]
FSTP dword ptr [ESI + EBP*0x1 + 0x4]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EBX]
MOV ESI,dword ptr [0x00df9eb0]
ADD EAX,0xc
MOV dword ptr [ESP + 0x20],EAX
INC EDX
FMUL ST1
ADD EBP,0x10
MOV dword ptr [ESP + 0x14],EBP
FADD dword ptr [EBX + 0x8]
FSTP dword ptr [ESI + EBP*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x1
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049c433
MOV ECX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049c4ae
MOV EBX,dword ptr [ESP + 0x20]
LEA EAX,[EDI + -0x4]
ADD ESI,EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [ESI],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EBX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EAX,dword ptr [ESP + 0x10]
MOV EBX,dword ptr [0x00df9eac]
MOV ESI,dword ptr [EAX]
MOV dword ptr [EBX + EDX*0x8],ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + EDX*0x8 + 0x4],EAX
MOV EAX,[0x00df9eb0]
MOV ESI,dword ptr [ECX]
ADD EAX,EBP
INC EDX
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ESI
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xc],ECX
MOV ECX,dword ptr [ESP + 0x20]
MOV ESI,dword ptr [0x00df9eb4]
ADD ECX,0xc
ADD EBP,0x10
MOV dword ptr [ESP + 0x20],ECX
MOV dword ptr [ESP + 0x14],EBP
MOV EAX,dword ptr [ESP + 0x10]
LEA ECX,[EDI + -0x4]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EBX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EDI,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049c2e2
MOV EAX,[0x00df9ea8]
MOV EBP,dword ptr [0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
CMP EDX,0x3
JGE 0x0049c50b
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV ECX,dword ptr [ESP + 0x28]
CMP dword ptr [ECX],0x0
JZ 0x0049c799
MOV ECX,dword ptr [0x00df9eac]
MOV EBX,EDX
XOR EAX,ECX
XOR EBP,ESI
XOR ECX,EAX
XOR ESI,EBP
XOR EAX,ECX
MOV dword ptr [0x00df9eac],ECX
MOV ECX,dword ptr [0x00df9eb0]
MOV [0x00df9ea8],EAX
LEA EAX,[EAX + EBX*0x8 + -0x8]
XOR EDI,ECX
MOV dword ptr [ESP + 0x1c],EAX
XOR ECX,EDI
MOV EAX,EBX
XOR EDI,ECX
SHL EAX,0x4
MOV dword ptr [0x00df9eb0],ECX
XOR EBP,ESI
MOV dword ptr [0x00dfa13c],EDI
LEA ECX,[EBX + EBX*0x2]
LEA EDI,[EAX + EDI*0x1 + -0x10]
MOV EAX,[0x00df9ea8]
MOV dword ptr [0x00dfa138],EBP
LEA ECX,[EBP + ECX*0x4 + -0xc]
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00dfa13c]
XOR EBP,EBP
XOR EDX,EDX
CMP EBX,EBP
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [ESP + 0x38],EBX
MOV dword ptr [ESP + 0x18],EAX
JLE 0x0049c794
MOV EAX,[0x00dfa138]
MOV dword ptr [ESP + 0x20],EBP
LEA EBX,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049c5ce
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049c763
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c6ec
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049c6ec
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049c61c
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049c6ec
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
FDIVP
MOV dword ptr [ESI + EBP*0x1 + 0x4],EAX
MOV EAX,[0x00df9eb4]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EBP*0x1 + 0x8]
FLD dword ptr [EBX + -0x4]
FSUB dword ptr [ECX]
MOV EAX,dword ptr [ESP + 0x1c]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBP*0x1]
MOV ECX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eac]
FLD dword ptr [ECX]
FSUB dword ptr [EAX]
FMUL ST1
FADD dword ptr [EAX]
FSTP dword ptr [ESI + EDX*0x8]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EAX + 0x4]
MOV ECX,dword ptr [ESP + 0x20]
FMUL ST1
FADD dword ptr [EAX + 0x4]
MOV EAX,[0x00df9eac]
FSTP dword ptr [EAX + EDX*0x8 + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
MOV ESI,dword ptr [0x00df9eb0]
FLD dword ptr [EAX]
FSUB dword ptr [EDI]
FMUL ST1
FADD dword ptr [EDI]
FSTP dword ptr [ESI + ECX*0x1]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [EDI + 0x4]
MOV ESI,dword ptr [0x00df9eb0]
FMUL ST1
FADD dword ptr [EDI + 0x4]
FSTP dword ptr [ESI + ECX*0x1 + 0x4]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [EDI + 0x8]
FMUL ST1
MOV EAX,[0x00df9eb0]
INC EDX
FADD dword ptr [EDI + 0x8]
ADD EBP,0xc
ADD ECX,0x10
MOV dword ptr [ESP + 0x20],ECX
FSTP dword ptr [EAX + ECX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x2
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049c6f0
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x0049c763
LEA EAX,[EBX + -0x4]
ADD ESI,EBP
ADD EBP,0xc
MOV EDI,dword ptr [EAX]
MOV dword ptr [ESI],EDI
MOV EDI,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDI
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EAX,dword ptr [ESP + 0x10]
MOV EDI,dword ptr [0x00df9eac]
MOV ESI,dword ptr [EAX]
MOV dword ptr [EDI + EDX*0x8],ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + EDX*0x8 + 0x4],EAX
MOV EAX,[0x00df9eb0]
MOV ESI,dword ptr [ESP + 0x18]
ADD EAX,ECX
INC EDX
ADD ECX,0x10
MOV EDI,dword ptr [ESI]
MOV dword ptr [ESP + 0x20],ECX
MOV dword ptr [EAX],EDI
MOV EDI,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0x4],EDI
MOV EDI,dword ptr [ESI + 0x8]
MOV dword ptr [EAX + 0x8],EDI
MOV ESI,dword ptr [ESI + 0xc]
MOV dword ptr [EAX + 0xc],ESI
MOV ESI,dword ptr [0x00df9eb4]
MOV EAX,dword ptr [ESP + 0x10]
LEA ECX,[EBX + -0x4]
MOV dword ptr [ESP + 0x1c],EAX
ADD EAX,0x8
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDI,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x38]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x38],EAX
JNZ 0x0049c5a9
CMP EDX,0x3
JL 0x0049c7f1
MOV EDI,dword ptr [ESP + 0x2c]
CMP ESI,EDI
JZ 0x0049c7f1
LEA ECX,[EDX + EDX*0x2]
SHL ECX,0x2
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eac]
MOV EDI,dword ptr [ESP + 0x30]
LEA ECX,[EDX*0x8 + 0x0]
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eb0]
MOV EDI,dword ptr [ESP + 0x34]
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
ADD ESP,0x14
RET
MOV EDI,dword ptr [0x00dfa13c]
MOV EDX,dword ptr [ESP + 0x14]
JMP 0x0049ba62
