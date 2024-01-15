; FUN_0044af50
FLD dword ptr [ESP + 0x8]
FDIV dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x4]
FCHS
FMUL dword ptr [ESP + 0x14]
FLD dword ptr [ECX]
FXCH
FCOM dword ptr [0x004acc24]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044af7b
FSTP ST0
FLD dword ptr [0x004acc24]
FCOM dword ptr [0x004acc28]
FNSTSW AX
TEST AH,0x1
JZ 0x0044af90
FSTP ST0
FLD dword ptr [0x004acc28]
FSUB ST0,ST1
FMUL qword ptr [0x00e22a40]
FMUL qword ptr [0x004acc30]
FSUBP
FSTP dword ptr [ECX]
RET
