; FUN_00492960
PUSH EBP
MOV EBP,ESP
SUB ESP,0x30
MOV EAX,dword ptr [EBP + 0x8]
PUSH ESI
FLD dword ptr [EAX]
FCHS
FSTP dword ptr [EBP + -0x24]
FLD dword ptr [EAX + 0x4]
MOV ECX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EAX + 0x10]
FCHS
FSTP dword ptr [EBP + -0x20]
FLD dword ptr [EAX + 0x8]
FCHS
FSTP dword ptr [EBP + -0x1c]
MOV dword ptr [EBP + -0x18],ECX
MOV dword ptr [EBP + -0x14],EDX
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [EBP + -0x18]
MOV ECX,dword ptr [EAX + 0x14]
MOV dword ptr [EBP + -0x10],ECX
FSTP dword ptr [EBP + -0x8]
FLD dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x14]
FADD dword ptr [EBP + -0x8]
FST dword ptr [EBP + -0xc]
FSTP dword ptr [EBP + 0x8]
FLD dword ptr [EBP + 0x8]
FSQRT
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FST dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af958]
FNSTSW AX
TEST AH,0x1
JZ 0x00492a2e
FLD dword ptr [EBP + -0x24]
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0048d010
FSUBR dword ptr [0x004af95c]
FLD dword ptr [EBP + -0x20]
FCOMP dword ptr [0x004af940]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x004929fd
FLD dword ptr [EBP + -0x10]
FCOMP dword ptr [0x004af940]
FNSTSW AX
TEST AH,0x41
JZ 0x00492a1d
FLD dword ptr [EBP + -0x20]
FCOMP dword ptr [0x004af940]
FNSTSW AX
TEST AH,0x1
JZ 0x00492a1f
FLD dword ptr [EBP + -0x10]
FCOMP dword ptr [0x004af940]
FNSTSW AX
TEST AH,0x1
JZ 0x00492a1f
FCHS
MOV ESI,dword ptr [EBP + 0xc]
FSTP dword ptr [ESI + 0x8]
MOV dword ptr [ESI + 0x4],0x0
JMP 0x00492a5e
FLD dword ptr [EBP + -0x14]
FDIV dword ptr [EBP + 0x8]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0048d010
FSUBR dword ptr [0x004af95c]
FLD dword ptr [EBP + -0x18]
FCOMP dword ptr [0x004af940]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x00492a58
FCHS
MOV ESI,dword ptr [EBP + 0xc]
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af958]
FNSTSW AX
TEST AH,0x1
JZ 0x00492a76
MOV dword ptr [ESI],0x42b40000
JMP 0x00492aa8
FLD dword ptr [EBP + -0xc]
FDIV dword ptr [EBP + 0x8]
FST dword ptr [EBP + 0xc]
FCOMP dword ptr [0x004af944]
FNSTSW AX
TEST AH,0x1
JNZ 0x00492a94
MOV dword ptr [ESI],0x0
JMP 0x00492aa8
MOV EDX,dword ptr [EBP + 0xc]
PUSH EDX
CALL 0x0048d010
FSUBR dword ptr [0x004af95c]
ADD ESP,0x4
FSTP dword ptr [ESI]
FLD dword ptr [EBP + -0x10]
FCOMP dword ptr [0x004af940]
FNSTSW AX
TEST AH,0x1
JZ 0x00492abe
FLD dword ptr [ESI]
FCHS
FSTP dword ptr [ESI]
FLD dword ptr [EBP + -0x14]
FCHS
FST dword ptr [EBP + -0x30]
FMUL dword ptr [EBP + -0x30]
FADD dword ptr [EBP + -0x8]
FSTP dword ptr [EBP + 0xc]
FLD dword ptr [EBP + 0xc]
FSQRT
FSTP dword ptr [EBP + -0x8]
FLD dword ptr [EBP + -0x8]
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af958]
FNSTSW AX
TEST AH,0x1
JNZ 0x00492b63
FLD dword ptr [EBP + -0x20]
FMUL dword ptr [EBP + -0x18]
FLD dword ptr [EBP + -0x30]
FMUL dword ptr [EBP + -0x24]
FADDP
FDIV ST0,ST1
FSTP dword ptr [EBP + 0xc]
FSTP ST0
FLD dword ptr [EBP + 0xc]
FCOMP dword ptr [0x004af944]
FNSTSW AX
TEST AH,0x1
JNZ 0x00492b18
MOV dword ptr [ESI + 0x8],0x0
JMP 0x00492b46
FLD dword ptr [EBP + 0xc]
FCOMP dword ptr [0x004af948]
FNSTSW AX
TEST AH,0x41
JZ 0x00492b31
MOV dword ptr [ESI + 0x8],0x43340000
JMP 0x00492b46
MOV EAX,dword ptr [EBP + 0xc]
PUSH EAX
CALL 0x0048d010
FSUBR dword ptr [0x004af95c]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [EBP + -0x1c]
FCOMP dword ptr [0x004af940]
FNSTSW AX
TEST AH,0x1
JZ 0x00492b65
FLD dword ptr [ESI + 0x8]
FCHS
FSTP dword ptr [ESI + 0x8]
POP ESI
MOV ESP,EBP
POP EBP
RET
FSTP ST0
POP ESI
MOV ESP,EBP
POP EBP
RET
