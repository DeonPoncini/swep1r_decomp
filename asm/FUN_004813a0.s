; FUN_004813a0
SUB ESP,0x1c
PUSH ESI
MOV ESI,dword ptr [ESP + 0x28]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x28]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI + 0x8]
FMUL dword ptr [EDI + 0x8]
FLD dword ptr [ESI + 0xc]
FXCH ST2
FMUL dword ptr [EDI + 0x4]
FXCH ST2
FMUL dword ptr [EDI + 0xc]
FLD dword ptr [ESI]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [EDI]
FXCH ST2
FADDP
FXCH
FADDP
FST dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004adfe8]
FNSTSW AX
TEST AH,0x1
JZ 0x00481427
FLD dword ptr [EDI]
FCHS
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x4]
FCHS
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [EDI + 0x8]
MOV EAX,dword ptr [ESP + 0x34]
MOV ECX,dword ptr [ESP + 0x30]
FCHS
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDI + 0xc]
PUSH EAX
PUSH ECX
LEA EDX,[ESP + 0x1c]
PUSH ESI
FCHS
FSTP dword ptr [ESP + 0x2c]
PUSH EDX
CALL 0x004813a0
ADD ESP,0x10
POP EDI
POP ESI
ADD ESP,0x1c
RET
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004adfec]
FNSTSW AX
TEST AH,0x41
JNZ 0x00481440
MOV dword ptr [ESP + 0x2c],0x3f800000
MOV EAX,dword ptr [ESP + 0x2c]
PUSH EAX
CALL 0x0042f540
FST dword ptr [ESP + 0x2c]
FCOMP qword ptr [0x004adff0]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JZ 0x00481474
FLD dword ptr [0x004adfec]
FSUB dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x30]
FXCH
FSTP dword ptr [ESP + 0x10]
JMP 0x004814e9
MOV EAX,dword ptr [ESP + 0x28]
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f380
FLD dword ptr [0x004adfec]
FSUB dword ptr [ESP + 0x3c]
MOV ECX,dword ptr [ESP + 0x38]
ADD ESP,0xc
LEA EDX,[ESP + 0x8]
LEA EAX,[ESP + 0x2c]
FMUL dword ptr [ESP + 0x28]
PUSH EDX
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0x18],ECX
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [ESP + 0x38]
FDIV dword ptr [ESP + 0x18]
ADD ESP,0xc
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [ESP + 0x38]
FDIV dword ptr [ESP + 0x18]
ADD ESP,0xc
MOV EDX,dword ptr [ESP + 0x34]
MOV ECX,EDI
SUB ECX,ESI
MOV EAX,ESI
SUB EDX,ESI
MOV ESI,0x4
FLD dword ptr [ECX + EAX*0x1]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x10]
FXCH
FMUL dword ptr [EAX]
ADD EAX,0x4
DEC ESI
FADDP
FSTP dword ptr [EDX + EAX*0x1 + -0x4]
JNZ 0x004814fa
POP EDI
POP ESI
FSTP ST0
ADD ESP,0x1c
RET
