; FUN_00441710
SUB ESP,0xc
MOV EAX,dword ptr [ESP + 0x18]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FSUB dword ptr [ESI]
FXCH
FSUB dword ptr [ESI + 0x4]
FXCH ST2
FSUB dword ptr [ESI + 0x8]
FXCH
FSTP dword ptr [ESP + 0x4]
FXCH
FSTP dword ptr [ESP + 0x8]
LEA EAX,[ESP + 0x4]
FSTP dword ptr [ESP + 0xc]
PUSH EAX
CALL 0x0042f9b0
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x18]
ADD ESP,0x4
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ESP + 0xc]
FXCH ST4
FSTP ST0
FLD dword ptr [ESP + 0x8]
FXCH ST3
FMUL dword ptr [EAX]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x4]
FXCH ST4
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [ESP + 0x4]
FXCH ST2
FSUBR dword ptr [ESP + 0x24]
FXCH ST4
FMUL dword ptr [EAX]
FXCH
FADDP ST3,ST0
FLD dword ptr [ESP + 0x8]
FXCH
FADDP ST3,ST0
FLD dword ptr [ESP + 0xc]
FXCH ST3
FDIVP ST4,ST0
FXCH ST3
FSTP dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FST dword ptr [ESP + 0x1c]
FXCH
FST dword ptr [ESP + 0x18]
FXCH ST2
FST dword ptr [ESP + 0x20]
FXCH
FSTP dword ptr [ECX]
FXCH
FSTP dword ptr [ECX + 0x4]
FSTP dword ptr [ECX + 0x8]
FLD dword ptr [ESI]
FADD dword ptr [ESP + 0x1c]
FSTP dword ptr [ECX]
FLD dword ptr [ESI + 0x4]
FADD dword ptr [ESP + 0x18]
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [ESI + 0x8]
FADD dword ptr [ESP + 0x20]
POP ESI
FSTP dword ptr [ECX + 0x8]
ADD ESP,0xc
RET
