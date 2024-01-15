; FUN_00430f10
SUB ESP,0x14
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[ESP + 0x10]
LEA EDX,[ESP + 0xc]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f380
MOV EAX,dword ptr [ESP + 0x2c]
ADD ESP,0xc
LEA ECX,[ESP]
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f380
MOV EAX,dword ptr [ESP + 0x30]
ADD ESP,0xc
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x4]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f380
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0xc]
FXCH ST3
FMUL dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x24]
ADD ESP,0xc
FST dword ptr [ESP + 0x20]
FXCH ST2
FST dword ptr [ESP + 0x4]
FXCH
FST dword ptr [ESP + 0x24]
FXCH ST5
FMUL dword ptr [ESP + 0xc]
FLD ST0
FMUL dword ptr [ESP + 0x1c]
FSUBR dword ptr [ESP + 0x20]
FSTP dword ptr [EAX]
FXCH
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESP]
FXCH
FADD dword ptr [ESP + 0x24]
FSTP dword ptr [EAX + 0x4]
FXCH ST5
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x8]
FXCH ST5
FMUL dword ptr [ESP]
FCHS
FSTP dword ptr [EAX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADD dword ptr [ESP + 0x4]
FXCH ST3
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FSUBR ST0,ST1
FXCH ST5
FMUL dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x1c]
FXCH ST3
FCHS
FSTP dword ptr [EAX + 0xc]
FXCH ST4
FMUL dword ptr [ESP]
FXCH ST4
FSTP dword ptr [EAX + 0x10]
FXCH
FSTP dword ptr [EAX + 0x14]
FXCH
FSTP dword ptr [EAX + 0x18]
FXCH ST2
FSTP dword ptr [EAX + 0x1c]
FSTP dword ptr [EAX + 0x20]
FSTP ST0
ADD ESP,0x14
RET
