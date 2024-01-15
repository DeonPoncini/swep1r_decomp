; FUN_004267a0
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [ESP + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x004267b1
JMP 0x004267af
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ac468]
FNSTSW AX
TEST AH,0x1
JZ 0x004267ca
MOV dword ptr [ESP + 0x8],0x0
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac468]
FNSTSW AX
TEST AH,0x1
JZ 0x004267e3
MOV dword ptr [ESP + 0xc],0x0
FLD dword ptr [ESP + 0xc]
FSUB dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
FSTP dword ptr [EAX + 0xf0]
FXCH
FSTP dword ptr [EAX + 0xf8]
FSTP dword ptr [EAX + 0xf4]
RET
