; FUN_00480690
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0x20]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x30]
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x24]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x34]
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x28]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x38]
FSTP dword ptr [EDX + 0x8]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x2c]
FMUL dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0xc]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [ECX]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x3c]
FSTP dword ptr [EDX + 0xc]
RET
