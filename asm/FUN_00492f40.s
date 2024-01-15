; FUN_00492f40
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
SUB ESP,0x30
MOV ECX,0xc
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0xc]
PUSH ESI
PUSH EDI
MOV ESI,EDX
LEA EDI,[ESP + 0x8]
MOVSD.REP ES:EDI,ESI
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [EAX]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FADDP ST2,ST0
FADDP
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0xc]
FXCH
FMUL dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x8]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x8]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x18]
FMUL dword ptr [ESP + 0x1c]
FXCH
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0xc]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FADDP
FXCH
FADDP
FLD dword ptr [ESP + 0x20]
FXCH
FSTP dword ptr [EDX + 0x10]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x14]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x18]
FMUL dword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x18]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH
FMUL dword ptr [ESP + 0x28]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x1c]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH
FMUL dword ptr [ESP + 0x28]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EDX + 0x20]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [ESP + 0x2c]
FXCH ST2
FMUL dword ptr [ESP + 0x34]
FXCH
FMUL dword ptr [ESP + 0x30]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x24]
FSTP dword ptr [EDX + 0x24]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x1c]
FLD dword ptr [EAX + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x2c]
FXCH
FMUL dword ptr [ESP + 0x34]
FXCH ST2
FMUL dword ptr [ESP + 0x30]
FXCH ST2
FADDP
FXCH
FADDP
POP EDI
POP ESI
FADD dword ptr [EAX + 0x28]
FSTP dword ptr [EDX + 0x28]
FLD dword ptr [EAX + 0x14]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [ESP + 0x2c]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [EAX + 0x2c]
FSTP dword ptr [EDX + 0x2c]
ADD ESP,0x30
RET
