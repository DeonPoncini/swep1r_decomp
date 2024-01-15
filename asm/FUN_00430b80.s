; FUN_00430b80
SUB ESP,0x30
MOV EAX,dword ptr [ESP + 0x34]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x3c]
FLD dword ptr [EAX + 0x30]
FSTP dword ptr [ESI]
FLD dword ptr [EAX + 0x34]
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [EAX + 0x38]
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x18]
FXCH ST5
FST dword ptr [ESP + 0x4]
FXCH ST4
FST dword ptr [ESP + 0x8]
FXCH ST5
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [0x004ac678]
FXCH ST3
FCHS
FSTP dword ptr [ESP + 0x1c]
FXCH
FCHS
FXCH
FCHS
FXCH
FSTP dword ptr [ESP + 0x20]
FSTP dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [ESP + 0x14]
LEA EAX,[ESP + 0x10]
FSTP dword ptr [ESP + 0x18]
PUSH EAX
CALL 0x0042f8c0
FST dword ptr [ESP + 0x3c]
FCOMP qword ptr [0x004ac6c0]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x00430c66
FLD dword ptr [ESP + 0x1c]
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f540
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ac678]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x00430c38
MOV ECX,0x1
JMP 0x00430c3a
XOR ECX,ECX
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x41
JNZ 0x00430c52
MOV EAX,0x1
JMP 0x00430c54
XOR EAX,EAX
CMP ECX,EAX
JNZ 0x00430c5a
FCHS
FSTP dword ptr [ESI + 0x14]
MOV dword ptr [ESI + 0xc],0x0
JMP 0x00430caa
FLD dword ptr [ESP + 0x14]
FDIV dword ptr [ESP + 0x38]
FST dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004ac67c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00430c87
FLD dword ptr [0x004ac678]
JMP 0x00430ca7
MOV ECX,dword ptr [ESP + 0x3c]
PUSH ECX
CALL 0x0042f540
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ac678]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x00430ca7
FCHS
FSTP dword ptr [ESI + 0xc]
FLD dword ptr [ESP + 0x38]
FCOMP qword ptr [0x004ac6c0]
FNSTSW AX
TEST AH,0x1
JZ 0x00430cc4
MOV dword ptr [ESI + 0x10],0x42b40000
JMP 0x00430d16
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FADDP
FXCH
FADDP
FDIV dword ptr [ESP + 0x38]
FST dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004ac67c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00430d06
MOV dword ptr [ESI + 0x10],0x0
JMP 0x00430d16
MOV EDX,dword ptr [ESP + 0x3c]
PUSH EDX
CALL 0x0042f540
FSTP dword ptr [ESI + 0x10]
ADD ESP,0x4
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x1
JZ 0x00430d2f
FLD dword ptr [ESI + 0x10]
FCHS
FSTP dword ptr [ESI + 0x10]
FLD dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x10]
LEA ECX,[ESP + 0x28]
FCHS
FSTP dword ptr [ESP + 0x28]
PUSH ECX
MOV dword ptr [ESP + 0x30],EAX
MOV dword ptr [ESP + 0x34],0x0
CALL 0x0042f8c0
FLD dword ptr [ESP + 0x3c]
FCOMP qword ptr [0x004ac6c0]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JNZ 0x00430df9
FLD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x30]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
FADDP
FDIV ST0,ST1
FSTP dword ptr [ESP + 0x3c]
FSTP ST0
FLD dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004ac67c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00430db1
MOV dword ptr [ESI + 0x14],0x0
JMP 0x00430ddb
FLD dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004ac6c8]
FNSTSW AX
TEST AH,0x41
JZ 0x00430dcb
MOV dword ptr [ESI + 0x14],0x43340000
JMP 0x00430ddb
MOV EDX,dword ptr [ESP + 0x3c]
PUSH EDX
CALL 0x0042f540
FSTP dword ptr [ESI + 0x14]
ADD ESP,0x4
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x1
JZ 0x00430dfb
FLD dword ptr [ESI + 0x14]
FCHS
FSTP dword ptr [ESI + 0x14]
POP ESI
ADD ESP,0x30
RET
FSTP ST0
POP ESI
ADD ESP,0x30
RET
