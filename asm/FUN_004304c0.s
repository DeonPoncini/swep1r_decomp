; FUN_004304c0
SUB ESP,0x28
PUSH EBX
PUSH EBP
PUSH ESI
LEA EAX,[ESP + 0x28]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x40]
XOR EBP,EBP
MOV dword ptr [ESP + 0x18],EAX
MOV EBX,dword ptr [ESP + 0x3c]
MOV EAX,dword ptr [ESP + 0x40]
MOV ESI,EBX
XOR EDX,EDX
MOV dword ptr [ESP + 0x10],0x0
MOV ECX,EDI
SUB ESI,EAX
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESI + ECX*0x1],EAX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ac678]
FLD dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JZ 0x00430505
FCHS
FCOM dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00430533
FCOM dword ptr [0x004ac678]
FST dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x40
JNZ 0x00430717
FLD dword ptr [0x004ac67c]
FDIV ST0,ST1
MOV EAX,dword ptr [ESP + 0x18]
FSTP dword ptr [EAX]
INC EDX
ADD ECX,0x4
CMP EDX,0x3
FSTP ST0
JL 0x004304ed
MOV ECX,dword ptr [ESP + 0x18]
INC EBP
ADD EDI,0x10
ADD ECX,0x4
CMP EBP,0x3
MOV dword ptr [ESP + 0x18],ECX
JL 0x004304d5
LEA EAX,[ESP + 0x2c]
XOR EBP,EBP
SUB EAX,EBX
MOV EDI,EBX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x44]
SUB EAX,EBX
MOV dword ptr [ESP + 0x18],EBX
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,0x4
SUB EAX,EBX
MOV dword ptr [ESP + 0x14],EBX
MOV dword ptr [ESP + 0x40],EDI
MOV dword ptr [ESP + 0x28],EAX
XOR ESI,ESI
TEST EBP,EBP
JLE 0x004305b5
FLD dword ptr [EDI]
TEST ESI,ESI
JLE 0x004305a4
MOV EAX,dword ptr [ESP + 0x40]
MOV ECX,EBX
MOV EDX,ESI
FLD dword ptr [EAX]
FMUL dword ptr [ECX]
ADD EAX,0x10
ADD ECX,0x4
DEC EDX
FSUBP
JNZ 0x00430595
FSTP dword ptr [EDI]
INC ESI
ADD EBX,0x10
ADD EDI,0x10
CMP ESI,EBP
JL 0x00430587
MOV EBX,dword ptr [ESP + 0x3c]
CMP EBP,0x3
MOV dword ptr [ESP + 0x10],0x0
MOV EDI,EBP
JGE 0x00430640
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x40]
MOV ESI,dword ptr [ESP + 0x14]
MOV EBX,dword ptr [ESP + 0x18]
ADD ECX,EDX
MOV dword ptr [ESP + 0x44],ECX
FLD dword ptr [EBX]
TEST EBP,EBP
JLE 0x004305f7
MOV EAX,dword ptr [ESP + 0x40]
MOV ECX,ESI
MOV EDX,EBP
FLD dword ptr [EAX]
FMUL dword ptr [ECX]
ADD EAX,0x10
ADD ECX,0x4
DEC EDX
FSUBP
JNZ 0x004305e8
FCOM dword ptr [0x004ac678]
FST dword ptr [EBX]
FNSTSW AX
TEST AH,0x1
JZ 0x00430608
FCHS
MOV EAX,dword ptr [ESP + 0x44]
FMUL dword ptr [EAX]
FCOM dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JNZ 0x00430623
FSTP dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x20],EDI
JMP 0x00430625
FSTP ST0
MOV ECX,dword ptr [ESP + 0x44]
INC EDI
ADD ESI,0x10
ADD EBX,0x10
ADD ECX,0x4
CMP EDI,0x3
MOV dword ptr [ESP + 0x44],ECX
JL 0x004305da
MOV EBX,dword ptr [ESP + 0x3c]
MOV ESI,dword ptr [ESP + 0x20]
CMP EBP,ESI
JZ 0x00430679
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,ESI
SHL EAX,0x4
ADD EAX,EBX
MOV EDX,0x3
FLD dword ptr [EAX]
MOV EDI,dword ptr [ECX]
ADD ECX,0x4
MOV dword ptr [EAX],EDI
ADD EAX,0x4
FSTP dword ptr [ECX + -0x4]
DEC EDX
JNZ 0x00430658
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x40]
MOV EAX,dword ptr [ECX + EDX*0x1]
MOV dword ptr [ESP + ESI*0x4 + 0x2c],EAX
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x40]
MOV dword ptr [ECX + EDX*0x1],ESI
MOV ECX,dword ptr [ESP + 0x18]
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x40
JNZ 0x0043070d
CMP EBP,0x2
JZ 0x004306d5
FLD dword ptr [0x004ac67c]
FDIV dword ptr [ECX]
LEA EDX,[EBP + 0x1]
CMP EDX,0x3
FSTP dword ptr [ESP + 0x44]
JGE 0x004306d5
MOV EAX,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESP + 0x28]
ADD ECX,EAX
MOV EAX,0x3
ADD ECX,EBP
SUB EAX,EDX
LEA ECX,[EBX + ECX*0x4]
FLD dword ptr [ECX]
FMUL dword ptr [ESP + 0x44]
ADD ECX,0x10
DEC EAX
FSTP dword ptr [ECX + -0x10]
JNZ 0x004306c6
MOV ESI,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESP + 0x18]
INC EBP
ADD ESI,0x10
ADD EDI,0x4
ADD ECX,0x14
CMP EBP,0x3
MOV dword ptr [ESP + 0x14],ESI
MOV dword ptr [ESP + 0x40],EDI
MOV dword ptr [ESP + 0x18],ECX
JL 0x00430581
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
FSTP ST0
POP EBX
ADD ESP,0x28
RET
