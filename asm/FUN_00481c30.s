; FUN_00481c30
MOV EAX,[0x0050ccc8]
SUB ESP,0x8
TEST EAX,EAX
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
JNZ 0x00481c8d
MOV dword ptr [ESP + 0x10],0x0
MOV ESI,0x50cbc8
FILD dword ptr [ESP + 0x10]
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ESI
FMUL dword ptr [0x004ae010]
PUSH ECX
FMUL dword ptr [0x004ae014]
FSTP dword ptr [ESP]
CALL 0x0042f380
MOV EDX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
ADD ESI,0x4
INC EDX
CMP ESI,0x50ccc8
MOV dword ptr [ESP + 0x10],EDX
JL 0x00481c4d
MOV dword ptr [0x0050ccc8],0x1
MOV EDI,dword ptr [ESP + 0x1c]
PUSH EDI
CALL 0x00431770
ADD ESP,0x4
TEST AH,0x40
JZ 0x00481cf3
PUSH EDI
CALL 0x00431780
MOV EBX,EAX
ADD ESP,0x4
XOR ESI,ESI
TEST EBX,EBX
JLE 0x00481feb
MOV EBP,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESP + 0x30]
MOV EAX,dword ptr [ESP + 0x2c]
PUSH EBP
PUSH ECX
MOV ECX,dword ptr [ESP + 0x30]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x30]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x30]
PUSH ECX
MOV ECX,dword ptr [EDI + 0x18]
PUSH EDX
PUSH EAX
MOV EDX,dword ptr [ECX + ESI*0x4]
PUSH EDX
CALL 0x00481c30
ADD ESP,0x20
INC ESI
CMP ESI,EBX
JL 0x00481cb8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
CMP EAX,0x3064
JNZ 0x00481feb
MOV EAX,dword ptr [EDI + 0x18]
PUSH 0x3
PUSH 0x4c3c14
MOV ECX,dword ptr [EAX]
MOV ESI,dword ptr [ECX + 0x30]
PUSH ESI
MOV dword ptr [ESP + 0x44],ESI
CALL 0x0049f000
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00481feb
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [ESP + 0x34]
MOV EBP,dword ptr [ESI + 0x4c]
MOV EBX,dword ptr [ESI + 0x58]
MOV dword ptr [ESP + 0x1c],EBP
MOV ECX,EBP
FNSTSW AX
TEST AH,0x1
JNZ 0x00481d45
FLD dword ptr [0x004ae018]
JMP 0x00481d57
FLD dword ptr [ESP + 0x30]
FDIV dword ptr [ESP + 0x34]
FLD ST0
FMULP
FSUBR dword ptr [0x004ae01c]
FCOM dword ptr [0x004ae020]
FNSTSW AX
TEST AH,0x1
JZ 0x00481d9c
MOV EDX,0x4c7c30
MOV ECX,0x4c7c34
FSTP ST0
LEA EAX,[EBP + 0x8]
SUB EDX,EBP
MOV ESI,dword ptr [ECX + -0x4]
ADD ECX,0xc
MOV dword ptr [EAX + -0x8],ESI
MOV ESI,dword ptr [ECX + -0xc]
MOV dword ptr [EAX + -0x4],ESI
MOV ESI,dword ptr [EDX + EAX*0x1]
MOV dword ptr [EAX],ESI
ADD EAX,0xc
CMP ECX,0x4c7c7c
JL 0x00481d75
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
MOV dword ptr [ESI + 0x74],0x1b
MOV dword ptr [ESI + 0x7c],0x30
MOV EDI,0x4c7c78
MOV ESI,0x4c7c30
SUB EDI,EBX
SUB ESI,EBP
MOV dword ptr [ESP + 0x30],0x8
MOV EAX,EBX
MOV EBX,0x3
MOV EDX,0x3
MOV EBP,dword ptr [ESI + ECX*0x1]
MOV dword ptr [ECX],EBP
ADD ECX,0x4
DEC EDX
JNZ 0x00481dcc
MOV EDX,0x4
MOV EBP,dword ptr [EDI + EAX*0x1]
MOV dword ptr [EAX],EBP
ADD EAX,0x4
DEC EDX
JNZ 0x00481ddc
DEC EBX
JNZ 0x00481dc7
MOV EBX,EAX
MOV EAX,dword ptr [ESP + 0x30]
SUB ESI,0x24
SUB EDI,0x30
DEC EAX
MOV dword ptr [ESP + 0x30],EAX
JNZ 0x00481dc0
MOV EAX,EBX
MOV EDX,ECX
MOV dword ptr [ESP + 0x30],0x3
MOV ESI,0x4c7c54
MOV EDI,0x3
SUB ESI,ECX
MOV EBP,dword ptr [ESI + EDX*0x1]
MOV dword ptr [EDX],EBP
ADD EDX,0x4
DEC EDI
JNZ 0x00481e15
MOV ESI,0x4c7ca8
MOV EDI,0x4
SUB ESI,EBX
MOV EBP,dword ptr [ESI + EAX*0x1]
MOV dword ptr [EAX],EBP
ADD EAX,0x4
DEC EDI
JNZ 0x00481e2c
MOV ESI,dword ptr [ESP + 0x30]
DEC ESI
MOV dword ptr [ESP + 0x30],ESI
JNZ 0x00481e09
MOV EDX,dword ptr [ESP + 0x1c]
MOV EDI,0x1
FMUL dword ptr [ESP + 0x28]
LEA ESI,[EDX + 0x24]
MOV dword ptr [ESP + 0x10],EDI
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ae024]
FCOM qword ptr [0x004ae028]
FNSTSW AX
TEST AH,0x41
JNZ 0x00481e8e
FCOM qword ptr [0x004ae030]
FNSTSW AX
TEST AH,0x1
JZ 0x00481e8e
FSUB dword ptr [0x004ae038]
FMUL dword ptr [0x004ae03c]
FSUB dword ptr [0x004ae040]
JMP 0x00481eba
FCOM qword ptr [0x004ae048]
FNSTSW AX
TEST AH,0x41
JNZ 0x00481eba
FCOM qword ptr [0x004ae050]
FNSTSW AX
TEST AH,0x1
JZ 0x00481eba
FSUB dword ptr [0x004ae03c]
FMUL dword ptr [0x004ae03c]
FSUB dword ptr [0x004ae058]
FLD ST0
FMUL qword ptr [0x004ae060]
CALL 0x0049ed20
FMUL dword ptr [0x004ae068]
MOV dword ptr [ESP + 0x30],EAX
FSUB qword ptr [0x004ae070]
CALL 0x0049ed20
FLD ST0
FLD dword ptr [EAX*0x4 + 0x50cbc8]
FXCH
FMULP
FMUL qword ptr [0x004ae060]
CALL 0x0049ed20
FILD dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x34],EAX
MOV EAX,0x3
FILD dword ptr [ESP + 0x34]
FLD ST1
MOV ECX,dword ptr [ESI]
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [ESI + 0x8]
FADD ST0,ST1
MOV dword ptr [ESI],ECX
ADD ESI,0xc
DEC EAX
FSTP dword ptr [ESI + -0x4]
JNZ 0x00481f05
INC EDI
FSTP ST0
CMP EDI,0x8
MOV dword ptr [ESP + 0x10],EDI
FSTP ST0
JL 0x00481e56
MOV EDX,dword ptr [ESP + 0x38]
MOV EDI,0x1
FSTP ST0
MOV ESI,dword ptr [EDX + 0x6c]
LEA EBP,[EDI + 0x4]
LEA EAX,[EDI + 0x1]
LEA EBX,[EDI + -0x1]
PUSH EBP
MOV ECX,ESI
MOV dword ptr [ESP + 0x34],EAX
PUSH EAX
MOV EAX,dword ptr [ESP + 0x24]
PUSH EBX
PUSH ECX
PUSH EAX
ADD ESI,0x48
CALL 0x00481be0
ADD ESP,0x14
LEA EAX,[EDI + 0x2]
MOV ECX,ESI
ADD ESI,0x48
PUSH EBX
PUSH EAX
PUSH EBP
PUSH ECX
MOV ECX,dword ptr [ESP + 0x2c]
PUSH ECX
CALL 0x00481be0
MOV EDX,dword ptr [ESP + 0x30]
ADD ESP,0x14
LEA EBX,[EDI + 0x3]
LEA EAX,[EDI + 0x2]
PUSH EDI
MOV ECX,ESI
PUSH EBX
PUSH EAX
PUSH ECX
PUSH EDX
ADD ESI,0x48
CALL 0x00481be0
ADD ESP,0x14
LEA EAX,[EDI + 0x2]
MOV ECX,ESI
ADD ESI,0x48
PUSH EAX
LEA EAX,[EDI + -0x1]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x24]
PUSH EDI
PUSH ECX
PUSH EAX
CALL 0x00481be0
MOV ECX,dword ptr [ESP + 0x30]
ADD ESP,0x14
MOV EAX,ESI
ADD ESI,0x48
PUSH EBX
PUSH EDI
MOV EDI,dword ptr [ESP + 0x38]
PUSH EDI
PUSH EAX
PUSH ECX
CALL 0x00481be0
MOV EDX,dword ptr [ESP + 0x30]
ADD ESP,0x14
MOV EAX,ESI
ADD ESI,0x48
PUSH EDI
PUSH EBP
PUSH EBX
PUSH EAX
PUSH EDX
CALL 0x00481be0
MOV EDI,EBX
ADD ESP,0x14
CMP EDI,0x19
JL 0x00481f3c
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
