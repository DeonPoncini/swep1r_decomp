; FUN_00497da0
SUB ESP,0xc
MOV EDX,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x14]
PUSH EBX
XOR ECX,ECX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x24]
PUSH ESI
MOV dword ptr [0x00dfaa04],ECX
MOV dword ptr [ESP + 0xc],ECX
PUSH EDI
MOV EDI,dword ptr [ESP + 0x28]
LEA ECX,[EDX + EDX*0x2]
SHL EDX,0x4
MOV ESI,0xdfa140
MOV [0x00dfa138],EAX
TEST EBP,EBP
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [0x00df9eb4],ESI
MOV dword ptr [0x00df9eb0],0xdfa500
LEA ECX,[EAX + ECX*0x4 + -0xc]
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV EBX,EAX
MOV dword ptr [ESP + 0x14],EDI
JLE 0x00498a52
MOV EAX,dword ptr [ESP + 0x2c]
XOR EBP,EBP
XOR EDI,EDI
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x00497e37
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x41
JZ 0x00497f69
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497f13
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00497f13
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x1
JNZ 0x00497e6f
FCOM dword ptr [EBX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00497f13
FLD dword ptr [EBX]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x18]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDI,0xc
INC EAX
ADD EBP,0x10
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + EDI*0x1 + -0xc]
FLD dword ptr [EBX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + -0x8]
FLD dword ptr [EBX + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0x4]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBP*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBP*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBP*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x10
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x00497f17
MOV ECX,dword ptr [ESP + 0x14]
FCOMP dword ptr [EBX]
FNSTSW AX
TEST AH,0x41
JZ 0x00497f6b
MOV EAX,EBX
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EDX,dword ptr [0x00df9eb0]
MOV EAX,dword ptr [ECX]
ADD EDX,EBP
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],EAX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EBP,0x10
JMP 0x00497f6b
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EBX
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00497e0b
MOV EBX,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
CMP EBX,0x3
JGE 0x00497faa
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV ECX,dword ptr [0x00df9eb0]
XOR EAX,ESI
XOR ESI,EAX
XOR EDI,ECX
XOR EAX,ESI
XOR ECX,EDI
LEA EDX,[EBX + EBX*0x2]
MOV dword ptr [0x00df9eb0],ECX
XOR EDI,ECX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EAX + EDX*0x4 + -0xc]
MOV EDX,EBX
SHL EDX,0x4
TEST EBX,EBX
MOV [0x00dfa138],EAX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x2c],EBX
MOV dword ptr [ESP + 0x10],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV EBP,EAX
MOV dword ptr [ESP + 0x14],EDI
JLE 0x004981a0
MOV EAX,dword ptr [ESP + 0x2c]
XOR EBX,EBX
XOR EDI,EDI
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX]
MOV EAX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498036
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049816c
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498115
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498115
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x41
JZ 0x00498070
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x00498115
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x18]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDI,0xc
INC EAX
ADD EBX,0x10
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESI + EDI*0x1 + -0xc]
FLD dword ptr [EBP + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + -0x8]
FLD dword ptr [EBP + 0x8]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0x4]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x20
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x00498119
MOV ECX,dword ptr [ESP + 0x14]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049816e
MOV EAX,EBP
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EDX,dword ptr [0x00df9eb0]
MOV EAX,dword ptr [ECX]
ADD EDX,EBX
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],EAX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EBX,0x10
JMP 0x0049816e
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,EBP
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00498009
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
JMP 0x004981a4
MOV EBP,dword ptr [ESP + 0x10]
CMP EBP,0x3
JGE 0x004981b3
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV EBX,dword ptr [0x00df9eb0]
XOR EAX,ESI
XOR ESI,EAX
LEA EDX,[EBP + EBP*0x2]
XOR EAX,ESI
XOR EDI,EBX
XOR EBX,EDI
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EAX + EDX*0x4 + -0xc]
MOV EDX,EBP
XOR EDI,EBX
MOV [0x00dfa138],EAX
SHL EDX,0x4
TEST EBP,EBP
MOV dword ptr [0x00df9eb0],EBX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x2c],EBP
MOV dword ptr [ESP + 0x10],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x14],EDI
JLE 0x004983b8
LEA EBP,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EBX,EBX
XOR EDI,EDI
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498242
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049837d
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498325
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498325
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x41
JZ 0x0049827e
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JZ 0x00498325
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EBP + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EDI,0xc
INC EAX
ADD EBX,0x10
MOV dword ptr [ESP + 0x10],EAX
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x18]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EDI*0x1 + -0xc]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
MOV ECX,dword ptr [ESP + 0x14]
FSTP dword ptr [EAX + EDI*0x1 + -0x4]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBX*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EBX*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x00498329
MOV ECX,dword ptr [ESP + 0x14]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049837f
LEA EAX,[EBP + -0x8]
ADD ESI,EDI
ADD EDI,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EDX,dword ptr [0x00df9eb0]
MOV EAX,dword ptr [ECX]
ADD EDX,EBX
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],EAX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EBX,0x10
JMP 0x0049837f
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EBP + -0x8]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00498214
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
MOV EBX,dword ptr [0x00df9eb0]
JMP 0x004983bc
MOV EBP,dword ptr [ESP + 0x10]
CMP EBP,0x3
JGE 0x004983cb
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
XOR EAX,ESI
LEA EDX,[EBP + EBP*0x2]
XOR ESI,EAX
XOR EDI,EBX
XOR EAX,ESI
XOR EBX,EDI
XOR EDI,EBX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EAX + EDX*0x4 + -0xc]
MOV EDX,EBP
SHL EDX,0x4
TEST EBP,EBP
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9eb0],EBX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x2c],EBP
MOV dword ptr [ESP + 0x10],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x14],EDI
JLE 0x004985ca
LEA EBP,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EDI,EDI
XOR EBX,EBX
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x00498454
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x0049858f
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498537
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x40
JNZ 0x00498537
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x1
JNZ 0x00498490
FCOM dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JNZ 0x00498537
FLD dword ptr [EBP]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EBP + -0x8]
FXCH
FDIVP ST2,ST0
MOV EAX,dword ptr [ESP + 0x10]
ADD EBX,0xc
INC EAX
ADD EDI,0x10
MOV dword ptr [ESP + 0x10],EAX
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x18]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
MOV ECX,dword ptr [ESP + 0x14]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EDI*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EDI*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [EDX + 0x8]
FMUL ST1
FADD dword ptr [EDX + 0x8]
MOV EDX,dword ptr [0x00df9eb0]
FSTP dword ptr [EDX + EDI*0x1 + -0x8]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
JMP 0x0049853b
MOV ECX,dword ptr [ESP + 0x14]
FCOMP dword ptr [EBP]
FNSTSW AX
TEST AH,0x41
JZ 0x00498591
LEA EAX,[EBP + -0x8]
ADD ESI,EBX
ADD EBX,0xc
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],EAX
MOV EDX,dword ptr [0x00df9eb0]
MOV EAX,dword ptr [ECX]
ADD EDX,EDI
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],EAX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV EDX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [0x00df9eb4]
INC EDX
MOV dword ptr [ESP + 0x10],EDX
ADD EDI,0x10
JMP 0x00498591
FSTP ST0
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EBP + -0x8]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00498426
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
MOV EBX,dword ptr [0x00df9eb0]
JMP 0x004985ce
MOV EBP,dword ptr [ESP + 0x10]
CMP EBP,0x3
JGE 0x004985dd
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
XOR EAX,ESI
LEA EDX,[EBP + EBP*0x2]
XOR ESI,EAX
XOR EDI,EBX
XOR EAX,ESI
XOR EBX,EDI
XOR EDI,EBX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EAX + EDX*0x4 + -0xc]
MOV EDX,EBP
SHL EDX,0x4
TEST EBP,EBP
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9eb0],EBX
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x2c],EBP
MOV dword ptr [ESP + 0x10],0x0
LEA EDX,[EDX + EDI*0x1 + -0x10]
MOV dword ptr [ESP + 0x14],EDI
JLE 0x004987e3
LEA EBX,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EBP,EBP
XOR EDI,EDI
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049865d
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004987aa
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049874f
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049874f
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004986ab
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0049874f
MOV EAX,dword ptr [ESP + 0x20]
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
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EDI*0x1 + -0xc]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBP*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBP*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
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
JMP 0x00498753
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EBX]
FCOMP dword ptr [EAX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x004987aa
LEA EDX,[EBX + -0x4]
ADD ESI,EDI
ADD EDI,0xc
MOV EAX,dword ptr [EDX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ESI + 0x8],EDX
MOV EAX,[0x00df9eb0]
MOV EDX,dword ptr [ECX]
ADD EAX,EBP
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ECX + 0xc]
INC EDX
MOV dword ptr [EAX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
MOV dword ptr [ESP + 0x10],EDX
ADD EBP,0x10
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EBX + -0x4]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EBX,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00498638
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,[0x00dfa138]
MOV EDI,dword ptr [0x00dfa13c]
MOV EBX,dword ptr [0x00df9eb0]
JMP 0x004987e7
MOV EDX,dword ptr [ESP + 0x10]
CMP EDX,0x3
JGE 0x00498802
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
XOR EBP,EBP
CMP dword ptr [ECX],EBP
JZ 0x00498a0f
XOR EDI,EBX
XOR EAX,ESI
XOR EBX,EDI
XOR ESI,EAX
MOV dword ptr [0x00df9eb0],EBX
XOR EDI,EBX
MOV EBX,EDX
XOR EAX,ESI
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
LEA EDX,[EBX + EBX*0x2]
MOV dword ptr [0x00dfa13c],EDI
MOV dword ptr [ESP + 0x2c],EBX
MOV dword ptr [ESP + 0x10],EBP
LEA ECX,[EAX + EDX*0x4 + -0xc]
MOV EDX,EBX
SHL EDX,0x4
CMP EBX,EBP
MOV dword ptr [ESP + 0x14],EDI
LEA EDX,[EDX + EDI*0x1 + -0x10]
JLE 0x004989fa
LEA EDI,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x2c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049888b
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004989d8
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049897d
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x0049897d
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004988d9
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049897d
MOV EAX,dword ptr [ESP + 0x20]
ADD EBX,0xc
FLD dword ptr [EDI]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
ADD EBP,0x10
FDIVP
MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00df9eb4]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ECX + 0x8]
FMUL ST1
FADD dword ptr [ECX + 0x8]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
FLD dword ptr [EDI + -0x4]
FSUB dword ptr [ECX]
FMUL ST1
FADD dword ptr [ECX]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0xc]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,[0x00df9eb0]
FLD dword ptr [ECX]
FSUB dword ptr [EDX]
FMUL ST1
FADD dword ptr [EDX]
FSTP dword ptr [EAX + EBP*0x1 + -0x10]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [EDX + 0x4]
MOV EAX,[0x00df9eb0]
FMUL ST1
FADD dword ptr [EDX + 0x4]
FSTP dword ptr [EAX + EBP*0x1 + -0xc]
FLD dword ptr [ECX + 0x8]
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
JMP 0x00498981
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x004989d8
LEA EDX,[EDI + -0x4]
ADD ESI,EBX
ADD EBX,0xc
MOV EAX,dword ptr [EDX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ESI + 0x8],EDX
MOV EAX,[0x00df9eb0]
MOV EDX,dword ptr [ECX]
ADD EAX,EBP
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ECX + 0xc]
INC EDX
MOV dword ptr [EAX + 0xc],ECX
MOV ESI,dword ptr [0x00df9eb4]
MOV dword ptr [ESP + 0x10],EDX
ADD EBP,0x10
MOV EAX,dword ptr [ESP + 0x14]
LEA ECX,[EDI + -0x4]
MOV EDX,EAX
ADD EAX,0x10
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESP + 0x2c]
ADD EDI,0xc
DEC EAX
MOV dword ptr [ESP + 0x2c],EAX
JNZ 0x00498866
MOV EAX,dword ptr [ESP + 0x10]
CMP EAX,0x3
JGE 0x00498a0b
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV EDX,dword ptr [ESP + 0x10]
MOV EDI,dword ptr [ESP + 0x24]
CMP ESI,EDI
JZ 0x00498a48
LEA ECX,[EDX + EDX*0x2]
SHL ECX,0x2
MOV EAX,ECX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [0x00df9eb0]
MOV EDI,dword ptr [ESP + 0x28]
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
ADD ESP,0xc
RET
MOV EBX,dword ptr [ESP + 0x10]
JMP 0x00497f9b
