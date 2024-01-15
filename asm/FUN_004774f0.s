; FUN_004774f0
SUB ESP,0x30
PUSH ESI
MOV ESI,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESI + 0x64]
TEST CH,0x4
JZ 0x00477526
FLD dword ptr [ESI + 0x160]
FCHS
FSTP dword ptr [ESP + 0x8]
FLD dword ptr [ESI + 0x164]
FCHS
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [ESI + 0x168]
FCHS
FSTP dword ptr [ESP + 0x10]
JMP 0x00477544
MOV EAX,dword ptr [ESI + 0x194]
MOV EDX,dword ptr [ESI + 0x198]
MOV dword ptr [ESP + 0x8],EAX
MOV EAX,dword ptr [ESI + 0x19c]
MOV dword ptr [ESP + 0xc],EDX
MOV dword ptr [ESP + 0x10],EAX
FLD dword ptr [ESI + 0xa4]
FLD dword ptr [ESI + 0x28]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x94]
FLD dword ptr [ESP + 0x40]
FSUB ST0,ST2
FXCH
FSUB ST0,ST2
FLD dword ptr [ESI + 0xa8]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
FNSTSW AX
FSTP dword ptr [ESP + 0x4]
TEST AH,0x1
FSTP ST1
FLD dword ptr [ESI + 0x28]
JZ 0x00477581
FCHS
FXCH
FMUL ST1
FXCH
FSTP ST0
FCOM dword ptr [0x004adce8]
FNSTSW AX
TEST AH,0x41
JNZ 0x004775a6
FSUB dword ptr [0x004adce8]
FSUBR dword ptr [ESP + 0x38]
FSTP dword ptr [ESP + 0x38]
JMP 0x004775a8
FSTP ST0
FLD dword ptr [ESP + 0x40]
FCOMP dword ptr [0x004adcec]
FNSTSW AX
TEST AH,0x41
JNZ 0x004775e3
FLD qword ptr [0x00e22a40]
FADD dword ptr [ESI + 0x2c8]
FCOM dword ptr [0x004adce8]
FSTP dword ptr [ESI + 0x2c8]
FNSTSW AX
TEST AH,0x41
JNZ 0x004775ed
MOV EAX,dword ptr [ESI + 0x60]
OR AH,0x10
MOV dword ptr [ESI + 0x60],EAX
JMP 0x004775ed
MOV dword ptr [ESI + 0x2c8],0x0
FLD dword ptr [ESP + 0x40]
FCOMP dword ptr [0x004adcf0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477603
OR CH,0x2
JMP 0x00477606
AND CH,0xfd
FLD dword ptr [ESP + 0x38]
FCOMP dword ptr [0x004adcf4]
MOV dword ptr [ESI + 0x64],ECX
FNSTSW AX
TEST AH,0x41
JNZ 0x00477662
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JNZ 0x00477644
FLD dword ptr [ESI + 0x1b4]
FADD qword ptr [0x00e22a40]
FSTP dword ptr [ESI + 0x1b4]
JMP 0x004776d7
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcf8]
FLD dword ptr [ESI + 0x1b4]
FXCH
FSUBP
FSTP dword ptr [ESI + 0x1b4]
JMP 0x004776d7
FLD dword ptr [0x004adcf4]
FLD dword ptr [0x004adcf4]
FSUB dword ptr [ESP + 0x38]
FXCH
FSUB dword ptr [ESP + 0x4]
FDIVP
FSUBR dword ptr [0x004adc50]
FMUL qword ptr [0x00e22a40]
FLD dword ptr [ESP + 0x38]
FCOMP dword ptr [ESP + 0x4]
FADD dword ptr [ESI + 0x1b4]
FNSTSW AX
FLD ST0
TEST AH,0x41
FSTP dword ptr [ESI + 0x1b4]
JNZ 0x004776d5
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x004776d7
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1b4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1b4]
JMP 0x004776d7
FSTP ST0
FLD qword ptr [0x00e22a40]
FMUL dword ptr [ESI + 0x190]
FLD dword ptr [ESI + 0x2fc]
FCOMP dword ptr [0x004adc48]
FMUL dword ptr [ESI + 0x1b4]
FNSTSW AX
FMUL dword ptr [0x004adcf0]
TEST AH,0x1
FSTP dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESP + 0x40]
MOV dword ptr [ESI + 0x1b0],ECX
JZ 0x00477750
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JNZ 0x00477750
FLD dword ptr [ESP + 0x40]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477750
FLD dword ptr [ESI + 0x2fc]
FMUL dword ptr [0x004add00]
FSUB dword ptr [0x004adce4]
FMUL dword ptr [ESP + 0x40]
FSTP dword ptr [ESI + 0x1b0]
FLD dword ptr [ESI + 0x1b0]
FCOMP dword ptr [ESP + 0x38]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477802
FLD dword ptr [ESI + 0x1b0]
FDIV qword ptr [0x00e22a40]
FLD dword ptr [ESI + 0x1b4]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x1b4]
FMUL dword ptr [0x004add04]
FLD dword ptr [ESP + 0x38]
FXCH ST2
FSTP dword ptr [ESP + 0x40]
FNSTSW AX
FXCH
FSTP dword ptr [ESI + 0x1b0]
TEST AH,0x41
JNZ 0x004777b6
FLD dword ptr [ESI + 0x1b4]
FMUL dword ptr [0x004add08]
FCHS
FSTP dword ptr [ESI + 0x1b4]
FCOMP dword ptr [0x004add0c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004777f8
TEST dword ptr [ESI + 0x60],0x1000000
JNZ 0x004777f8
FLD dword ptr [ESP + 0x40]
FMUL dword ptr [0x004adc60]
LEA EDX,[ESP + 0x14]
MOV dword ptr [ESP + 0x14],0x48697474
PUSH EDX
PUSH ESI
FSTP dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x20],0x426f746d
CALL 0x00450c00
ADD ESP,0x8
MOV EAX,dword ptr [ESI + 0x60]
OR EAX,0x1000000
JMP 0x0047780a
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xfeffffff
FLD dword ptr [ESI + 0x1b0]
FMUL dword ptr [ESP + 0x8]
MOV dword ptr [ESI + 0x60],EAX
MOV EAX,dword ptr [ESP + 0x3c]
FADD dword ptr [EAX]
FSTP dword ptr [EAX]
FLD dword ptr [ESI + 0x1b0]
FMUL dword ptr [ESP + 0xc]
FADD dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ESI + 0x1b0]
FMUL dword ptr [ESP + 0x10]
POP ESI
FADD dword ptr [EAX + 0x8]
FSTP dword ptr [EAX + 0x8]
ADD ESP,0x30
RET
