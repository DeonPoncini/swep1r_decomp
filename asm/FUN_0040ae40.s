; FUN_0040ae40
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x100
LEA ECX,[ESP]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH 0x4b4d64
PUSH EAX
PUSH 0x4b252c
PUSH 0x4b4830
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x14
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL 0x004877b0
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x0040ae8f
CALL 0x00487900
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x100
RET
CALL 0x00487ae0
TEST EAX,EAX
MOV EBP,0x1
JZ 0x0040b0e3
XOR EBX,EBX
MOV EDI,dword ptr [0x00ec8e84]
MOV ESI,0x4b3e7c
MOV EAX,EDI
MOV DL,byte ptr [EAX]
MOV CL,DL
CMP DL,byte ptr [ESI]
JNZ 0x0040aed4
CMP CL,BL
JZ 0x0040aed0
MOV DL,byte ptr [EAX + 0x1]
MOV CL,DL
CMP DL,byte ptr [ESI + 0x1]
JNZ 0x0040aed4
ADD EAX,0x2
ADD ESI,0x2
CMP CL,BL
JNZ 0x0040aeb0
XOR EAX,EAX
JMP 0x0040aed9
SBB EAX,EAX
SBB EAX,-0x1
CMP EAX,EBX
JZ 0x0040b0e3
PUSH 0x4b4d54
PUSH EDI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040b0d6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b4dbc
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040af27
MOV ECX,dword ptr [0x00ec8e90]
PUSH ECX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83e0],EAX
JMP 0x0040b0d6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b4db0
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040af57
MOV EAX,[0x00ec8e90]
PUSH EAX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83e4],EAX
JMP 0x0040b0d6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b4da4
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040af88
MOV EDX,dword ptr [0x00ec8e90]
PUSH EDX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83e8],EAX
JMP 0x0040b0d6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b4d9c
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040afb8
MOV ECX,dword ptr [0x00ec8e90]
PUSH ECX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83ec],EAX
JMP 0x0040b0d6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b4d94
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040afe8
MOV EAX,[0x00ec8e90]
PUSH EAX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83f0],EAX
JMP 0x0040b0d6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b4d88
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040b019
MOV EDX,dword ptr [0x00ec8e90]
PUSH EDX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec83f4],EAX
JMP 0x0040b0d6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b4d80
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040b053
MOV ECX,dword ptr [0x00ec8e90]
PUSH 0x4b480c
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec83f8],EAX
JMP 0x0040b0d6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b4d70
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040b08a
MOV EAX,[0x00ec8e90]
PUSH 0x4b480c
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec83fc],EAX
JMP 0x0040b0d6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b3e0c
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040b0fa
CMP dword ptr [0x004b4938],EBX
JZ 0x0040b0d0
CMP dword ptr [0x004b2914],EBX
JZ 0x0040b0d0
MOV EDX,dword ptr [0x00ec8e90]
PUSH 0x4b3e04
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
MOV dword ptr [0x004b2910],EBP
TEST EAX,EAX
JZ 0x0040b0d6
MOV dword ptr [0x004b2910],EBX
CALL 0x00487ae0
TEST EAX,EAX
JNZ 0x0040aea3
CALL 0x00487900
CALL 0x0040a680
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x100
RET
CALL 0x00487900
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
ADD ESP,0x100
RET
