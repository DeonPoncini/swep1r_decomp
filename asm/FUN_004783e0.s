; FUN_004783e0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST dword ptr [ESI + 0x60],0x800000
JNZ 0x004783fe
MOV EAX,dword ptr [ESI + 0x64]
MOV dword ptr [ESP + 0x8],0x3fc00000
TEST AH,0x20
JZ 0x00478406
MOV dword ptr [ESP + 0x8],0x40800000
FLD dword ptr [ESI + 0x18c]
MOV EAX,dword ptr [ESI + 0x1e70]
FCOMP dword ptr [0x004adcbc]
TEST byte ptr [EAX + 0x8],0x8
FNSTSW AX
JZ 0x00478567
FLD dword ptr [ESI + 0x18c]
TEST AH,0x41
JNZ 0x004784b3
FLD qword ptr [0x00e22a40]
FMUL dword ptr [ESP + 0x8]
FXCH
FCOMP dword ptr [0x004add38]
FMUL dword ptr [ESI + 0x18c]
FNSTSW AX
FADD dword ptr [ESI + 0x1a4]
TEST AH,0x1
FST dword ptr [ESI + 0x1a4]
JNZ 0x00478466
FLD dword ptr [0x004adce0]
JMP 0x00478478
FLD dword ptr [0x004adc50]
FSUB dword ptr [ESI + 0x18c]
FDIVR dword ptr [ESI + 0x18c]
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x00478556
MOV ECX,dword ptr [ESI + 0x84]
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH ECX
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x00478556
FCOMP dword ptr [0x004add3c]
FNSTSW AX
TEST AH,0x1
JZ 0x0047852d
FLD dword ptr [ESI + 0x18c]
FLD qword ptr [0x00e22a40]
FMUL dword ptr [ESP + 0x8]
FXCH
FCOMP dword ptr [0x004add40]
FMUL dword ptr [ESI + 0x18c]
FNSTSW AX
FADD dword ptr [ESI + 0x1a4]
TEST AH,0x41
FST dword ptr [ESI + 0x1a4]
JNZ 0x00478554
FLD dword ptr [ESI + 0x18c]
FMUL dword ptr [0x004adc60]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x00478556
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x41a00000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x00478556
FLD qword ptr [0x00e22a40]
MOV EDX,dword ptr [ESI + 0x84]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x00478556
FSTP ST0
MOV EAX,dword ptr [ESI + 0x60]
TEST AH,0x2
JZ 0x00478700
JMP 0x004786db
FLD dword ptr [ESI + 0x18c]
TEST AH,0x41
JNZ 0x004785f6
FLD qword ptr [0x00e22a40]
FMUL dword ptr [ESP + 0x8]
FXCH
FCOMP dword ptr [0x004add38]
FMUL dword ptr [ESI + 0x18c]
FNSTSW AX
FADD dword ptr [ESI + 0x1a4]
TEST AH,0x1
FST dword ptr [ESI + 0x1a4]
JNZ 0x004785a9
FLD dword ptr [0x004adce0]
JMP 0x004785bb
FLD dword ptr [0x004adc50]
FSUB dword ptr [ESI + 0x18c]
FDIVR dword ptr [ESI + 0x18c]
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x004786d3
MOV ECX,dword ptr [ESI + 0x84]
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH ECX
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x004786d3
FCOMP dword ptr [0x004add3c]
FNSTSW AX
TEST AH,0x1
JZ 0x00478678
FLD dword ptr [ESI + 0x18c]
FLD qword ptr [0x00e22a40]
FMUL dword ptr [ESP + 0x8]
FXCH
FCOMP dword ptr [0x004add40]
FMUL dword ptr [ESI + 0x18c]
FNSTSW AX
FADD dword ptr [ESI + 0x1a4]
TEST AH,0x41
FST dword ptr [ESI + 0x1a4]
JNZ 0x004786d1
FLD dword ptr [ESI + 0x18c]
FMUL dword ptr [0x004adc60]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x004786d3
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x41a00000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x004786d3
FLD dword ptr [ESI + 0x1a4]
FCOMP dword ptr [0x004adcc0]
FLD qword ptr [0x00e22a40]
FNSTSW AX
TEST AH,0x1
JZ 0x004786b0
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x41200000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x004786d3
MOV EDX,dword ptr [ESI + 0x84]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
JMP 0x004786d3
FSTP ST0
MOV EAX,dword ptr [ESI + 0x60]
TEST AH,0x2
JZ 0x00478700
FLD qword ptr [0x00e22a40]
MOV EAX,dword ptr [ESI + 0x80]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
FLD dword ptr [ESI + 0x1a4]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x1a4]
FLD dword ptr [ESI + 0x78]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047872d
FADD dword ptr [ESI + 0x1a4]
FXCH
FMUL dword ptr [ESI + 0x7c]
FXCH
FDIVP
JMP 0x00478740
FSUB dword ptr [ESI + 0x1a4]
FXCH
FCHS
FMUL dword ptr [ESI + 0x7c]
FXCH
FDIVP
FCHS
FLD dword ptr [ESI + 0x184]
FCOMP dword ptr [0x004add44]
FMUL dword ptr [ESI + 0x1ac]
FNSTSW AX
TEST AH,0x1
JZ 0x00478791
MOV ECX,dword ptr [ESI + 0x64]
TEST ECX,0x8000000
JNZ 0x00478789
FLD dword ptr [ESI + 0x244]
FCOMP dword ptr [0x004adc50]
OR ECX,0x8000000
MOV dword ptr [ESI + 0x64],ECX
FNSTSW AX
TEST AH,0x1
JZ 0x00478789
OR ECX,0x10000000
MOV dword ptr [ESI + 0x64],ECX
FMUL dword ptr [ESI + 0x244]
JMP 0x00478798
AND dword ptr [ESI + 0x64],0xf7ffffff
MOV ECX,dword ptr [ESI + 0x60]
FADD dword ptr [ESI + 0x240]
TEST ECX,0x4000000
JZ 0x004787be
FCOM dword ptr [0x004adcb0]
FNSTSW AX
TEST AH,0x1
JZ 0x004787be
FSTP ST0
FLD dword ptr [0x004adcb0]
TEST CL,0x80
JZ 0x004787ed
FLD dword ptr [ESI + 0x2fc]
FCOMP dword ptr [0x004add48]
FNSTSW AX
TEST AH,0x1
JZ 0x004787ed
TEST dword ptr [ESI + 0x64],0x2000000
JZ 0x004787e7
FMUL dword ptr [0x004add4c]
POP ESI
RET
FMUL dword ptr [0x004add50]
POP ESI
RET
