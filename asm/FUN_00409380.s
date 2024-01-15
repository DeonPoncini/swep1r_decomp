; FUN_00409380
MOVSX EAX,word ptr [ESP + 0x4]
MOV dword ptr [ESP + 0x4],EAX
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004b4774]
FCOM dword ptr [0x004ac34c]
FNSTSW AX
TEST AH,0x1
JZ 0x004093c1
MOV ECX,dword ptr [0x00df7f2c]
FLD dword ptr [0x004ac34c]
MOV EDX,dword ptr [ECX + 0x48]
ADD ECX,0x48
FSUB ST0,ST1
FDIVR dword ptr [EDX + 0x4]
FSTP dword ptr [0x00ec8578]
FSTP ST0
JMP 0x004093d6
MOV EAX,[0x00df7f2c]
FSTP ST0
MOV EDX,dword ptr [EAX + 0x48]
LEA ECX,[EAX + 0x48]
MOV EAX,dword ptr [EDX + 0x8]
MOV [0x00ec8578],EAX
MOV EDX,dword ptr [ECX]
FLD dword ptr [0x00ec8578]
FCOMP dword ptr [EDX + 0x8]
FNSTSW AX
TEST AH,0x1
JNZ 0x004093f3
PUSH 0x0
CALL 0x0048fab0
ADD ESP,0x4
RET
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [0x00ec8578]
FLD dword ptr [0x004ac34c]
FLD dword ptr [0x00ec8578]
FLD dword ptr [0x00ec8578]
FXCH ST2
FDIV ST0,ST3
FXCH ST3
FMUL qword ptr [0x004ac350]
FXCH ST3
FSTP dword ptr [0x00ec8574]
FXCH ST2
FSUBP ST2,ST0
FXCH
FSTP dword ptr [0x00ec857c]
MOV ECX,dword ptr [ECX]
FCOMP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x00409443
MOV ECX,dword ptr [ECX + 0x4]
MOV dword ptr [0x00ec8578],ECX
RET
