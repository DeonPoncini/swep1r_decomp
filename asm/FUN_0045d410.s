; FUN_0045d410
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x84]
FLD dword ptr [EAX + 0xe8]
MOV EAX,dword ptr [EAX + 0xe0]
MOV dword ptr [ESP + 0x4],EAX
FLD ST0
FSUB dword ptr [ESP + 0x4]
FCOM dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x1
JZ 0x0045d43f
FCHS
FCOM dword ptr [0x004ad228]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045d452
FSUBR dword ptr [0x004ad22c]
FILD dword ptr [ECX + 0x78]
FADDP ST2,ST0
FXCH
FSUB ST0,ST1
FXCH
FSTP ST0
FCOM dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x1
JZ 0x0045d474
FSTP ST0
FLD dword ptr [0x004ad218]
RET
