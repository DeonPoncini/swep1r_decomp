; FUN_00492b70
MOV ECX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [ECX]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0xc]
FXCH ST2
FMUL dword ptr [EAX]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x18]
FXCH ST4
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x4]
FXCH ST4
FMUL dword ptr [ECX]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [ECX + 0x8]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [ECX + 0x4]
FXCH ST4
FMUL dword ptr [ECX]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x8]
FLD dword ptr [ECX + 0xc]
FLD dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [ECX + 0x10]
FLD dword ptr [EAX + 0xc]
FXCH ST4
FMUL dword ptr [EAX]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0xc]
FLD dword ptr [ECX + 0x10]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x4]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FSTP dword ptr [EDX + 0x10]
FLD dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [ECX + 0x10]
FLD dword ptr [ECX + 0xc]
FLD dword ptr [EAX + 0x8]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FSTP dword ptr [EDX + 0x14]
FLD dword ptr [ECX + 0x18]
FLD dword ptr [ECX + 0x1c]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [EAX + 0x18]
FXCH ST4
FMUL dword ptr [EAX]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x18]
FLD dword ptr [ECX + 0x18]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x1c]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [EAX + 0x1c]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FSTP dword ptr [EDX + 0x1c]
FLD dword ptr [ECX + 0x20]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [ECX + 0x18]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x1c]
FLD dword ptr [EAX + 0x14]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FSTP dword ptr [EDX + 0x20]
FLD dword ptr [ECX + 0x24]
FLD dword ptr [ECX + 0x28]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [ECX + 0x2c]
FLD dword ptr [EAX + 0x18]
FXCH ST4
FMUL dword ptr [EAX]
FXCH ST2
FMULP ST3
FXCH ST3
FMULP ST3
FXCH
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x24]
FSTP dword ptr [EDX + 0x24]
FLD dword ptr [ECX + 0x24]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x2c]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [ECX + 0x28]
FLD dword ptr [EAX + 0x10]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FADD dword ptr [EAX + 0x28]
FSTP dword ptr [EDX + 0x28]
FLD dword ptr [ECX + 0x28]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [ECX + 0x24]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x2c]
FLD dword ptr [EAX + 0x20]
FXCH ST4
FMULP ST5
FXCH
FMULP ST2
FXCH ST2
FMULP ST2
FADDP ST2,ST0
FADDP
FADD dword ptr [EAX + 0x2c]
FSTP dword ptr [EDX + 0x2c]
RET
