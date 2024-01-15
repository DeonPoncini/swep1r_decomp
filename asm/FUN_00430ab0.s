; FUN_00430ab0
SUB ESP,0x10
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x18]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x34]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x38]
FLD dword ptr [EAX + 0x2c]
FLD dword ptr [EAX + 0x3c]
FXCH ST5
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x14]
FXCH ST5
FMUL dword ptr [ECX + 0xc]
FADDP
FXCH ST4
FMUL dword ptr [ECX + 0x4]
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ECX]
FADDP ST5,ST0
FXCH ST2
FMUL dword ptr [ECX + 0xc]
FADDP
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FADDP ST3,ST0
FXCH ST4
FMUL dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ECX]
FADDP ST4,ST0
FXCH ST3
FST dword ptr [ESP + 0x8]
FXCH
FADDP ST5,ST0
FLD dword ptr [EAX + 0x30]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FADDP ST5,ST0
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0xc]
FMUL dword ptr [ECX]
FADDP ST5,ST0
FXCH
FMUL dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x10]
FXCH ST5
FST dword ptr [ESP + 0xc]
FXCH
FADDP ST2,ST0
FXCH ST4
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [EAX]
FXCH
FADDP ST2,ST0
MOV EAX,dword ptr [ESP + 0x14]
FMUL dword ptr [ECX]
FXCH ST3
FSTP dword ptr [EAX + 0x4]
FXCH
FSTP dword ptr [EAX + 0x8]
FXCH
FADDP
FXCH
FSTP dword ptr [EAX + 0xc]
FSTP dword ptr [EAX]
ADD ESP,0x10
RET
