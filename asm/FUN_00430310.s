; FUN_00430310
PUSH ECX
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ECX + 0x14]
MOV EAX,dword ptr [ECX + 0x10]
FLD dword ptr [ECX + 0x18]
MOV dword ptr [ESP],EDX
MOV dword ptr [ESP + 0xc],EAX
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0xc]
FXCH
FMUL dword ptr [ESP]
FLD ST2
FMUL ST3
FXCH
FADDP ST2,ST0
FLD dword ptr [ECX + 0x10]
FLD dword ptr [ECX + 0x20]
FXCH ST2
FADDP ST3,ST0
FLD dword ptr [ECX + 0x24]
FXCH ST3
FSTP ST4
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ECX + 0x4]
FDIV ST0,ST3
FLD dword ptr [ECX + 0x28]
FXCH ST2
FST dword ptr [ESP + 0xc]
FXCH ST3
FST dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FSTP dword ptr [ESP + 0xc]
FXCH ST2
FMUL dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0xc]
FXCH
FADDP ST2,ST0
MOV dword ptr [ESP + 0xc],EDX
MOV EDX,dword ptr [ECX + 0x8]
FLD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x8],EDX
MOV EDX,dword ptr [ECX]
FLD dword ptr [ESP + 0x8]
MOV dword ptr [ESP],EDX
FLD dword ptr [ESP]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FXCH ST3
FADDP ST4,ST0
FMUL dword ptr [ESP + 0x8]
FXCH ST4
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x20]
FXCH ST3
FSTP dword ptr [ESP + 0x8]
FXCH ST2
FDIV dword ptr [ESP + 0x8]
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x24]
FDIV dword ptr [ESP + 0x8]
FXCH ST3
FADDP
FXCH ST2
FSTP dword ptr [EAX + 0x18]
FLD dword ptr [ECX + 0x4]
FXCH
FMUL dword ptr [ESP]
FADDP ST2,ST0
FXCH
FSTP dword ptr [ESP + 0xc]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x8]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [EAX + 0x20]
FLD dword ptr [ECX + 0x18]
FDIV ST0,ST1
XOR EDX,EDX
FSTP dword ptr [EAX + 0x24]
FLD dword ptr [ECX]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x14]
FDIV ST0,ST1
FSTP dword ptr [EAX + 0x14]
FSTP ST0
FLD dword ptr [ECX + 0x28]
FDIV dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0xc],EDX
MOV dword ptr [EAX + 0x1c],EDX
MOV dword ptr [EAX + 0x2c],EDX
MOV dword ptr [EAX + 0x3c],0x3f800000
FSTP dword ptr [EAX + 0x28]
MOV EDX,dword ptr [ECX + 0x30]
FLD dword ptr [ECX + 0x38]
MOV dword ptr [ESP + 0xc],EDX
MOV EDX,dword ptr [ECX + 0x34]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x8],EDX
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x8]
FLD ST4
FLD ST5
FXCH
FMUL dword ptr [EAX + 0x20]
FLD dword ptr [EAX]
FXCH ST4
FMUL dword ptr [EAX + 0x10]
FADDP
FXCH ST3
FMUL dword ptr [ESP + 0xc]
FADDP ST3,ST0
FMUL dword ptr [EAX + 0x24]
FLD dword ptr [ESP + 0x8]
FXCH ST3
FCHS
FSTP dword ptr [EAX + 0x30]
FXCH ST4
FMUL dword ptr [EAX + 0x4]
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [EAX + 0x18]
FXCH
FMUL dword ptr [EAX + 0x14]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [EAX + 0x28]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FADDP ST2,ST0
FCHS
FXCH
FCHS
FXCH
FSTP dword ptr [EAX + 0x34]
FSTP dword ptr [EAX + 0x38]
POP ECX
RET
