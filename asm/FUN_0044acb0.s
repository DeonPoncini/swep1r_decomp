; FUN_0044acb0
SUB ESP,0x38
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x44]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x4c]
LEA EAX,[ESP + 0x34]
FLD dword ptr [ESI]
FSUB dword ptr [EDI]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [EDI + 0x4]
FXCH
FSUB dword ptr [EDI + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x34]
PUSH EAX
XOR EBX,EBX
FSTP dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x40]
CALL 0x0042f8c0
FST dword ptr [ESP + 0x44]
FCOMP dword ptr [0x004acc00]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x0044ae2a
FLD dword ptr [0x004acc04]
FDIV dword ptr [ESP + 0x40]
LEA ECX,[ESP + 0x18]
LEA EDX,[ESP + 0xc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x54]
LEA EAX,[ESP + 0x2c]
PUSH EDX
MOV EDX,dword ptr [EDI]
PUSH EAX
MOV EAX,dword ptr [EDI + 0x4]
PUSH ECX
MOV ECX,dword ptr [EDI + 0x8]
MOV dword ptr [ESP + 0x38],EDX
MOV dword ptr [ESP + 0x3c],EAX
MOV dword ptr [ESP + 0x40],ECX
FLD dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x4c]
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FSTP dword ptr [ESP + 0x44]
FXCH
FSTP dword ptr [ESP + 0x48]
FSTP dword ptr [ESP + 0x4c]
FSTP ST0
CALL 0x00444d10
FCOMP dword ptr [0x004acc08]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JNZ 0x0044ae2a
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FXCH ST3
FMUL dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x20]
FXCH ST3
FMUL dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x54]
MOV EBX,0x1
FADDP
FXCH
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST3
FMUL dword ptr [ESP + 0x14]
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [ESP + 0x18]
FXCH ST3
FMUL dword ptr [ESP + 0x18]
FXCH
FADDP ST4,ST0
FLD dword ptr [ESP + 0x1c]
FXCH
FADDP ST4,ST0
FLD dword ptr [ESP + 0x20]
FXCH ST4
FSUBP ST2,ST0
FLD dword ptr [ESP + 0x18]
FXCH ST2
FSUB dword ptr [0x004acc0c]
FSTP dword ptr [ESP + 0x48]
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x1c]
FXCH
FADD dword ptr [ESI]
FST dword ptr [ESP + 0xc]
FXCH ST3
FMUL dword ptr [ESP + 0x48]
FADD dword ptr [ESI + 0x4]
FST dword ptr [ESP + 0x10]
FXCH ST4
FMUL dword ptr [ESP + 0x48]
FADD dword ptr [ESI + 0x8]
FST dword ptr [ESP + 0x14]
FXCH ST3
FSTP dword ptr [ESI]
FLD dword ptr [ESP + 0x20]
FXCH ST4
FSTP dword ptr [ESI + 0x4]
FXCH ST2
FSTP dword ptr [ESI + 0x8]
FSTP dword ptr [EAX]
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
POP EDI
MOV EAX,EBX
POP ESI
POP EBX
ADD ESP,0x38
RET
