; FUN_004a23c0
PUSH EBP
MOV EBP,ESP
SUB ESP,0x18
MOV dword ptr [EBP + -0x8],0x80000000
MOV dword ptr [EBP + -0x4],0x4147ffff
MOV dword ptr [EBP + -0x10],0xc0000000
MOV dword ptr [EBP + -0xc],0x4150017e
FLD qword ptr [EBP + -0x10]
FDIV qword ptr [EBP + -0x8]
FMUL qword ptr [EBP + -0x8]
FSUBR qword ptr [EBP + -0x10]
FSTP qword ptr [EBP + -0x18]
FLD qword ptr [EBP + -0x18]
FCOMP qword ptr [0x004afa50]
FNSTSW AX
TEST AH,0x41
JNZ 0x004a240a
MOV EAX,0x1
MOV ESP,EBP
POP EBP
RET
XOR EAX,EAX
MOV ESP,EBP
POP EBP
RET
