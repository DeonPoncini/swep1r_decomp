; FUN_00469c30
MOV EDX,dword ptr [0x00e295d0]
PUSH EBX
PUSH EBP
PUSH ESI
XOR EBP,EBP
XOR ESI,ESI
CMP EDX,EBP
PUSH EDI
MOV dword ptr [0x00e295b0],EBP
MOV dword ptr [0x00e295b4],EBP
MOV dword ptr [0x00e295b8],EBP
MOV dword ptr [0x00e295bc],EBP
MOV EBX,0x1
JLE 0x00469c65
MOV dword ptr [0x00e295b8],EBX
MOV EAX,[0x00e295cc]
DEC EAX
CMP EDX,EAX
JGE 0x00469c75
MOV dword ptr [0x00e295bc],EBX
MOV EDI,dword ptr [ESP + 0x14]
MOV ECX,0x20000
TEST dword ptr [EDI*0x4 + 0x50c908],ECX
JZ 0x00469cfd
CMP EDX,EAX
JGE 0x00469cda
FLD dword ptr [0x00e295d8]
FCOMP dword ptr [0x004ad590]
MOV dword ptr [0x00e295b4],EBX
FNSTSW AX
TEST AH,0x40
JNZ 0x00469cad
TEST dword ptr [EDI*0x4 + 0x50c918],ECX
JZ 0x00469cfd
MOV EAX,[0x00e295dc]
MOV ESI,EBX
CMP EAX,EBP
MOV dword ptr [0x00e295e0],EBX
MOV dword ptr [0x00e295d8],0x3f19999a
JLE 0x00469cfd
FLD dword ptr [0x004ad588]
FDIV dword ptr [ESP + 0x18]
FSTP dword ptr [0x00e295d8]
JMP 0x00469cfd
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ad670]
FNSTSW AX
TEST AH,0x40
JZ 0x00469cfd
PUSH 0x4b
CALL 0x00440550
MOV EDX,dword ptr [0x00e295d0]
ADD ESP,0x4
MOV EAX,dword ptr [EDI*0x4 + 0x50c908]
MOV ECX,0x10000
TEST ECX,EAX
JZ 0x00469d87
CMP EDX,EBP
JLE 0x00469d64
FLD dword ptr [0x00e295d8]
FCOMP dword ptr [0x004ad590]
MOV dword ptr [0x00e295b0],EBX
FNSTSW AX
TEST AH,0x40
JNZ 0x00469d33
TEST dword ptr [EDI*0x4 + 0x50c918],ECX
JZ 0x00469d87
MOV EAX,[0x00e295dc]
MOV ESI,EBX
CMP EAX,EBP
MOV dword ptr [0x00e295e0],0xffffffff
MOV dword ptr [0x00e295d8],0x3f19999a
JGE 0x00469d87
FLD dword ptr [0x004ad588]
FDIV dword ptr [ESP + 0x18]
FSTP dword ptr [0x00e295d8]
JMP 0x00469d87
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ad670]
FNSTSW AX
TEST AH,0x40
JZ 0x00469d87
PUSH 0x4b
CALL 0x00440550
MOV EDX,dword ptr [0x00e295d0]
ADD ESP,0x4
MOV EAX,[0x00e295b0]
CMP EAX,EBP
JNZ 0x00469d98
CMP dword ptr [0x00e295b4],EBP
JZ 0x00469da0
AND dword ptr [EDI*0x4 + 0x50c918],0xfffffffc
CMP ESI,EBP
JZ 0x00469de7
MOV ECX,dword ptr [0x00e295dc]
MOV EAX,[0x00e295e0]
IMUL ECX,EAX
TEST ECX,ECX
JGE 0x00469dbc
MOV dword ptr [0x00e295dc],EBP
MOV EDI,dword ptr [0x00e295dc]
ADD EDX,EAX
ADD EDI,EAX
PUSH 0x58
MOV dword ptr [0x00e295dc],EDI
MOV dword ptr [0x00e295d0],EDX
CALL 0x00440550
MOV EDX,dword ptr [0x00e295d0]
MOV EAX,[0x00e295b0]
ADD ESP,0x4
MOV ECX,dword ptr [0x00e295b4]
CMP ECX,EBP
JNZ 0x00469dfb
CMP EAX,EBP
JNZ 0x00469dfb
MOV dword ptr [0x00e295dc],EBP
CMP dword ptr [0x00e295d4],EDX
JNZ 0x00469e2e
CMP EAX,EBP
JNZ 0x00469e2e
CMP ECX,EBP
JNZ 0x00469e2e
CMP dword ptr [ESP + 0x1c],EBP
JZ 0x00469e65
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004ad6ec]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x00469b90
FSTP ST0
ADD ESP,0x4
POP EDI
POP ESI
POP EBP
POP EBX
RET
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004ad6f0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x00469b90
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ad590]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x40
FSTP ST0
JZ 0x00469e65
MOV EDX,dword ptr [0x00e295d0]
MOV dword ptr [0x00e295d4],EDX
POP EDI
POP ESI
POP EBP
POP EBX
RET
