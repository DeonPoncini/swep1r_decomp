; FUN_00431150
MOV EDX,dword ptr [ESP + 0x8]
SUB ESP,0x20
LEA EAX,[ESP + 0x28]
LEA ECX,[ESP]
PUSH ESI
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f380
FLD dword ptr [ESP + 0x44]
FCOMP dword ptr [0x004ac6cc]
ADD ESP,0xc
XOR ECX,ECX
MOV EDX,0x3f800000
FNSTSW AX
TEST AH,0x1
JNZ 0x004311b8
FLD dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
MOV ESI,dword ptr [ESP + 0x2c]
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0x4]
MOV dword ptr [EAX + 0x14],ESI
MOV ESI,dword ptr [ESP + 0x4]
FCHS
FSTP dword ptr [EAX + 0x10]
MOV dword ptr [EAX + 0x4],ESI
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x24],ECX
MOV dword ptr [EAX + 0x28],EDX
JMP 0x00431372
FLD dword ptr [ESP + 0x38]
FCOMP dword ptr [0x004ac6d0]
FNSTSW AX
TEST AH,0x41
JZ 0x004311fe
FLD dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
MOV ESI,dword ptr [ESP + 0x2c]
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0x4]
MOV dword ptr [EAX + 0x14],ESI
MOV ESI,dword ptr [ESP + 0x4]
FCHS
FSTP dword ptr [EAX + 0x4]
MOV dword ptr [EAX + 0x10],ESI
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x24],ECX
MOV dword ptr [EAX + 0x28],EDX
JMP 0x00431372
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [0x004ac67c]
FXCH ST2
FMUL dword ptr [ESP + 0x34]
FLD dword ptr [0x004ac67c]
FXCH ST2
FSTP dword ptr [ESP + 0xc]
FXCH ST2
FSUB dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0xc]
FXCH ST3
FST dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x2c]
FXCH
FSUB dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FST dword ptr [ESP + 0x18]
FXCH
FST dword ptr [ESP + 0x10]
FXCH ST4
FSTP dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x8]
FXCH ST2
FSUB dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x8]
FXCH ST2
FADD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x38]
FXCH ST3
FADD dword ptr [ESP + 0x10]
FXCH
FDIV ST0,ST4
FXCH
MOV EAX,dword ptr [ESP + 0x28]
FDIV ST0,ST4
FLD dword ptr [0x004ac67c]
FXCH ST3
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x38]
FXCH ST4
FSUB dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x2c]
FXCH ST4
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x4]
FXCH ST5
FST dword ptr [ESP + 0x20]
FXCH ST4
FMUL dword ptr [ESP + 0x34]
FST dword ptr [ESP + 0x20]
FXCH
FST dword ptr [ESP + 0x20]
FXCH ST5
FMUL dword ptr [ESP + 0x30]
FST dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x4]
FMUL dword ptr [ESP + 0x34]
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x4]
FMUL dword ptr [ESP + 0x38]
FSTP dword ptr [ESP + 0x34]
FXCH ST3
FADD dword ptr [ESP + 0xc]
FSTP dword ptr [EAX]
FXCH ST3
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x10]
FXCH ST2
FADD dword ptr [ESP + 0x14]
FSTP dword ptr [EAX + 0x14]
FXCH ST4
FMUL dword ptr [ESP + 0x2c]
FXCH
FADD dword ptr [ESP + 0x18]
FXCH ST3
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x34]
FXCH ST4
FADD dword ptr [ESP + 0x8]
FSTP dword ptr [EAX + 0x28]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FST dword ptr [ESP + 0x30]
FXCH ST4
FADD dword ptr [ESP + 0x30]
FSTP dword ptr [EAX + 0x4]
FXCH
FST dword ptr [ESP + 0x30]
FXCH ST3
FSUB dword ptr [ESP + 0x34]
FXCH ST3
FSUB dword ptr [ESP + 0x1c]
FXCH ST4
FADD dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x30]
FXCH
FADD dword ptr [ESP + 0x30]
FXCH ST2
FSTP dword ptr [EAX + 0x10]
FXCH ST2
FSTP dword ptr [EAX + 0x8]
FXCH
FSTP dword ptr [EAX + 0x20]
FSTP dword ptr [EAX + 0x18]
FSTP ST0
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [ESP + 0x20]
FSTP dword ptr [EAX + 0x24]
MOV dword ptr [EAX + 0x30],ECX
MOV dword ptr [EAX + 0x34],ECX
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x1c],ECX
MOV dword ptr [EAX + 0x2c],ECX
MOV dword ptr [EAX + 0x3c],EDX
POP ESI
ADD ESP,0x20
RET
