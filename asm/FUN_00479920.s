; FUN_00479920
SUB ESP,0x4c
MOV EAX,dword ptr [ESP + 0x58]
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x5c]
MOV EDX,dword ptr [EAX + 0x8]
MOV ECX,dword ptr [EAX + 0x4]
MOV EAX,dword ptr [EAX]
MOV dword ptr [ESP + 0x24],EDX
FLD dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x20],ECX
MOV dword ptr [ESP + 0x1c],EAX
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [ESI + 0x4]
FXCH
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [ESI]
FXCH
FADDP ST2,ST0
PUSH EDI
PUSH ESI
XOR EBX,EBX
XOR EDI,EDI
FADDP
FSTP dword ptr [ESP + 0x68]
CALL 0x0042f8c0
FCOM dword ptr [0x004adcbc]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x00479986
FSTP ST0
FLD dword ptr [0x004adc48]
JMP 0x00479990
FDIVR dword ptr [ESP + 0x64]
FSUBR dword ptr [0x004addd4]
FCOM dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x004799a9
FSTP ST0
MOV dword ptr [ESP + 0xc],0x0
JMP 0x004799b3
FMUL dword ptr [0x004addd8]
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x28]
FXCH ST3
FCHS
FXCH ST2
FMUL ST2
FXCH
FMUL ST2
FXCH
FADD dword ptr [ESI]
FXCH ST3
FMUL ST2
FXCH
FADD dword ptr [ESI + 0x4]
FXCH
FADD dword ptr [ESI + 0x8]
FXCH ST3
FST dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x64]
FXCH ST2
FST dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x64]
FXCH ST5
FST dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x64]
FXCH ST3
FSTP dword ptr [ESI]
FXCH
FSTP dword ptr [ESI + 0x4]
LEA ECX,[ESP + 0x14]
FSTP dword ptr [ESI + 0x8]
FXCH
FSTP dword ptr [ESP + 0x14]
FXCH ST2
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x1c]
PUSH ECX
FSTP ST0
CALL 0x0042f8c0
FST dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004adc44]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JNZ 0x00479d2d
FLD dword ptr [0x004adc50]
FDIV dword ptr [ESP + 0x10]
MOV ESI,dword ptr [ESP + 0x5c]
LEA ECX,[ESP + 0x2c]
LEA EAX,[ESI + 0x30]
LEA EDX,[ESI + 0x194]
PUSH EAX
PUSH EDX
PUSH ECX
FLD dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x20]
FMUL ST2
FLD dword ptr [ESP + 0x28]
FXCH ST2
FMUL ST3
FLD dword ptr [ESI + 0x34]
FXCH ST3
FMUL ST4
FXCH ST2
FST dword ptr [ESP + 0x20]
FMUL dword ptr [EAX]
FLD dword ptr [ESI + 0x38]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FXCH ST3
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FSTP dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x28]
FXCH
FADDP ST2,ST0
FADDP
FSTP dword ptr [ESP + 0x70]
FSTP ST0
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x2c]
PUSH EDX
CALL 0x0042f9b0
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x38]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST3
FMUL dword ptr [ESP + 0x1c]
FXCH
FST dword ptr [ESP + 0x60]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST2
FCOMP dword ptr [0x004addd4]
ADD ESP,0x4
FADDP ST2,ST0
FXCH ST2
FSTP ST0
FXCH
FADDP
FNSTSW AX
FSTP dword ptr [ESP + 0x60]
TEST AH,0x41
JNZ 0x00479b28
MOV EDX,dword ptr [ESI + 0x60]
MOV EDI,0x1
AND EDX,0xffffffef
MOV EAX,EDX
MOV dword ptr [ESI + 0x60],EDX
TEST AH,0x70
JNZ 0x00479b28
MOV dword ptr [ESI + 0x264],0x3dcccccd
FLD dword ptr [ESP + 0x5c]
FMUL dword ptr [ESI + 0x1a0]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [0x004add20]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL ST1
FXCH ST3
FMUL ST1
FXCH ST3
FADD dword ptr [ESI + 0x1d0]
FXCH ST2
FMUL ST1
FXCH ST3
FADD dword ptr [ESI + 0x1d4]
FXCH ST3
FADD dword ptr [ESI + 0x1d8]
FXCH ST2
FSTP dword ptr [ESI + 0x1d0]
MOV EAX,dword ptr [ESI + 0x64]
FXCH ST2
FSTP dword ptr [ESI + 0x1d4]
TEST AH,0x4
FSTP dword ptr [ESI + 0x1d8]
FSTP ST0
JZ 0x00479b95
MOV dword ptr [ESI + 0x1f4],EBX
JMP 0x00479c1f
FLD dword ptr [ESP + 0x64]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x00479c03
FLD dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESP + 0x60]
FNSTSW AX
TEST AH,0x1
JZ 0x00479be0
FADD dword ptr [ESP + 0x64]
FSUB dword ptr [0x004adce4]
FMUL dword ptr [0x004addc8]
FCOM dword ptr [0x004adc48]
FSTP dword ptr [ESI + 0x1f4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00479c09
JMP 0x00479c03
FSUB dword ptr [ESP + 0x64]
FSUB dword ptr [0x004adc50]
FMUL dword ptr [0x004addc8]
FCOM dword ptr [0x004adc48]
FSTP dword ptr [ESI + 0x1f4]
FNSTSW AX
TEST AH,0x1
JZ 0x00479c09
MOV dword ptr [ESI + 0x1f4],EBX
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004adddc]
FMUL dword ptr [ESI + 0x1f4]
FSTP dword ptr [ESI + 0x1f4]
FLD dword ptr [ESP + 0x5c]
FCOMP qword ptr [0x004adde0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00479d2d
FLD dword ptr [ESI + 0x1a0]
FCOMP qword ptr [0x004adde8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00479d2d
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x42480000
CALL 0x00480650
FLD dword ptr [ESP + 0x64]
FCOMP dword ptr [0x004adc7c]
ADD ESP,0x8
FMUL dword ptr [ESI + 0x1a4]
FNSTSW AX
TEST AH,0x41
FSTP dword ptr [ESI + 0x1a4]
JNZ 0x00479c86
OR dword ptr [ESI + 0x60],0x40000
CMP EDI,EBX
MOV dword ptr [ESP + 0x38],0x48697474
JZ 0x00479c9c
MOV dword ptr [ESP + 0x3c],0x4b506f77
JMP 0x00479d11
FLD dword ptr [ESP + 0x64]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESP + 0x64]
FNSTSW AX
TEST AH,0x1
JZ 0x00479cb3
FCHS
FLD dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESP + 0x60]
FNSTSW AX
TEST AH,0x1
JZ 0x00479cca
FCHS
FXCH
FCOMP
FSTP ST0
FLD dword ptr [ESP + 0x60]
FNSTSW AX
FCOMP qword ptr [0x004adde0]
TEST AH,0x41
FNSTSW AX
JNZ 0x00479cfc
TEST AH,0x1
JZ 0x00479cf2
MOV dword ptr [ESP + 0x3c],0x52744674
JMP 0x00479d11
MOV dword ptr [ESP + 0x3c],0x4c744674
JMP 0x00479d11
TEST AH,0x1
MOV dword ptr [ESP + 0x3c],0x52745364
JNZ 0x00479d11
MOV dword ptr [ESP + 0x3c],0x4c745364
FLD dword ptr [ESP + 0x10]
FDIV qword ptr [0x00e22a40]
LEA EAX,[ESP + 0x38]
PUSH EAX
PUSH ESI
FSTP dword ptr [ESP + 0x48]
CALL 0x00450c00
ADD ESP,0x8
POP EDI
POP ESI
POP EBX
ADD ESP,0x4c
RET
