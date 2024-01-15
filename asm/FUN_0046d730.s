; FUN_0046d730
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x14]
FADD dword ptr [ESP + 0x8]
FLD ST1
FXCH
FSTP dword ptr [ESP + 0x4]
FCOMP dword ptr [ESP + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046d755
FSTP ST0
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FSUB dword ptr [ESP + 0x18]
FLD ST1
FXCH
FSTP dword ptr [ESP + 0x8]
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046d776
FSTP ST0
FLD dword ptr [ESP + 0x8]
FCOM dword ptr [ESP + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046d787
FSTP ST0
FLD dword ptr [ESP + 0xc]
FCOM dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046d798
FSTP ST0
FLD dword ptr [ESP + 0x10]
RET
