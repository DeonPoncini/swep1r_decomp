; FUN_0046b5a0
MOV ECX,dword ptr [ESP + 0x4]
FLD dword ptr [ECX + 0x1a0]
FCOMP dword ptr [0x004ad820]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b5bf
FLD dword ptr [0x004ad750]
JMP 0x0046b5c3
FLD dword ptr [ESP + 0x8]
FCOM dword ptr [ECX + 0x208]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b5f3
FLD qword ptr [0x00e22a40]
FMUL dword ptr [0x004ad824]
FSUBR dword ptr [ECX + 0x208]
FCOM
FSTP dword ptr [ECX + 0x208]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b627
JMP 0x0046b621
FCOM dword ptr [ECX + 0x208]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b627
FLD qword ptr [0x00e22a40]
FMUL dword ptr [0x004ad828]
FSUBR dword ptr [ECX + 0x208]
FCOM
FSTP dword ptr [ECX + 0x208]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b627
FST dword ptr [ECX + 0x208]
FCOMP qword ptr [0x004ad830]
FNSTSW AX
TEST AH,0x40
JZ 0x0046b66e
FLD dword ptr [ECX + 0x208]
FCOMP dword ptr [0x004ad750]
FLD dword ptr [ECX + 0x208]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b64f
FCHS
FCOMP qword ptr [0x004ad838]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b66e
FLD dword ptr [ECX + 0x208]
FMUL qword ptr [0x004ad778]
FSTP dword ptr [ECX + 0x208]
RET
