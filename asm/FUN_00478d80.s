; FUN_00478d80
SUB ESP,0x28
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x38]
PUSH EDI
PUSH ESI
CALL 0x004783e0
FSTP dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH ESI
CALL 0x004787f0
FADD dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x4c]
ADD ESP,0x4
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EDX
PUSH ESI
CALL 0x00478a70
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0x10
TEST AH,0x4
JNZ 0x00478e2f
TEST dword ptr [ESI + 0x60],0x2000000
JNZ 0x00478e2f
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x00478e2f
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FST dword ptr [ESP + 0x3c]
FMUL dword ptr [0x004add78]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x00478e2f
MOV EAX,dword ptr [ESP + 0x3c]
PUSH EAX
CALL 0x00480670
FMUL dword ptr [0x004add08]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x1c]
FLD qword ptr [0x00e22a40]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FADD dword ptr [ESI + 0x1dc]
FXCH
FADD dword ptr [ESI + 0x1e0]
FXCH ST2
FADD dword ptr [ESI + 0x1e4]
FXCH ST3
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x40800000
FSTP dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP + 0x20]
FSTP dword ptr [ESP + 0x24]
CALL 0x00480650
FMUL dword ptr [ESI + 0x1d0]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x1d0]
FLD qword ptr [0x00e22a40]
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1d4]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x1d4]
FLD qword ptr [0x00e22a40]
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1d8]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x1d8]
FLD qword ptr [0x00e22a40]
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1dc]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x1dc]
FLD qword ptr [0x00e22a40]
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1e0]
ADD ESP,0x4
FSTP dword ptr [ESI + 0x1e0]
FLD qword ptr [0x00e22a40]
FSTP dword ptr [ESP]
PUSH 0x40800000
CALL 0x00480650
MOV ECX,dword ptr [ESI + 0x60]
ADD ESP,0x8
FMUL dword ptr [ESI + 0x1e4]
TEST CH,0x50
FSTP dword ptr [ESI + 0x1e4]
JNZ 0x0047907d
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004adcbc]
FNSTSW AX
TEST AH,0x41
JZ 0x00478f6b
FLD dword ptr [ESI + 0x18c]
FCHS
FCOMP dword ptr [0x004adcbc]
FNSTSW AX
TEST AH,0x41
JZ 0x00478f6b
TEST CH,0x20
JNZ 0x0047907d
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [ESI + 0x1cc]
FLD dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESI + 0x1c8]
FXCH ST2
FMUL dword ptr [ESI + 0x1c4]
FXCH ST2
FADDP
FXCH
LEA EDI,[ESI + 0x1c4]
FADDP
FST dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047904d
PUSH EDI
CALL 0x0042f8c0
FCOM dword ptr [0x004adc50]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x0047904b
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004adc50]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047900e
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004add7c]
FDIVR dword ptr [ESP + 0x3c]
FCOM dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047900c
FLD qword ptr [0x00e22a40]
FMUL ST1
FADD ST0,ST0
FADD dword ptr [ESI + 0x1a4]
FSTP dword ptr [ESI + 0x1a4]
FSTP ST0
FDIVR dword ptr [ESP + 0x3c]
FMUL dword ptr [0x004add80]
FST dword ptr [ESP + 0x3c]
FCOMP dword ptr [0x004adc50]
FNSTSW AX
TEST AH,0x1
JZ 0x00479031
MOV dword ptr [ESP + 0x3c],0x3f800000
MOV ECX,dword ptr [ESP + 0x3c]
PUSH EDI
LEA EDX,[ESP + 0x18]
PUSH ECX
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
JMP 0x0047907d
FSTP ST0
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FADD dword ptr [EDI]
FXCH
FADD dword ptr [ESI + 0x1c8]
FXCH ST2
FADD dword ptr [ESI + 0x1cc]
FXCH
FSTP dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
FSTP dword ptr [ESP + 0x1c]
FLD qword ptr [0x00e22a40]
MOV EBP,dword ptr [ESP + 0x40]
MOV EDI,dword ptr [ESP + 0x44]
LEA ECX,[ESP + 0x14]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBP
PUSH EDI
CALL 0x0042fa80
FILD dword ptr [ESI + 0x1998]
ADD ESP,0x10
FSUB dword ptr [0x004adcd8]
FMUL dword ptr [0x004adcdc]
FCOMP qword ptr [0x004adc90]
FNSTSW AX
TEST AH,0x1
JNZ 0x004790e8
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x004790e8
TEST dword ptr [ESI + 0x64],0x4000000
JNZ 0x004790e8
XOR EAX,EAX
MOV dword ptr [ESI + 0x154],EAX
MOV dword ptr [ESI + 0x158],EAX
MOV dword ptr [ESI + 0x15c],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
TEST dword ptr [ESI + 0x64],0x800000
JZ 0x0047910d
XOR EAX,EAX
MOV dword ptr [ESI + 0x154],EAX
MOV dword ptr [ESI + 0x158],EAX
MOV dword ptr [ESI + 0x15c],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
MOV EDX,dword ptr [EDI]
MOV EAX,dword ptr [EDI + 0x4]
MOV ECX,dword ptr [EDI + 0x8]
MOV dword ptr [ESP + 0x20],EDX
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ESI + 0x13c]
LEA EDX,[ESP + 0x2c]
MOV dword ptr [ESP + 0x28],ECX
PUSH EDX
PUSH EAX
PUSH EBP
PUSH EDI
XOR EBX,EBX
CALL 0x0044acb0
ADD ESP,0x10
TEST EAX,EAX
JZ 0x0047915d
CMP EBX,0x6
JGE 0x0047915d
MOV EDX,dword ptr [ESI + 0x13c]
LEA ECX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
PUSH EBP
PUSH EDI
INC EBX
CALL 0x0044acb0
ADD ESP,0x10
TEST EAX,EAX
JNZ 0x0047913d
TEST EBX,EBX
JLE 0x0047918a
TEST byte ptr [ESI + 0x60],0x80
JZ 0x0047918a
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x40a00000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a4]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a4]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ESP + 0x24]
FXCH
FSUB dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FSUB dword ptr [ESP + 0x20]
FXCH
FST dword ptr [ESP + 0x28]
FXCH
FSTP dword ptr [ESI + 0x154]
FXCH
FSTP dword ptr [ESI + 0x158]
POP EDI
FSTP dword ptr [ESI + 0x15c]
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
