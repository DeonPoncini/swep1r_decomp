; FUN_0047b0c0
SUB ESP,0x10c
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x11c]
MOV EBX,0x6000
PUSH EDI
TEST dword ptr [ESI + 0x60],EBX
JNZ 0x0047b50a
MOV EAX,dword ptr [ESI + 0x64]
MOV EBP,0x2000000
TEST EBP,EAX
JNZ 0x0047b50a
LEA ECX,[ESP + 0xcc]
LEA EDX,[ESP + 0xec]
PUSH ECX
LEA ECX,[ESP + 0xe0]
PUSH EDX
PUSH ECX
PUSH 0x4
LEA EAX,[ESI + 0x50]
PUSH ESI
PUSH 0x451c4000
PUSH EAX
PUSH 0x54657374
CALL 0x00450e70
ADD ESP,0x20
MOV dword ptr [ESI + 0x150],0x0
TEST EAX,EAX
JLE 0x0047b50a
MOV EDI,dword ptr [ESP + 0xcc]
TEST dword ptr [EDI + 0x60],EBX
JNZ 0x0047b50a
TEST dword ptr [EDI + 0x64],EBP
JNZ 0x0047b50a
LEA EDX,[ESP + 0x84]
LEA EBX,[EDI + 0x2cc]
PUSH EDX
LEA EDX,[ESP + 0xa0]
PUSH EDX
LEA EDX,[ESP + 0x68]
PUSH EDX
LEA EDX,[ESP + 0x78]
LEA EAX,[EDI + 0x16c]
PUSH EDX
LEA EBP,[ESI + 0x2cc]
PUSH EBX
LEA ECX,[ESI + 0x16c]
PUSH EAX
PUSH EBP
PUSH ECX
MOV dword ptr [ESP + 0x4c],EAX
CALL 0x0047aee0
FST dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004adc48]
ADD ESP,0x20
FNSTSW AX
TEST AH,0x1
JNZ 0x0047b50a
FLD dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x6c]
FSUB dword ptr [ESP + 0x60]
FXCH
FSUB dword ptr [ESP + 0x64]
FXCH
FST dword ptr [ESP + 0x90]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x90]
FXCH
FMUL ST2
FADDP
FCOMP dword ptr [0x004add5c]
FNSTSW AX
TEST AH,0x1
FSTP ST0
JZ 0x0047b50a
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004adc44]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047b50a
LEA EAX,[ESP + 0x6c]
LEA ECX,[ESP + 0x30]
PUSH EAX
PUSH 0x3f000000
PUSH ECX
CALL 0x0042f700
ADD ESP,0xc
LEA EDX,[ESP + 0x60]
LEA EAX,[ESP + 0x30]
LEA ECX,[ESP + 0x30]
PUSH EDX
PUSH 0x3f000000
PUSH EAX
PUSH ECX
CALL 0x0042f720
MOV EAX,dword ptr [ESI + 0x9c]
ADD ESP,0x10
LEA EDX,[ESP + 0x9c]
LEA ECX,[ESP + 0x20]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f700
MOV EAX,dword ptr [EDI + 0x9c]
ADD ESP,0xc
LEA EDX,[ESP + 0x84]
LEA ECX,[ESP + 0x20]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x28]
PUSH ECX
PUSH EDX
CALL 0x0042f720
FLD dword ptr [0x004adc50]
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [EDI + 0x9c]
FADD dword ptr [ESI + 0x9c]
ADD ESP,0x10
LEA EAX,[ESP + 0x20]
FDIVP
PUSH EAX
PUSH ECX
LEA ECX,[ESP + 0x28]
FSTP dword ptr [ESP]
PUSH ECX
CALL 0x0042f700
FLD dword ptr [ESP + 0x2c]
FADD dword ptr [ESP + 0x3c]
ADD ESP,0xc
LEA EDX,[ESP + 0x9c]
LEA ECX,[ESP + 0x78]
PUSH EDX
FSTP dword ptr [ESP + 0x58]
FLD dword ptr [ESP + 0x28]
FADD dword ptr [ESP + 0x38]
FSTP dword ptr [ESP + 0x5c]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [0x004adc7c]
FSTP dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x14]
PUSH EAX
LEA EAX,[ESI + 0x16c]
PUSH EAX
PUSH ECX
CALL 0x0042f720
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x3c]
ADD ESP,0x10
LEA EDX,[ESP + 0x84]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0xb0]
PUSH ECX
PUSH EDX
CALL 0x0042f720
FLD dword ptr [ESP + 0x88]
FSUB dword ptr [ESP + 0xb8]
ADD ESP,0x10
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x7c]
FSUB dword ptr [ESP + 0xac]
LEA EAX,[ESP + 0x14]
PUSH EAX
FSTP dword ptr [ESP + 0x1c]
CALL 0x0042f780
ADD ESP,0x4
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0xb4]
PUSH ECX
PUSH 0x40a00000
PUSH EDX
FSTP ST0
CALL 0x0042f700
ADD ESP,0xc
LEA EAX,[ESP + 0x14]
LEA ECX,[ESP + 0xc0]
PUSH EAX
PUSH 0xc0a00000
PUSH ECX
CALL 0x0042f700
ADD ESP,0xc
LEA EDX,[ESP + 0xb4]
LEA EAX,[ESP + 0x54]
PUSH EDX
PUSH EAX
PUSH EBP
CALL 0x0042f6e0
ADD ESP,0xc
LEA ECX,[ESP + 0xc0]
LEA EDX,[ESP + 0x54]
PUSH ECX
PUSH EDX
PUSH EBX
CALL 0x0042f6e0
FLD dword ptr [EBX]
FSUB dword ptr [EDI + 0x50]
MOV EAX,dword ptr [EBP]
MOV ECX,dword ptr [ESI + 0x2d0]
ADD ESP,0xc
FSTP dword ptr [ESP + 0x48]
FLD dword ptr [EDI + 0x2d0]
FSUB dword ptr [EDI + 0x54]
FSTP dword ptr [ESP + 0x4c]
FLD dword ptr [EBP]
FSUB dword ptr [ESI + 0x50]
MOV dword ptr [ESI + 0x50],EAX
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESI + 0x2d0]
FSUB dword ptr [ESI + 0x54]
MOV dword ptr [ESI + 0x54],ECX
FSTP dword ptr [ESP + 0x40]
MOV EDX,dword ptr [EBX]
MOV EAX,dword ptr [EDI + 0x2d0]
MOV dword ptr [EDI + 0x50],EDX
MOV dword ptr [EDI + 0x54],EAX
FLD dword ptr [ESI + 0x1a0]
FLD dword ptr [EDI + 0x1a0]
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0047b3f4
FLD dword ptr [ESI + 0x1a0]
JMP 0x0047b3fa
FLD dword ptr [EDI + 0x1a0]
LEA ECX,[ESP + 0x3c]
FSTP dword ptr [ESP + 0x10]
PUSH ECX
CALL 0x0042f750
FDIV qword ptr [0x00e22a40]
ADD ESP,0x4
XOR EBP,EBP
MOV dword ptr [ESI + 0x14c],EBP
PUSH ESI
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
FCHS
FXCH
FCHS
FXCH ST2
FSTP dword ptr [ESI + 0x150]
FSTP dword ptr [ESI + 0x144]
FSTP dword ptr [ESI + 0x148]
CALL 0x00479d40
MOV EDX,dword ptr [ESI + 0x150]
MOV EBX,dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EDX
PUSH EBX
PUSH ESI
CALL 0x0047b000
ADD ESP,0xc
LEA EAX,[ESP + 0x48]
PUSH EAX
CALL 0x0042f750
FDIV qword ptr [0x00e22a40]
ADD ESP,0x4
PUSH EDI
FSTP dword ptr [EDI + 0x150]
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [EDI + 0x144],ECX
FLD dword ptr [ESP + 0x1c]
MOV dword ptr [EDI + 0x14c],EBP
FSTP dword ptr [EDI + 0x148]
CALL 0x00479d40
MOV EDX,dword ptr [EDI + 0x150]
ADD ESP,0x4
PUSH EDX
PUSH EBX
PUSH EDI
CALL 0x0047b000
FLD dword ptr [ESP + 0x4c]
FLD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004add48]
FLD dword ptr [ESP + 0x54]
FXCH ST2
FMUL dword ptr [0x004add48]
FXCH
FSUBR dword ptr [ESI + 0x1dc]
FXCH
FSUBR dword ptr [ESI + 0x1e0]
FXCH ST2
FMUL dword ptr [0x004add48]
FXCH
FSTP dword ptr [ESI + 0x1dc]
FXCH
FSTP dword ptr [ESI + 0x1e0]
ADD ESP,0xc
FSUBR dword ptr [EDI + 0x1dc]
FSTP dword ptr [EDI + 0x1dc]
FLD dword ptr [ESP + 0x4c]
FMUL dword ptr [0x004add48]
FSUBR dword ptr [EDI + 0x1e0]
FSTP dword ptr [EDI + 0x1e0]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10c
RET
