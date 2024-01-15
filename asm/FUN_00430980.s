; FUN_00430980
SUB ESP,0xc
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x28]
FXCH ST3
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x4]
FXCH ST3
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x8]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x10]
FXCH ST4
FMUL dword ptr [ECX]
FADDP ST2,ST0
FXCH ST4
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x20]
FXCH
FADDP ST5,ST0
FXCH ST2
FMUL dword ptr [ECX]
FLD dword ptr [EAX]
FXCH
FADDP ST5,ST0
FXCH ST3
FMUL dword ptr [ECX + 0x4]
FXCH ST4
FST dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FXCH ST3
FMUL dword ptr [ECX]
FXCH ST3
FADDP ST4,ST0
MOV EAX,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
FADDP
FSTP dword ptr [EAX]
ADD ESP,0xc
RET
