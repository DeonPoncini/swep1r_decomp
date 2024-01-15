; FUN_0046e2c0
SUB ESP,0x28
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x34]
PUSH EDI
MOV EAX,dword ptr [ESI + 0x344]
TEST EAX,EAX
JZ 0x0046e740
MOV EAX,dword ptr [ESI + 0x1e70]
LEA EDI,[ESI + 0x199c]
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,EDI
MOV EBX,dword ptr [ECX]
MOV ECX,0x4
FLD qword ptr [0x00e22a40]
FADD dword ptr [EAX]
ADD EAX,0x4
DEC ECX
FSTP dword ptr [EAX + -0x4]
JNZ 0x0046e2f0
MOV EAX,dword ptr [ESI + 0x60]
MOV ECX,0x3f800000
TEST EAX,0x1000000
JZ 0x0046e316
MOV dword ptr [ESI + 0x19ac],ECX
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004ad9e0]
FLD qword ptr [0x00e22a40]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046e337
FMUL dword ptr [0x004ad95c]
JMP 0x0046e33d
FMUL dword ptr [0x004ad9e4]
FSUBR dword ptr [ESI + 0x19ac]
FSTP dword ptr [ESI + 0x19ac]
FLD dword ptr [ESI + 0x19ac]
FCOMP dword ptr [0x004ad9e8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046e368
MOV dword ptr [ESI + 0x19ac],0x3ecccccd
JMP 0x0046e381
FLD dword ptr [ESI + 0x19ac]
FCOMP dword ptr [0x004ad958]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046e381
MOV dword ptr [ESI + 0x19ac],ECX
FLD dword ptr [ESI + 0x1d4]
FLD dword ptr [ESI + 0x1d0]
FADD dword ptr [ESI + 0x1dc]
FXCH
FADD dword ptr [ESI + 0x1e0]
FLD dword ptr [ESI + 0x1d8]
FADD dword ptr [ESI + 0x1e4]
FXCH ST2
FST dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x1c]
FXCH
FST dword ptr [ESP + 0x20]
FMUL dword ptr [ESP + 0x20]
FXCH ST2
FST dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
FADDP
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad95c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046e3ef
LEA EDX,[ESP + 0x1c]
PUSH EDX
CALL 0x0042f9b0
FSTP ST0
ADD ESP,0x4
JMP 0x0046e407
MOV dword ptr [ESP + 0x1c],0x0
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x24],0x0
FLD dword ptr [ESI + 0x19ac]
MOV EAX,dword ptr [ESI + 0x344]
FMUL dword ptr [0x004ad9e8]
MOV ECX,dword ptr [EAX + 0x4]
TEST ECX,ECX
FSTP dword ptr [ESP + 0xc]
JZ 0x0046e4c5
FLD dword ptr [EDI]
FMUL dword ptr [0x004ad9ec]
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [ESP + 0x44]
FMUL dword ptr [ESP + 0x18]
ADD ESP,0xc
LEA EAX,[ESI + 0x3b0]
LEA EDI,[ESI + 0x3c0]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDI
PUSH EDI
CALL 0x0042fa80
FLD dword ptr [ESI + 0x394]
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [ESI + 0x390]
FMUL dword ptr [ESP + 0x2c]
ADD ESP,0x10
FADDP
FLD dword ptr [ESI + 0x398]
FMUL dword ptr [ESP + 0x24]
FADDP
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JZ 0x0046e4b9
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ad9f0]
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH ECX
FDIVR dword ptr [ESP + 0x18]
FSTP dword ptr [ESP]
PUSH EDI
PUSH EDI
CALL 0x0042fa80
ADD ESP,0x10
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESP + 0xc]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESI + 0x19ac]
MOV EDX,dword ptr [ESI + 0x344]
FMUL dword ptr [0x004ad9e8]
MOV EAX,dword ptr [EDX + 0x8]
TEST EAX,EAX
FSTP dword ptr [ESP + 0xc]
JZ 0x0046e587
FLD dword ptr [ESI + 0x19a0]
FMUL dword ptr [0x004ad9f4]
LEA EAX,[ESP + 0x14]
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [ESP + 0x44]
FMUL dword ptr [ESP + 0x18]
ADD ESP,0xc
LEA EDX,[ESI + 0x3f0]
LEA EDI,[ESI + 0x400]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDI
PUSH EDI
CALL 0x0042fa80
FLD dword ptr [ESI + 0x3d0]
FMUL dword ptr [ESP + 0x2c]
FLD dword ptr [ESI + 0x3d4]
FMUL dword ptr [ESP + 0x30]
ADD ESP,0x10
FADDP
FLD dword ptr [ESI + 0x3d8]
FMUL dword ptr [ESP + 0x24]
FADDP
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046e57b
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ad9f0]
LEA EAX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
FDIVR dword ptr [ESP + 0x18]
FSTP dword ptr [ESP]
PUSH EDI
PUSH EDI
CALL 0x0042fa80
ADD ESP,0x10
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESP + 0xc]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x19ac]
MOV ECX,dword ptr [ESI + 0x344]
FMUL dword ptr [0x004ad980]
MOV EAX,dword ptr [ECX + 0x14]
TEST EAX,EAX
FSTP dword ptr [ESP + 0xc]
JZ 0x0046e5e9
FLD dword ptr [ESI + 0x19a4]
FMUL dword ptr [0x004ad9f8]
LEA EDX,[ESP + 0x14]
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [ESP + 0x44]
FMUL dword ptr [ESP + 0x18]
ADD ESP,0xc
LEA ECX,[ESI + 0x4b0]
LEA EAX,[ESI + 0x4c0]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0xc]
TEST EAX,EAX
JZ 0x0046e621
FLD dword ptr [ESP + 0x18]
FADD ST0,ST0
FADD dword ptr [ESP + 0x10]
LEA ECX,[ESI + 0x430]
LEA EAX,[ESI + 0x440]
PUSH ECX
PUSH ECX
FMUL dword ptr [0x004ad95c]
FSTP dword ptr [ESP]
PUSH EAX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0x10]
TEST EAX,EAX
JZ 0x0046e659
FLD dword ptr [ESP + 0x10]
FADD ST0,ST0
FADD dword ptr [ESP + 0x18]
LEA ECX,[ESI + 0x470]
LEA EAX,[ESI + 0x480]
PUSH ECX
PUSH ECX
FMUL dword ptr [0x004ad95c]
FSTP dword ptr [ESP]
PUSH EAX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
PUSH ESI
CALL 0x0046dcd0
ADD ESP,0x4
PUSH ESI
CALL 0x0046dea0
MOV EDX,dword ptr [ESI + 0x1e70]
ADD ESP,0x4
MOV EAX,dword ptr [EDX + 0x18]
CMP dword ptr [EAX],0xe
JZ 0x0046e740
LEA EAX,[EBX + EBX*0x2]
LEA ECX,[EAX + EAX*0x8]
FLD dword ptr [ECX*0x4 + 0x4c708c]
FMUL dword ptr [0x004ad978]
FCOM dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JZ 0x0046e69f
FCHS
MOV EDX,dword ptr [ESI + 0x344]
FSTP dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EDX + 0x14]
TEST EAX,EAX
JZ 0x0046e740
FLD dword ptr [ESI + 0x50]
FSUB dword ptr [ESI + 0x4c0]
FLD dword ptr [ESI + 0x54]
FLD dword ptr [ESI + 0x58]
LEA EDI,[ESI + 0x4c0]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FSTP dword ptr [ESP + 0x28]
FXCH
FSUB dword ptr [ESI + 0x4c4]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x28]
FXCH
FSTP dword ptr [ESP + 0x2c]
FXCH
FSUB dword ptr [ESI + 0x4c8]
FLD dword ptr [ESP + 0x2c]
FMUL dword ptr [ESP + 0x2c]
FXCH
FST dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x30]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x10]
FXCH ST2
FADDP
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0046e740
LEA EAX,[ESP + 0x28]
PUSH EAX
CALL 0x0042f9b0
FSUB dword ptr [ESP + 0x14]
ADD ESP,0x4
LEA ECX,[ESP + 0x28]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDI
PUSH EDI
CALL 0x0042fa80
ADD ESP,0x10
POP EDI
POP ESI
POP EBX
ADD ESP,0x28
RET
