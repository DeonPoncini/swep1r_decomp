; FUN_004925d0
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EAX + 0x18]
MOV dword ptr [ECX + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x1c]
MOV dword ptr [ECX + 0x14],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0xc],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x18],EDX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [ECX + 0x1c],EDX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0x10]
MOV dword ptr [ECX + 0x10],EDX
MOV EDX,dword ptr [EAX + 0x20]
MOV dword ptr [ECX + 0x20],EDX
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x4]
FMUL ST4
FXCH
FMUL ST3
FLD ST2
FMUL dword ptr [EAX]
FXCH
FADDP ST2,ST0
FADDP
FCHS
FSTP dword ptr [ECX + 0x24]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL ST5
FXCH
FMUL ST3
FXCH ST2
FMUL ST4
FXCH ST2
FADDP
FXCH
FADDP
FCHS
FSTP dword ptr [ECX + 0x28]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x18]
FXCH ST2
FMUL ST4
FXCH
FMUL ST5
FXCH ST2
FMUL ST3
FXCH ST2
FADDP
FXCH
FADDP
FCHS
FSTP dword ptr [ECX + 0x2c]
FSTP ST0
FSTP ST0
FSTP ST0
RET
