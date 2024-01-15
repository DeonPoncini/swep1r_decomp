; FUN_0044ae40
MOV ECX,dword ptr [ESP + 0x4]
FLD dword ptr [ECX]
FCOMP dword ptr [ESP + 0xc]
FLD dword ptr [ECX]
FNSTSW AX
FCOMP dword ptr [0x004acc08]
TEST AH,0x41
FNSTSW AX
JNZ 0x0044ae8b
FLD dword ptr [ESP + 0x10]
TEST AH,0x41
JNZ 0x0044ae6a
FMUL dword ptr [0x004acc10]
FMUL qword ptr [0x00e22a40]
FLD dword ptr [ECX]
FXCH
FSUBP
FCOM dword ptr [ESP + 0xc]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JZ 0x0044aeb5
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX],EAX
JMP 0x0044aeb5
FLD dword ptr [ESP + 0x10]
TEST AH,0x1
JZ 0x0044ae9a
FMUL dword ptr [0x004acc10]
FMUL qword ptr [0x00e22a40]
FADD dword ptr [ECX]
FCOM dword ptr [ESP + 0xc]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044aeb5
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX],EDX
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004acc08]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044aedb
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acc08]
FNSTSW AX
TEST AH,0x1
JZ 0x0044aedb
MOV dword ptr [ECX],0x0
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004acc08]
FNSTSW AX
TEST AH,0x1
JZ 0x0044af01
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acc08]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044af01
MOV dword ptr [ECX],0x0
FLD dword ptr [ECX]
FADD dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x8]
FADD dword ptr [ESP + 0x14]
FMUL qword ptr [0x00e22a40]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acc14]
FST dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044af30
FSUB dword ptr [0x004acc18]
FSTP dword ptr [ECX]
JMP 0x0044af32
FSTP ST0
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acc1c]
FNSTSW AX
TEST AH,0x1
JZ 0x0044af4b
FLD dword ptr [ECX]
FSUB dword ptr [0x004acc20]
FSTP dword ptr [ECX]
RET
