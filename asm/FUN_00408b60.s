; FUN_00408b60
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x100
LEA ECX,[ESP]
PUSH EBX
PUSH ESI
PUSH EDI
PUSH 0x4b4838
PUSH EAX
PUSH 0x4b252c
PUSH 0x4b4830
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x14
LEA EDX,[ESP + 0xc]
PUSH EDX
CALL 0x004877b0
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x00408bad
CALL 0x00487900
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBX
ADD ESP,0x100
RET
CALL 0x00487ae0
TEST EAX,EAX
JZ 0x00408e28
MOV EDI,dword ptr [0x00ec8e84]
MOV ESI,0x4b3e7c
MOV EAX,EDI
MOV DL,byte ptr [EAX]
MOV BL,byte ptr [ESI]
MOV CL,DL
CMP DL,BL
JNZ 0x00408bef
TEST CL,CL
JZ 0x00408beb
MOV DL,byte ptr [EAX + 0x1]
MOV BL,byte ptr [ESI + 0x1]
MOV CL,DL
CMP DL,BL
JNZ 0x00408bef
ADD EAX,0x2
ADD ESI,0x2
TEST CL,CL
JNZ 0x00408bc7
XOR EAX,EAX
JMP 0x00408bf4
SBB EAX,EAX
SBB EAX,-0x1
TEST EAX,EAX
JZ 0x00408e28
PUSH 0x4b4828
PUSH EDI
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408df6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b48b4
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408c4c
MOV ECX,dword ptr [0x00ec8e90]
PUSH 0x4b480c
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86a0],EAX
JMP 0x00408df6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b48a8
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408c86
MOV EAX,[0x00ec8e90]
PUSH 0x4b480c
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86a4],EAX
JMP 0x00408df6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b4894
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408cc1
MOV EDX,dword ptr [0x00ec8e90]
PUSH 0x4b480c
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86a8],EAX
JMP 0x00408df6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b488c
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408cfb
MOV ECX,dword ptr [0x00ec8e90]
PUSH 0x4b480c
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86ac],EAX
JMP 0x00408df6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b4880
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408d35
MOV EAX,[0x00ec8e90]
PUSH 0x4b480c
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86b0],EAX
JMP 0x00408df6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b4870
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408d70
MOV EDX,dword ptr [0x00ec8e90]
PUSH 0x4b480c
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
NEG EAX
SBB EAX,EAX
INC EAX
MOV [0x00ec86b4],EAX
JMP 0x00408df6
MOV EAX,[0x00ec8e8c]
PUSH 0x4b4864
PUSH EAX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408d9d
MOV ECX,dword ptr [0x00ec8e90]
PUSH ECX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec86b8],EAX
JMP 0x00408df6
MOV EDX,dword ptr [0x00ec8e8c]
PUSH 0x4b4854
PUSH EDX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408dca
MOV EAX,[0x00ec8e90]
PUSH EAX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec86bc],EAX
JMP 0x00408df6
MOV ECX,dword ptr [0x00ec8e8c]
PUSH 0x4b4844
PUSH ECX
CALL 0x0049ec50
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x00408e17
MOV EDX,dword ptr [0x00ec8e90]
PUSH EDX
CALL 0x0049f0e0
ADD ESP,0x4
MOV [0x00ec86c0],EAX
CALL 0x00487ae0
TEST EAX,EAX
JNZ 0x00408bba
CALL 0x00487900
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x100
RET
CALL 0x00487900
XOR EAX,EAX
POP EDI
POP ESI
POP EBX
ADD ESP,0x100
RET
CALL 0x00487900
POP EDI
POP ESI
MOV EAX,0x1
POP EBX
ADD ESP,0x100
RET
