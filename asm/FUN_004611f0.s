; FUN_004611f0
SUB ESP,0xcc
MOV EAX,dword ptr [ESP + 0xd0]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0xdc]
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [EAX + 0x84]
XOR EDX,EDX
CMP EBP,EDX
MOV dword ptr [ESP + 0x34],EDX
MOV dword ptr [ESP + 0x44],EDX
MOV dword ptr [ESP + 0x20],EDX
MOV dword ptr [ESP + 0x18],EDX
MOV dword ptr [ESP + 0x58],EDX
MOV dword ptr [ESP + 0x38],0x3e800000
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ESP + 0x14],EDI
JNZ 0x00461240
FLD dword ptr [0x004ad3a4]
JMP 0x00461246
FLD dword ptr [0x004ad3a8]
MOV EBX,dword ptr [EDI + 0x60]
FST dword ptr [ESP + 0x28]
FSTP dword ptr [ESP + 0x78]
TEST BH,0x10
JZ 0x0046126d
MOV dword ptr [EBP*0x4 + 0x50ca60],0x3f800000
MOV dword ptr [EBP*0x4 + 0x50ca68],EDX
JMP 0x0046131d
TEST BH,0x40
JZ 0x00461282
MOV dword ptr [EBP*0x4 + 0x50ca68],0xbf800000
JMP 0x0046131d
TEST BH,0x20
JZ 0x0046128c
MOV EDX,0x1
MOV EAX,dword ptr [EDI + 0x64]
TEST AH,0x40
JZ 0x00461299
MOV EDX,0x1
FLD dword ptr [EDI + 0x2b8]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JNZ 0x004612b1
MOV EDX,0x1
FLD dword ptr [EDI + 0x218]
FCOMP dword ptr [0x004ad3ac]
FNSTSW AX
TEST AH,0x1
JZ 0x004612c9
MOV EDX,0x1
LEA ECX,[EDI + 0x2a0]
MOV ESI,0x6
FLD dword ptr [ECX + -0x18]
FCOMP qword ptr [0x004ad3b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004612e9
MOV EDX,0x1
TEST byte ptr [ECX],0x1c
JZ 0x004612f3
MOV EDX,0x1
ADD ECX,0x4
DEC ESI
JNZ 0x004612d4
TEST BH,0x4
JZ 0x00461303
MOV EDX,0x1
TEST EDX,EDX
JZ 0x0046131d
MOV dword ptr [EBP*0x4 + 0x50ca68],0x40800000
MOV dword ptr [EBP*0x4 + 0x4c52a8],0x40a00000
CALL 0x00445690
TEST EAX,EAX
JNZ 0x0046140d
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad3b8]
FLD dword ptr [EBP*0x4 + 0x4c52a0]
FXCH
FSUBP
FCOM dword ptr [0x004ad218]
FST dword ptr [EBP*0x4 + 0x4c52a0]
FNSTSW AX
TEST AH,0x41
JZ 0x00461364
FSUB dword ptr [0x004ad224]
FSTP dword ptr [EBP*0x4 + 0x4c52a0]
JMP 0x00461366
FSTP ST0
FLD dword ptr [EDI + 0x2b8]
FSUB qword ptr [0x00e22a40]
FCOM dword ptr [0x004ad218]
FSTP dword ptr [EDI + 0x2b8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046138f
XOR ESI,ESI
MOV dword ptr [EDI + 0x2b8],ESI
JMP 0x00461391
XOR ESI,ESI
FLD dword ptr [EBP*0x4 + 0x50ca68]
FMUL qword ptr [0x00e22a40]
FADD dword ptr [EBP*0x4 + 0x50ca60]
FCOM dword ptr [0x004ad22c]
FSTP dword ptr [EBP*0x4 + 0x50ca60]
FNSTSW AX
TEST AH,0x41
JNZ 0x004613cb
MOV dword ptr [EBP*0x4 + 0x50ca60],0x3f800000
MOV dword ptr [EBP*0x4 + 0x50ca68],ESI
FLD dword ptr [EBP*0x4 + 0x50ca60]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046140f
FLD dword ptr [EBP*0x4 + 0x4c52a8]
FSUB qword ptr [0x00e22a40]
FCOM dword ptr [0x004ad218]
FSTP dword ptr [EBP*0x4 + 0x4c52a8]
FNSTSW AX
TEST AH,0x41
JZ 0x0046140f
MOV dword ptr [EBP*0x4 + 0x50ca68],0xc0800000
JMP 0x0046140f
XOR ESI,ESI
FLD dword ptr [EBP*0x4 + 0x50ca60]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JZ 0x004614ab
CMP EBP,ESI
MOV dword ptr [EBP*0x4 + 0x50ca60],ESI
MOV dword ptr [EBP*0x4 + 0x50ca68],ESI
JNZ 0x00461472
XOR ESI,ESI
LEA ECX,[ESI + 0x1b]
PUSH 0x0
PUSH ECX
CALL 0x004285d0
ADD ESP,0x8
INC ESI
CMP ESI,0x6
JL 0x0046143b
PUSH 0x0
PUSH 0x21
CALL 0x004285d0
ADD ESP,0x8
PUSH 0x0
PUSH 0x22
CALL 0x004285d0
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xcc
RET
XOR ESI,ESI
LEA EDX,[ESI + 0x23]
PUSH 0x0
PUSH EDX
CALL 0x004285d0
ADD ESP,0x8
INC ESI
CMP ESI,0x6
JL 0x00461474
PUSH 0x0
PUSH 0x29
CALL 0x004285d0
ADD ESP,0x8
PUSH 0x0
PUSH 0x2a
CALL 0x004285d0
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xcc
RET
CALL 0x00445690
TEST EAX,EAX
JNZ 0x004614cd
LEA EAX,[EDI + 0x2a0]
MOV ECX,0x6
MOV EBP,dword ptr [EAX]
ADD EAX,0x4
XOR EBP,0x2
DEC ECX
MOV dword ptr [EAX + -0x4],EBP
JNZ 0x004614bf
MOV EAX,[0x0050c5f0]
MOV EBX,0xff
CMP EAX,ESI
MOV dword ptr [ESP + 0x50],ESI
MOV dword ptr [ESP + 0x54],EBX
MOV dword ptr [ESP + 0x60],EBX
JNZ 0x00461508
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad3c0]
FSUB dword ptr [0x004ad3c4]
JMP 0x0046150e
FLD dword ptr [0x004ad3c8]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x68],EAX
MOV EAX,[0x0050c5f0]
CMP EAX,ESI
MOV dword ptr [ESP + 0x6c],ESI
MOV dword ptr [ESP + 0x5c],EBX
MOV dword ptr [ESP + 0x64],EBX
JNZ 0x0046154d
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad3c0]
FSUB dword ptr [0x004ad3c4]
JMP 0x00461553
FLD dword ptr [0x004ad3c8]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x70],EAX
MOV EAX,dword ptr [EDI + 0x60]
TEST AH,0x20
JZ 0x004615fe
ADD EDI,0x2a0
XOR ESI,ESI
MOV EBX,0x64
MOV EBP,0xc8
TEST byte ptr [EDI],0x2
JZ 0x004615d1
MOV EAX,[0x0050c5f0]
MOV dword ptr [ESP + ESI*0x1 + 0xc4],EBX
TEST EAX,EAX
MOV dword ptr [ESP + ESI*0x1 + 0xac],EBX
JNZ 0x004615c0
CALL 0x004816b0
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
CALL 0x0049ed20
MOV dword ptr [ESP + ESI*0x1 + 0x7c],EAX
JMP 0x004615e3
FLD dword ptr [0x004ad384]
CALL 0x0049ed20
MOV dword ptr [ESP + ESI*0x1 + 0x7c],EAX
JMP 0x004615e3
MOV dword ptr [ESP + ESI*0x1 + 0xc4],EBP
MOV dword ptr [ESP + ESI*0x1 + 0xac],EBP
MOV dword ptr [ESP + ESI*0x1 + 0x7c],EBP
MOV dword ptr [ESP + ESI*0x1 + 0x94],0xff
ADD ESI,0x4
ADD EDI,0x4
CMP ESI,0x18
JL 0x0046157a
JMP 0x0046207a
TEST AH,0x50
JNZ 0x00461fdf
MOV EAX,dword ptr [EDI + 0x64]
TEST AH,0x40
JNZ 0x00461fdf
MOV EBP,dword ptr [ESP + 0x44]
LEA ESI,[EDI + 0x2a0]
MOV EDI,dword ptr [ESP + 0x34]
XOR EDX,EDX
MOV dword ptr [ESP + 0x2c],ESI
MOV EBX,0x1
MOV ECX,dword ptr [ESI]
TEST CL,0x4
JZ 0x0046163e
CMP EDX,0x3
JGE 0x0046163c
MOV EDI,EBX
JMP 0x0046163e
MOV EBP,EBX
TEST CL,0x10
JZ 0x00461647
MOV dword ptr [ESP + 0x20],EBX
FLD dword ptr [ESI + -0x18]
FCOMP dword ptr [0x004ad22c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046165b
MOV dword ptr [ESP + 0x18],EBX
TEST CL,0x8
JZ 0x00461664
MOV dword ptr [ESP + 0x58],EBX
INC EDX
ADD ESI,0x4
CMP EDX,0x6
JL 0x0046162c
TEST EDI,EDI
MOV dword ptr [ESP + 0x44],EBP
MOV dword ptr [ESP + 0x34],EDI
JZ 0x004616c7
MOV EAX,0xff
MOV dword ptr [ESP + 0x60],0x0
MOV dword ptr [ESP + 0x50],EAX
MOV dword ptr [ESP + 0x54],EAX
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
JNZ 0x004616b8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
JMP 0x004616be
FLD dword ptr [0x004ad384]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x68],EAX
TEST EBP,EBP
JZ 0x00461719
MOV EAX,0xff
MOV dword ptr [ESP + 0x64],0x0
MOV dword ptr [ESP + 0x6c],EAX
MOV dword ptr [ESP + 0x5c],EAX
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
JNZ 0x0046170a
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
JMP 0x00461710
FLD dword ptr [0x004ad384]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x70],EAX
MOV ECX,dword ptr [ESP + 0x2c]
XOR EAX,EAX
MOV dword ptr [ESP + 0x40],ECX
MOV dword ptr [ESP + 0x2c],EAX
MOV dword ptr [ESP + 0x1c],0x3
MOV EAX,dword ptr [ESP + 0x40]
MOV EBP,0x64
MOV dword ptr [ESP + 0x74],EBP
MOV ECX,dword ptr [EAX + -0x18]
MOV dword ptr [ESP + 0x30],ECX
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x1
JZ 0x0046175c
MOV dword ptr [ESP + 0x30],0x0
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad22c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00461775
MOV dword ptr [ESP + 0x30],0x3f800000
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad3cc]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x30]
FSUBR qword ptr [0x004ad3d0]
MOV EBX,EAX
MOV dword ptr [ESP + 0x3c],EBX
FADD ST0,ST0
FMUL qword ptr [0x004ad3d8]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x30]
FCOMP qword ptr [0x004ad3e0]
MOV EDI,EAX
XOR ESI,ESI
MOV dword ptr [ESP + 0x4c],EDI
MOV dword ptr [ESP + 0x48],ESI
FNSTSW AX
TEST AH,0x41
JNZ 0x004617f1
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FCOMP dword ptr [0x004ad228]
FNSTSW AX
TEST AH,0x41
JNZ 0x004617f1
MOV EBX,0x80
XOR EDI,EDI
MOV dword ptr [ESP + 0x3c],EBX
MOV dword ptr [ESP + 0x4c],EDI
MOV dword ptr [ESP + 0x48],ESI
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad22c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00461840
MOV EDX,dword ptr [ESP + 0xe4]
FLD dword ptr [EDX*0x4 + 0x4c52a0]
FMUL dword ptr [0x004ad37c]
FLD ST0
FSUB dword ptr [0x004ad380]
CALL 0x0049ed20
MOV EBX,EAX
MOV dword ptr [ESP + 0x3c],EBX
CALL 0x0049ed20
MOV EDI,EAX
MOV ESI,EAX
MOV EBP,EBX
MOV dword ptr [ESP + 0x4c],EDI
MOV dword ptr [ESP + 0x48],ESI
MOV dword ptr [ESP + 0x74],EBP
MOV EDX,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [EDX]
TEST CL,0x8
JNZ 0x00461891
MOV EAX,dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x2b8]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046188c
TEST CL,0x1
JZ 0x0046188c
TEST CL,0x2
JZ 0x00461891
MOV EBX,0xff
MOV ESI,0x96
MOV EDI,EBX
MOV EBP,EBX
MOV dword ptr [ESP + 0x3c],EBX
MOV dword ptr [ESP + 0x4c],EDI
MOV dword ptr [ESP + 0x48],ESI
MOV dword ptr [ESP + 0x74],EBP
JMP 0x00461891
AND ECX,0xfffffffe
MOV dword ptr [EDX],ECX
MOV EAX,dword ptr [EDX]
TEST AL,0x4
JZ 0x004618bc
TEST AL,0x2
JZ 0x004618bc
MOV EBX,0x80
MOV ESI,0xff
MOV EDI,EBX
MOV EBP,0xc8
MOV dword ptr [ESP + 0x3c],EBX
MOV dword ptr [ESP + 0x4c],EDI
MOV dword ptr [ESP + 0x48],ESI
MOV dword ptr [ESP + 0x74],EBP
TEST AL,0x8
JZ 0x0046198d
MOV ECX,dword ptr [ESP + 0x34]
TEST ECX,ECX
JNZ 0x004618d4
MOV ECX,dword ptr [ESP + 0x44]
TEST ECX,ECX
JZ 0x004618ee
TEST AL,0x2
JZ 0x004618ee
MOV EBX,0x80
MOV ESI,0xff
MOV EDI,EBX
MOV EBP,0xc8
JMP 0x0046198d
MOV EDX,dword ptr [ESP + 0xe4]
MOV ECX,0xff
SUB ECX,EBX
MOV dword ptr [ESP + 0x10],ECX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [EDX*0x4 + 0x4c52a0]
FIADD dword ptr [ESP + 0x3c]
CALL 0x0049ed20
MOV EBX,EAX
MOV ECX,dword ptr [ESP + 0xe4]
MOV EAX,0x80
SUB EAX,EDI
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [ECX*0x4 + 0x4c52a0]
FIADD dword ptr [ESP + 0x4c]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0xe4]
MOV EDI,EAX
NEG ESI
MOV dword ptr [ESP + 0x10],ESI
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [EDX*0x4 + 0x4c52a0]
FIADD dword ptr [ESP + 0x48]
CALL 0x0049ed20
MOV ESI,EAX
MOV ECX,dword ptr [ESP + 0xe4]
MOV EAX,0xc8
SUB EAX,EBP
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [ECX*0x4 + 0x4c52a0]
FIADD dword ptr [ESP + 0x74]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x40]
MOV EBP,EAX
TEST EBX,EBX
JGE 0x00461993
XOR EBX,EBX
CMP EBX,0xff
JLE 0x004619a0
MOV EBX,0xff
TEST EDI,EDI
JGE 0x004619a6
XOR EDI,EDI
CMP EDI,0xff
JLE 0x004619b3
MOV EDI,0xff
TEST ESI,ESI
JGE 0x004619b9
XOR ESI,ESI
CMP ESI,0xff
JLE 0x004619c6
MOV ESI,0xff
TEST EBP,EBP
JGE 0x004619cc
XOR EBP,EBP
CMP EBP,0xff
JLE 0x004619d9
MOV EBP,0xff
MOV EAX,dword ptr [ESP + 0x2c]
ADD EDX,0x4
MOV dword ptr [ESP + 0x40],EDX
MOV dword ptr [ESP + EAX*0x1 + 0xc4],EBX
MOV dword ptr [ESP + EAX*0x1 + 0xac],EDI
MOV dword ptr [ESP + EAX*0x1 + 0x7c],ESI
MOV dword ptr [ESP + EAX*0x1 + 0x94],EBP
ADD EAX,0x4
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x1c]
DEC EAX
MOV dword ptr [ESP + 0x1c],EAX
JNZ 0x0046172f
MOV EAX,dword ptr [ESP + 0x2c]
MOV ECX,EDX
CMP EAX,0x18
JL 0x0046171f
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [0x004ad3e8]
MOV EAX,dword ptr [ESP + 0x58]
TEST EAX,EAX
FST dword ptr [ESP + 0x28]
FSUB dword ptr [0x004ad2b8]
FSTP dword ptr [ESP + 0x2c]
JZ 0x00461a8c
MOV EDX,dword ptr [ESP + 0xe4]
FLD dword ptr [EDX*0x4 + 0x4c52a0]
FMUL dword ptr [0x004ad340]
CALL 0x0049ed20
PUSH 0x4c6f84
MOV ESI,EAX
CALL 0x00421360
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ad3ec]
ADD ESP,0x4
PUSH EAX
PUSH ESI
PUSH 0x0
PUSH -0x80
PUSH -0x1
CALL 0x0049ed20
PUSH EAX
PUSH 0x36
CALL 0x00450530
ADD ESP,0x1c
MOV ECX,dword ptr [ESP + 0x14]
FLD dword ptr [ECX + 0x218]
FCOMP dword ptr [0x004ad2d8]
FNSTSW AX
TEST AH,0x1
JZ 0x00461b56
MOV EAX,dword ptr [ESP + 0xe4]
FLD dword ptr [EAX*0x4 + 0x4c52a0]
FMUL dword ptr [0x004ad340]
CALL 0x0049ed20
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x58]
XOR EDI,EDI
MOV EBX,0x800000
CMP EAX,EDI
JNZ 0x00461b08
MOV ECX,dword ptr [ESP + 0x14]
TEST dword ptr [ECX + 0x60],EBX
JZ 0x00461b08
PUSH 0x4c6f64
CALL 0x00421360
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ad3ec]
ADD ESP,0x4
PUSH EAX
PUSH ESI
PUSH EDI
PUSH -0x80
PUSH -0x1
CALL 0x0049ed20
PUSH EAX
PUSH 0x36
CALL 0x00450530
ADD ESP,0x1c
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,0xff
MOV dword ptr [ESP + 0x50],EAX
MOV dword ptr [ESP + 0x6c],EAX
MOV EAX,dword ptr [EDX + 0x60]
MOV ECX,0x80
TEST EBX,EAX
MOV dword ptr [ESP + 0x54],ECX
MOV dword ptr [ESP + 0x60],EDI
MOV dword ptr [ESP + 0x68],ESI
MOV dword ptr [ESP + 0x5c],ECX
MOV dword ptr [ESP + 0x64],EDI
MOV dword ptr [ESP + 0x70],ESI
JZ 0x00461cac
MOV dword ptr [ESP + 0x38],0x3e99999a
MOV dword ptr [ESP + 0x24],0x3f400000
JMP 0x00461cac
FLD dword ptr [ECX + 0x218]
FCOMP dword ptr [0x004ad3ac]
FNSTSW AX
TEST AH,0x1
JZ 0x00461cac
MOV EAX,dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0x218]
FSUB dword ptr [0x004ad3ac]
FMUL dword ptr [0x004ad3f4]
FCOM dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x1
JZ 0x00461b98
FSTP ST0
FLD dword ptr [0x004ad218]
FCOM dword ptr [0x004ad22c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00461bad
FSTP ST0
FLD dword ptr [0x004ad22c]
FLD ST0
FMUL dword ptr [0x004ad340]
CALL 0x0049ed20
FSUBR qword ptr [0x004ad3d0]
MOV ESI,EAX
FLD ST0
FMUL qword ptr [0x004ad3f8]
FSUB qword ptr [0x004ad400]
CALL 0x0049ed20
FMUL qword ptr [0x004ad3d8]
MOV EDI,EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0xe4]
MOV EBX,EAX
FLD dword ptr [ECX*0x4 + 0x4c52a0]
FMUL dword ptr [0x004ad340]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x14]
MOV EBP,EAX
TEST dword ptr [EDX + 0x60],0x800000
JZ 0x00461c38
PUSH 0x4c6f40
CALL 0x00421360
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ad3ec]
ADD ESP,0x4
PUSH EAX
PUSH EBP
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x0049ed20
PUSH EAX
PUSH 0x36
CALL 0x00450530
ADD ESP,0x1c
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
JNZ 0x00461c62
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
JMP 0x00461c68
FLD dword ptr [0x004ad384]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x68],EAX
MOV dword ptr [ESP + 0x70],EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x50],ESI
MOV dword ptr [ESP + 0x54],EDI
MOV dword ptr [ESP + 0x60],EBX
MOV ECX,dword ptr [EAX + 0x60]
MOV dword ptr [ESP + 0x6c],ESI
TEST ECX,0x800000
MOV dword ptr [ESP + 0x5c],EDI
MOV dword ptr [ESP + 0x64],EBX
JZ 0x00461cac
MOV dword ptr [ESP + 0x38],0x3e4ccccd
MOV dword ptr [ESP + 0x24],0x3f000000
MOV EAX,dword ptr [ESP + 0x18]
MOV EBX,dword ptr [ESP + 0xe4]
XOR EBP,EBP
CMP EAX,EBP
JZ 0x00461d1a
FLD dword ptr [EBX*0x4 + 0x4c52a0]
FMUL dword ptr [0x004ad37c]
FLD ST0
FSUB dword ptr [0x004ad380]
CALL 0x0049ed20
MOV ESI,EAX
CALL 0x0049ed20
PUSH 0x4c6f24
MOV EDI,EAX
CALL 0x00421360
FLD dword ptr [ESP + 0x2c]
FSUB dword ptr [0x004ad3ec]
ADD ESP,0x4
PUSH EAX
PUSH ESI
PUSH EDI
PUSH EDI
PUSH ESI
CALL 0x0049ed20
PUSH EAX
PUSH 0x36
CALL 0x00450530
FLD dword ptr [ESP + 0x44]
FSUB dword ptr [0x004ad40c]
ADD ESP,0x1c
FSTP dword ptr [ESP + 0x28]
MOV ESI,dword ptr [ESP + 0x14]
MOV EDI,0x400
TEST dword ptr [ESI + 0x60],EDI
JZ 0x00461e66
CMP dword ptr [ESP + 0x34],EBP
JNZ 0x00461def
CMP dword ptr [ESP + 0x44],EBP
JNZ 0x00461def
CMP dword ptr [ESP + 0x20],EBP
JNZ 0x00461def
FLD dword ptr [EBX*0x4 + 0x50ca70]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JZ 0x00461d75
PUSH EBP
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x7
PUSH 0x46
CALL 0x00426c80
ADD ESP,0x14
FLD dword ptr [EBX*0x4 + 0x50ca70]
FADD qword ptr [0x00e22a40]
FCOM dword ptr [0x004ad410]
FSTP dword ptr [EBX*0x4 + 0x50ca70]
FNSTSW AX
TEST AH,0x1
JZ 0x00461e6d
CMP dword ptr [0x0050c5f0],EBP
JNZ 0x00461dc7
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
FSTP dword ptr [ESP + 0x18]
JMP 0x00461dcf
MOV dword ptr [ESP + 0x18],0x435f4000
PUSH 0x4c6f08
CALL 0x00421360
FLD dword ptr [ESP + 0x1c]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x40
PUSH -0x80
PUSH 0x40
JMP 0x00461e4a
MOV EAX,[0x0050c5f0]
MOV dword ptr [EBX*0x4 + 0x50ca70],EBP
CMP EAX,EBP
JNZ 0x00461e24
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad37c]
FSUB dword ptr [0x004ad380]
FSTP dword ptr [ESP + 0x18]
JMP 0x00461e2c
MOV dword ptr [ESP + 0x18],0x435f4000
PUSH 0x4c6eec
CALL 0x00421360
FLD dword ptr [ESP + 0x1c]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x80
PUSH -0x80
FLD dword ptr [ESP + 0x3c]
FSUB dword ptr [0x004ad3ec]
CALL 0x0049ed20
PUSH EAX
PUSH 0x36
CALL 0x00450530
ADD ESP,0x1c
JMP 0x00461e6d
MOV dword ptr [EBX*0x4 + 0x50ca70],EBP
CALL 0x00445690
TEST EAX,EAX
JNZ 0x0046207a
CMP dword ptr [ESP + 0x58],EBP
JZ 0x00461f0b
FLD qword ptr [0x00e22a38]
FSUB qword ptr [0x004ad318]
FLD dword ptr [0x0050ca78]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x00461ec7
FLD qword ptr [0x00e22a38]
PUSH EBP
PUSH 0x3f800000
FSTP dword ptr [0x0050ca7c]
PUSH 0x3e800000
PUSH 0x7
PUSH 0x87
CALL 0x00426c80
ADD ESP,0x14
FLD qword ptr [0x00e22a38]
FSUB qword ptr [0x004ad418]
FLD dword ptr [0x0050ca7c]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x00461eff
PUSH 0x1
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x6
PUSH 0x86
CALL 0x00426c80
ADD ESP,0x14
FLD qword ptr [0x00e22a38]
FSTP dword ptr [0x0050ca78]
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ad218]
FNSTSW AX
TEST AH,0x41
JNZ 0x00461f37
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x38]
PUSH 0x1
PUSH ECX
PUSH EDX
PUSH 0x7
PUSH 0x83
CALL 0x00426c80
ADD ESP,0x14
TEST dword ptr [ESI + 0x60],EDI
JZ 0x0046207a
CMP dword ptr [ESP + 0x34],EBP
JNZ 0x00461f56
CMP dword ptr [ESP + 0x44],EBP
JNZ 0x00461f56
CMP dword ptr [ESP + 0x20],EBP
JZ 0x0046207a
FLD qword ptr [0x00e22a38]
FSUB qword ptr [0x004ad318]
FLD dword ptr [0x0050ca80]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x00461f99
FLD qword ptr [0x00e22a38]
PUSH EBP
PUSH 0x3f800000
FSTP dword ptr [0x0050ca84]
PUSH 0x3e800000
PUSH 0x7
PUSH 0x85
CALL 0x00426c80
ADD ESP,0x14
FLD qword ptr [0x00e22a38]
FSUB qword ptr [0x004ad418]
FLD dword ptr [0x0050ca84]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x00461fce
PUSH 0x1
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x6
PUSH 0x75
CALL 0x00426c80
ADD ESP,0x14
FLD qword ptr [0x00e22a38]
FSTP dword ptr [0x0050ca80]
JMP 0x0046207a
MOV ECX,0x6
MOV EAX,EBX
LEA EDI,[ESP + 0x94]
STOSD.REP ES:EDI
MOV ECX,0x6
LEA EDI,[ESP + 0xc4]
STOSD.REP ES:EDI
XOR EDI,EDI
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
JNZ 0x00462023
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad420]
JMP 0x00462029
FLD dword ptr [0x004ad424]
CALL 0x0049ed20
MOV ESI,EAX
MOV EAX,[0x0050c5f0]
TEST EAX,EAX
MOV dword ptr [ESP + EDI*0x1 + 0xac],ESI
JNZ 0x0046205b
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad240]
FMUL dword ptr [0x004ad428]
JMP 0x00462061
FLD dword ptr [0x004ad42c]
CALL 0x0049ed20
CMP EAX,ESI
MOV dword ptr [ESP + EDI*0x1 + 0x7c],EAX
JLE 0x00462072
MOV dword ptr [ESP + EDI*0x1 + 0x7c],ESI
ADD EDI,0x4
CMP EDI,0x18
JL 0x00461fff
MOV dword ptr [ESP + 0x24],0x0
MOV EAX,dword ptr [ESP + 0x24]
LEA EDX,[EAX + EAX*0x2]
XOR EDI,EDI
SHL EDX,0x3
MOV dword ptr [ESP + 0x10],EDX
MOV EBP,dword ptr [ESP + 0xe4]
FILD dword ptr [ESP + 0x10]
LEA ECX,[EAX + EAX*0x2]
MOV dword ptr [ESP + 0x1c],ECX
FSUB dword ptr [0x004ad360]
FSUB dword ptr [0x004ad430]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [0x004ad22c]
MOV ECX,EDI
MOV EAX,dword ptr [ESP + 0x1c]
FSUB dword ptr [EBP*0x4 + 0x50ca60]
SHL ECX,0x3
SUB ECX,EDI
LEA ESI,[EDI + EAX*0x1]
SHL ECX,0x1
MOV dword ptr [ESP + 0x10],ECX
CMP EDI,0x1
FILD dword ptr [ESP + 0x10]
FXCH
FMUL dword ptr [0x004ad2a0]
FXCH
FADD dword ptr [ESP + 0x78]
FLD dword ptr [ESP + 0x38]
FXCH
FSUB dword ptr [0x004ad434]
FXCH
FLD ST2
FXCH
FXCH ST3
FXCH
FXCH ST2
FSTP dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x18]
JNZ 0x00462112
FMUL dword ptr [0x004ad308]
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JNZ 0x00462120
FXCH
FSUB ST0,ST1
JMP 0x00462122
FADD ST0,ST1
FSTP dword ptr [ESP + 0x20]
TEST EDI,EDI
FSTP ST0
JNZ 0x00462136
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ESP + 0x18]
JMP 0x00462143
CMP EDI,0x2
JNZ 0x00462147
FLD dword ptr [ESP + 0x18]
FADD dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x14]
TEST EBP,EBP
LEA EBX,[ESI + 0x1b]
JZ 0x00462151
LEA EBX,[ESI + 0x23]
PUSH 0x1
PUSH EBX
CALL 0x004285d0
MOV EAX,[0x00e996dc]
ADD ESP,0x8
FLD dword ptr [ESP + 0x14]
TEST AH,0x40
JZ 0x0046217c
CALL 0x0049ed20
FLD dword ptr [0x004ad438]
FSUB dword ptr [ESP + 0x20]
PUSH EAX
JMP 0x00462186
CALL 0x0049ed20
FLD dword ptr [ESP + 0x20]
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH EBX
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f400000
PUSH 0x3f400000
PUSH EBX
CALL 0x004286f0
SHL ESI,0x2
ADD ESP,0xc
FILD dword ptr [ESP + ESI*0x1 + 0x94]
FMUL dword ptr [EBP*0x4 + 0x50ca60]
CALL 0x0049ed20
MOV DL,byte ptr [ESP + ESI*0x1 + 0x7c]
MOV CL,byte ptr [ESP + ESI*0x1 + 0xc4]
PUSH EAX
MOV AL,byte ptr [ESP + ESI*0x1 + 0xb0]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH EBX
CALL 0x00428740
ADD ESP,0x14
INC EDI
CMP EDI,0x3
JL 0x004620b4
MOV EAX,dword ptr [ESP + 0x24]
INC EAX
CMP EAX,0x2
MOV dword ptr [ESP + 0x24],EAX
JL 0x00462086
MOV EAX,[0x00e996dc]
MOV dword ptr [ESP + 0x20],0x41400000
TEST AH,0x40
JNZ 0x00462213
MOV dword ptr [ESP + 0x20],0xc1400000
MOV ESI,EBP
PUSH 0x1
NEG ESI
SBB ESI,ESI
AND ESI,0x8
ADD ESI,0x21
PUSH ESI
CALL 0x004285d0
FLD dword ptr [ESP + 0x80]
ADD ESP,0x8
CALL 0x0049ed20
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [0x004ad360]
MOV DI,AX
PUSH EDI
FSUB dword ptr [0x004ad43c]
CALL 0x0049ed20
PUSH EAX
PUSH ESI
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f400000
PUSH 0x3f400000
PUSH ESI
CALL 0x004286f0
FLD dword ptr [EBP*0x4 + 0x50ca60]
FILD dword ptr [ESP + 0x74]
ADD ESP,0xc
FMUL ST1
FMUL ST1
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x60]
MOV ECX,dword ptr [ESP + 0x50]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x58]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH ESI
FSTP ST0
CALL 0x00428740
MOV ESI,EBP
ADD ESP,0x14
NEG ESI
SBB ESI,ESI
PUSH 0x1
AND ESI,0x8
ADD ESI,0x22
PUSH ESI
CALL 0x004285d0
FLD dword ptr [0x004ad3a0]
FSUB dword ptr [ESP + 0x28]
ADD ESP,0x8
PUSH EDI
CALL 0x0049ed20
PUSH EAX
PUSH ESI
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f400000
PUSH 0x3f400000
PUSH ESI
CALL 0x004286f0
FLD dword ptr [EBP*0x4 + 0x50ca60]
FILD dword ptr [ESP + 0x7c]
ADD ESP,0xc
FMUL ST1
FMUL ST1
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x64]
MOV ECX,dword ptr [ESP + 0x6c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x60]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH ESI
FSTP ST0
CALL 0x00428740
ADD ESP,0x14
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xcc
RET
