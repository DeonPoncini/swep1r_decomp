; FUN_00443110
SUB ESP,0x30
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EAX]
FSUB dword ptr [0x00e98e30]
FLD dword ptr [0x00e985b0]
FCHS
FSTP dword ptr [ESP + 0x34]
FCOM dword ptr [ESP + 0x34]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x38]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x3c]
FLD dword ptr [EAX]
FXCH ST5
FSUB dword ptr [0x00e98e34]
FSTP dword ptr [ESP + 0x28]
FLD dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [0x00e98e38]
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [EAX + 0x8]
FXCH ST3
FSUB dword ptr [0x00e98e30]
MOV EAX,dword ptr [ESP + 0x40]
FSTP dword ptr [ESP]
FLD dword ptr [EAX]
FXCH ST2
FSUB dword ptr [0x00e98e34]
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [EAX + 0x4]
FXCH
FSUB dword ptr [0x00e98e38]
FSTP dword ptr [ESP + 0x8]
FLD dword ptr [EAX + 0x8]
FXCH ST5
FSUB dword ptr [0x00e98e30]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0xc]
FXCH ST3
FSUB dword ptr [0x00e98e34]
FXCH ST2
FSUB dword ptr [0x00e98e38]
FXCH
FSUB dword ptr [0x00e98e30]
FXCH ST3
FSUB dword ptr [0x00e98e34]
FXCH ST4
FSUB dword ptr [0x00e98e38]
FXCH ST2
FSTP dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP + 0x20]
JZ 0x0044321b
FLD dword ptr [ESP]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x0044321b
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x0044321b
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044336d
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044325f
FLD dword ptr [ESP]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044325f
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044325f
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JZ 0x0044336f
FLD dword ptr [ESP + 0x28]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x0044329f
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x0044329f
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x0044329f
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044336f
FLD dword ptr [ESP + 0x28]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004432e7
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004432e7
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004432e7
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JZ 0x0044336f
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x00443323
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x00443323
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JZ 0x00443323
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x34]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044336f
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443375
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443375
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443375
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x00e985b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00443375
XOR EAX,EAX
ADD ESP,0x30
RET
FSTP ST0
XOR EAX,EAX
ADD ESP,0x30
RET
MOV EAX,0x1
ADD ESP,0x30
RET
