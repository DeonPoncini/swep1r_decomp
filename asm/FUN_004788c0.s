; FUN_004788c0
SUB ESP,0xc
XOR ECX,ECX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
TEST dword ptr [ESI + 0x64],0x40000
JZ 0x0047891e
FLD qword ptr [0x00e22a40]
FLD dword ptr [ESI + 0x208]
FCOMP dword ptr [0x004add48]
FMUL dword ptr [0x004adc78]
FNSTSW AX
FSUBR dword ptr [ESI + 0x218]
TEST AH,0x1
FSTP dword ptr [ESI + 0x218]
JZ 0x00478904
OR ECX,0xffffffff
JMP 0x0047894e
FLD dword ptr [ESI + 0x208]
FCOMP dword ptr [0x004adc60]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047894e
MOV ECX,0x1
JMP 0x0047894e
MOV EAX,dword ptr [ESI + 0x60]
FLD qword ptr [0x00e22a40]
TEST EAX,0x800000
JZ 0x0047893c
FMUL dword ptr [ESI + 0x8c]
FSUBR dword ptr [ESI + 0x218]
JMP 0x00478948
FMUL dword ptr [ESI + 0x90]
FADD dword ptr [ESI + 0x218]
FSTP dword ptr [ESI + 0x218]
FLD dword ptr [ESI + 0x218]
FCOMP dword ptr [0x004add5c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047896b
MOV dword ptr [ESI + 0x218],0x42c80000
FLD dword ptr [ESI + 0x218]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JZ 0x00478a5b
TEST ECX,ECX
MOV dword ptr [ESI + 0x218],0x0
JGE 0x004789ab
CALL 0x004816b0
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004add18]
FMUL dword ptr [0x004adce8]
JMP 0x004789ed
JLE 0x004789d4
CALL 0x004816b0
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004add18]
FMUL dword ptr [0x004add60]
CALL 0x0049ed20
MOV EDI,0x3
SUB EDI,EAX
JMP 0x004789f4
CALL 0x004816b0
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004add18]
FMUL dword ptr [0x004add64]
CALL 0x0049ed20
MOV EDI,EAX
TEST byte ptr [ESI + EDI*0x4 + 0x2a0],0x8
JNZ 0x00478a3f
LEA EAX,[ESP + 0x8]
PUSH 0x3dcccccd
PUSH EAX
MOV EAX,0x55555556
IMUL EDI
MOV ECX,EDX
MOV EAX,0x2
SHR ECX,0x1f
ADD EDX,ECX
MOV dword ptr [ESP + 0x10],0x0
SUB EAX,EDX
MOV dword ptr [ESP + 0x14],0x0
PUSH EAX
PUSH ESI
MOV dword ptr [ESP + 0x20],0x0
CALL 0x0046e950
ADD ESP,0x10
MOV ECX,dword ptr [ESI + EDI*0x4 + 0x2a0]
OR ECX,0x8
MOV dword ptr [ESI + EDI*0x4 + 0x2a0],ECX
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xff7fffff
MOV dword ptr [ESI + 0x60],EAX
POP EDI
POP ESI
ADD ESP,0xc
RET
