; FUN_0048eb60
SUB ESP,0x18
MOV EAX,dword ptr [ESP + 0x24]
PUSH ESI
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x2c]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST5
MOV EAX,dword ptr [ESP + 0x24]
FSUB dword ptr [EAX]
FSTP dword ptr [ESP + 0x10]
FXCH
FSUB dword ptr [EAX]
FXCH ST3
FSUB dword ptr [EAX + 0x4]
FXCH ST2
FSUB dword ptr [EAX + 0x8]
FXCH
FSUB dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x14]
LEA EAX,[ESP + 0x10]
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x4]
FXCH
FSTP dword ptr [ESP + 0x8]
PUSH EAX
FSTP dword ptr [ESP + 0x10]
CALL 0x00492440
ADD ESP,0x4
LEA ECX,[ESP + 0x4]
FSTP ST0
PUSH ECX
CALL 0x00492440
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0xc]
FXCH ST5
FSTP ST0
FLD dword ptr [ESP + 0x8]
FXCH ST4
FMUL dword ptr [ESP + 0x18]
FXCH ST3
MOV ESI,dword ptr [ESP + 0x24]
ADD ESP,0x4
FMUL dword ptr [ESP + 0x18]
PUSH ESI
FSUBP ST3,ST0
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FSTP dword ptr [ESI]
FMUL dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST3
FSUBP
FXCH ST2
FSUBP
FXCH
FSTP dword ptr [ESI + 0x4]
FSTP dword ptr [ESI + 0x8]
CALL 0x00492440
ADD ESP,0x4
FSTP ST0
PUSH 0x358637bd
PUSH ESI
CALL 0x0048ec90
ADD ESP,0x8
POP ESI
ADD ESP,0x18
RET
