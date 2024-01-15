; FUN_0042ff80
SUB ESP,0x40
MOV ECX,dword ptr [ESP + 0x44]
MOV EAX,dword ptr [ESP + 0x48]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [ECX + 0x30]
FLD dword ptr [ECX + 0x10]
FLD ST2
FLD ST2
FXCH
FMUL dword ptr [EAX + 0x8]
FXCH
FMUL dword ptr [EAX + 0xc]
FLD dword ptr [ECX]
FXCH ST3
FST dword ptr [ESP + 0x10]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
FXCH ST2
FADDP ST3,ST0
FXCH ST3
FSTP dword ptr [ESP]
FMUL dword ptr [ESP]
FXCH ST2
FADDP
MOV EDX,dword ptr [ECX + 0x24]
FLD dword ptr [ECX + 0x14]
FXCH ST2
FADDP
MOV dword ptr [ESP + 0x24],EDX
MOV EDX,dword ptr [ECX + 0x34]
FLD dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x34],EDX
MOV EDX,dword ptr [ECX + 0x28]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FSTP dword ptr [ECX]
MOV dword ptr [ESP + 0x28],EDX
MOV EDX,dword ptr [ECX + 0x38]
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [EAX + 0xc]
FXCH ST3
FST dword ptr [ESP + 0x14]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
FXCH ST4
FADDP ST2,ST0
FXCH ST2
FSTP dword ptr [ESP + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x4]
FXCH
FADDP ST2,ST0
FLD dword ptr [ECX + 0x18]
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x38],EDX
MOV EDX,dword ptr [ECX + 0xc]
FLD dword ptr [ESP + 0x38]
FXCH ST3
FSTP dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0xc],EDX
MOV EDX,dword ptr [ECX + 0x1c]
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x8]
FXCH ST3
FMUL dword ptr [EAX + 0xc]
FXCH ST2
FST dword ptr [ESP + 0x18]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [EAX]
FXCH ST3
FADDP ST2,ST0
FXCH ST3
FSTP dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x8]
FXCH ST2
FADDP
FXCH
FADDP
MOV dword ptr [ESP + 0x1c],EDX
MOV EDX,dword ptr [ECX + 0x2c]
MOV dword ptr [ESP + 0x2c],EDX
MOV EDX,dword ptr [ECX + 0x3c]
FSTP dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x3c],EDX
FLD dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x2c]
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [EAX + 0xc]
FLD dword ptr [EAX]
FXCH ST3
FMUL dword ptr [EAX + 0x4]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FADDP ST2,ST0
FLD ST4
FXCH
FADDP ST2,ST0
FLD ST3
FXCH ST2
FSTP dword ptr [ECX + 0xc]
FXCH ST2
FMUL dword ptr [EAX + 0x14]
FLD dword ptr [ESP]
FXCH ST3
FMUL dword ptr [EAX + 0x18]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [EAX + 0x1c]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [EAX + 0x10]
FLD dword ptr [ESP + 0x24]
FXCH ST4
FADDP ST2,ST0
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x4]
FXCH ST2
FADDP ST3,ST0
FLD dword ptr [ESP + 0x18]
FXCH ST3
FSTP dword ptr [ECX + 0x10]
FXCH ST3
FMUL dword ptr [EAX + 0x14]
FLD dword ptr [ESP + 0x28]
FXCH ST5
FMUL dword ptr [EAX + 0x18]
FADDP
FXCH ST3
FMUL dword ptr [EAX + 0x1c]
FLD dword ptr [ESP + 0x38]
FXCH
FADDP ST4,ST0
FXCH
FMUL dword ptr [EAX + 0x10]
FLD dword ptr [ESP + 0x8]
FXCH
FADDP ST4,ST0
FLD dword ptr [ESP + 0x1c]
FXCH ST4
FSTP dword ptr [ECX + 0x14]
FXCH ST2
FMUL dword ptr [EAX + 0x14]
FLD dword ptr [ESP + 0x2c]
FXCH ST5
FMUL dword ptr [EAX + 0x18]
FADDP
FXCH
FMUL dword ptr [EAX + 0x1c]
FLD dword ptr [ESP + 0x3c]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x10]
FLD dword ptr [ESP + 0xc]
FXCH
FADDP ST2,ST0
FXCH
FSTP dword ptr [ECX + 0x18]
FXCH ST2
FMUL dword ptr [EAX + 0x14]
FLD ST4
FXCH ST4
FMUL dword ptr [EAX + 0x18]
FLD dword ptr [ESP]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x1c]
FLD dword ptr [ESP + 0x10]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [EAX + 0x10]
FLD ST6
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP + 0x34]
FXCH ST2
FSTP dword ptr [ECX + 0x1c]
FXCH ST4
FMUL dword ptr [EAX + 0x2c]
FLD dword ptr [ESP + 0x4]
FXCH ST3
FMUL dword ptr [EAX + 0x20]
FADDP
FXCH ST3
FMUL dword ptr [EAX + 0x24]
FLD dword ptr [ESP + 0x14]
FXCH
FADDP ST4,ST0
FXCH ST4
FMUL dword ptr [EAX + 0x28]
FLD dword ptr [ESP + 0x24]
FXCH
FADDP ST4,ST0
FXCH ST3
FSTP dword ptr [ECX + 0x20]
FMUL dword ptr [EAX + 0x2c]
FXCH
FMUL dword ptr [EAX + 0x20]
FXCH ST3
FMUL dword ptr [EAX + 0x24]
FXCH ST3
FADDP
FXCH
FMUL dword ptr [EAX + 0x28]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x24]
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [EAX + 0x2c]
FLD dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [EAX + 0x20]
FLD dword ptr [ESP + 0x28]
FXCH ST3
FMUL dword ptr [EAX + 0x24]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x28]
FLD dword ptr [ESP + 0x3c]
FXCH ST3
FADDP ST2,ST0
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FADDP ST3,ST0
FLD dword ptr [ESP + 0x2c]
FXCH ST3
FSTP dword ptr [ECX + 0x28]
FXCH ST3
FMUL dword ptr [EAX + 0x2c]
FXCH ST3
FMUL dword ptr [EAX + 0x20]
FXCH
FMUL dword ptr [EAX + 0x24]
FXCH
FADDP ST3,ST0
FXCH
FMUL dword ptr [EAX + 0x28]
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x10]
FXCH ST2
FADDP ST3,ST0
FLD dword ptr [ESP + 0x24]
FXCH ST3
FSTP dword ptr [ECX + 0x2c]
FXCH ST4
FMUL dword ptr [EAX + 0x38]
FLD dword ptr [ESP + 0x34]
FXCH ST4
FMUL dword ptr [EAX + 0x3c]
FADDP
FXCH ST4
FMUL dword ptr [EAX + 0x30]
FLD dword ptr [ESP + 0x4]
FXCH
FADDP ST5,ST0
FXCH
FMUL dword ptr [EAX + 0x34]
FLD dword ptr [ESP + 0x14]
FXCH
FADDP ST5,ST0
FLD dword ptr [ESP + 0x28]
FXCH ST5
FSTP dword ptr [ECX + 0x30]
FXCH ST2
FMUL dword ptr [EAX + 0x38]
FLD dword ptr [ESP + 0x38]
FXCH ST4
FMUL dword ptr [EAX + 0x3c]
FADDP
FXCH
FMUL dword ptr [EAX + 0x30]
FLD dword ptr [ESP + 0x8]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x34]
FLD dword ptr [ESP + 0x18]
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP + 0x2c]
FXCH ST2
FSTP dword ptr [ECX + 0x34]
FXCH ST4
FMUL dword ptr [EAX + 0x38]
FLD dword ptr [ESP + 0x3c]
FXCH ST4
FMUL dword ptr [EAX + 0x3c]
FADDP
FXCH ST2
FMUL dword ptr [EAX + 0x30]
FLD dword ptr [ESP + 0xc]
FXCH
FADDP ST3,ST0
FXCH ST4
FMUL dword ptr [EAX + 0x34]
FLD dword ptr [ESP + 0x1c]
FXCH
FADDP ST3,ST0
FXCH ST2
FSTP dword ptr [ECX + 0x38]
FMUL dword ptr [EAX + 0x38]
FXCH ST2
FMUL dword ptr [EAX + 0x3c]
FXCH ST3
FMUL dword ptr [EAX + 0x30]
FXCH ST3
FADDP ST2,ST0
FMUL dword ptr [EAX + 0x34]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ECX + 0x3c]
ADD ESP,0x40
RET
