; FUN_004808f0
SUB ESP,0xc
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x10]
FLD dword ptr [EDX]
FSUB dword ptr [ECX]
FLD dword ptr [EDX + 0x4]
FSUB dword ptr [ECX + 0x4]
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [ECX + 0x8]
FXCH ST2
FST dword ptr [ESP]
FXCH
FST dword ptr [ESP + 0x4]
FXCH
FMUL dword ptr [ESP]
FXCH ST2
FSTP dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x8]
FXCH
FADDP ST2,ST0
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x4]
FLD dword ptr [ESP]
FXCH ST3
FMUL dword ptr [ESP + 0x8]
FADDP
FXCH ST2
FMUL dword ptr [EAX]
FADDP ST2,ST0
FMUL dword ptr [ECX]
FLD dword ptr [ESP + 0x4]
FXCH ST4
FADDP ST5,ST0
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FLD ST4
FXCH ST4
FMUL dword ptr [ECX + 0x4]
FXCH ST4
FCOMP qword ptr [0x004adfb0]
FADDP ST2,ST0
FXCH ST2
FNSTSW AX
FADDP
FXCH
FXCH ST2
FXCH
TEST AH,0x41
JZ 0x004809ac
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ECX]
FSTP ST0
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [ECX + 0x8]
FSTP ST0
FSTP ST0
MOV dword ptr [EAX + 0x8],ECX
ADD ESP,0xc
RET
FXCH ST2
FSUB ST0,ST2
FDIV ST0,ST1
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP ST0
FSTP ST0
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004adfb8]
FNSTSW AX
TEST AH,0x41
JZ 0x004809e5
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ECX
ADD ESP,0xc
RET
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004adfa8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00480a0e
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [EDX]
MOV dword ptr [EAX],ECX
MOV ECX,dword ptr [EDX + 0x4]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EAX + 0x8],EDX
ADD ESP,0xc
RET
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x1c]
FLD ST1
FXCH ST3
FST dword ptr [ESP + 0x1c]
FXCH
FST dword ptr [ESP + 0x18]
FXCH ST3
FSTP dword ptr [EAX]
FSTP dword ptr [EAX + 0x4]
FXCH
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [ECX]
FADD ST0,ST1
FSTP dword ptr [EAX]
FSTP ST0
FLD dword ptr [ECX + 0x4]
FADD dword ptr [ESP + 0x1c]
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x8]
FADD dword ptr [ESP + 0x18]
FSTP dword ptr [EAX + 0x8]
ADD ESP,0xc
RET
