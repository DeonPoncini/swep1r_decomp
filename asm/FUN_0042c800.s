; FUN_0042c800
SUB ESP,0x20
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
XOR ESI,ESI
MOV AX,word ptr [ESI + 0xe9a5a0]
PUSH 0x0
PUSH EAX
CALL 0x004285d0
MOV CX,word ptr [ESI + 0xe9a400]
ADD ESP,0x8
PUSH 0x0
PUSH ECX
CALL 0x004285d0
ADD ESI,0x4
ADD ESP,0x8
CMP ESI,0x28
JL 0x0042c809
MOV EDI,0xe99d80
XOR EBX,EBX
MOV dword ptr [ESP + 0x28],EDI
MOV EBP,0xe99e20
XOR ESI,ESI
MOV EAX,0xfffffc18
MOV dword ptr [EBX*0x4 + 0xe99ce0],EAX
MOV dword ptr [EBX*0x4 + 0xe99c40],EAX
MOV AL,byte ptr [EBX + 0xe9a6e0]
TEST AL,AL
JZ 0x0042cae1
PUSH 0x50c6e8
PUSH EBP
CALL 0x0042f950
FCOMP dword ptr [0x004b9578]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x0042cae1
CALL 0x00445690
TEST EAX,EAX
MOV dword ptr [ESP + 0x1c],0x43000000
JNZ 0x0042c8a0
MOV dword ptr [ESP + 0x1c],0x437f0000
LEA EDX,[ESP + 0x20]
PUSH 0x0
LEA EAX,[ESP + 0x28]
PUSH EDX
LEA ECX,[ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x40]
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDX
PUSH EBP
PUSH EAX
CALL 0x0042b710
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004ac5b8]
ADD ESP,0x1c
FNSTSW AX
TEST AH,0x41
JNZ 0x0042cae1
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004ac5ec]
FNSTSW AX
TEST AH,0x41
JZ 0x0042c8f2
FLD dword ptr [0x004ac5f0]
JMP 0x0042c8fc
FLD dword ptr [0x004ac5f4]
FDIV dword ptr [ESP + 0x20]
FST dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ac5b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042c915
MOV dword ptr [ESP + 0x18],0x40000000
FILD dword ptr [0x00ec86c4]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042cae1
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac5b8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042cae1
FILD dword ptr [0x00ec85e8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042cae1
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x14]
MOV dword ptr [EBX*0x4 + 0xe99ce0],EAX
CALL 0x0049ed20
MOV dword ptr [EBX*0x4 + 0xe99c40],EAX
MOV EAX,dword ptr [EDI]
CMP EAX,0xc47a0000
JZ 0x0042cae1
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ac5b8]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042c9a3
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [EDI]
FNSTSW AX
TEST AH,0x1
JZ 0x0042cae1
FLD dword ptr [0x004ac5f8]
FSUB dword ptr [ESP + 0x10]
CMP ESI,0x28
FMUL dword ptr [0x004ac5fc]
FSTP dword ptr [ESP + 0x2c]
JGE 0x0042cae1
MOV EAX,dword ptr [ESI + 0xe9a5a0]
MOV EDI,dword ptr [ESP + 0x2c]
CMP EAX,-0x1
JZ 0x0042ca54
MOV CX,word ptr [ESI + 0xe9a5a0]
PUSH 0x1
PUSH ECX
CALL 0x004285d0
FLD dword ptr [ESP + 0x1c]
ADD ESP,0x8
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
PUSH EAX
CALL 0x0049ed20
MOV DX,word ptr [ESI + 0xe9a5a0]
PUSH EAX
PUSH EDX
CALL 0x0042bb00
MOV AX,word ptr [ESI + 0xe9a5a0]
ADD ESP,0xc
PUSH EDI
PUSH EAX
CALL 0x00428720
MOV CX,word ptr [ESI + 0xe9a5a0]
ADD ESP,0x8
PUSH 0x3f800000
PUSH 0x3f800000
PUSH ECX
CALL 0x004286f0
FLD dword ptr [ESP + 0x28]
ADD ESP,0xc
CALL 0x0049ed20
MOV DX,word ptr [ESI + 0xe9a5a0]
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH EDX
CALL 0x00428740
ADD ESP,0x14
CMP dword ptr [ESI + 0xe9a400],-0x1
JZ 0x0042cada
MOV AX,word ptr [ESI + 0xe9a400]
PUSH 0x1
PUSH EAX
CALL 0x004285d0
FLD dword ptr [ESP + 0x1c]
ADD ESP,0x8
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
PUSH EAX
CALL 0x0049ed20
MOV CX,word ptr [ESI + 0xe9a400]
PUSH EAX
PUSH ECX
CALL 0x0042bb00
MOV DX,word ptr [ESI + 0xe9a400]
ADD ESP,0xc
PUSH EDI
PUSH EDX
CALL 0x00428720
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x8
PUSH EAX
PUSH EAX
MOV AX,word ptr [ESI + 0xe9a400]
PUSH EAX
CALL 0x004286f0
FLD dword ptr [ESP + 0x28]
ADD ESP,0xc
CALL 0x0049ed20
MOV CX,word ptr [ESI + 0xe9a400]
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH ECX
CALL 0x00428740
ADD ESP,0x14
MOV EDI,dword ptr [ESP + 0x28]
ADD ESI,0x4
ADD EBP,0xc
INC EBX
ADD EDI,0x4
CMP EBP,0xe9a000
MOV dword ptr [ESP + 0x28],EDI
JL 0x0042c847
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
