; FUN_00469bf0
FLD dword ptr [0x00e295d8]
FCOMP dword ptr [0x004ad590]
FNSTSW AX
TEST AH,0x41
JNZ 0x00469c2c
FLD dword ptr [0x00e295d8]
FSUB dword ptr [0x00e22a50]
FST dword ptr [0x00e295d8]
FCOMP dword ptr [0x004ad590]
FNSTSW AX
TEST AH,0x1
JZ 0x00469c2c
MOV dword ptr [0x00e295d8],0x0
RET
