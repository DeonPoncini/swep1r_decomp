; FUN_00424430
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
PUSH EDI
PUSH 0x4b7c68
PUSH EAX
CALL 0x004a02f0
MOV ESI,EAX
XOR EDI,EDI
ADD ESP,0x8
CMP ESI,EDI
JNZ 0x00424451
XOR EAX,EAX
POP EDI
POP ESI
RET
PUSH EBX
MOV EBX,0x1
PUSH 0x4b7c64
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424484
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004b6d20],EDI
JMP 0x0042450a
PUSH 0x4b7c60
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x004244ae
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004b6d2c],EDI
JMP 0x0042450a
PUSH 0x4b7c5c
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424518
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
MOV ESI,EAX
ADD ESP,0x8
CMP ESI,EDI
JZ 0x00424512
PUSH ESI
CALL 0x0049ef90
FST dword ptr [0x004c7d78]
FCOMP dword ptr [0x004ac444]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x004244fa
MOV dword ptr [0x004c7d78],0x0
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
CMP ESI,EDI
JNZ 0x00424457
MOV EAX,EBX
POP EBX
POP EDI
POP ESI
RET
PUSH 0x4b7c58
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424566
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
MOV ESI,EAX
ADD ESP,0x8
CMP ESI,EDI
JZ 0x00424512
PUSH ESI
CALL 0x0049ef90
FST dword ptr [0x004c7d74]
FCOMP dword ptr [0x004ac444]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x004244fa
MOV dword ptr [0x004c7d74],0x0
JMP 0x004244fa
PUSH 0x4b7c50
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0042459f
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
MOV ESI,EAX
ADD ESP,0x8
CMP ESI,EDI
JZ 0x00424512
PUSH ESI
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x004b6718],EAX
JMP 0x004244fa
PUSH 0x4b7c48
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x004245cc
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004b4938],EDI
JMP 0x0042450a
PUSH 0x4b7c3c
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x004245f9
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004c7aa8],EDI
JMP 0x0042450a
PUSH 0x4b7c38
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424626
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x0050b5b0],EBX
JMP 0x0042450a
PUSH 0x4b7c34
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424653
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004b7a00],EDI
JMP 0x0042450a
PUSH 0x4b7c30
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00424680
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x004b79f8],EDI
JMP 0x0042450a
PUSH 0x4b7c28
PUSH ESI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x004244fa
PUSH 0x4b7c68
PUSH EDI
CALL 0x004a02f0
ADD ESP,0x8
MOV ESI,EAX
MOV dword ptr [0x0050b5c0],EBX
JMP 0x0042450a
