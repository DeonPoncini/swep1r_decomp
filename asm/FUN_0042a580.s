; FUN_0042a580
MOV EAX,dword ptr [ESP + 0xc]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x18]
MOV byte ptr [EAX],0x0
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,0x8
MOV dword ptr [EDI],0xffffd8f0
CMP EAX,ECX
MOV dword ptr [ESI],0xc61c4000
JA 0x0042a7fd
JMP dword ptr [EAX*0x4 + 0x42a814]
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0x4b939c
PUSH ECX
CALL 0x0049eb80
MOV EDX,dword ptr [0x0050c040]
ADD ESP,0x8
MOV dword ptr [EDI],EDX
MOV EAX,0x1
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],0x4
JNZ 0x0042a5fa
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b9394
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
MOV EAX,[0x0050ca28]
TEST EAX,EAX
JZ 0x0042a61d
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0x4b9380
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
PUSH 0x4b936c
JMP 0x0042a7e8
TEST byte ptr [0x0050c048],CL
JNZ 0x0042a649
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b9394
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0x4b935c
PUSH ECX
CALL 0x0049eb80
FLD dword ptr [0x004c707c]
FMUL dword ptr [0x004ac52c]
ADD ESP,0x8
MOV EAX,0x1
FSTP dword ptr [ESI]
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],CL
JNZ 0x0042a683
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b9350
PUSH EAX
CALL 0x0049eb80
MOV ECX,dword ptr [0x004c7080]
ADD ESP,0x8
MOV dword ptr [ESI],ECX
MOV EAX,0x1
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],CL
JNZ 0x0042a6b7
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b9340
PUSH EAX
CALL 0x0049eb80
MOV ECX,dword ptr [0x004c7bb8]
ADD ESP,0x8
MOV dword ptr [ESI],ECX
MOV EAX,0x1
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],CL
JNZ 0x0042a6eb
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b9330
PUSH EAX
CALL 0x0049eb80
MOV ECX,dword ptr [0x004c7bbc]
ADD ESP,0x8
MOV dword ptr [ESI],ECX
MOV EAX,0x1
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],0x10
JNZ 0x0042a720
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,[0x0050ca24]
TEST EAX,EAX
JZ 0x0042a749
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b931c
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
MOV dword ptr [ESI],0xc7c34f80
MOV EAX,0x1
POP EDI
POP ESI
RET
PUSH 0x4b9308
JMP 0x0042a792
TEST byte ptr [0x0050c048],0x20
JNZ 0x0042a763
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,[0x00e996dc]
TEST AH,0x40
JZ 0x0042a78d
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b92f4
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
MOV dword ptr [ESI],0xc7c34f80
MOV EAX,0x1
POP EDI
POP ESI
RET
PUSH 0x4b92e0
MOV ECX,dword ptr [ESP + 0x14]
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x8
MOV dword ptr [ESI],0xc7c34f80
MOV EAX,0x1
POP EDI
POP ESI
RET
TEST byte ptr [0x0050c048],0x2
JNZ 0x0042a7bd
PUSH 0x4b9394
JMP 0x0042a7e8
MOV EAX,[0x0050c050]
PUSH EAX
PUSH 0x54657374
CALL 0x00450aa0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0042a80f
MOV CX,word ptr [EAX + 0x6]
AND ECX,0x100
TEST CX,CX
JNZ 0x0042a80f
PUSH 0x4b92cc
MOV EDX,dword ptr [ESP + 0x14]
PUSH EDX
CALL 0x0049eb80
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x4b91cc
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
POP EDI
XOR EAX,EAX
POP ESI
RET
