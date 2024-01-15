; FUN_00443380
SUB ESP,0x24
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [EAX]
FSUB dword ptr [0x00e98e30]
FLD dword ptr [0x00e985b0]
FCHS
FSTP dword ptr [ESP + 0x28]
FCOM dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x30]
FLD dword ptr [EAX]
FXCH ST5
FSUB dword ptr [0x00e98e34]
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [0x00e98e38]
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST3
FSUB dword ptr [0x00e98e30]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP]
FXCH
FSUB dword ptr [0x00e98e34]
FXCH
FSUB dword ptr [0x00e98e38]
FXCH ST4
FSUB dword ptr [0x00e98e30]
FXCH ST3
FSUB dword ptr [0x00e98e34]
FXCH ST2
FSUB dword ptr [0x00e98e38]
FXCH
FSTP dword ptr [ESP + 0x4]
FXCH ST3
FSTP dword ptr [ESP + 0x8]
FXCH
FSTP dword ptr [ESP + 0xc]
FSTP dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x14]
JZ 0x0044344c
FLD dword ptr [ESP]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x0044344c
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JNZ 0x00443549
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044347f
FLD dword ptr [ESP]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044347f
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JZ 0x0044354b
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x004434b0
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x004434b0
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044354b
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004434e3
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004434e3
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JZ 0x0044354b
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x00443510
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JZ 0x00443510
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044354b
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443551
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443551
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443551
XOR EAX,EAX
ADD ESP,0x24
RET
FSTP ST0
XOR EAX,EAX
ADD ESP,0x24
RET
MOV EAX,0x1
ADD ESP,0x24
RET
