; FUN_0046ecd0
SUB ESP,0x24
PUSH ESI
MOV ESI,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x18]
CMP dword ptr [ECX],0xe
JZ 0x0046ee14
MOV EAX,dword ptr [ESP + 0x30]
LEA EDX,[ESI + 0x3c0]
PUSH EDX
LEA ECX,[ESP + 0x14]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x8]
LEA EAX,[ESP + 0x8]
FSTP dword ptr [ESP + 0xc]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP + 0x18]
CALL 0x0042f860
ADD ESP,0xc
LEA EDX,[ESI + 0x400]
LEA EAX,[ESP + 0x4]
LEA ECX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f860
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESI + 0x394]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESI + 0x3d4]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST3
FMUL dword ptr [ESI + 0x390]
FLD dword ptr [ESI + 0x398]
FXCH ST2
FMUL dword ptr [ESI + 0x3d0]
LEA ECX,[ESI + 0x390]
LEA EDX,[ESI + 0x3d0]
FLD dword ptr [ESI + 0x3d8]
FXCH ST5
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x2c]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP ST3,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x30]
FXCH
FADDP ST3,ST0
ADD ESP,0xc
FADDP
FLD ST1
FXCH
FST dword ptr [ESP + 0x2c]
FXCH
FMUL ST2
FXCH
FMUL dword ptr [ESP + 0x2c]
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0046edd7
FLD dword ptr [ESI + 0x1e64]
FMUL dword ptr [0x004ad95c]
FSUBP
FCHS
FST dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JZ 0x0046ee14
PUSH ECX
JMP 0x0046edfd
FSTP ST0
FLD dword ptr [ESI + 0x1e64]
FMUL dword ptr [0x004ad95c]
FADD dword ptr [ESP + 0x2c]
FCHS
FST dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ee14
PUSH EDX
MOV EDX,dword ptr [ESP + 0x30]
MOV ECX,dword ptr [ESP + 0x38]
LEA EAX,[ESP + 0x8]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042fa80
ADD ESP,0x10
POP ESI
ADD ESP,0x24
RET
