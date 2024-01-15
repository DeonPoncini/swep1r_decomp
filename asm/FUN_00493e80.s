; FUN_00493e80
PUSH EBP
MOV EBP,ESP
SUB ESP,0x80
MOV ECX,dword ptr [0x00df7f2c]
XOR EAX,EAX
PUSH EBX
MOV dword ptr [EBP + -0x3c],EAX
MOV dword ptr [EBP + -0x38],EAX
MOV EAX,dword ptr [EBP + 0xc]
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [EBP + 0x8]
ADD ECX,0x8
PUSH EAX
LEA EDX,[EBP + -0x80]
MOV ESI,dword ptr [EDI + 0x4]
PUSH ECX
PUSH EDX
MOV dword ptr [EBP + -0x44],0xdf83a0
CALL 0x00492b70
MOV dword ptr [EBP + -0x30],0x0
MOV EAX,dword ptr [ESI + 0x40]
ADD ESP,0xc
LEA ECX,[EBP + -0x80]
MOV dword ptr [EBP + -0x2c],EAX
LEA EDX,[EBP + -0x30]
PUSH ECX
LEA EAX,[EBP + -0x24]
PUSH EDX
PUSH EAX
MOV dword ptr [EBP + -0x28],0x0
CALL 0x00493200
FLD dword ptr [EBP + -0x24]
FSUB dword ptr [ESI + 0x48]
ADD ESP,0xc
LEA EDX,[EBP + -0x50]
LEA EBX,[ESI + 0x9c]
PUSH EDX
PUSH 0xdf83a0
FSTP dword ptr [0x00df83a0]
FLD dword ptr [EBP + -0x20]
FSUB dword ptr [0x004af990]
PUSH EBX
PUSH EDI
FST dword ptr [0x00df83a4]
FLD dword ptr [EBP + -0x1c]
FSUB dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83a8]
FLD dword ptr [EBP + -0x24]
FADD dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83ac]
FST dword ptr [0x00df83b0]
FLD dword ptr [EBP + -0x1c]
FSUB dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83b4]
FLD dword ptr [EBP + -0x24]
FADD dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83b8]
FST dword ptr [0x00df83bc]
FLD dword ptr [EBP + -0x1c]
FADD dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83c0]
FLD dword ptr [EBP + -0x24]
FSUB dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83c4]
FSTP dword ptr [0x00df83c8]
FLD dword ptr [EBP + -0x1c]
FADD dword ptr [ESI + 0x48]
FSTP dword ptr [0x00df83cc]
MOV ECX,dword ptr [ESI + 0xe8]
MOV dword ptr [EBP + -0x40],ECX
CALL 0x004941d0
FLD dword ptr [EBP + -0x5c]
FSUB dword ptr [ESI + 0x44]
ADD ESP,0x10
FSTP dword ptr [0x00df83a0]
FLD dword ptr [EBP + -0x58]
FSUB dword ptr [0x004af990]
FST dword ptr [0x00df83a4]
FLD dword ptr [EBP + -0x54]
FSUB dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83a8]
FLD dword ptr [EBP + -0x5c]
FADD dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83ac]
LEA ECX,[EBP + -0x50]
FST dword ptr [0x00df83b0]
FLD dword ptr [EBP + -0x54]
FSUB dword ptr [ESI + 0x44]
PUSH ECX
PUSH 0xdf83a0
PUSH EBX
PUSH EDI
FSTP dword ptr [0x00df83b4]
FLD dword ptr [EBP + -0x5c]
FADD dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83b8]
FST dword ptr [0x00df83bc]
FLD dword ptr [EBP + -0x54]
FADD dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83c0]
FLD dword ptr [EBP + -0x5c]
FSUB dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83c4]
FSTP dword ptr [0x00df83c8]
FLD dword ptr [EBP + -0x54]
FADD dword ptr [ESI + 0x44]
FSTP dword ptr [0x00df83cc]
MOV EAX,dword ptr [ESI + 0xe8]
MOV dword ptr [EBP + -0x40],EAX
CALL 0x004941d0
FLD dword ptr [EBP + -0x24]
FSUB dword ptr [EBP + -0x5c]
ADD ESP,0x10
FST dword ptr [EBP + -0x10]
FLD dword ptr [EBP + -0x1c]
FSUB dword ptr [EBP + -0x54]
FST dword ptr [EBP + -0xc]
FSTP dword ptr [EBP + -0x14]
FLD dword ptr [EBP + -0xc]
FLD ST1
FMUL ST2
FLD ST1
FMUL ST2
FADDP
FSTP dword ptr [EBP + -0xc]
FSTP ST0
FSTP ST0
FLD dword ptr [EBP + -0xc]
FSQRT
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSTP dword ptr [EBP + -0xc]
FLD dword ptr [EBP + -0x10]
FCHS
FDIV dword ptr [EBP + -0xc]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0048d010
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x14]
FCOMP dword ptr [0x004af98c]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x004940aa
FLD dword ptr [EBP + -0x10]
FCOMP dword ptr [0x004af98c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0049409c
FLD dword ptr [0x004af994]
FSUB dword ptr [EBP + -0x4]
JMP 0x004940a7
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [0x004af998]
FCHS
FSTP dword ptr [EBP + -0x4]
MOV ECX,dword ptr [EBP + -0x4]
LEA EDX,[EBP + 0x8]
LEA EAX,[EBP + 0xc]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0048c950
FLD dword ptr [ESI + 0x48]
FCHS
FLD dword ptr [ESI + 0x48]
FLD dword ptr [ESI + 0x44]
FCHS
FSTP dword ptr [EBP + -0x18]
FLD dword ptr [EBP + -0xc]
FMUL dword ptr [EBP + 0xc]
MOV EDX,dword ptr [ESI + 0x44]
MOV EAX,dword ptr [EBP + -0x20]
MOV dword ptr [EBP + -0x8],EDX
MOV EDX,dword ptr [EBP + -0x58]
MOV ECX,EAX
ADD ESP,0xc
FSTP dword ptr [EBP + -0x10]
MOV [0x00df83a4],EAX
MOV dword ptr [0x00df83b0],ECX
FLD ST0
FMUL dword ptr [EBP + 0x8]
MOV dword ptr [0x00df83bc],EDX
FSUB dword ptr [EBP + -0x10]
FADD dword ptr [EBP + -0x5c]
FSTP dword ptr [0x00df83a0]
FLD dword ptr [EBP + -0xc]
FMUL dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + -0xc]
FMUL dword ptr [EBP + 0xc]
FADD dword ptr [EBP + -0xc]
FADD dword ptr [EBP + -0x54]
FSTP dword ptr [0x00df83a8]
FLD ST0
FMUL dword ptr [EBP + 0x8]
FSUB dword ptr [EBP + -0x10]
MOV dword ptr [EBP + -0x10],0x0
FADD dword ptr [EBP + -0x5c]
FSTP dword ptr [0x00df83ac]
FMUL dword ptr [EBP + 0xc]
FADD dword ptr [EBP + -0xc]
FADD dword ptr [EBP + -0x54]
FSTP dword ptr [0x00df83b4]
FLD dword ptr [0x004af98c]
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [EBP + 0x8]
FSUB ST0,ST1
FADD dword ptr [EBP + -0x5c]
FSTP dword ptr [0x00df83b8]
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [EBP + 0xc]
FADD dword ptr [EBP + -0x10]
FADD dword ptr [EBP + -0x54]
FSTP dword ptr [0x00df83c0]
FLD dword ptr [EBP + -0x8]
FMUL dword ptr [EBP + 0x8]
FSUB ST0,ST1
FADD dword ptr [EBP + -0x5c]
MOV EAX,EDX
LEA EDX,[EBP + -0x50]
MOV [0x00df83c8],EAX
PUSH EDX
ADD ESI,0x54
PUSH 0xdf83a0
FSTP dword ptr [0x00df83c4]
PUSH ESI
PUSH EDI
FSTP ST0
FLD dword ptr [EBP + -0x8]
FMUL dword ptr [EBP + 0xc]
FADD dword ptr [EBP + -0x10]
FADD dword ptr [EBP + -0x54]
FSTP dword ptr [0x00df83cc]
MOV ECX,dword ptr [ESI + 0x90]
MOV dword ptr [EBP + -0x40],ECX
CALL 0x004941d0
ADD ESP,0x10
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
MOV ESP,EBP
POP EBP
RET
