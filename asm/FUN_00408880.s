; FUN_00408880
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x140
LEA ECX,[ESP + 0x40]
PUSH 0x4b4838
PUSH EAX
PUSH 0x4b252c
PUSH 0x4b4830
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x14
LEA EDX,[ESP + 0x40]
PUSH EDX
CALL 0x004877d0
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004088c7
CALL 0x00487960
OR EAX,0xffffffff
ADD ESP,0x140
RET
LEA EAX,[ESP + 0x20]
PUSH 0x4b4828
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x8
LEA ECX,[ESP + 0x20]
PUSH ECX
PUSH 0x4b4810
CALL 0x004879f0
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86a0]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x00408906
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47f8
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86a4]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x0040894b
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47ec
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86a8]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x00408990
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47d8
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86ac]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x004089d5
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47cc
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86b0]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x00408a1a
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47bc
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86b4]
TEST EAX,EAX
MOV EAX,0x4b480c
JNZ 0x00408a5f
MOV EAX,0x4b4808
PUSH EAX
LEA EDX,[ESP + 0x4]
PUSH 0x4b47a8
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EDX,dword ptr [0x00ec86b8]
LEA EAX,[ESP]
PUSH EDX
PUSH 0x4b4798
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP]
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH EDX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV EAX,[0x00ec86bc]
LEA ECX,[ESP]
PUSH EAX
PUSH 0x4b4788
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP]
LEA EAX,[ESP + 0x20]
PUSH EDX
PUSH EAX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
MOV ECX,dword ptr [0x00ec86c0]
LEA EDX,[ESP]
PUSH ECX
PUSH 0x4b4778
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH 0x4b3d10
CALL 0x004879f0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00408b3d
PUSH 0x4b3cd8
CALL 0x004879a0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x00408b4b
CALL 0x00487960
XOR EAX,EAX
ADD ESP,0x140
RET
CALL 0x00487960
MOV EAX,0x1
ADD ESP,0x140
RET