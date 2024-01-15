; FUN_00469b90
FLD dword ptr [ESP + 0x4]
FMUL dword ptr [0x00e22a50]
FADD dword ptr [0x00e295a0]
FST dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ad670]
FNSTSW AX
TEST AH,0x41
JNZ 0x00469bbd
MOV dword ptr [0x00e295a0],0x3f800000
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ad590]
FNSTSW AX
TEST AH,0x1
JZ 0x00469bda
MOV dword ptr [0x00e295a0],0x0
FLD dword ptr [0x00e295a0]
RET
