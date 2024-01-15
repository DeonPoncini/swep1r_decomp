; FUN_004764e0
SUB ESP,0x24
LEA EAX,[ESP]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x34]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x34]
PUSH EDI
PUSH ESI
PUSH EAX
CALL 0x0042f9f0
ADD ESP,0xc
LEA ECX,[ESP + 0x8]
PUSH ECX
CALL 0x0042f8c0
FCOM dword ptr [0x004adc44]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JZ 0x00476532
MOV EAX,dword ptr [ESP + 0x3c]
FSTP ST0
MOV EDX,dword ptr [EAX]
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0xc],ECX
MOV dword ptr [ESP + 0x10],EDX
JMP 0x00476552
FLD dword ptr [0x004adc50]
FDIV ST0,ST1
LEA EAX,[ESP + 0x8]
PUSH EAX
PUSH ECX
LEA ECX,[ESP + 0x10]
FSTP dword ptr [ESP]
PUSH ECX
FSTP ST0
CALL 0x0042fa50
ADD ESP,0xc
LEA EDX,[ESP + 0x8]
LEA EAX,[ESP + 0x20]
PUSH EDX
PUSH EDI
PUSH EAX
CALL 0x0042f9f0
ADD ESP,0xc
LEA ECX,[ESP + 0x20]
PUSH ECX
CALL 0x0042f8c0
FCOM dword ptr [0x004adc44]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JZ 0x00476597
MOV EDX,dword ptr [ESI]
MOV EAX,dword ptr [ESI + 0x4]
MOV ECX,dword ptr [ESI + 0x8]
MOV dword ptr [ESP + 0x20],EDX
FSTP ST0
MOV dword ptr [ESP + 0x24],EAX
MOV dword ptr [ESP + 0x28],ECX
JMP 0x004765b7
FLD dword ptr [0x004adc50]
FDIV ST0,ST1
LEA EDX,[ESP + 0x20]
LEA EAX,[ESP + 0x20]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
FSTP ST0
CALL 0x0042fa50
ADD ESP,0xc
MOV EDX,dword ptr [ESP + 0x40]
LEA ECX,[ESP + 0x14]
PUSH ECX
LEA EAX,[ESP + 0xc]
PUSH EDX
LEA ECX,[ESP + 0x28]
PUSH EAX
PUSH ECX
CALL 0x00476390
MOV EDX,dword ptr [ESP + 0x40]
ADD ESP,0x10
MOV EAX,dword ptr [EDX + 0x64]
TEST AH,0x4
JZ 0x00476611
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004adc54]
FNSTSW AX
TEST AH,0x41
JNZ 0x004765f8
MOV dword ptr [ESP + 0x1c],0x42aa0000
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004adc58]
FNSTSW AX
TEST AH,0x1
JZ 0x00476611
MOV dword ptr [ESP + 0x1c],0xc2aa0000
MOV ECX,dword ptr [ESP + 0x50]
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [ECX + 0x4]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ECX + 0x4]
FXCH
FSUB dword ptr [ECX + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x0047663d
FXCH
FMUL dword ptr [0x004adc5c]
JMP 0x00476653
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00476655
FXCH
FMUL dword ptr [0x004adc60]
FXCH
MOV EAX,dword ptr [EDX + 0x60]
FMUL dword ptr [0x004adc64]
TEST EAX,0x4000000
JNZ 0x00476723
FLD dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x48]
FSUB dword ptr [ESP + 0x44]
FXCH
FSUB dword ptr [ESP + 0x4c]
FDIVP
FST dword ptr [ESP + 0x48]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x004766af
FLD dword ptr [ESP + 0x48]
FCOMP dword ptr [0x004adc50]
FNSTSW AX
TEST AH,0x1
JZ 0x00476723
FLD dword ptr [ESP + 0x48]
FMULP ST2
FMUL dword ptr [ESP + 0x48]
JMP 0x00476723
FSTP ST0
FSTP ST0
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004adc6c]
FLD dword ptr [ECX + 0x8]
FMUL dword ptr [0x004adc68]
FLD dword ptr [0x004adc48]
FXCH
FST dword ptr [ESP + 0x48]
FNSTSW AX
TEST AH,0x41
JNZ 0x004766ec
FSTP ST0
FSTP ST0
FLD qword ptr [0x00e22a40]
FMUL dword ptr [0x004adc70]
FLD dword ptr [ESP + 0x48]
FLD dword ptr [EDX + 0x2fc]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x00476723
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004adc74]
FNSTSW AX
TEST AH,0x1
JZ 0x00476723
FLD qword ptr [0x00e22a40]
FMUL dword ptr [EDX + 0x2fc]
FMUL dword ptr [0x004adc78]
FSUBP ST2,ST0
FXCH
FADD dword ptr [ECX + 0x4]
FXCH
FADD dword ptr [ECX + 0x8]
FXCH
POP EDI
POP ESI
FSTP dword ptr [ECX + 0x4]
FSTP dword ptr [ECX + 0x8]
ADD ESP,0x24
RET
