; FUN_0042f9b0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x0042f8c0
FCOM dword ptr [0x004ac6a8]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JNZ 0x0042f9e1
FLD dword ptr [ESI]
FDIV ST0,ST1
FSTP dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FDIV ST0,ST1
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [ESI + 0x8]
FDIV ST0,ST1
FSTP dword ptr [ESI + 0x8]
POP ESI
RET
