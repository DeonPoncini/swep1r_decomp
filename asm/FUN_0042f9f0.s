; FUN_0042f9f0
SUB ESP,0xc
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
FLD dword ptr [EAX]
FLD dword ptr [ECX]
FLD dword ptr [ECX]
FLD dword ptr [EAX]
FXCH ST3
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x8]
FXCH ST2
FSUBP ST4,ST0
FXCH ST4
FMUL dword ptr [ECX + 0x4]
FSUBP ST4,ST0
FXCH
FMUL dword ptr [ECX + 0x4]
FXCH ST3
FST dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [EAX + 0x4]
FXCH ST2
MOV EAX,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
FSUBP
FSTP dword ptr [EAX]
ADD ESP,0xc
RET
