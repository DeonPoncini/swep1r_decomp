; FUN_0048ec90
MOV ECX,dword ptr [ESP + 0x4]
FLD dword ptr [ECX]
FCOMP dword ptr [0x004af784]
FLD dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JZ 0x0048eca7
FCHS
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048ecba
FLD dword ptr [0x004af784]
JMP 0x0048ecbc
FLD dword ptr [ECX]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004af784]
FSTP dword ptr [ECX]
FLD dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x1
JZ 0x0048ecd3
FCHS
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048ece6
FLD dword ptr [0x004af784]
JMP 0x0048ece9
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [0x004af784]
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048ed01
FCHS
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048ed16
FLD dword ptr [0x004af784]
FSTP dword ptr [ECX + 0x8]
RET
FLD dword ptr [ECX + 0x8]
FSTP dword ptr [ECX + 0x8]
RET
