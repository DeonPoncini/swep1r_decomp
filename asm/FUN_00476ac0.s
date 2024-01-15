; FUN_00476ac0
SUB ESP,0x4c
PUSH ESI
MOV ESI,dword ptr [ESP + 0x58]
TEST ESI,ESI
JZ 0x00476e95
PUSH EDI
MOV EDI,dword ptr [ESP + 0x58]
PUSH EBX
MOV BL,0x20
MOV CX,word ptr [ESI + 0x26]
XOR EDX,EDX
TEST CX,CX
JZ 0x00476b4a
TEST CL,0x1
JZ 0x00476aed
MOV EDX,0x1
TEST CL,0x2
JZ 0x00476b0a
FLD dword ptr [EDI + 0x1a0]
FCOMP dword ptr [0x004adca0]
FNSTSW AX
TEST AH,0x1
JZ 0x00476b0a
MOV EDX,0x1
TEST byte ptr [EDI + 0x60],BL
JNZ 0x00476b18
TEST BL,CL
JZ 0x00476b18
MOV EDX,0x1
MOV EAX,dword ptr [EDI + 0x1e70]
MOV EAX,dword ptr [EAX + 0x78]
TEST EAX,EAX
JNZ 0x00476b2f
TEST CL,0x4
JZ 0x00476b2f
MOV EDX,0x1
CMP EAX,0x1
JNZ 0x00476b3b
TEST CL,0x8
JZ 0x00476b3b
MOV EDX,EAX
CMP EAX,0x2
JNZ 0x00476b4a
TEST CL,0x10
JZ 0x00476b4a
MOV EDX,0x1
TEST EDX,EDX
JNZ 0x00476e88
PUSH ESI
CALL 0x0047c7d0
MOV EDX,EAX
ADD ESP,0x4
TEST EDX,EDX
JZ 0x00476e88
FLD dword ptr [ESI + 0x18]
FMUL dword ptr [0x004adc60]
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FXCH ST2
FST dword ptr [ESP + 0x5c]
FLD dword ptr [ESP + 0x5c]
FXCH
FMUL dword ptr [ESI + 0x10]
FXCH ST2
FSTP dword ptr [ESP + 0x34]
MOV ECX,dword ptr [EDI + 0x50]
MOV EAX,dword ptr [EDI + 0x54]
FMUL dword ptr [ESI + 0xc]
FLD dword ptr [ESP + 0x34]
FXCH ST3
FST dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x38]
FLD dword ptr [ESI + 0x1c]
FMUL dword ptr [0x004adc60]
MOV dword ptr [ESP + 0x28],ECX
MOV ECX,dword ptr [EDI + 0x58]
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESI + 0x8]
FSTP dword ptr [ESP + 0xc]
FXCH ST4
FSTP dword ptr [ESP + 0x10]
FXCH ST4
FSUB dword ptr [ESP + 0x10]
FXCH ST4
FADD dword ptr [ESP + 0x10]
FXCH ST2
FSTP dword ptr [ESP + 0x10]
FADD dword ptr [ESP + 0x10]
FXCH ST2
FSUB dword ptr [ESP + 0x10]
FXCH ST3
FST dword ptr [ESP + 0x40]
FXCH ST2
FST dword ptr [ESP + 0x44]
FXCH ST2
FSUB ST0,ST1
FXCH ST3
FSTP dword ptr [ESP + 0x50]
FXCH
FSUB dword ptr [ESP + 0x50]
FLD dword ptr [0x004adc48]
FXCH ST3
FST dword ptr [ESP + 0x1c]
FXCH
FST dword ptr [ESP + 0x20]
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST3
FSTP dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x3c],EAX
FMUL dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH
FADDP ST3,ST0
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x30]
FSTP dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0x28]
FXCH ST4
FADDP ST6,ST0
FXCH
FMUL dword ptr [ESP + 0x2c]
FXCH ST5
FST dword ptr [ESP + 0x14]
FCOMP qword ptr [0x004adca8]
FXCH ST4
FADDP ST2,ST0
FXCH ST3
FNSTSW AX
FMUL ST2
FXCH
FADD dword ptr [ESP + 0x10]
TEST AH,0x41
FSTP dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [ESP + 0x50]
FADDP ST2,ST0
FXCH
FADD dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x10]
JZ 0x00476ca3
FLD dword ptr [ESP + 0x50]
MOV dword ptr [ESP + 0x60],0x0
JMP 0x00476cfd
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x10]
FDIV dword ptr [ESP + 0x14]
FST dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JZ 0x00476cc6
FLD dword ptr [ESP + 0x50]
JMP 0x00476cfd
FLD dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc50]
FNSTSW AX
TEST AH,0x1
JNZ 0x00476ce3
FSTP ST0
FLD dword ptr [ESP + 0x40]
FLD dword ptr [ESP + 0x44]
JMP 0x00476cfd
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x60]
FXCH
FMUL dword ptr [ESP + 0x60]
FXCH
FADDP ST2,ST0
FADD dword ptr [ESP + 0x50]
MOV AX,word ptr [ESI + 0x24]
CMP AX,0x66
JZ 0x00476d8b
CMP AX,0x68
JZ 0x00476d8b
FLD ST0
FXCH ST2
FSUB dword ptr [ESP + 0x28]
FXCH ST2
FSUB dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x5c]
FXCH ST3
FST dword ptr [ESP + 0x14]
FXCH
FXCH ST3
FXCH
FLD ST3
FXCH
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL ST4
FXCH ST2
FMUL dword ptr [ESP + 0x5c]
FXCH ST2
FADDP
FXCH
FCOMPP
FNSTSW AX
FSTP ST0
TEST AH,0x41
FSTP ST0
JNZ 0x00476e88
FLD dword ptr [ESP + 0xc]
FADD dword ptr [ESP + 0x3c]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x41
JNZ 0x00476e88
FLD dword ptr [ESP + 0x3c]
FSUB dword ptr [ESP + 0xc]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x1
JZ 0x00476e88
JMP 0x00476e7c
FSTP ST0
FSTP ST0
FLD dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x00476e88
FLD dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004adc50]
FNSTSW AX
TEST AH,0x1
JZ 0x00476e88
FLD dword ptr [ESP + 0xc]
FADD dword ptr [ESP + 0x3c]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x41
JNZ 0x00476e88
FLD dword ptr [ESP + 0x3c]
FSUB dword ptr [ESP + 0xc]
FCOMP dword ptr [ESP + 0x30]
FNSTSW AX
TEST AH,0x1
JZ 0x00476e88
FLD dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESI + 0x10]
FLD dword ptr [EDI + 0x174]
FLD dword ptr [EDI + 0x170]
FXCH ST3
FMUL dword ptr [ESI + 0x14]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FMUL dword ptr [ESI + 0x14]
FLD dword ptr [EDI + 0x16c]
FXCH ST4
FADDP ST2,ST0
FXCH ST4
FMUL dword ptr [ESI + 0x10]
FLD dword ptr [ESP + 0x30]
FXCH ST3
FMUL dword ptr [ESI + 0xc]
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESI + 0x14]
FLD dword ptr [ESP + 0x28]
FXCH ST4
FMUL dword ptr [ESI + 0xc]
FXCH ST3
FADDP ST5,ST0
FXCH ST3
FMUL dword ptr [ESI + 0xc]
FLD dword ptr [ESP + 0x2c]
FXCH ST3
FADDP ST5,ST0
FXCH ST2
FMUL dword ptr [ESI + 0x10]
FXCH ST2
FADDP ST3,ST0
FXCH ST3
FCOMP ST3
FADDP
FNSTSW AX
TEST AH,0x41
JNZ 0x00476e62
MOV ECX,0x1
JMP 0x00476e64
XOR ECX,ECX
FCOMP
FNSTSW AX
TEST AH,0x1
FSTP ST0
JZ 0x00476e76
MOV EAX,0x1
JMP 0x00476e78
XOR EAX,EAX
CMP ECX,EAX
JNZ 0x00476e88
PUSH 0x0
PUSH EDI
PUSH EDX
CALL 0x0047ce60
ADD ESP,0xc
MOV ESI,dword ptr [ESI + 0x28]
TEST ESI,ESI
JNZ 0x00476ad8
POP EBX
POP EDI
POP ESI
ADD ESP,0x4c
RET
