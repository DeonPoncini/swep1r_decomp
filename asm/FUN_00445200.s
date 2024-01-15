; FUN_00445200
MOV ECX,dword ptr [0x0050c5e8]
CMP ECX,0x20
JGE 0x004454f2
MOV EAX,dword ptr [ESP + 0x4]
INC ECX
MOV dword ptr [0x0050c5e8],ECX
FLD dword ptr [EAX]
SHL ECX,0x6
FLD dword ptr [ECX + 0xe985a0]
FXCH
FMUL dword ptr [ECX + 0xe98580]
LEA ECX,[ECX + 0xe985c0]
FLD dword ptr [EAX + 0xc]
FXCH ST2
FMUL dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ECX + -0x10]
FLD dword ptr [ECX + -0x30]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX]
FLD dword ptr [ECX + -0xc]
FLD dword ptr [EAX]
FMUL dword ptr [ECX + -0x3c]
FLD dword ptr [ECX + -0x1c]
FXCH ST2
FMUL dword ptr [EAX + 0xc]
FLD dword ptr [ECX + -0x2c]
FXCH ST3
FMUL dword ptr [EAX + 0x8]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [ECX + -0x28]
FLD dword ptr [EAX]
FMUL dword ptr [ECX + -0x38]
FLD dword ptr [ECX + -0x18]
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [ECX + -0x8]
FXCH ST3
FMUL dword ptr [EAX + 0x8]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0xc]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x8]
FLD dword ptr [ECX + -0x14]
FLD dword ptr [EAX]
FMUL dword ptr [ECX + -0x34]
FLD dword ptr [ECX + -0x24]
FXCH ST2
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [ECX + -0x4]
FXCH ST3
FMUL dword ptr [EAX + 0x4]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0xc]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + -0x40]
FMUL dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0x18]
FXCH ST2
FMUL dword ptr [ECX + -0x10]
FLD dword ptr [EAX + 0x14]
FXCH ST3
FMUL dword ptr [ECX + -0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x30]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x10]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x18]
FMUL dword ptr [ECX + -0x1c]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + -0xc]
FLD dword ptr [EAX + 0x10]
FXCH ST3
FMUL dword ptr [ECX + -0x2c]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x3c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x10]
FMUL dword ptr [ECX + -0x38]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + -0x8]
FLD dword ptr [EAX + 0x18]
FXCH ST3
FMUL dword ptr [ECX + -0x28]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x18]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x18]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x18]
FMUL dword ptr [ECX + -0x14]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + -0x4]
FLD dword ptr [EAX + 0x10]
FXCH ST3
FMUL dword ptr [ECX + -0x24]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x34]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x1c]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [ECX + -0x40]
FMUL dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x28]
FXCH ST2
FMUL dword ptr [ECX + -0x30]
FLD dword ptr [EAX + 0x2c]
FXCH ST3
FMUL dword ptr [ECX + -0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x10]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x20]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x20]
FMUL dword ptr [ECX + -0x3c]
FLD dword ptr [EAX + 0x2c]
FXCH ST2
FMUL dword ptr [ECX + -0x2c]
FLD dword ptr [EAX + 0x28]
FXCH ST3
FMUL dword ptr [ECX + -0xc]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x20]
FMUL dword ptr [ECX + -0x38]
FLD dword ptr [EAX + 0x24]
FXCH ST2
FMUL dword ptr [ECX + -0x18]
FLD dword ptr [EAX + 0x2c]
FXCH ST3
FMUL dword ptr [ECX + -0x28]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x8]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x28]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x20]
FMUL dword ptr [ECX + -0x34]
FLD dword ptr [EAX + 0x2c]
FXCH ST2
FMUL dword ptr [ECX + -0x24]
FLD dword ptr [EAX + 0x28]
FXCH ST3
FMUL dword ptr [ECX + -0x4]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x14]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x2c]
FLD dword ptr [EAX + 0x3c]
FLD dword ptr [ECX + -0x40]
FMUL dword ptr [EAX + 0x30]
FXCH
FMUL dword ptr [ECX + -0x10]
FLD dword ptr [EAX + 0x34]
FMUL dword ptr [ECX + -0x30]
FLD dword ptr [EAX + 0x38]
FXCH ST2
FADDP ST3,ST0
FXCH
FMUL dword ptr [ECX + -0x20]
FXCH
FADDP ST2,ST0
FADDP
FSTP dword ptr [ECX + 0x30]
FLD dword ptr [EAX + 0x34]
FLD dword ptr [EAX + 0x3c]
FMUL dword ptr [ECX + -0xc]
FLD dword ptr [EAX + 0x38]
FXCH ST2
FMUL dword ptr [ECX + -0x2c]
FLD dword ptr [EAX + 0x30]
FXCH ST3
FMUL dword ptr [ECX + -0x1c]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x3c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x34]
FLD dword ptr [EAX + 0x34]
FLD dword ptr [EAX + 0x38]
FMUL dword ptr [ECX + -0x18]
FLD dword ptr [EAX + 0x30]
FXCH ST2
FMUL dword ptr [ECX + -0x28]
FLD dword ptr [EAX + 0x3c]
FXCH ST3
FMUL dword ptr [ECX + -0x38]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x8]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x38]
FLD dword ptr [EAX + 0x38]
FLD dword ptr [EAX + 0x3c]
FMUL dword ptr [ECX + -0x4]
FLD dword ptr [EAX + 0x30]
FXCH ST2
FMUL dword ptr [ECX + -0x14]
FLD dword ptr [EAX + 0x34]
FXCH ST3
FMUL dword ptr [ECX + -0x34]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + -0x24]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x3c]
RET
