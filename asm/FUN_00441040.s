; FUN_00441040
SUB ESP,0x48
MOV EAX,dword ptr [ESP + 0x50]
MOV ECX,dword ptr [ESP + 0x58]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x64]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x58]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x64]
PUSH ESI
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST5
MOV EAX,dword ptr [ESP + 0x58]
PUSH EDI
FSUB dword ptr [EAX]
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [ECX]
FXCH ST4
FSUB dword ptr [EAX + 0x4]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [ECX + 0x4]
FXCH ST3
FSUB dword ptr [EAX + 0x8]
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ECX + 0x8]
FXCH ST2
FSUB dword ptr [EAX]
FSTP dword ptr [ESP + 0x40]
FSUB dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [EAX + 0x8]
FXCH ST3
FSUB dword ptr [EAX]
FXCH ST2
FSUB dword ptr [EAX + 0x4]
FXCH
FSUB dword ptr [EAX + 0x8]
FXCH ST4
FSTP dword ptr [ESP + 0x44]
FXCH ST2
FSTP dword ptr [ESP + 0x48]
LEA EAX,[ESP + 0x10]
FSTP dword ptr [ESP + 0x4c]
PUSH EAX
FSTP dword ptr [ESP + 0x54]
FSTP dword ptr [ESP + 0x58]
CALL 0x0042f9f0
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004aca50]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x40
JZ 0x0044110b
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x40
JZ 0x0044110b
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x40
JNZ 0x0044137d
LEA ECX,[ESP + 0x2c]
PUSH EDI
LEA EDX,[ESP + 0xc]
PUSH ECX
PUSH EDX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EAX,[ESP + 0x38]
LEA ECX,[ESP + 0x14]
PUSH ESI
PUSH EAX
PUSH ECX
CALL 0x0042f9f0
MOV EDX,dword ptr [ESP + 0x78]
ADD ESP,0xc
LEA EAX,[ESP + 0x44]
LEA ECX,[ESP + 0x20]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f9f0
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004aca50]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JZ 0x00441165
FLD dword ptr [ESP + 0x8]
FCHS
FSTP dword ptr [ESP + 0x5c]
JMP 0x0044116d
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [ESP + 0x5c],EDX
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x0044118a
FLD dword ptr [ESP + 0xc]
FCHS
FSTP dword ptr [ESP + 0x58]
JMP 0x00441192
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x58],EAX
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004aca50]
FLD dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x004411a9
FCHS
FLD ST0
FADD dword ptr [ESP + 0x58]
FADD dword ptr [ESP + 0x5c]
FCOMP dword ptr [0x004aca54]
FNSTSW AX
TEST AH,0x41
JNZ 0x00441276
FLD dword ptr [ESP + 0x58]
FCOMP dword ptr [ESP + 0x5c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004411ec
FCOMP dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x41
JNZ 0x004411e5
MOV EAX,0x2
JMP 0x00441200
MOV EAX,0x1
JMP 0x00441200
FCOMP dword ptr [ESP + 0x5c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004411fe
MOV EAX,0x2
JMP 0x00441200
XOR EAX,EAX
LEA ECX,[EAX*0x4 + 0x0]
FLD dword ptr [ESP + ECX*0x1 + 0x8]
FCOMP qword ptr [0x004aca58]
FLD dword ptr [ESP + ECX*0x1 + 0x14]
FNSTSW AX
FCOMP dword ptr [0x004aca50]
TEST AH,0x1
FNSTSW AX
JZ 0x0044124d
TEST AH,0x41
JZ 0x0044137d
FLD dword ptr [ESP + ECX*0x1 + 0x20]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x41
JZ 0x0044137d
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x48
RET
TEST AH,0x1
JNZ 0x0044137d
FLD dword ptr [ESP + ECX*0x1 + 0x20]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044137d
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x48
RET
FSTP ST0
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x00441295
FLD dword ptr [ESP + 0x14]
FCHS
FSTP dword ptr [ESP + 0x5c]
JMP 0x0044129d
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x5c],ECX
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x004412ba
FLD dword ptr [ESP + 0x18]
FCHS
FSTP dword ptr [ESP + 0x58]
JMP 0x004412c2
MOV EDX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x58],EDX
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004aca50]
FLD dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x1
JZ 0x004412d9
FCHS
FLD ST0
FADD dword ptr [ESP + 0x58]
FADD dword ptr [ESP + 0x5c]
FCOMP dword ptr [0x004aca60]
FNSTSW AX
TEST AH,0x1
JZ 0x004412fd
FSTP ST0
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x48
RET
FLD dword ptr [ESP + 0x58]
FCOMP dword ptr [ESP + 0x5c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00441325
FCOMP dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044131e
MOV EAX,0x2
JMP 0x00441339
MOV EAX,0x1
JMP 0x00441339
FCOMP dword ptr [ESP + 0x5c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00441337
MOV EAX,0x2
JMP 0x00441339
XOR EAX,EAX
LEA ECX,[EAX*0x4 + 0x0]
FLD dword ptr [ESP + ECX*0x1 + 0x14]
FCOMP qword ptr [0x004aca58]
FLD dword ptr [ESP + ECX*0x1 + 0x20]
FNSTSW AX
FCOMP dword ptr [0x004aca50]
TEST AH,0x1
FNSTSW AX
JZ 0x0044136d
TEST AH,0x41
JZ 0x0044137d
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x48
RET
TEST AH,0x1
JNZ 0x0044137d
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x48
RET
POP EDI
XOR EAX,EAX
POP ESI
ADD ESP,0x48
RET