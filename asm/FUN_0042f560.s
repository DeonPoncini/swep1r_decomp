; FUN_0042f560
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ac6a8]
SUB ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x0042f590
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac6ac]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042f590
FLD dword ptr [0x004ac664]
JMP 0x0042f6a3
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac6a8]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f5bd
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac6ac]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042f5bd
FLD dword ptr [0x004ac678]
JMP 0x0042f6a3
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac678]
FLD dword ptr [ESP + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f5d4
FCHS
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac678]
FLD dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f5eb
FCHS
FLD ST1
FCOMP
FNSTSW AX
TEST AH,0x41
JNZ 0x0042f5fd
MOV ECX,0x1
JMP 0x0042f601
XOR ECX,ECX
FXCH
FDIV ST0,ST1
FSTP dword ptr [ESP]
FSTP ST0
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ac6a8]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f633
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ac6ac]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042f633
FLD dword ptr [0x004ac678]
JMP 0x0042f699
FLD dword ptr [ESP]
FMUL dword ptr [ESP]
FST dword ptr [ESP + 0x4]
FMUL dword ptr [ESP]
FLD ST0
FMUL dword ptr [ESP + 0x4]
FXCH
FMUL dword ptr [0x004ac6b0]
FLD ST1
FMUL dword ptr [ESP + 0x4]
FXCH
FSUBR dword ptr [ESP]
FXCH ST2
FMUL dword ptr [0x004ac6b4]
FXCH
FST dword ptr [ESP]
FLD dword ptr [ESP]
FXCH
FMUL dword ptr [ESP + 0x4]
FXCH ST2
FSUBP ST3,ST0
FMUL dword ptr [0x004ac6b8]
FXCH
FMUL dword ptr [0x004ac6bc]
FXCH
FSUBP ST2,ST0
FSUBP
FMUL dword ptr [0x004ac698]
FMUL qword ptr [0x004ac6a0]
TEST ECX,ECX
JZ 0x0042f6a3
FSUBR dword ptr [0x004ac664]
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac6ac]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f6ba
FSUBR dword ptr [0x004ac698]
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac6ac]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f6cd
FCHS
ADD ESP,0x8
RET
