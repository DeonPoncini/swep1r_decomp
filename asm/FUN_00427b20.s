; FUN_00427b20
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
XOR EAX,EAX
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
CMP ESI,0x4
MOV EBX,0x1
JNZ 0x00427b3e
CMP EDI,0x3
JGE 0x00427b3e
MOV EAX,EBX
TEST EAX,EAX
JZ 0x00427b9e
FLD dword ptr [0x004b8798]
FSUB qword ptr [0x00e22a40]
FST dword ptr [0x004b8798]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JZ 0x00427b9e
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
PUSH 0x0
FILD dword ptr [ESP + 0x14]
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x6
PUSH 0x24
FMUL dword ptr [0x004ac4a8]
FMUL dword ptr [0x004ac4c4]
FSUB dword ptr [0x004ac4c8]
FSTP dword ptr [0x004b8798]
CALL 0x00426c80
ADD ESP,0x14
CMP EDI,0x3
JNZ 0x00427bba
CMP ESI,EBX
JNZ 0x00427bae
MOV ESI,0x4b8928
JMP 0x00427bcc
CMP ESI,0x4
JNZ 0x00427bc8
MOV ESI,0x4b8cc8
JMP 0x00427bcc
LEA EAX,[EDI + ESI*0x2]
ADD ESI,EAX
MOV ESI,dword ptr [ESI*0x4 + 0x4b8fa8]
JMP 0x00427bcc
MOV ESI,dword ptr [ESP + 0x18]
TEST ESI,ESI
JZ 0x00427d6a
FLD dword ptr [ESI]
FCOMP dword ptr [0x004ac47c]
XOR EDI,EDI
FNSTSW AX
TEST AH,0x1
JNZ 0x00427d6a
TEST EDI,EDI
JNZ 0x00427d6a
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FCOM
FLD dword ptr [ESP + 0x18]
FNSTSW AX
TEST AH,0x1
JZ 0x00427c26
FLD dword ptr [ESP + 0x18]
FCOMP ST3
FXCH
FSUB dword ptr [0x004ac470]
FXCH
FNSTSW AX
TEST AH,0x1
JZ 0x00427c26
FSTP ST0
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ac470]
FLD ST2
FCOMP ST2
FNSTSW AX
TEST AH,0x1
JZ 0x00427d4d
FSUB ST0,ST2
FXCH
FSUB ST0,ST2
FDIVP
FSTP dword ptr [ESP + 0x10]
FSTP ST0
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00427d53
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac478]
FNSTSW AX
TEST AH,0x1
JZ 0x00427d53
MOV AL,byte ptr [ESI + 0xa]
MOV EDI,EBX
TEST BL,AL
JZ 0x00427cdb
FLD dword ptr [0x004b879c]
FSUB qword ptr [0x00e22a40]
FST dword ptr [0x004b879c]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JZ 0x00427d53
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
PUSH 0x0
FILD dword ptr [ESP + 0x14]
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x6
FMUL dword ptr [0x004ac4a8]
FMUL dword ptr [0x004ac4cc]
FSUB dword ptr [0x004ac4d0]
FSTP dword ptr [0x004b879c]
MOVSX ECX,word ptr [ESI + 0x8]
PUSH ECX
CALL 0x00426c80
ADD ESP,0x14
JMP 0x00427d53
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac4d4]
FLD dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JNZ 0x00427d07
FCOMP dword ptr [0x004ac4dc]
FLD dword ptr [0x004ac478]
FNSTSW AX
TEST AH,0x41
JNZ 0x00427d0d
FSUB dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ac4d8]
MOV CX,word ptr [ESI + 0x8]
FST dword ptr [ESP + 0x10]
CMP CX,0x5
JNZ 0x00427d25
FMUL dword ptr [0x004ac4e0]
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00427d53
MOV EDX,dword ptr [ESP + 0x10]
PUSH EBX
MOVSX EAX,CX
PUSH EDX
PUSH 0x3e800000
PUSH 0x6
PUSH EAX
CALL 0x00426c80
ADD ESP,0x14
JMP 0x00427d53
FSTP ST0
FSTP ST0
FSTP ST0
FLD dword ptr [ESI + 0xc]
FCOMP dword ptr [0x004ac47c]
ADD ESI,0xc
FNSTSW AX
TEST AH,0x1
JZ 0x00427be9
POP EDI
POP ESI
POP EBX
RET
