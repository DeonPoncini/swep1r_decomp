; FUN_0048d010
PUSH EBP
MOV EBP,ESP
SUB ESP,0x24
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6c8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048d02f
MOV dword ptr [EBP + -0x10],0x1
JMP 0x0048d036
MOV dword ptr [EBP + -0x10],0x0
MOV EAX,dword ptr [EBP + -0x10]
MOV dword ptr [EBP + -0x8],EAX
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6c8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048d056
FLD dword ptr [EBP + 0x8]
FCHS
FSTP dword ptr [EBP + -0x14]
JMP 0x0048d05c
MOV ECX,dword ptr [EBP + 0x8]
MOV dword ptr [EBP + -0x14],ECX
MOV EDX,dword ptr [EBP + -0x14]
MOV dword ptr [EBP + 0x8],EDX
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6e8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048d0e9
FLD dword ptr [EBP + 0x8]
FMUL dword ptr [EBP + 0x8]
FSUBR dword ptr [0x004af6ec]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0048cff0
ADD ESP,0x4
FSTP dword ptr [EBP + 0x8]
PUSH 0x3
MOV EAX,dword ptr [EBP + 0x8]
PUSH EAX
CALL 0x0048c7f0
ADD ESP,0x8
FDIV dword ptr [0x004af6f8]
FADD dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + -0x18]
PUSH 0x5
MOV ECX,dword ptr [EBP + 0x8]
PUSH ECX
CALL 0x0048c7f0
ADD ESP,0x8
FMUL dword ptr [0x004af700]
FADD dword ptr [EBP + -0x18]
FSTP dword ptr [EBP + -0x1c]
PUSH 0x7
MOV EDX,dword ptr [EBP + 0x8]
PUSH EDX
CALL 0x0048c7f0
ADD ESP,0x8
FMUL dword ptr [0x004af704]
FADD dword ptr [EBP + -0x1c]
FMUL dword ptr [0x004af6f4]
FSUBR dword ptr [0x004af6d8]
FSTP dword ptr [EBP + -0x4]
JMP 0x0048d13d
PUSH 0x3
MOV EAX,dword ptr [EBP + 0x8]
PUSH EAX
CALL 0x0048c7f0
ADD ESP,0x8
FDIV dword ptr [0x004af6f8]
FADD dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + -0x20]
PUSH 0x5
MOV ECX,dword ptr [EBP + 0x8]
PUSH ECX
CALL 0x0048c7f0
ADD ESP,0x8
FMUL dword ptr [0x004af700]
FADD dword ptr [EBP + -0x20]
FSTP dword ptr [EBP + -0x24]
PUSH 0x7
MOV EDX,dword ptr [EBP + 0x8]
PUSH EDX
CALL 0x0048c7f0
ADD ESP,0x8
FMUL dword ptr [0x004af704]
FADD dword ptr [EBP + -0x24]
FMUL dword ptr [0x004af6f4]
FSTP dword ptr [EBP + -0x4]
CMP dword ptr [EBP + -0x8],0x0
JZ 0x0048d14a
FLD dword ptr [EBP + -0x4]
FCHS
JMP 0x0048d14d
FLD dword ptr [EBP + -0x4]
MOV ESP,EBP
POP EBP
RET
