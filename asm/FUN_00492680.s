; FUN_00492680
PUSH ECX
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [EAX + 0x10]
MOV ECX,dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
MOV dword ptr [ESP],EDX
MOV dword ptr [ESP + 0xc],ECX
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0xc]
FXCH
FMUL dword ptr [ESP]
FLD ST2
FMUL ST3
FXCH
FADDP ST2,ST0
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x18]
FXCH ST2
FADDP ST3,ST0
FLD dword ptr [EAX + 0x1c]
FXCH ST3
FSTP ST4
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX + 0x4]
FDIV ST0,ST3
FLD dword ptr [EAX + 0x20]
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
MOV EDX,dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x8],EDX
MOV EDX,dword ptr [EAX]
FLD dword ptr [ESP + 0x8]
MOV dword ptr [ESP],EDX
FLD dword ptr [ESP]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FXCH ST3
FADDP ST4,ST0
FMUL dword ptr [ESP + 0x8]
FXCH ST4
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x18]
FXCH ST3
FSTP dword ptr [ESP + 0x8]
FXCH ST2
FDIV dword ptr [ESP + 0x8]
FSTP dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x1c]
FDIV dword ptr [ESP + 0x8]
FXCH ST3
FADDP
FXCH ST2
FSTP dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x4]
FXCH
FMUL dword ptr [ESP]
FADDP ST2,ST0
FXCH
FSTP dword ptr [ESP + 0xc]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x8]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [ECX + 0x18]
FLD dword ptr [EAX + 0x14]
FDIV ST0,ST1
FSTP dword ptr [ECX + 0x1c]
FLD dword ptr [EAX]
FDIV dword ptr [ESP + 0xc]
FSTP dword ptr [ECX]
FLD dword ptr [EAX + 0x10]
FDIV ST0,ST1
FSTP dword ptr [ECX + 0x10]
FSTP ST0
FLD dword ptr [EAX + 0x20]
FDIV dword ptr [ESP + 0x8]
FSTP dword ptr [ECX + 0x20]
MOV EDX,dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0xc],EDX
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0xc]
FLD ST3
FLD ST4
FXCH ST4
FST dword ptr [ESP + 0x8]
FMUL dword ptr [ECX + 0x18]
FLD dword ptr [ESP + 0xc]
FXCH ST2
FMUL dword ptr [ECX + 0xc]
FADDP
FXCH
FMUL dword ptr [ECX]
FADDP
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ESP + 0x8]
FXCH ST3
FCHS
FSTP dword ptr [ECX + 0x24]
FXCH ST3
FMUL dword ptr [ECX + 0x10]
FLD dword ptr [ESP + 0x8]
FXCH
FADDP ST4,ST0
FXCH
FMUL dword ptr [ECX + 0x8]
FXCH ST4
FMUL dword ptr [ECX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + 0x1c]
FXCH ST2
FADDP ST4,ST0
FMUL dword ptr [ECX + 0x20]
FXCH
FADDP ST2,ST0
FADDP ST2,ST0
FCHS
FXCH
FCHS
FXCH
FSTP dword ptr [ECX + 0x28]
FSTP dword ptr [ECX + 0x2c]
POP ECX
RET
