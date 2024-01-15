; FUN_00493270
MOV ECX,dword ptr [ESP + 0x10]
MOV EAX,ECX
DEC ECX
TEST EAX,EAX
JZ 0x0049330e
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
PUSH ESI
LEA ESI,[ECX + 0x1]
MOV ECX,dword ptr [ESP + 0xc]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [ECX]
FXCH ST2
FMULP ST4
FMULP ST2
FXCH
ADD ECX,0xc
FADDP ST2,ST0
FMUL dword ptr [EAX]
FADDP
FADD dword ptr [EAX + 0x24]
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [ECX + -0x8]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + -0x4]
FXCH ST4
FMUL dword ptr [ECX + -0xc]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x28]
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [ECX + -0x8]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [ECX + -0x4]
FXCH ST4
FMUL dword ptr [ECX + -0xc]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x2c]
FSTP dword ptr [EDX + 0x8]
ADD EDX,0xc
DEC ESI
JNZ 0x0049328f
POP ESI
RET
