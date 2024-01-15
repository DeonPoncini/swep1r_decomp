; FUN_004924b0
SUB ESP,0x1c
PUSH ESI
MOV ESI,dword ptr [ESP + 0x28]
LEA ECX,[ESP + 0x4]
LEA EDX,[ESP + 0x28]
MOV EAX,dword ptr [ESI]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0048c950
MOV EAX,dword ptr [ESI + 0x4]
ADD ESP,0xc
LEA ECX,[ESP + 0x10]
LEA EDX,[ESP + 0xc]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0048c950
MOV EAX,dword ptr [ESI + 0x8]
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0x8]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0048c950
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x1c]
FXCH
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x20]
FLD ST3
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH ST3
FST dword ptr [ESP + 0x28]
FXCH ST2
FST dword ptr [ESP + 0x24]
FXCH ST2
FMUL dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FXCH ST4
FMUL dword ptr [ESP + 0x34]
FXCH ST3
FCHS
FMUL dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x1c]
FXCH
FADD ST0,ST6
MOV EAX,dword ptr [ESP + 0x30]
ADD ESP,0xc
FSTP dword ptr [EAX]
FMUL dword ptr [ESP + 0x4]
FXCH
FCHS
FXCH ST4
FCHS
FXCH ST4
FMUL dword ptr [ESP + 0x4]
FXCH ST4
FMUL dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x28]
FXCH ST3
FADD dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x2c]
LEA ECX,[EAX + 0x24]
FSTP dword ptr [EAX + 0x4]
FXCH ST3
FADD dword ptr [ESP + 0x1c]
FXCH ST4
FSTP dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [EAX + 0xc]
FXCH
FSTP dword ptr [EAX + 0x10]
FSTP dword ptr [EAX + 0x14]
FSTP dword ptr [EAX + 0x18]
FLD dword ptr [ESP + 0x28]
FCHS
FMUL ST1
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x4]
FXCH
FADD ST0,ST3
FSTP dword ptr [EAX + 0x1c]
FSTP dword ptr [EAX + 0x20]
MOV EAX,dword ptr [EDX]
POP ESI
MOV dword ptr [ECX],EAX
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ECX + 0x4],EAX
MOV EDX,dword ptr [EDX + 0x8]
FSTP ST0
FSTP ST0
MOV dword ptr [ECX + 0x8],EDX
ADD ESP,0x1c
RET
