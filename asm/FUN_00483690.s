; FUN_00483690
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x10],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x20],EDX
FLD dword ptr [ECX + 0x10]
FCHS
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [ECX + 0x14]
FCHS
FSTP dword ptr [EAX + 0x18]
FLD dword ptr [ECX + 0x18]
FCHS
FSTP dword ptr [EAX + 0x28]
MOV EDX,dword ptr [ECX + 0x20]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0x14],EDX
MOV EDX,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0x24],EDX
FMUL dword ptr [ECX + 0x30]
FLD dword ptr [EAX + 0x10]
FXCH ST2
FMUL dword ptr [ECX + 0x38]
FXCH ST2
FMUL dword ptr [ECX + 0x34]
FXCH ST2
FADDP
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x28]
FXCH ST3
FADDP ST2,ST0
FLD dword ptr [EAX + 0x8]
FXCH ST2
FCHS
FSTP dword ptr [EAX + 0x30]
FLD dword ptr [ECX + 0x38]
FLD dword ptr [ECX + 0x30]
FMUL dword ptr [EAX + 0x4]
FLD dword ptr [ECX + 0x34]
FXCH ST2
FMUL dword ptr [EAX + 0x24]
FADDP
FXCH
FMUL dword ptr [EAX + 0x14]
FADDP
FCHS
FSTP dword ptr [EAX + 0x34]
FMUL dword ptr [ECX + 0x34]
FXCH ST2
FMUL dword ptr [ECX + 0x38]
FXCH
FMUL dword ptr [ECX + 0x30]
FXCH
FADDP ST2,ST0
FADDP
FCHS
FSTP dword ptr [EAX + 0x38]
MOV EDX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xc],EDX
MOV EDX,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX + 0x1c],EDX
MOV EDX,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0x2c],EDX
MOV ECX,dword ptr [ECX + 0x3c]
MOV dword ptr [EAX + 0x3c],ECX
RET
