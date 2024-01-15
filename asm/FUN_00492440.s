; FUN_00492440
PUSH EBP
MOV EBP,ESP
PUSH ECX
MOV ECX,dword ptr [EBP + 0x8]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [ECX]
FLD ST2
FMUL ST3
FLD ST2
FMUL ST3
FADDP
FLD ST1
FMUL ST2
FADDP
FSTP dword ptr [EBP + 0x8]
FSTP ST0
FSTP ST0
FSTP ST0
FLD dword ptr [EBP + 0x8]
FSQRT
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FCOM dword ptr [0x004af92c]
FNSTSW AX
TEST AH,0x40
JNZ 0x004924a0
FLD dword ptr [0x004af938]
FDIV ST0,ST1
FLD ST0
FMUL dword ptr [ECX]
FSTP dword ptr [ECX]
FLD dword ptr [ECX + 0x4]
FMUL ST1
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FMUL ST1
FSTP dword ptr [ECX + 0x8]
FSTP ST0
MOV ESP,EBP
POP EBP
RET
