; FUN_0046dea0
SUB ESP,0x64
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x74]
PUSH EDI
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x0046debe
TEST dword ptr [ESI + 0x64],0x4000000
JZ 0x0046e13a
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x80
JZ 0x0046ded0
MOV dword ptr [ESP + 0x78],0xbf800000
JMP 0x0046defd
TEST EAX,0x10000
JZ 0x0046dee1
MOV dword ptr [ESP + 0x78],0x3f800000
JMP 0x0046defd
XOR EAX,EAX
MOV dword ptr [ESP + 0x78],0x0
MOV dword ptr [ESI + 0x340],EAX
MOV dword ptr [ESI + 0x33c],EAX
MOV dword ptr [ESI + 0x338],EAX
FLD dword ptr [ESP + 0x78]
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x40
JNZ 0x0046e13a
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad9a8]
FLD dword ptr [ESI + 0x340]
FXCH
FSUBP
FCOM dword ptr [0x004ad958]
FSTP dword ptr [ESI + 0x340]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046df45
MOV dword ptr [ESI + 0x340],0x3f800000
FLD dword ptr [ESP + 0x78]
FCOMP dword ptr [0x004ad968]
MOV EBX,0x1
FNSTSW AX
TEST AH,0x41
JZ 0x0046df60
MOV EBX,0x2
FLD dword ptr [ESI + 0x338]
FLD dword ptr [ESP + 0x78]
FMUL qword ptr [0x00e22a40]
MOV EAX,EBX
LEA ECX,[ESP + 0x34]
SHL EAX,0x6
FMUL dword ptr [ESI + 0x340]
LEA EDI,[EAX + ESI*0x1 + 0x350]
PUSH EDI
PUSH ECX
FMUL qword ptr [0x004ad9c8]
FSUBP
FSTP dword ptr [ESI + 0x338]
CALL 0x0044bb10
ADD ESP,0x8
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x44]
LEA ECX,[ESP + 0x10]
PUSH EDX
PUSH 0x0
PUSH EAX
PUSH ECX
CALL 0x0042fa80
ADD ESP,0x10
LEA EDX,[ESP + 0x44]
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x10]
PUSH 0x0
PUSH 0x3f800000
PUSH 0x0
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL 0x0042f9b0
LEA EAX,[EBX + 0xe]
ADD ESP,0x4
SHL EAX,0x6
LEA ECX,[ESP + 0x28]
LEA EBP,[EAX + ESI*0x1]
PUSH EBP
PUSH ECX
FSTP ST0
CALL 0x0042f7d0
MOV EDX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x18]
ADD ESP,0x8
PUSH EDI
PUSH EDX
MOV EDX,dword ptr [ESI + 0x338]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH EDI
CALL 0x00431390
ADD ESP,0x18
LEA EAX,[ESP + 0x28]
PUSH EAX
PUSH EBP
CALL 0x0042f7d0
MOV ECX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EBX,dword ptr [ECX + EBX*0x4]
TEST EBX,EBX
JZ 0x0046e04a
PUSH EDI
PUSH EBX
CALL 0x00431640
ADD ESP,0x8
FLD dword ptr [ESI + 0x33c]
FLD dword ptr [ESP + 0x78]
FMUL qword ptr [0x00e22a40]
LEA EDI,[ESI + 0x490]
LEA EDX,[ESP + 0x34]
PUSH EDI
PUSH EDX
FMUL dword ptr [ESI + 0x340]
FMUL qword ptr [0x004ad9d0]
FSUBP
FSTP dword ptr [ESI + 0x33c]
CALL 0x0044bb10
ADD ESP,0x8
LEA EAX,[ESP + 0x34]
LEA ECX,[ESP + 0x44]
LEA EDX,[ESP + 0x1c]
PUSH EAX
PUSH 0x0
PUSH ECX
PUSH EDX
CALL 0x0042fa80
ADD ESP,0x10
LEA EAX,[ESP + 0x44]
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
FLD dword ptr [ESP + 0x80]
FMUL qword ptr [0x004ad9d8]
ADD ESP,0x8
LEA EDX,[ESP + 0x1c]
PUSH 0x0
PUSH 0x3f800000
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESP + 0x1c]
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EBX,[ESI + 0x4c0]
LEA ECX,[ESP + 0x28]
PUSH EBX
PUSH ECX
FSTP ST0
CALL 0x0042f7d0
MOV EDX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x24]
ADD ESP,0x8
PUSH EDI
PUSH EDX
MOV EDX,dword ptr [ESI + 0x33c]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH EDI
CALL 0x00431390
ADD ESP,0x18
LEA EAX,[ESP + 0x28]
PUSH EAX
PUSH EBX
CALL 0x0042f7d0
MOV ECX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EAX,dword ptr [ECX + 0x14]
TEST EAX,EAX
JZ 0x0046e13a
PUSH EDI
PUSH EAX
CALL 0x00431640
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x64
RET
