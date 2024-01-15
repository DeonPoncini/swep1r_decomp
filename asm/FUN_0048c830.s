; FUN_0048c830
PUSH EBP
MOV EBP,ESP
SUB ESP,0x14
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6c8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c895
FLD dword ptr [EBP + 0x8]
FCHS
FST dword ptr [EBP + -0x4]
FCOMP dword ptr [0x004af6cc]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c869
FLD dword ptr [0x004af6cc]
FSUB dword ptr [EBP + -0x4]
FSTP dword ptr [EBP + -0x8]
JMP 0x0048c893
FLD dword ptr [EBP + -0x4]
FDIV dword ptr [0x004af6cc]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0048c8f0
ADD ESP,0x4
FST dword ptr [EBP + -0xc]
FMUL dword ptr [0x004af6cc]
FSUBR dword ptr [EBP + -0x4]
FSUBR dword ptr [0x004af6cc]
FSTP dword ptr [EBP + -0x8]
JMP 0x0048c8ce
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6cc]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c8aa
FLD dword ptr [EBP + 0x8]
JMP 0x0048c8e1
FLD dword ptr [EBP + 0x8]
FDIV dword ptr [0x004af6cc]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0048c8f0
ADD ESP,0x4
FST dword ptr [EBP + -0xc]
FMUL dword ptr [0x004af6cc]
FSUBR dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + -0x8]
CMP dword ptr [EBP + -0x8],0x43b40000
JNZ 0x0048c8de
MOV dword ptr [EBP + -0x8],0x0
FLD dword ptr [EBP + -0x8]
MOV ESP,EBP
POP EBP
RET
