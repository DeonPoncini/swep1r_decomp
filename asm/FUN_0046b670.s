; FUN_0046b670
MOV EAX,[0x004c707c]
SUB ESP,0xc
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x230],EAX
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x2000000
JZ 0x0046b6f6
FLD dword ptr [ESI + 0x108]
FCOMP dword ptr [0x004ad840]
MOV dword ptr [ESI + 0x230],0x3f266666
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b6d9
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad848]
FLD dword ptr [ESI + 0x108]
FXCH
FSUBP
MOV dword ptr [ESI + 0x70],0x44bb8000
MOV dword ptr [ESI + 0x74],0x43c80000
FSTP dword ptr [ESI + 0x108]
JMP 0x0046b989
MOV dword ptr [ESI + 0x108],0x45afc800
MOV dword ptr [ESI + 0x70],0x44bb8000
MOV dword ptr [ESI + 0x74],0x43c80000
JMP 0x0046b989
CALL 0x0047e870
FDIVR dword ptr [0x004ad850]
MOV EAX,dword ptr [ESI + 0x60]
TEST AH,0x1
FLD dword ptr [0x004c7080]
FMUL dword ptr [0x004ad854]
FXCH
FSTP dword ptr [ESP + 0x14]
FST dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x8]
JZ 0x0046b782
MOV ECX,dword ptr [ESI + 0x1e70]
MOV dword ptr [ESI + 0x138],0x0
CMP word ptr [ECX + 0x5c],0x1
JNZ 0x0046b74f
FLD dword ptr [ESI + 0x230]
FMUL dword ptr [0x004ad858]
JMP 0x0046b983
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad85c]
FCOMP dword ptr [ESI + 0x130]
FLD dword ptr [ESI + 0x230]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b777
FMUL dword ptr [0x004ad860]
JMP 0x0046b983
FMUL dword ptr [0x004ad864]
JMP 0x0046b983
MOV EDX,dword ptr [ESI + 0x1e70]
CMP word ptr [EDX + 0x5c],0x1
JNZ 0x0046b79e
MOV dword ptr [ESI + 0x138],0x0
JMP 0x0046b989
FLD dword ptr [ESI + 0x234]
FSUB qword ptr [0x00e22a40]
FCOM dword ptr [0x004ad750]
FSTP dword ptr [ESI + 0x234]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b86c
CALL 0x004816b0
MOV dword ptr [ESP + 0x4],EAX
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad768]
FMUL dword ptr [0x004ad868]
FSUB dword ptr [0x004ad86c]
FSTP dword ptr [ESI + 0x234]
CALL 0x004816b0
MOV dword ptr [ESP + 0x4],EAX
FILD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ad768]
FCOM dword ptr [0x004ad788]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b833
MOV ECX,dword ptr [ESI + 0x23c]
DEC ECX
CMP ECX,0x2
MOV dword ptr [ESI + 0x23c],ECX
FSTP ST0
JL 0x0046b830
MOV EAX,dword ptr [ESI + 0x238]
MOV EDX,ECX
SUB EDX,EAX
CMP EDX,0x2
JG 0x0046b830
SUB EAX,ECX
CMP EAX,0x2
JLE 0x0046b86c
INC ECX
JMP 0x0046b866
FCOMP dword ptr [0x004ad870]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b86c
MOV EAX,dword ptr [ESI + 0x23c]
INC EAX
MOV ECX,EAX
MOV dword ptr [ESI + 0x23c],EAX
MOV EAX,dword ptr [ESI + 0x238]
MOV EDX,ECX
SUB EDX,EAX
CMP EDX,0x2
JG 0x0046b865
SUB EAX,ECX
CMP EAX,0x2
JLE 0x0046b86c
DEC ECX
MOV dword ptr [ESI + 0x23c],ECX
FLD dword ptr [0x0050cae0]
FCOMP dword ptr [0x004ad750]
MOV EAX,dword ptr [ESI + 0x23c]
MOV dword ptr [ESP + 0x4],EAX
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b8c2
FLD dword ptr [ESI + 0x230]
FMUL dword ptr [0x004ad858]
FILD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ad7f4]
FLD ST1
FSTP dword ptr [ESI + 0x230]
FMUL dword ptr [0x0050cae0]
FSUBR dword ptr [0x004ad7f4]
FMUL ST1
FSTP dword ptr [ESI + 0x230]
FSTP ST0
JMP 0x0046b989
FILD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [0x004ad878]
FXCH
FSUB dword ptr [0x004ad7f4]
FLD dword ptr [ESI + 0x12c]
FXCH
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FXCH
FCOMPP
FSUB dword ptr [0x004ad874]
FNSTSW AX
FMUL dword ptr [ESP + 0x14]
TEST AH,0x41
FST dword ptr [ESI + 0x138]
JNZ 0x0046b93d
MOV EAX,dword ptr [ESI + 0x60]
TEST EAX,0x18000
JZ 0x0046b93d
TEST AH,0x80
FSTP ST0
JZ 0x0046b91a
FLD dword ptr [ESI + 0x130]
JMP 0x0046b920
FLD dword ptr [ESI + 0x134]
FCOM dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b935
FMUL dword ptr [0x004ad87c]
JMP 0x0046b949
FMUL dword ptr [0x004ad880]
JMP 0x0046b949
FSUBR dword ptr [ESI + 0x12c]
FMUL dword ptr [0x004ad868]
FMUL dword ptr [0x004ad884]
FDIV dword ptr [ESP + 0x14]
FSUB dword ptr [0x004ad888]
FCOM dword ptr [0x004ad88c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b96e
FSTP ST0
FLD dword ptr [0x004ad88c]
FCOM dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b983
FSTP ST0
FLD dword ptr [0x004ad774]
FSTP dword ptr [ESI + 0x230]
FLD dword ptr [ESI + 0x230]
FCOMP dword ptr [ESI + 0x22c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b9d6
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad890]
FLD dword ptr [ESI + 0x230]
FLD dword ptr [ESI + 0x22c]
FADDP ST2,ST0
FCOMP
FSTP dword ptr [ESI + 0x22c]
FNSTSW AX
TEST AH,0x1
JZ 0x0046ba22
MOV ECX,dword ptr [ESI + 0x230]
MOV dword ptr [ESI + 0x22c],ECX
POP ESI
ADD ESP,0xc
RET
FLD dword ptr [ESI + 0x230]
FCOMP dword ptr [ESI + 0x22c]
FNSTSW AX
TEST AH,0x1
JZ 0x0046ba22
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad890]
FLD dword ptr [ESI + 0x22c]
FLD dword ptr [ESI + 0x230]
FXCH ST2
FSUBP
FXCH
FCOMP
FSTP dword ptr [ESI + 0x22c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ba22
MOV EDX,dword ptr [ESI + 0x230]
MOV dword ptr [ESI + 0x22c],EDX
POP ESI
ADD ESP,0xc
RET
