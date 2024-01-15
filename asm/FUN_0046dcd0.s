; FUN_0046dcd0
SUB ESP,0x8
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x2fc]
FCOMP dword ptr [0x004ad968]
FLD dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JZ 0x0046dcff
FSTP ST0
FLD dword ptr [ESI + 0x2fc]
FMUL dword ptr [0x004ad9b0]
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004ad9b4]
FNSTSW AX
TEST AH,0x1
JZ 0x0046dd1a
FSTP ST0
FLD dword ptr [0x004ad968]
FLD dword ptr [ESI + 0x204]
FXCH
FSUB dword ptr [ESI + 0x19b8]
FXCH
FMUL dword ptr [0x004ad9b8]
FXCH
FMUL dword ptr [0x004ad964]
FXCH
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad968]
FADD dword ptr [ESI + 0x19b8]
FLD dword ptr [ESP + 0x10]
FLD ST1
FXCH
FCHS
FXCH
FSTP dword ptr [ESI + 0x19b8]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046dd95
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad9bc]
FNSTSW AX
TEST AH,0x41
JZ 0x0046dd95
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad958]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046dd9d
FLD dword ptr [0x004ad9bc]
FSUB dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x10]
JMP 0x0046dd9d
MOV dword ptr [ESP + 0x10],0x0
FCOM dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046ddcc
FCOM dword ptr [0x004ad9bc]
FNSTSW AX
TEST AH,0x41
JZ 0x0046ddcc
FCOM dword ptr [0x004ad958]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ddd4
FSUBR dword ptr [0x004ad9bc]
JMP 0x0046ddd4
FSTP ST0
FLD dword ptr [0x004ad968]
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad95c]
FLD ST2
FXCH ST2
FMUL dword ptr [0x004ad95c]
FXCH
FSUB dword ptr [0x004ad9c0]
FXCH
FSUB dword ptr [0x004ad9c0]
FXCH ST2
FMUL dword ptr [0x004ad9c4]
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH ST2
FSTP dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESI + 0x344]
FXCH
FSTP dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x4]
FSTP dword ptr [ESP + 0x10]
TEST ECX,ECX
FSTP ST0
JZ 0x0046de55
MOV ECX,dword ptr [ESP + 0x4]
LEA EAX,[ESI + 0x390]
PUSH EAX
PUSH 0x0
PUSH 0x0
PUSH 0x3f800000
PUSH ECX
PUSH EAX
CALL 0x00431390
FLD dword ptr [ESP + 0x28]
FADD dword ptr [ESI + 0x3c8]
ADD ESP,0x18
FSTP dword ptr [ESI + 0x3c8]
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0x8]
TEST EAX,EAX
JZ 0x0046de90
MOV ECX,dword ptr [ESP + 0x8]
LEA EAX,[ESI + 0x3d0]
PUSH EAX
PUSH 0x0
PUSH 0x0
PUSH 0x3f800000
PUSH ECX
PUSH EAX
CALL 0x00431390
FLD dword ptr [ESP + 0x28]
FADD dword ptr [ESI + 0x408]
ADD ESP,0x18
FSTP dword ptr [ESI + 0x408]
POP ESI
ADD ESP,0x8
RET
