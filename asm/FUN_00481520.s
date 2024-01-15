; FUN_00481520
SUB ESP,0x8
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
MOV dword ptr [ESP + 0x4],ECX
MOV dword ptr [ESP + 0x14],EAX
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x4]
FLD ST2
FMUL ST3
FXCH
FADDP ST2,ST0
FADDP
FSTP ST1
FCOM dword ptr [0x004adff8]
FNSTSW AX
TEST AH,0x1
JZ 0x00481574
FCHS
FCOMP dword ptr [0x004adff8]
FNSTSW AX
TEST AH,0x1
JZ 0x00481576
JMP 0x004815bf
FSTP ST0
MOV EDX,dword ptr [ESI + 0xc]
PUSH EDX
CALL 0x0042f540
FSTP dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x8]
ADD ESP,0x4
LEA EAX,[ESP + 0x8]
LEA ECX,[ESP + 0x14]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f380
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004adffc]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x41
JNZ 0x004815d9
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004adff8]
FNSTSW AX
TEST AH,0x1
JZ 0x004815d9
MOV EAX,dword ptr [ESP + 0x10]
XOR ECX,ECX
MOV dword ptr [EAX],ECX
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x8],0x3f800000
MOV dword ptr [EAX + 0xc],ECX
POP ESI
ADD ESP,0x8
RET
FLD dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0x10]
FADD ST0,ST0
PUSH EAX
FSTP dword ptr [EAX + 0xc]
FLD dword ptr [ESI]
FDIV dword ptr [ESP + 0x18]
FSTP dword ptr [EAX]
FLD dword ptr [ESI + 0x4]
FDIV dword ptr [ESP + 0x18]
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ESI + 0x8]
FDIV dword ptr [ESP + 0x18]
FSTP dword ptr [EAX + 0x8]
CALL 0x0042f9b0
ADD ESP,0x4
FSTP ST0
POP ESI
ADD ESP,0x8
RET
