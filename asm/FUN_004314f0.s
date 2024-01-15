; FUN_004314f0
SUB ESP,0x18
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x28]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x24]
FLD dword ptr [EAX]
FLD dword ptr [ECX]
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX + 0x8]
FXCH ST3
FSUB dword ptr [ESI]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x4]
FXCH ST3
FSUB dword ptr [EAX]
FXCH ST2
FSUB dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [EAX + 0x8]
FXCH ST3
FSUB dword ptr [ESI + 0x4]
FXCH
FSUB dword ptr [ESI + 0x8]
FXCH
LEA EAX,[ESP + 0x10]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x24]
LEA ECX,[ESP + 0x8]
FSTP dword ptr [ESP + 0xc]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP + 0x18]
PUSH EDI
FSTP dword ptr [ESP + 0x20]
FXCH
FSTP dword ptr [ESP + 0x24]
FSTP dword ptr [ESP + 0x28]
CALL 0x0042f9f0
ADD ESP,0xc
PUSH EDI
CALL 0x0042f9b0
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [ESI + 0x4]
FXCH ST3
FSTP ST0
FXCH
FMUL dword ptr [EDI]
FXCH ST2
FADDP
FXCH
ADD ESP,0x4
FADDP
FSTP dword ptr [EDI + 0xc]
POP EDI
POP ESI
ADD ESP,0x18
RET
