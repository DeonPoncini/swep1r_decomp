; FUN_0048ed20
SUB ESP,0x18
MOV EAX,dword ptr [ESP + 0x20]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x24]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST5
MOV EAX,dword ptr [ESP + 0x1c]
FSUB dword ptr [EAX]
FSTP dword ptr [ESP + 0xc]
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
FSTP dword ptr [ESP + 0x10]
LEA EAX,[ESP + 0xc]
FSTP dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP]
FXCH
FSTP dword ptr [ESP + 0x4]
PUSH EAX
FSTP dword ptr [ESP + 0xc]
CALL 0x00492440
ADD ESP,0x4
LEA ECX,[ESP]
FSTP ST0
PUSH ECX
CALL 0x00492440
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x4]
FMUL dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0xc]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FADDP
FXCH
FADDP
FXCH
FSTP ST0
ADD ESP,0x4
FCOM dword ptr [0x004af784]
FNSTSW AX
TEST AH,0x1
JZ 0x0048edcc
FCHS
FCOM dword ptr [0x004af794]
FNSTSW AX
TEST AH,0x1
JNZ 0x0048edf8
FCOMP dword ptr [0x004af798]
FNSTSW AX
TEST AH,0x41
JZ 0x0048edfa
MOV EAX,0x1
XOR EDX,EDX
TEST EAX,EAX
SETNZ DL
MOV EAX,EDX
ADD ESP,0x18
RET
FSTP ST0
XOR EAX,EAX
XOR EDX,EDX
TEST EAX,EAX
SETNZ DL
MOV EAX,EDX
ADD ESP,0x18
RET
