; FUN_0042f3e0
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ac660]
SUB ESP,0xc
PUSH ESI
FNSTSW AX
TEST AH,0x41
JNZ 0x0042f400
FLD dword ptr [0x004ac664]
POP ESI
ADD ESP,0xc
RET
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac668]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f41c
FLD dword ptr [0x004ac66c]
POP ESI
ADD ESP,0xc
RET
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac670]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f442
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac674]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042f442
XOR ESI,ESI
JMP 0x0042f487
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac678]
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x14]
PUSH ECX
MOV dword ptr [ESP + 0x10],EAX
MOV ESI,0x1
FSUBR dword ptr [0x004ac67c]
FNSTSW AX
FSTP dword ptr [ESP]
TEST AH,0x1
JZ 0x0042f47b
CALL 0x00480670
FCHS
JMP 0x0042f480
CALL 0x00480670
FSTP dword ptr [ESP + 0x18]
ADD ESP,0x4
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac680]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f4af
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac684]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042f4af
FLD dword ptr [ESP + 0x14]
JMP 0x0042f507
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
FST dword ptr [ESP + 0x4]
FMUL dword ptr [ESP + 0x14]
FLD ST0
FMUL dword ptr [ESP + 0x4]
FXCH
FMUL dword ptr [0x004ac68c]
FLD ST1
FMUL dword ptr [ESP + 0x4]
FXCH ST2
FMUL dword ptr [0x004ac690]
FXCH ST2
FST dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ac694]
FXCH
FMUL dword ptr [0x004ac688]
FXCH ST2
FADDP ST2,ST0
FXCH ST2
FADDP
FXCH
FADDP
FSUBR dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac698]
TEST ESI,ESI
FMUL qword ptr [0x004ac6a0]
JZ 0x0042f539
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x1
JZ 0x0042f533
FSUBR dword ptr [0x004ac66c]
POP ESI
ADD ESP,0xc
RET
FSUBR dword ptr [0x004ac664]
POP ESI
ADD ESP,0xc
RET
