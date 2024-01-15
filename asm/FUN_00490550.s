; FUN_00490550
PUSH EBP
MOV EBP,ESP
SUB ESP,0x20
MOV EAX,dword ptr [EBP + 0x24]
PUSH ESI
LEA ESI,[EAX + -0x1]
TEST ESI,ESI
JL 0x00490749
MOV EDX,dword ptr [EBP + 0x20]
PUSH EDI
MOV EDI,ESI
LEA EAX,[ESI + ESI*0x2]
SHL EDI,0x4
ADD EDI,EDX
MOV EDX,dword ptr [EBP + 0x18]
SHL EAX,0x2
PUSH EBX
MOV EBX,dword ptr [EBP + 0x14]
LEA ECX,[EDX + EAX*0x1]
SUB EDX,EBX
MOV dword ptr [EBP + -0x4],ECX
LEA ECX,[EBX + EAX*0x1 + 0x8]
INC ESI
MOV dword ptr [EBP + 0x24],ECX
MOV dword ptr [EBP + -0xc],EDX
MOV dword ptr [EBP + -0x10],ESI
MOV EAX,0x5c
MOV ESI,EDI
MOV EBX,dword ptr [0x00df7f2c]
ADD EAX,0x4
ADD ESI,0x4
CMP EAX,0x68
MOV EBX,dword ptr [EBX + EAX*0x1 + -0x4]
MOV dword ptr [ESI + -0x4],EBX
JL 0x0049059a
MOV EAX,dword ptr [EBP + 0x10]
MOV dword ptr [EDI + 0xc],0x3f800000
DEC EAX
TEST EAX,EAX
JL 0x00490728
MOV ESI,dword ptr [EBP + 0x8]
MOV EBX,dword ptr [EBP + 0xc]
LEA ESI,[ESI + EAX*0x4]
MOV dword ptr [EBP + 0x18],ESI
LEA ESI,[EAX + EAX*0x2]
INC EAX
LEA EBX,[EBX + ESI*0x4 + 0x8]
MOV dword ptr [EBP + -0x8],EAX
MOV EAX,dword ptr [EBP + 0x18]
MOV ESI,dword ptr [EAX]
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JNZ 0x00490633
FLD dword ptr [ECX + -0x8]
FMUL dword ptr [EBX + -0x8]
FLD dword ptr [ECX + -0x4]
FMUL dword ptr [EBX + -0x4]
FADDP
FLD dword ptr [ECX]
FMUL dword ptr [EBX]
FADDP
FST dword ptr [EBP + 0x14]
FCOMP dword ptr [0x004af7d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004906ec
MOV EAX,EDI
LEA ECX,[ESI + 0x18]
MOV EDX,0x3
FLD dword ptr [ECX]
FMUL dword ptr [EBP + 0x14]
ADD ECX,0x4
ADD EAX,0x4
DEC EDX
FADD dword ptr [EAX + -0x4]
FSTP dword ptr [EAX + -0x4]
JNZ 0x0049061a
JMP 0x004906ec
CMP EAX,0x1
JNZ 0x004906ec
MOV EAX,dword ptr [EBP + -0x4]
FLD dword ptr [EBX + -0x8]
FSUB dword ptr [EAX]
FSTP dword ptr [EBP + -0x20]
FLD dword ptr [EBX + -0x4]
FSUB dword ptr [EDX + ECX*0x1 + -0x4]
FSTP dword ptr [EBP + -0x1c]
FLD dword ptr [EBX]
FSUB dword ptr [EDX + ECX*0x1]
FSTP dword ptr [EBP + -0x18]
FLD dword ptr [EBP + -0x20]
FMUL dword ptr [EBP + -0x20]
FLD dword ptr [EBP + -0x1c]
FMUL dword ptr [EBP + -0x1c]
FADDP
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [EBP + -0x18]
FADDP
FSTP dword ptr [EBP + 0x14]
FLD dword ptr [EBP + 0x14]
FSQRT
FSTP dword ptr [EBP + -0x14]
FLD dword ptr [EBP + -0x14]
FST dword ptr [EBP + 0x14]
FCOMP dword ptr [ESI + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x004906ec
LEA ECX,[EBP + -0x20]
PUSH ECX
CALL 0x00492440
MOV EAX,dword ptr [EBP + 0x24]
ADD ESP,0x4
FSTP ST0
FLD dword ptr [EAX + -0x8]
FMUL dword ptr [EBP + -0x20]
FLD dword ptr [EAX + -0x4]
FMUL dword ptr [EBP + -0x1c]
FADDP
FLD dword ptr [EAX]
FMUL dword ptr [EBP + -0x18]
FADDP
FCOM dword ptr [0x004af7d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004906ea
FLD dword ptr [EBP + 0x14]
FMUL dword ptr [EBP + 0x28]
FLD dword ptr [ESI + 0x18]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EDI]
FSTP dword ptr [EDI]
FLD dword ptr [ESI + 0x1c]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EDI + 0x4]
FSTP dword ptr [EDI + 0x4]
FLD dword ptr [ESI + 0x20]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [EDI + 0x8]
FSTP ST0
FSTP ST0
MOV ECX,dword ptr [EBP + 0x1c]
MOV EDX,dword ptr [EBP + 0x20]
SUB ECX,EDX
MOV EAX,EDI
MOV EDX,0x4
FLD dword ptr [ECX + EAX*0x1]
FMUL dword ptr [EAX]
ADD EAX,0x4
DEC EDX
FSTP dword ptr [EAX + -0x4]
JNZ 0x004906fb
MOV EDX,dword ptr [EBP + 0x18]
MOV EAX,dword ptr [EBP + -0x8]
MOV ECX,dword ptr [EBP + 0x24]
SUB EDX,0x4
SUB EBX,0xc
DEC EAX
MOV dword ptr [EBP + 0x18],EDX
MOV EDX,dword ptr [EBP + -0xc]
MOV dword ptr [EBP + -0x8],EAX
JNZ 0x004905dc
MOV EAX,dword ptr [EBP + -0x4]
SUB ECX,0xc
SUB EAX,0xc
SUB EDI,0x10
MOV dword ptr [EBP + -0x4],EAX
MOV EAX,dword ptr [EBP + -0x10]
DEC EAX
MOV dword ptr [EBP + 0x24],ECX
MOV dword ptr [EBP + -0x10],EAX
JNZ 0x00490593
POP EBX
POP EDI
POP ESI
MOV ESP,EBP
POP EBP
RET
