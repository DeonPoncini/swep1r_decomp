; FUN_004557e0
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ECX,dword ptr [EAX + 0x8]
PUSH EDI
CMP ECX,0x8
JNZ 0x00455806
MOV EDI,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x28],0x3ec00000
MOV dword ptr [ESP + 0x14],0x40700000
JMP 0x0045583c
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [0x004acfbc]
FLD dword ptr [ESP + 0x2c]
FMUL dword ptr [0x004acfc0]
FXCH
FMUL dword ptr [0x004acfc0]
FXCH
FSTP dword ptr [ESP + 0x14]
MOV EDI,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP + 0x28]
ADD EDI,0x3
INC EAX
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,[0x0050c92c]
PUSH 0x1
LEA ESI,[EAX + 0x90]
INC EAX
PUSH ESI
MOV [0x0050c92c],EAX
CALL 0x004285d0
MOV ECX,dword ptr [ESP + 0x24]
ADD ESP,0x8
PUSH ECX
PUSH EDI
PUSH ESI
CALL 0x00428660
FLD dword ptr [0x004acf54]
FSUB dword ptr [ESP + 0x2c]
MOV EBP,dword ptr [ESP + 0x34]
ADD ESP,0xc
PUSH ECX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP]
PUSH EBP
PUSH ESI
CALL 0x004286f0
FLD dword ptr [ESP + 0x30]
ADD ESP,0xc
CALL 0x0049ed20
MOV BL,AL
PUSH EBX
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x00428740
MOV EAX,[0x0050c92c]
ADD ESP,0x14
LEA ESI,[EAX + 0x90]
INC EAX
PUSH 0x1
PUSH ESI
MOV [0x0050c92c],EAX
CALL 0x004285d0
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [ESP + 0x20]
ADD ESP,0x8
FIADD dword ptr [ESP + 0x1c]
CALL 0x0049ed20
PUSH EAX
PUSH EDI
PUSH ESI
CALL 0x00428660
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [ESP + 0x2c]
ADD ESP,0xc
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBP
PUSH ESI
CALL 0x004286f0
FLD dword ptr [ESP + 0x2c]
FMUL dword ptr [0x004acf5c]
ADD ESP,0xc
PUSH EBX
PUSH 0x0
CALL 0x0049ed20
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acf5c]
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH ESI
CALL 0x00428740
ADD ESP,0x14
POP EDI
POP ESI
POP EBP
POP EBX
RET