; FUN_00478a70
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004adc48]
MOV ECX,dword ptr [ESP + 0xc]
SUB ESP,0x10
FLD dword ptr [ECX]
FNSTSW AX
PUSH ESI
PUSH EDI
TEST AH,0x41
JNZ 0x00478a94
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
JMP 0x00478aa0
FCHS
FLD dword ptr [ECX + 0x4]
FCHS
FLD dword ptr [ECX + 0x8]
FCHS
MOV ESI,dword ptr [ESP + 0x1c]
FLD ST2
FLD ST2
FXCH
FMUL dword ptr [ESI + 0x1b8]
FLD ST2
FXCH ST2
FMUL dword ptr [ESI + 0x1bc]
FXCH ST2
FMUL dword ptr [ESI + 0x1c0]
FXCH ST2
FADDP
FXCH
FADDP
FCOM dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x00478b15
FCHS
FXCH ST3
FMUL ST3
FXCH ST2
FMUL ST3
FXCH ST2
FADD dword ptr [ESI + 0x1b8]
FXCH
FMUL ST3
FXCH ST2
FADD dword ptr [ESI + 0x1bc]
FXCH ST2
FADD dword ptr [ESI + 0x1c0]
FXCH
FSTP dword ptr [ESI + 0x1b8]
FXCH
FSTP dword ptr [ESI + 0x1bc]
FSTP dword ptr [ESI + 0x1c0]
JMP 0x00478b1b
FSTP ST0
FSTP ST0
FSTP ST0
MOV EAX,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x28]
PUSH ECX
PUSH EAX
PUSH EDI
FSTP ST0
CALL 0x0042fa50
FLD dword ptr [ESI + 0x6c]
FMUL dword ptr [ESI + 0x248]
FLD dword ptr [ESI + 0x22c]
FXCH
FMUL dword ptr [ESI + 0x24c]
FXCH
FCOMP dword ptr [0x004adc50]
ADD ESP,0xc
FLD ST0
FMUL ST1
FNSTSW AX
FSUBR dword ptr [0x004adc50]
TEST AH,0x41
FMUL dword ptr [0x004add68]
FSTP dword ptr [ESP + 0x1c]
FSTP ST0
JNZ 0x00478b9d
FLD dword ptr [ESI + 0x22c]
FCOMP dword ptr [0x004adc9c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00478b89
MOV dword ptr [ESP + 0x1c],0x0
JMP 0x00478b9d
FLD dword ptr [0x004adc9c]
FSUB dword ptr [ESI + 0x22c]
FMUL dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [0x004adc50]
FLD qword ptr [0x00e22a40]
PUSH EDI
FSTP dword ptr [ESP + 0x28]
FDIV dword ptr [ESP + 0x28]
FLD dword ptr [0x004adc50]
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [EDI]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESI + 0x1b8]
FXCH ST2
FSTP dword ptr [ESP + 0x2c]
FMUL dword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [ESP + 0x20]
FXCH
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x28]
FXCH ST2
FADDP ST3,ST0
FMUL dword ptr [EDI + 0x4]
FXCH ST3
FMUL ST2
FLD dword ptr [ESP + 0x28]
FXCH ST2
FMUL dword ptr [EDI + 0x8]
FXCH
FSTP dword ptr [ESI + 0x1b8]
FLD qword ptr [0x00e22a40]
FXCH ST2
FMUL dword ptr [ESI + 0x1bc]
FXCH ST2
FST dword ptr [ESP + 0xc]
FDIVR dword ptr [0x004adc50]
FXCH ST2
MOV ECX,dword ptr [ESI + 0x1b8]
FMUL dword ptr [ESP + 0x20]
FXCH ST4
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESI + 0x1c0]
FXCH
FADDP ST5,ST0
FXCH
FMUL dword ptr [ESP + 0x2c]
FXCH ST4
FSTP dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x20]
FXCH
FSTP dword ptr [ESI + 0x1bc]
FLD qword ptr [0x00e22a40]
FXCH ST3
FADDP
FXCH ST2
FST dword ptr [ESP + 0x28]
FDIVR dword ptr [0x004adc50]
FXCH ST2
FSTP dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + 0x1c0]
MOV dword ptr [EDI],ECX
MOV EDX,dword ptr [ESI + 0x1bc]
MOV dword ptr [EDI + 0x4],EDX
MOV EAX,dword ptr [ESI + 0x1c0]
FSTP ST0
MOV dword ptr [EDI + 0x8],EAX
CALL 0x0042f9b0
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004adc48]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
FSTP ST0
JZ 0x00478cc1
FLD dword ptr [ESP + 0x20]
FCHS
FSTP dword ptr [ESP + 0x20]
JMP 0x00478cc9
MOV ECX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x20],ECX
MOV EDX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EDX
PUSH EDI
CALL 0x0042fa50
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0xc
TEST AL,0x10
JNZ 0x00478d71
FLD dword ptr [0x004adc50]
TEST AL,0x4
JZ 0x00478cf5
FSTP ST0
FLD dword ptr [0x004add6c]
TEST AL,0x8
JZ 0x00478cff
FMUL dword ptr [0x004add70]
FCOM dword ptr [ESI + 0x24c]
FNSTSW AX
TEST AH,0x1
JZ 0x00478d35
FLD qword ptr [0x00e22a40]
FADD ST0,ST0
FSUBR dword ptr [ESI + 0x24c]
FCOM
FSTP dword ptr [ESI + 0x24c]
FNSTSW AX
TEST AH,0x1
JZ 0x00478d6f
FSTP dword ptr [ESI + 0x24c]
POP EDI
POP ESI
ADD ESP,0x10
RET
FCOM dword ptr [ESI + 0x24c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00478d6f
FLD qword ptr [0x00e22a40]
FMUL dword ptr [0x004add74]
FSUBR dword ptr [ESI + 0x24c]
FCOM
FSTP dword ptr [ESI + 0x24c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00478d6f
FSTP dword ptr [ESI + 0x24c]
POP EDI
POP ESI
ADD ESP,0x10
RET
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x10
RET
