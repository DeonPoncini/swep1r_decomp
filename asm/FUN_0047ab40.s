; FUN_0047ab40
SUB ESP,0x14
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH 0x5
CALL 0x00445660
MOV ESI,dword ptr [ESP + 0x2c]
MOV ECX,EAX
ADD ESP,0x4
MOV dword ptr [ESP + 0x10],ECX
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004adca0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047ab7c
OR ECX,0x4
PUSH ECX
PUSH 0x5
CALL 0x00445640
ADD ESP,0x8
MOV EAX,[0x0050cb40]
XOR EBX,EBX
CMP EAX,EBX
JZ 0x0047ab90
PUSH ESI
CALL 0x0047a930
ADD ESP,0x4
PUSH 0x3
CALL 0x00445660
ADD ESP,0x4
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESI + 0x26c]
PUSH EAX
PUSH 0x3
CALL 0x00445640
MOV ECX,dword ptr [ESI + 0x1f8]
ADD ESP,0x8
MOV dword ptr [0x00e270e0],ECX
MOV EAX,dword ptr [ESI + 0x60]
TEST EAX,0x2000000
JZ 0x0047abf8
LEA EDX,[ESI + 0x40]
LEA EAX,[ESI + 0x194]
PUSH EDX
PUSH 0xbf800000
PUSH EAX
MOV EBP,0x1
CALL 0x0042fa50
LEA EDI,[ESI + 0x2e4]
ADD ESP,0xc
MOV dword ptr [ESI + 0x2e8],EBX
MOV dword ptr [ESI + 0x2ec],EBX
MOV dword ptr [EDI],EBX
JMP 0x0047ac21
PUSH ESI
XOR EBP,EBP
CALL 0x004764a0
ADD ESP,0x4
LEA EDI,[ESI + 0x2e4]
LEA ECX,[ESI + 0x194]
LEA EDX,[ESI + 0x20]
PUSH EDI
PUSH ECX
LEA EAX,[ESI + 0x30]
PUSH EDX
PUSH EAX
CALL 0x00476390
ADD ESP,0x10
MOV ECX,dword ptr [ESI + 0x50]
MOV EDX,dword ptr [ESI + 0x54]
MOV EAX,dword ptr [ESI + 0x58]
LEA EBX,[ESI + 0x16c]
MOV dword ptr [ESI + 0x170],EDX
MOV EDX,dword ptr [ESI + 0x2e8]
MOV dword ptr [EBX],ECX
MOV ECX,dword ptr [EDI]
MOV dword ptr [ESI + 0x174],EAX
MOV EAX,dword ptr [ESI + 0x2ec]
PUSH ESI
MOV dword ptr [ESI + 0x2d8],ECX
MOV dword ptr [ESI + 0x2dc],EDX
MOV dword ptr [ESI + 0x2e0],EAX
CALL 0x0046a9c0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0047ac79
FLD dword ptr [ESI + 0x1f0]
FMUL dword ptr [0x004add6c]
JMP 0x0047acc1
TEST dword ptr [ESI + 0x60],0x800000
JZ 0x0047ac90
FLD dword ptr [ESI + 0x1f0]
FMUL dword ptr [0x004adc60]
JMP 0x0047acc1
TEST EBP,EBP
JNZ 0x0047acc7
FLD dword ptr [ESI + 0x208]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x208]
FNSTSW AX
TEST AH,0x1
JZ 0x0047acaf
FCHS
FMUL dword ptr [0x004adc60]
FSUBR dword ptr [0x004adc50]
FMUL dword ptr [ESI + 0x1f0]
FSTP dword ptr [ESI + 0x1f0]
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x4
JZ 0x0047ad4d
FLD dword ptr [ESI + 0x1f0]
FMUL dword ptr [0x004adc60]
MOV ECX,dword ptr [ESI + 0x1fc]
MOV EDX,dword ptr [ESI + 0x1f4]
PUSH ECX
PUSH EDX
PUSH ECX
LEA ECX,[ESI + 0x1ec]
FST dword ptr [ESP + 0x34]
FSTP dword ptr [ESI + 0x1f0]
FLD dword ptr [ESI + 0x70]
FMUL dword ptr [ESI + 0x22c]
MOV EAX,dword ptr [ESP + 0x34]
FSTP dword ptr [ESP]
PUSH EAX
PUSH EDI
PUSH ECX
CALL 0x0044ae40
FLD dword ptr [ESI + 0x1f8]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x1f8]
ADD ESP,0x18
FNSTSW AX
TEST AH,0x41
JNZ 0x0047ad34
FADD dword ptr [EDI]
FSTP dword ptr [EDI]
JMP 0x0047ad88
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x0047ad88
FLD dword ptr [ESI + 0x1f8]
FADD dword ptr [EDI]
FSTP dword ptr [EDI]
JMP 0x0047ad88
FLD dword ptr [ESI + 0x1fc]
FADD dword ptr [ESI + 0x1f8]
MOV EDX,dword ptr [ESI + 0x1f4]
PUSH ECX
MOV EAX,dword ptr [ESI + 0x1f0]
FSTP dword ptr [ESP]
FLD dword ptr [ESI + 0x70]
FMUL dword ptr [ESI + 0x22c]
PUSH EDX
PUSH ECX
LEA ECX,[ESI + 0x1ec]
FSTP dword ptr [ESP]
PUSH EAX
PUSH EDI
PUSH ECX
CALL 0x0044ae40
ADD ESP,0x18
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x3fc00000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1f4]
ADD ESP,0x8
FCOM dword ptr [0x004adc60]
FST dword ptr [ESI + 0x1f4]
FNSTSW AX
TEST AH,0x1
JZ 0x0047add3
FCHS
FCOMP dword ptr [0x004adc60]
FNSTSW AX
TEST AH,0x1
JZ 0x0047add5
MOV dword ptr [ESI + 0x1f4],0x0
JMP 0x0047add5
FSTP ST0
TEST EBP,EBP
JZ 0x0047ae52
FLD dword ptr [ESI + 0x220]
FCOMP dword ptr [ESI + 0x224]
FLD dword ptr [ESI + 0x22c]
FMUL qword ptr [0x00e22a40]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047ae28
FLD dword ptr [ESI + 0x220]
FLD dword ptr [ESI + 0x70]
FMULP ST2
FXCH
FSUBP
FCOM dword ptr [ESI + 0x224]
FSTP dword ptr [ESI + 0x220]
FNSTSW AX
TEST AH,0x1
JZ 0x0047ae52
MOV EDX,dword ptr [ESI + 0x224]
MOV dword ptr [ESI + 0x220],EDX
JMP 0x0047ae52
FLD dword ptr [ESI + 0x70]
FMULP
FADD dword ptr [ESI + 0x220]
FCOM dword ptr [ESI + 0x224]
FSTP dword ptr [ESI + 0x220]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047ae52
MOV EAX,dword ptr [ESI + 0x224]
MOV dword ptr [ESI + 0x220],EAX
LEA ECX,[ESI + 0x30]
LEA EDX,[ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH EBX
PUSH ESI
CALL 0x00478d80
ADD ESP,0x10
TEST EBP,EBP
JZ 0x0047ae91
MOV EAX,dword ptr [ESI + 0xec]
MOV dword ptr [ESI + 0x140],EAX
MOV EAX,dword ptr [ESI + 0x64]
OR EAX,0x20000000
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,0x3f800000
MOV dword ptr [ESI + 0x244],EAX
MOV dword ptr [ESI + 0x248],EAX
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [ESI + 0x2cc],ECX
MOV dword ptr [ESI + 0x50],ECX
MOV ECX,dword ptr [ESP + 0x10]
PUSH ECX
PUSH 0x5
MOV dword ptr [ESI + 0x2d0],EDX
MOV dword ptr [ESI + 0x2d4],EAX
MOV dword ptr [ESI + 0x54],EDX
MOV dword ptr [ESI + 0x58],EAX
CALL 0x00445640
MOV EDX,dword ptr [ESP + 0x1c]
ADD ESP,0x8
PUSH EDX
PUSH 0x3
CALL 0x00445640
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
