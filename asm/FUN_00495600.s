; FUN_00495600
MOV EAX,dword ptr [ESP + 0x8]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV ESI,0xdfa140
LEA ECX,[EDI + EDI*0x2]
XOR EBP,EBP
CMP EDI,EBX
MOV EDI,dword ptr [ESP + 0x14]
MOV dword ptr [0x00dfaa04],EBX
MOV [0x00dfa138],EAX
MOV dword ptr [0x00df9eb4],ESI
LEA ECX,[EAX + ECX*0x4 + -0xc]
MOV EDX,EAX
JLE 0x00495730
MOV EAX,dword ptr [ESP + 0x1c]
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [EDI + 0xc]
FLD dword ptr [ECX]
MOV dword ptr [ESP + 0x14],EAX
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x00495667
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00495715
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x004956ec
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x004956ec
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495693
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x004956ec
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x14]
FXCH
FDIVP ST2,ST0
INC EBP
ADD EBX,0xc
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0x8]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
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
JZ 0x00495717
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
JMP 0x00495717
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00495643
MOV EAX,[0x00dfa138]
CMP EBP,0x3
JL 0x00495d41
XOR EAX,ESI
MOV EBX,EBP
XOR ESI,EAX
XOR EBP,EBP
XOR EAX,ESI
LEA ECX,[EBX + EBX*0x2]
TEST EBX,EBX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [ESP + 0x1c],EBX
LEA ECX,[EAX + ECX*0x4 + -0xc]
MOV EDX,EAX
JLE 0x0049585a
MOV EAX,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [EDI + 0x14]
FLD dword ptr [ECX]
MOV dword ptr [ESP + 0x14],EAX
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495791
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x0049583f
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495816
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495816
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x004957bd
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x00495816
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX]
FLD dword ptr [ESP + 0x14]
FXCH
FDIVP ST2,ST0
INC EBP
ADD EBX,0xc
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
MOV EAX,[0x00df9eb4]
FMUL ST1
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [EAX + EBX*0x1 + -0x8]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
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
JNZ 0x00495841
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
JMP 0x00495841
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,EDX
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x0049576d
MOV EAX,[0x00dfa138]
CMP EBP,0x3
JL 0x00495d41
XOR EAX,ESI
MOV EDX,EBP
XOR ESI,EAX
XOR EBP,EBP
XOR EAX,ESI
LEA ECX,[EDX + EDX*0x2]
TEST EDX,EDX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [ESP + 0x1c],EDX
LEA ECX,[EAX + ECX*0x4 + -0xc]
JLE 0x0049598c
LEA EDX,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [EDI + 0x10]
FLD dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x14],EAX
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x004958bd
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495970
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495946
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495946
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x004958eb
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x00495946
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EDX + -0x8]
FXCH
FDIVP ST2,ST0
INC EBP
ADD EBX,0xc
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x14]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x4
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495972
LEA ECX,[EDX + -0x8]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x00495972
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00495898
MOV EAX,[0x00dfa138]
CMP EBP,0x3
JL 0x00495d41
XOR EAX,ESI
MOV EDX,EBP
XOR ESI,EAX
XOR EBP,EBP
XOR EAX,ESI
LEA ECX,[EDX + EDX*0x2]
TEST EDX,EDX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [ESP + 0x1c],EDX
LEA ECX,[EAX + ECX*0x4 + -0xc]
JLE 0x00495abe
LEA EDX,[EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [EDI + 0x18]
FLD dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x14],EAX
FCOMP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x004959ef
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00495aa2
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495a78
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495a78
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495a1d
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495a78
FLD dword ptr [EDX]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ECX + 0x8]
FXCH
FSUB dword ptr [ECX + 0x8]
FLD dword ptr [EDX + -0x8]
FXCH
FDIVP ST2,ST0
INC EBP
ADD EBX,0xc
FSUB dword ptr [ECX]
FMUL ST1
FLD dword ptr [ESP + 0x14]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [ESI + EBX*0x1 + -0xc]
FLD dword ptr [EDX + -0x4]
FSUB dword ptr [ECX + 0x4]
FMUL ST2
FADD dword ptr [ECX + 0x4]
MOV ECX,dword ptr [0x00df9eb4]
FSTP dword ptr [ECX + EBX*0x1 + -0x8]
MOV EAX,[0x00df9eb4]
FSTP dword ptr [EAX + EBX*0x1 + -0x4]
MOV EAX,[0x00dfaa04]
MOV ESI,dword ptr [0x00df9eb4]
OR AL,0x8
FSTP ST0
MOV [0x00dfaa04],EAX
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x41
JZ 0x00495aa4
LEA ECX,[EDX + -0x8]
ADD ESI,EBX
INC EBP
ADD EBX,0xc
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESI + 0x4],EAX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [0x00df9eb4]
JMP 0x00495aa4
FSTP ST0
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[EDX + -0x8]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x004959ca
MOV EAX,[0x00dfa138]
CMP EBP,0x3
JL 0x00495d41
XOR EAX,ESI
MOV EDX,EBP
XOR ESI,EAX
XOR EBP,EBP
XOR EAX,ESI
LEA ECX,[EDX + EDX*0x2]
TEST EDX,EDX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [ESP + 0x1c],EDX
LEA ECX,[EAX + ECX*0x4 + -0xc]
JLE 0x00495be5
LEA EDX,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00495b19
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495bcb
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495ba0
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495ba0
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00495b4b
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00495ba0
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
JNZ 0x00495bcb
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
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[EDX + -0x4]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00495afc
MOV EAX,[0x00dfa138]
CMP EBP,0x3
JGE 0x00495bfd
MOV EAX,[0x00dfaa04]
OR AL,0x40
MOV [0x00dfaa04],EAX
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
RET
CMP dword ptr [EDI],0x0
JZ 0x00495d24
XOR EAX,ESI
MOV EDX,EBP
XOR ESI,EAX
XOR EBP,EBP
XOR EAX,ESI
LEA ECX,[EDX + EDX*0x2]
TEST EDX,EDX
MOV dword ptr [0x00df9eb4],ESI
MOV [0x00dfa138],EAX
MOV dword ptr [ESP + 0x1c],EDX
LEA ECX,[EAX + ECX*0x4 + -0xc]
JLE 0x00495d1f
LEA EDX,[EAX + 0x4]
MOV EAX,dword ptr [ESP + 0x1c]
XOR EBX,EBX
MOV dword ptr [ESP + 0x1c],EAX
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495c58
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x00495d0a
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495cdf
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x40
JNZ 0x00495cdf
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JZ 0x00495c8a
FLD dword ptr [EDX]
FCOMP dword ptr [EDI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00495cdf
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
JZ 0x00495d0a
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
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[EDX + -0x4]
ADD EDX,0xc
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x00495c3b
CMP EBP,0x3
JL 0x00495d41
MOV EDI,dword ptr [ESP + 0x18]
CMP ESI,EDI
JZ 0x00495d41
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
RET
