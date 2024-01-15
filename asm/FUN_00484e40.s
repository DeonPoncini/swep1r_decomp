; FUN_00484e40
MOV ECX,dword ptr [ESP + 0x8]
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ae198]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484e6e
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ae19c]
FNSTSW AX
TEST AH,0x41
JZ 0x00484e66
FLD dword ptr [ECX]
JMP 0x00484e74
FLD dword ptr [0x004ae19c]
JMP 0x00484e74
FLD dword ptr [0x004ae198]
FST dword ptr [ESP + 0x8]
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004ae1a0]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484ea7
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004ae194]
FNSTSW AX
TEST AH,0x41
JZ 0x00484e9f
FLD dword ptr [ECX + 0x4]
JMP 0x00484ead
FLD dword ptr [0x004ae194]
JMP 0x00484ead
FLD dword ptr [0x004ae1a0]
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [0x004ae198]
FST dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484edd
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [0x004ae19c]
FNSTSW AX
TEST AH,0x41
JZ 0x00484ed5
FLD dword ptr [ECX + 0x8]
JMP 0x00484ee3
FLD dword ptr [0x004ae19c]
JMP 0x00484ee3
FLD dword ptr [0x004ae198]
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
FST dword ptr [ECX + 0x8]
MOV ECX,dword ptr [EAX]
FXCH
FCHS
PUSH ECX
FSTP dword ptr [ESP]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x80]
RET
