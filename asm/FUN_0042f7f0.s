; FUN_0042f7f0
MOV ECX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
FLD dword ptr [ECX]
FCOMP dword ptr [EDX]
FNSTSW AX
TEST AH,0x40
JZ 0x0042f823
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [EDX + 0x4]
FNSTSW AX
TEST AH,0x40
JZ 0x0042f823
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [EDX + 0x8]
FNSTSW AX
TEST AH,0x40
JZ 0x0042f823
MOV EAX,0x1
RET
XOR EAX,EAX
RET
