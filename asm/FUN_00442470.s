; FUN_00442470
MOV EDX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
FLD dword ptr [EDX]
FLD dword ptr [ECX + 0x14]
FMUL dword ptr [EDX + 0x8]
FXCH
FMUL dword ptr [ECX + 0xc]
FLD dword ptr [ECX + 0x10]
FMUL dword ptr [EDX + 0x4]
FXCH ST2
FADDP
FLD dword ptr [EDX + 0x8]
FLD dword ptr [EDX + 0x4]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EDX]
FLD ST2
FXCH
FMUL dword ptr [ECX]
FXCH
FCOMP qword ptr [0x004aca68]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FNSTSW AX
TEST AH,0x1
JNZ 0x004424de
FLD ST1
FCOMP qword ptr [0x004aca70]
FNSTSW AX
TEST AH,0x41
JZ 0x004424de
FSTP ST0
FSTP ST0
FLD dword ptr [0x004aca78]
RET
FLD dword ptr [EDX + 0xc]
FSUB ST0,ST1
FDIVRP ST2,ST0
FSTP ST0
FCOM dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x004424fd
FSTP ST0
FLD dword ptr [0x004aca78]
RET
FCOM dword ptr [ECX + 0x18]
FNSTSW AX
TEST AH,0x41
JNZ 0x00442510
FSTP ST0
FLD dword ptr [0x004aca78]
RET
MOV EAX,dword ptr [ESP + 0xc]
FLD ST0
FMUL dword ptr [ECX + 0xc]
FLD ST1
FLD ST2
FXCH ST2
FSTP dword ptr [EAX]
FMUL dword ptr [ECX + 0x10]
FLD dword ptr [EAX]
FLD ST3
FXCH ST2
FSTP dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [ECX + 0x14]
FSTP dword ptr [EAX + 0x8]
FXCH
FADD dword ptr [ECX]
FSTP dword ptr [EAX]
FSTP ST0
FLD dword ptr [ECX + 0x4]
FADD dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x8]
FADD dword ptr [EAX + 0x8]
FSTP dword ptr [EAX + 0x8]
RET
