; FUN_0046aec0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0xc]
FLD dword ptr [ECX + 0x58]
FCOMP dword ptr [EAX + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046aedd
FLD dword ptr [0x004ad750]
JMP 0x0046aefb
MOV EAX,dword ptr [ECX + 0x64]
TEST AH,0x2
JNZ 0x0046aef5
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x0046aef5
FLD dword ptr [ECX + 0x184]
JMP 0x0046aefb
FLD dword ptr [0x004ad7a0]
FCOMP dword ptr [0x004ad7a4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046af13
MOV dword ptr [ECX + 0x2fc],0xbf800000
RET
MOV dword ptr [ECX + 0x2fc],0x0
RET
