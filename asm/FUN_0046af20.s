; FUN_0046af20
SUB ESP,0x74
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x80]
PUSH EDI
TEST byte ptr [ESI + 0x60],0x10
JZ 0x0046af3f
MOV dword ptr [ESI + 0x18c],0x3f7ae148
JMP 0x0046af49
MOV dword ptr [ESI + 0x18c],0x3ef5c28f
FLD dword ptr [ESI + 0x104]
FCOMP dword ptr [0x004ad7a8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046af66
MOV dword ptr [ESI + 0x104],0x3c23d70a
FLD dword ptr [ESI + 0x104]
FCOMP dword ptr [0x004ad7ac]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046af83
MOV dword ptr [ESI + 0x104],0x40000000
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad768]
FADD ST0,ST0
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x1
JZ 0x0046afc2
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad768]
FADD ST0,ST0
FSUB dword ptr [0x004ad7b0]
JMP 0x0046afd7
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad768]
FADD ST0,ST0
CALL 0x0049ed20
MOV dword ptr [ESI + 0xd4],EAX
MOV EAX,[0x004c7084]
XOR EBX,EBX
CMP EAX,EBX
JLE 0x0046b144
CMP EAX,0x1
JNZ 0x0046b035
FLD dword ptr [ESI + 0xe8]
FCOMP dword ptr [0x004ad7a8]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046b0da
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7b4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7b8]
JMP 0x0046b0d3
CMP EAX,0x2
JNZ 0x0046b085
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7bc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b060
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7c0]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046b0da
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7c4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7c8]
JMP 0x0046b0d3
CMP EAX,0x3
JNZ 0x0046b0af
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7cc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7d0]
JMP 0x0046b0d3
CMP EAX,0x4
JNZ 0x0046b0e2
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7d8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b144
MOV dword ptr [ESI + 0xd4],EBX
JMP 0x0046b144
CMP EAX,0x5
JNZ 0x0046b10f
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7dc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e0]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b144
JMP 0x0046b13a
CMP EAX,0x6
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b144
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b144
MOV dword ptr [ESI + 0xd4],0x1
LEA EAX,[ESP + 0x40]
LEA EDI,[ESI + 0xac]
PUSH EBX
PUSH EAX
PUSH EDI
CALL 0x0044eeb0
MOV ECX,dword ptr [ESP + 0x7c]
MOV EDX,dword ptr [ESP + 0x80]
MOV EAX,dword ptr [ESP + 0x84]
ADD ESP,0xc
MOV dword ptr [ESP + 0x10],ECX
MOV ECX,dword ptr [ESI + 0x104]
MOV dword ptr [ESP + 0x14],EDX
LEA EDX,[ESP + 0x40]
PUSH ECX
PUSH EDX
PUSH EDI
MOV dword ptr [ESP + 0x24],EAX
CALL 0x0044eeb0
FILD dword ptr [ESI + 0x1998]
ADD ESP,0xc
FSUB dword ptr [0x004ad7a4]
FMUL dword ptr [0x004ad7ec]
FCOMP qword ptr [0x004ad790]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046b1be
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x0046b1be
TEST dword ptr [ESI + 0x64],0x4000000
JNZ 0x0046b1be
XOR EAX,EAX
JMP 0x0046b1c3
MOV EAX,0x1
LEA ECX,[ESP + 0x10]
PUSH EAX
LEA EDX,[ESP + 0x74]
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x0046aec0
FLD dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ESP + 0x80]
FXCH
FSUB dword ptr [ESP + 0x84]
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [ESP + 0x88]
FXCH ST2
FST dword ptr [ESP + 0x1c]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x1c]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FSTP ST1
FCOM dword ptr [ESI + 0x108]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JZ 0x0046b23f
FSTP ST0
FLD dword ptr [ESI + 0x104]
FSUB dword ptr [0x004ad7f0]
JMP 0x0046b258
FCOMP dword ptr [ESI + 0x108]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b25e
FLD dword ptr [ESI + 0x104]
FSUB dword ptr [0x004ad7a8]
FSTP dword ptr [ESI + 0x104]
FLD dword ptr [ESI + 0x58]
FLD dword ptr [ESI + 0x50]
FSUB dword ptr [ESP + 0x70]
FXCH
FSUB dword ptr [ESP + 0x78]
FLD dword ptr [ESI + 0x54]
FSUB dword ptr [ESP + 0x74]
FXCH ST2
FMUL dword ptr [ESI + 0x194]
FXCH
FMUL dword ptr [ESI + 0x19c]
FXCH ST2
FMUL dword ptr [ESI + 0x198]
FXCH ST2
FADDP
LEA EDI,[ESI + 0x194]
LEA EAX,[ESP + 0x10]
FLD dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x74]
FXCH ST3
FADDP ST2,ST0
FLD dword ptr [ESP + 0x78]
FXCH ST2
FSTP dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0xc]
PUSH EDI
FSTP dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
LEA EDX,[ESP + 0x2c]
PUSH ECX
FSTP dword ptr [ESP + 0x20]
PUSH EAX
PUSH EDX
CALL 0x0042fa80
FLD dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x40]
FXCH ST2
FSUB dword ptr [ESI + 0x50]
FXCH
FSUB dword ptr [ESI + 0x54]
FXCH ST2
FSUB dword ptr [ESI + 0x58]
FXCH
FSTP dword ptr [ESP + 0x2c]
FXCH
FSTP dword ptr [ESP + 0x30]
ADD ESP,0x10
LEA EAX,[ESP + 0x1c]
FSTP dword ptr [ESP + 0x24]
PUSH EAX
CALL 0x0042f8c0
FCOM dword ptr [0x004ad7a8]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b425
FDIVR dword ptr [0x004ad7f4]
LEA ECX,[ESP + 0x1c]
LEA EDX,[ESI + 0x30]
PUSH ECX
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x30]
FXCH ST2
FXCH
FXCH
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FSTP dword ptr [ESP + 0x28]
FXCH
FSTP dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x30]
FSTP ST0
CALL 0x0042f9f0
FLD dword ptr [ESP + 0x40]
FLD dword ptr [ESP + 0x48]
FMUL dword ptr [ESI + 0x19c]
FLD dword ptr [ESP + 0x44]
FXCH ST2
FMUL dword ptr [EDI]
FLD dword ptr [0x004ad750]
FXCH ST3
FMUL dword ptr [ESI + 0x198]
FXCH
FADDP ST2,ST0
ADD ESP,0xc
FADDP
FST dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ad7f8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b3ca
FSTP ST0
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ad800]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad7fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b414
FLD dword ptr [0x004ad7f4]
FSUB dword ptr [ESP + 0xc]
JMP 0x0046b402
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ad804]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b414
FSTP ST0
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004ad808]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad7fc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b414
FLD dword ptr [ESP + 0xc]
FSUB dword ptr [0x004ad80c]
FMUL dword ptr [0x004ad774]
FMUL dword ptr [ESI + 0x18c]
FSTP dword ptr [ESI + 0x18c]
FLD dword ptr [ESI + 0x22c]
FMUL dword ptr [ESI + 0x74]
FMUL ST1
FSTP dword ptr [ESI + 0x1f0]
POP EDI
POP ESI
FSTP ST0
POP EBX
ADD ESP,0x74
RET
