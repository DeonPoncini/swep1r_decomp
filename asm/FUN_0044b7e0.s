; FUN_0044b7e0
MOV EAX,[0x0050c6f4]
MOV dword ptr [0x004c3c0c],0x1
CMP EAX,0x20
JGE 0x0044b9a5
INC EAX
MOV ECX,dword ptr [ESP + 0x4]
MOV [0x0050c6f4],EAX
LEA EAX,[EAX + EAX*0x2]
SHL EAX,0x4
FLD dword ptr [EAX + 0xe3759c]
FLD dword ptr [EAX + 0xe37590]
FMUL dword ptr [ECX]
LEA EAX,[EAX + 0xe375c0]
FLD dword ptr [EAX + -0x18]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX]
FLD dword ptr [EAX + -0x14]
FLD dword ptr [ECX]
FMUL dword ptr [EAX + -0x2c]
FLD dword ptr [EAX + -0x20]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [ECX]
FMUL dword ptr [EAX + -0x28]
FLD dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [EAX + -0x10]
FXCH ST2
FMUL dword ptr [EAX + -0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [EAX + -0x18]
FLD dword ptr [EAX + -0x30]
FMUL dword ptr [ECX + 0xc]
FLD dword ptr [EAX + -0x24]
FXCH ST2
FMUL dword ptr [ECX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + 0x10]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0xc]
FLD dword ptr [EAX + -0x14]
FLD dword ptr [ECX + 0xc]
FMUL dword ptr [EAX + -0x2c]
FLD dword ptr [EAX + -0x20]
FXCH ST2
FMUL dword ptr [ECX + 0x14]
FXCH ST2
FMUL dword ptr [ECX + 0x10]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x14]
FLD dword ptr [ECX + 0xc]
FMUL dword ptr [EAX + -0x28]
FLD dword ptr [ECX + 0x10]
FXCH ST2
FMUL dword ptr [EAX + -0x10]
FXCH ST2
FMUL dword ptr [EAX + -0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x14]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [EAX + -0x30]
FMUL dword ptr [ECX + 0x18]
FLD dword ptr [ECX + 0x1c]
FXCH ST2
FMUL dword ptr [EAX + -0x18]
FXCH ST2
FMUL dword ptr [EAX + -0x24]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x18]
FLD dword ptr [ECX + 0x18]
FLD dword ptr [ECX + 0x20]
FMUL dword ptr [EAX + -0x14]
FLD dword ptr [ECX + 0x1c]
FXCH ST2
FMUL dword ptr [EAX + -0x2c]
FXCH ST2
FMUL dword ptr [EAX + -0x20]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [ECX + 0x1c]
FMUL dword ptr [EAX + -0x1c]
FLD dword ptr [ECX + 0x18]
FXCH ST2
FMUL dword ptr [EAX + -0x10]
FXCH ST2
FMUL dword ptr [EAX + -0x28]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x20]
FLD dword ptr [ECX + 0x28]
FLD dword ptr [EAX + -0x30]
FMUL dword ptr [ECX + 0x24]
FLD dword ptr [ECX + 0x2c]
FXCH ST2
FMUL dword ptr [EAX + -0x24]
FXCH ST2
FMUL dword ptr [EAX + -0x18]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + -0xc]
FSTP dword ptr [EAX + 0x24]
FLD dword ptr [ECX + 0x2c]
FLD dword ptr [ECX + 0x24]
FMUL dword ptr [EAX + -0x2c]
FLD dword ptr [ECX + 0x28]
FXCH ST2
FMUL dword ptr [EAX + -0x14]
FXCH ST2
FMUL dword ptr [EAX + -0x20]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + -0x8]
FSTP dword ptr [EAX + 0x28]
FLD dword ptr [ECX + 0x2c]
FLD dword ptr [ECX + 0x24]
FMUL dword ptr [EAX + -0x28]
FLD dword ptr [ECX + 0x28]
FXCH ST2
FMUL dword ptr [EAX + -0x10]
FXCH ST2
FMUL dword ptr [EAX + -0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + -0x4]
FSTP dword ptr [EAX + 0x2c]
RET
