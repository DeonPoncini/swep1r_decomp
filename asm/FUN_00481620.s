; FUN_00481620
SUB ESP,0x10
PUSH ESI
MOV ESI,dword ptr [ESP + 0x1c]
LEA EAX,[ESP + 0x4]
LEA ECX,[ESP + 0x1c]
FLD dword ptr [ESI + 0xc]
FMUL dword ptr [0x004ae004]
PUSH EAX
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f380
MOV EDX,dword ptr [ESI]
MOV EAX,dword ptr [ESI + 0x4]
MOV ECX,dword ptr [ESI + 0x8]
MOV dword ptr [ESP + 0x14],EDX
ADD ESP,0xc
LEA EDX,[ESP + 0x8]
MOV dword ptr [ESP + 0xc],EAX
MOV dword ptr [ESP + 0x10],ECX
PUSH EDX
CALL 0x0042f9b0
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST2
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0x4
FSTP dword ptr [EAX + 0xc]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FSTP dword ptr [EAX]
POP ESI
FSTP dword ptr [EAX + 0x4]
FXCH
FSTP ST0
FSTP dword ptr [EAX + 0x8]
ADD ESP,0x10
RET
