; FUN_00450760
SUB ESP,0x104
FLD dword ptr [ESP + 0x110]
FMUL dword ptr [0x004acd60]
PUSH ESI
PUSH EDI
FLD ST0
CALL 0x0049ed20
MOV EDI,EAX
MOV dword ptr [ESP + 0x8],EDI
FISUB dword ptr [ESP + 0x8]
FMUL dword ptr [0x004acd64]
FLD ST0
CALL 0x0049ed20
MOV ESI,EAX
MOV dword ptr [ESP + 0x8],ESI
FILD dword ptr [ESP + 0x8]
FSUBR ST0,ST1
FSUB dword ptr [0x004acd70]
FMUL dword ptr [0x004acd74]
CALL 0x0049ed20
CMP EAX,0x3e8
FSTP ST0
JNZ 0x004507c2
XOR EAX,EAX
INC ESI
CMP ESI,0x3c
JNZ 0x004507c2
INC EDI
TEST EDI,EDI
PUSH EAX
PUSH ESI
JZ 0x004507e5
MOV EAX,dword ptr [ESP + 0x134]
PUSH EDI
PUSH EAX
LEA ECX,[ESP + 0x1c]
PUSH 0x4c3e84
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x18
JMP 0x004507ff
MOV EDX,dword ptr [ESP + 0x134]
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH 0x4c3e78
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x14
MOV EDX,dword ptr [ESP + 0x128]
MOV EAX,dword ptr [ESP + 0x124]
LEA ECX,[ESP + 0xc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x124]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x124]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x120]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x120]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00450530
ADD ESP,0x1c
POP EDI
POP ESI
ADD ESP,0x104
RET