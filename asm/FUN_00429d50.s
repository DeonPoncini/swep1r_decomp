; FUN_00429d50
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
FADD dword ptr [ECX]
FCOM dword ptr [ESP + 0x10]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JZ 0x00429d71
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ECX],EAX
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00429d84
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [ECX],EDX
RET
