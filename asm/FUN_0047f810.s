; FUN_0047f810
PUSH EBP
MOV EBP,ESP
SUB ESP,0x8
PUSH 0x0
MOV EAX,dword ptr [EBP + 0x8]
PUSH EAX
CALL 0x0044e620
ADD ESP,0x8
MOV dword ptr [EBP + -0x8],EAX
MOV ECX,dword ptr [EBP + 0x8]
MOV EDX,dword ptr [EBP + -0x8]
FLD dword ptr [ECX + 0x8]
FMUL dword ptr [EDX*0x8 + 0xe22a64]
MOV EAX,dword ptr [EBP + -0x8]
FADD dword ptr [EAX*0x8 + 0xe22a60]
FSTP dword ptr [EBP + -0x4]
CMP dword ptr [0x004c7be4],0x0
JL 0x0047f86a
FLD dword ptr [EBP + -0x4]
FCOMP dword ptr [0x004adf4c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047f865
FLD dword ptr [0x004adf4c]
JMP 0x0047f885
FLD dword ptr [EBP + -0x4]
JMP 0x0047f885
FLD dword ptr [EBP + -0x4]
FCOMP dword ptr [0x004adf4c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047f882
FLD dword ptr [0x004adf60]
JMP 0x0047f885
FLD dword ptr [EBP + -0x4]
MOV ESP,EBP
POP EBP
RET
