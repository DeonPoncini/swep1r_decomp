; FUN_00482f10
SUB ESP,0x14
PUSH ESI
MOV ESI,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESI + 0x28]
MOV EDX,dword ptr [ESI + 0x20]
MOV ECX,dword ptr [ESI + 0x2c]
SUB EAX,EDX
MOV EDX,dword ptr [ESI + 0x24]
MOV dword ptr [ESP + 0x1c],EAX
SUB ECX,EDX
MOV dword ptr [ESP + 0x14],ECX
FILD dword ptr [ESP + 0x14]
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [ESI + 0x138]
FXCH
FDIVP
FST dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ae094]
FNSTSW AX
TEST AH,0x1
JZ 0x00482f5b
FLD dword ptr [0x004ae098]
JMP 0x00482f8b
FLD dword ptr [ESI + 0x134]
FMUL dword ptr [0x004ae09c]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f3b0
FSTP dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x4
PUSH EDX
PUSH EAX
CALL 0x0042f560
FADD ST0,ST0
ADD ESP,0x8
FMUL dword ptr [0x004ae09c]
MOV ECX,dword ptr [ESI + 0x140]
MOV EDX,dword ptr [ESI + 0x144]
PUSH ECX
MOV dword ptr [ESP + 0x20],ECX
MOV dword ptr [ESP + 0xc],EDX
FSTP dword ptr [ESP]
CALL 0x0042f3b0
FMUL dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x20]
FXCH ST3
FST dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x8]
FXCH ST3
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0xc]
FXCH ST4
FCHS
FST dword ptr [ESP + 0x14]
FXCH ST2
FST dword ptr [ESP + 0xc]
FCHS
FST dword ptr [ESP + 0x10]
FXCH ST5
FADD ST0,ST0
ADD ESP,0x4
XOR EAX,EAX
MOV dword ptr [ESI + 0xf4],EAX
MOV dword ptr [ESI + 0xf8],EAX
MOV dword ptr [ESI + 0xfc],EAX
MOV dword ptr [ESI + 0x100],EAX
FST dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x8]
FSUB dword ptr [ESP + 0xc]
MOV dword ptr [ESI + 0x108],EAX
MOV dword ptr [ESI + 0x10c],EAX
MOV dword ptr [ESI + 0x120],EAX
MOV dword ptr [ESI + 0x124],EAX
MOV dword ptr [ESI + 0x12c],EAX
PUSH ESI
FSTP dword ptr [ESP + 0x10]
FDIV dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x11c],0xbf800000
FSTP dword ptr [ESI + 0xf0]
FLD dword ptr [ESP + 0x8]
FSUB dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST3
FADD dword ptr [ESP + 0x20]
FXCH ST4
FADD dword ptr [ESP + 0xc]
FXCH
FADD dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [0x004ae0a4]
FXCH ST2
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x18]
FXCH ST4
FDIV dword ptr [ESP + 0x20]
FXCH
FDIV dword ptr [ESP + 0x10]
FXCH ST3
FDIV dword ptr [ESP + 0x14]
FXCH ST2
FDIV dword ptr [ESP + 0x20]
FXCH ST4
FDIV dword ptr [ESP + 0x14]
FXCH
FCHS
FXCH
FSTP dword ptr [ESI + 0x104]
FXCH ST2
FSTP dword ptr [ESI + 0x110]
FSTP dword ptr [ESI + 0x114]
FSTP dword ptr [ESI + 0x118]
FSTP dword ptr [ESI + 0x128]
CALL 0x00482ee0
ADD ESP,0x4
POP ESI
ADD ESP,0x14
RET
