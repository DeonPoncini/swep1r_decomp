; FUN_0044c510
MOV ECX,dword ptr [ESP + 0x4]
SUB ESP,0x7c
FLD dword ptr [ECX]
FCOMP dword ptr [ECX + 0xc]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
FNSTSW AX
TEST AH,0x41
JZ 0x0044c9b8
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JZ 0x0044c9b8
FLD dword ptr [ECX + 0x8]
FCOMP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x0044c9b8
FLD dword ptr [0x00e37480]
FLD dword ptr [0x00e37480]
FLD dword ptr [0x00e37490]
FLD dword ptr [0x00e37490]
FLD dword ptr [0x00e374a0]
FLD dword ptr [0x00e374a0]
FXCH ST5
FMUL dword ptr [ECX]
FSTP dword ptr [ESP + 0x44]
FLD dword ptr [0x00e37484]
FXCH ST4
FMUL dword ptr [ECX + 0xc]
FSTP dword ptr [ESP + 0x50]
FLD dword ptr [0x00e37484]
FXCH ST3
FMUL dword ptr [ECX + 0x4]
FSTP dword ptr [ESP + 0x48]
FLD dword ptr [0x00e37494]
FXCH ST2
FMUL dword ptr [ECX + 0x10]
FSTP dword ptr [ESP + 0x54]
FLD dword ptr [0x00e37494]
FXCH
FMUL dword ptr [ECX + 0x8]
FSTP dword ptr [ESP + 0x4c]
FLD dword ptr [0x00e374a4]
FXCH ST5
FMUL dword ptr [ECX + 0x14]
FSTP dword ptr [ESP + 0x58]
FLD dword ptr [0x00e374a4]
FXCH ST4
FMUL dword ptr [ECX]
FSTP dword ptr [ESP + 0x5c]
FLD dword ptr [0x00e37488]
FXCH ST3
FMUL dword ptr [ECX + 0xc]
FSTP dword ptr [ESP + 0x68]
FLD dword ptr [0x00e37488]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FSTP dword ptr [ESP + 0x60]
FLD dword ptr [0x00e37498]
FXCH
FMUL dword ptr [ECX + 0x10]
FSTP dword ptr [ESP + 0x6c]
FLD dword ptr [0x00e37498]
FXCH ST5
FMUL dword ptr [ECX + 0x8]
FSTP dword ptr [ESP + 0x64]
FLD dword ptr [0x00e374a8]
FXCH ST4
FMUL dword ptr [ECX + 0x14]
FSTP dword ptr [ESP + 0x70]
FLD dword ptr [0x00e374a8]
FXCH ST3
FMUL dword ptr [ECX]
FSTP dword ptr [ESP + 0x74]
FLD dword ptr [0x00e3748c]
FXCH ST2
FMUL dword ptr [ECX + 0xc]
FSTP dword ptr [ESP + 0x80]
FLD dword ptr [0x00e3748c]
FXCH
FMUL dword ptr [ECX + 0x4]
FSTP dword ptr [ESP + 0x78]
FLD dword ptr [0x00e3749c]
FXCH ST5
FMUL dword ptr [ECX + 0x10]
FSTP dword ptr [ESP + 0x84]
FLD dword ptr [0x00e3749c]
FXCH ST4
FMUL dword ptr [ECX + 0x8]
FSTP dword ptr [ESP + 0x7c]
FLD dword ptr [0x00e374ac]
FXCH ST3
FMUL dword ptr [ECX + 0x14]
FSTP dword ptr [ESP + 0x88]
FLD dword ptr [0x00e374ac]
FXCH ST2
FMUL dword ptr [ECX]
FSTP dword ptr [ESP + 0x2c]
FMUL dword ptr [ECX + 0xc]
FXCH ST4
FMUL dword ptr [ECX + 0x4]
FXCH ST3
FMUL dword ptr [ECX + 0x10]
FXCH ST4
FSTP dword ptr [ESP + 0x38]
FXCH
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
MOV EAX,dword ptr [ESP + 0x94]
XOR EDI,EDI
FMUL dword ptr [ECX + 0x14]
FXCH ST2
FSTP dword ptr [ESP + 0x3c]
CMP EAX,EDI
FSTP dword ptr [ESP + 0x34]
FSTP dword ptr [ESP + 0x40]
JZ 0x0044c6da
OR EBX,0xffffffff
MOV dword ptr [ESP + 0x20],EBX
MOV dword ptr [ESP + 0x24],EBX
MOV dword ptr [ESP + 0x28],EBX
JMP 0x0044c6e8
XOR EBX,EBX
MOV dword ptr [ESP + 0x24],EDI
MOV dword ptr [ESP + 0x20],EBX
MOV dword ptr [ESP + 0x28],EDI
MOV EAX,0xfffffffe
MOV EBP,EAX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x18],EBP
MOV dword ptr [ESP + 0x1c],EAX
JMP 0x0044c705
MOV EBX,dword ptr [ESP + 0x20]
MOV EBP,dword ptr [ESP + 0x18]
MOV EAX,EDI
AND EAX,0x1
LEA ECX,[EAX + EAX*0x2]
MOV EAX,EDI
SAR EAX,0x1
AND EAX,0x1
SHL ECX,0x2
LEA EDX,[EAX + EAX*0x2]
MOV EAX,EDI
SAR EAX,0x2
AND EAX,0x1
SHL EDX,0x2
LEA ESI,[EAX + EAX*0x2]
FLD dword ptr [ESP + EDX*0x1 + 0x30]
SHL ESI,0x2
TEST BX,BX
FADD dword ptr [ESP + ESI*0x1 + 0x2c]
FADD dword ptr [ESP + ECX*0x1 + 0x34]
FADD dword ptr [0x00e374bc]
FSTP dword ptr [ESP + 0x10]
JNZ 0x0044c74f
TEST BP,BP
JZ 0x0044c812
FLD dword ptr [ESP + EDX*0x1 + 0x48]
FADD dword ptr [ESP + ESI*0x1 + 0x44]
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004acc7c]
FADD dword ptr [ESP + ECX*0x1 + 0x4c]
FNSTSW AX
FADD dword ptr [0x00e374b0]
TEST AH,0x41
JNZ 0x0044c79c
FCOM dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c786
FSTP ST0
MOV EAX,0x1
JMP 0x0044c7cc
FLD dword ptr [ESP + 0x10]
FCHS
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0044c7ca
OR EAX,0xffffffff
JMP 0x0044c7cc
FLD dword ptr [ESP + 0x10]
FLD ST1
FXCH
FCHS
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c7ba
FSTP ST0
MOV EAX,0x1
JMP 0x0044c7cc
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x0044c7ca
OR EAX,0xffffffff
JMP 0x0044c7cc
XOR EAX,EAX
TEST AX,AX
JNZ 0x0044c7e8
TEST BX,BX
JZ 0x0044c7fc
MOV dword ptr [ESP + 0x20],0x1
MOV dword ptr [ESP + 0x18],0x0
JMP 0x0044c812
MOVSX EBX,AX
MOVSX EBP,BP
NEG EBX
CMP EBP,EBX
MOV dword ptr [ESP + 0x20],0x0
JNZ 0x0044c806
MOV dword ptr [ESP + 0x18],0x0
JMP 0x0044c812
CMP word ptr [ESP + 0x18],-0x2
JNZ 0x0044c812
MOV dword ptr [ESP + 0x18],EAX
MOV EBX,dword ptr [ESP + 0x24]
TEST BX,BX
JNZ 0x0044c826
CMP word ptr [ESP + 0x14],BX
JZ 0x0044c8e5
FLD dword ptr [ESP + EDX*0x1 + 0x60]
FADD dword ptr [ESP + ESI*0x1 + 0x5c]
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004acc7c]
FADD dword ptr [ESP + ECX*0x1 + 0x64]
FNSTSW AX
FADD dword ptr [0x00e374b4]
TEST AH,0x41
JNZ 0x0044c873
FCOM dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c85d
FSTP ST0
MOV EAX,0x1
JMP 0x0044c8a3
FLD dword ptr [ESP + 0x10]
FCHS
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0044c8a1
OR EAX,0xffffffff
JMP 0x0044c8a3
FLD dword ptr [ESP + 0x10]
FLD ST1
FXCH
FCHS
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c891
FSTP ST0
MOV EAX,0x1
JMP 0x0044c8a3
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x0044c8a1
OR EAX,0xffffffff
JMP 0x0044c8a3
XOR EAX,EAX
XOR EBP,EBP
CMP AX,BP
JNZ 0x0044c8bd
CMP BX,BP
JZ 0x0044c8b7
MOV dword ptr [ESP + 0x24],0x1
MOV dword ptr [ESP + 0x14],EBP
JMP 0x0044c8e5
MOVSX EBX,AX
MOV dword ptr [ESP + 0x24],EBP
MOVSX EBP,word ptr [ESP + 0x14]
NEG EBX
CMP EBP,EBX
JNZ 0x0044c8d9
MOV dword ptr [ESP + 0x14],0x0
JMP 0x0044c8e5
CMP word ptr [ESP + 0x14],-0x2
JNZ 0x0044c8e5
MOV dword ptr [ESP + 0x14],EAX
MOV EBP,dword ptr [ESP + 0x28]
MOV EBX,dword ptr [ESP + 0x1c]
TEST BP,BP
JNZ 0x0044c8f7
TEST BX,BX
JZ 0x0044c96c
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004acc7c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c930
FLD dword ptr [ESP + EDX*0x1 + 0x78]
FADD dword ptr [ESP + ESI*0x1 + 0x74]
FADD dword ptr [ESP + ECX*0x1 + 0x7c]
FADD dword ptr [0x00e374b8]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044c92c
MOV EAX,0x1
JMP 0x0044c933
XOR EAX,EAX
JMP 0x0044c933
OR EAX,0xffffffff
TEST AX,AX
JNZ 0x0044c94a
TEST BP,BP
JZ 0x0044c95c
MOV EBP,0x1
XOR EBX,EBX
MOV dword ptr [ESP + 0x28],EBP
JMP 0x0044c968
MOVSX ECX,AX
MOVSX EDX,BX
NEG ECX
XOR EBP,EBP
CMP EDX,ECX
MOV dword ptr [ESP + 0x28],EBP
JNZ 0x0044c960
XOR EBX,EBX
JMP 0x0044c968
CMP BX,-0x2
JNZ 0x0044c96c
MOV EBX,EAX
MOV dword ptr [ESP + 0x1c],EBX
INC EDI
CMP EDI,0x8
JL 0x0044c6fd
CMP word ptr [ESP + 0x20],0x0
JZ 0x0044c997
CMP word ptr [ESP + 0x24],0x0
JZ 0x0044c997
TEST BP,BP
JZ 0x0044c997
MOV AX,0x2
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x7c
RET
CMP word ptr [ESP + 0x18],0x0
JNZ 0x0044c9b8
CMP word ptr [ESP + 0x14],0x0
JNZ 0x0044c9b8
TEST BX,BX
JNZ 0x0044c9b8
MOV AX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x7c
RET
POP EDI
POP ESI
POP EBP
XOR AX,AX
POP EBX
ADD ESP,0x7c
RET
