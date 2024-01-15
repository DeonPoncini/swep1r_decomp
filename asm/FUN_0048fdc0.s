; FUN_0048fdc0
SUB ESP,0x8
XOR EDX,EDX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x4]
CMP EAX,EDX
JNZ 0x0048fdd8
XOR EAX,EAX
POP ESI
ADD ESP,0x8
RET
MOV ECX,dword ptr [ESI]
PUSH EDI
SUB ECX,EDX
JZ 0x0048ff22
DEC ECX
JNZ 0x0048ffb3
MOV ECX,dword ptr [EAX + 0x18]
MOV EDI,dword ptr [EAX + 0x10]
MOV EDX,dword ptr [EAX + 0x1c]
SUB ECX,EDI
MOV EDI,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x14],ECX
FLD dword ptr [ESI + 0x38]
FILD dword ptr [ESP + 0x14]
SUB EDX,EDI
PUSH ECX
MOV dword ptr [ESP + 0x10],EDX
FILD dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [0x004af7b8]
FXCH
FMUL dword ptr [0x004af7b8]
FXCH ST2
FMUL dword ptr [0x004af7b8]
FXCH ST2
FSTP dword ptr [ESP + 0xc]
FXCH
FSTP dword ptr [ESP + 0x18]
FSTP dword ptr [ESP]
CALL 0x0048cd50
FLD dword ptr [ESP + 0xc]
FXCH
FSTP dword ptr [ESP + 0x10]
FDIV dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x48]
ADD ESP,0x4
FST dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESI + 0x3c]
FLD dword ptr [EAX + 0x4]
FDIVR dword ptr [ESP + 0xc]
FXCH
FLD ST1
FXCH
FDIV dword ptr [ESP + 0xc]
FXCH
FSTP dword ptr [ESI + 0x54]
FLD dword ptr [EAX + 0x8]
FDIVR dword ptr [ESP + 0xc]
FSUB ST0,ST2
FLD dword ptr [ESI + 0x40]
FXCH
FDIVR dword ptr [0x004af7b4]
FXCH
FDIVP ST2,ST0
FLD dword ptr [ESP + 0x8]
FXCH
FSTP dword ptr [ESI + 0x58]
FXCH
FSTP dword ptr [EAX + 0x1c]
MOV EAX,dword ptr [ESI + 0x48]
FCHS
FDIV dword ptr [ESI + 0x3c]
FSTP dword ptr [EAX + 0x24]
MOV ECX,dword ptr [ESI + 0x48]
FSTP ST0
FLD dword ptr [ESP + 0x14]
FCHS
FDIV dword ptr [ESI + 0x3c]
PUSH ECX
FDIV dword ptr [ESI + 0x40]
FSTP dword ptr [ECX + 0x20]
FLD dword ptr [ESI + 0x3c]
MOV EDX,dword ptr [ESI + 0x48]
FDIVR dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004af7bc]
FXCH
FSTP dword ptr [EDX + 0x28]
FDIV dword ptr [ESI + 0x3c]
MOV EAX,dword ptr [ESI + 0x48]
FDIV dword ptr [ESI + 0x40]
FLD dword ptr [ESP + 0xc]
FSUB dword ptr [0x004af7bc]
FXCH
FSTP dword ptr [EAX + 0x2c]
MOV ECX,dword ptr [ESI + 0x48]
FCHS
FDIV dword ptr [ESI + 0x3c]
FLD dword ptr [ESP + 0x18]
FADD ST0,ST0
FLD dword ptr [ESP + 0xc]
FADD ST0,ST0
FXCH
FSTP dword ptr [ESP]
FXCH
FSTP dword ptr [ECX + 0x30]
MOV EDX,dword ptr [ESI + 0x48]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
PUSH ESI
CALL 0x0048ffc0
ADD ESP,0x10
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x8
RET
MOV ECX,dword ptr [EAX + 0x18]
MOV EDI,dword ptr [EAX + 0x10]
FLD dword ptr [ESI + 0x44]
SUB ECX,EDI
MOV EDI,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x14],ECX
MOV ECX,dword ptr [EAX + 0x14]
FILD dword ptr [ESP + 0x14]
SUB EDI,ECX
MOV EAX,dword ptr [ESI + 0x48]
MOV dword ptr [ESP + 0x14],EDI
FMUL dword ptr [0x004af7b8]
FILD dword ptr [ESP + 0x14]
FXCH ST2
FDIVR ST0,ST1
FXCH ST2
FMUL dword ptr [0x004af7b8]
FXCH ST2
FCHS
FSTP dword ptr [EAX + 0xc]
FLD dword ptr [ESI + 0x44]
FXCH ST2
FSTP dword ptr [ESP + 0x14]
FXCH
FDIVR dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESI + 0x48]
FDIV dword ptr [ESI + 0x40]
FSTP dword ptr [ECX + 0x10]
FLD dword ptr [ESI + 0x44]
FDIVR ST0,ST1
MOV EAX,dword ptr [ESI + 0x48]
FSTP dword ptr [EAX + 0x14]
MOV ECX,dword ptr [ESI + 0x48]
FSTP ST0
FLD dword ptr [ESI + 0x44]
FDIVR dword ptr [ESP + 0x14]
FCHS
FDIV dword ptr [ESI + 0x40]
FSTP dword ptr [ECX + 0x18]
MOV EAX,dword ptr [ESI + 0x48]
MOV dword ptr [ESI + 0x3c],EDX
MOV dword ptr [EAX + 0x1c],EDX
MOV ECX,dword ptr [ESI + 0x48]
MOV dword ptr [ECX + 0x20],EDX
MOV EAX,dword ptr [ESI + 0x48]
MOV dword ptr [EAX + 0x24],EDX
MOV ECX,dword ptr [ESI + 0x48]
MOV dword ptr [ECX + 0x28],EDX
POP EDI
MOV EAX,0x1
POP ESI
ADD ESP,0x8
RET
