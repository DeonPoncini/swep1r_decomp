; FUN_004172f0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x20]
TEST AL,0x2
JZ 0x0041731c
MOV AL,byte ptr [ESI + 0x4cf]
MOV CL,byte ptr [ESI + 0x4ce]
MOV DL,byte ptr [ESI + 0x4cd]
PUSH EAX
MOV AL,byte ptr [ESI + 0x4cc]
PUSH ECX
PUSH EDX
JMP 0x004173a3
TEST AL,0x20
JZ 0x00417352
MOV CL,byte ptr [ESI + 0x4d3]
MOV DL,byte ptr [ESI + 0x4d2]
MOV AL,byte ptr [ESI + 0x4d1]
PUSH ECX
MOV CL,byte ptr [ESI + 0x4d0]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00414be0
ADD ESP,0x14
PUSH 0x1
PUSH ESI
CALL 0x00418cb0
ADD ESP,0x8
POP ESI
RET
TEST AL,0x10
JZ 0x00417388
MOV DL,byte ptr [ESI + 0x4cb]
MOV AL,byte ptr [ESI + 0x4ca]
MOV CL,byte ptr [ESI + 0x4c9]
PUSH EDX
MOV DL,byte ptr [ESI + 0x4c8]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x00414be0
ADD ESP,0x14
PUSH 0x1
PUSH ESI
CALL 0x00418cb0
ADD ESP,0x8
POP ESI
RET
MOV AL,byte ptr [ESI + 0x4c7]
MOV CL,byte ptr [ESI + 0x4c6]
MOV DL,byte ptr [ESI + 0x4c5]
PUSH EAX
MOV AL,byte ptr [ESI + 0x4c4]
PUSH ECX
PUSH EDX
PUSH EAX
PUSH ESI
CALL 0x00414be0
ADD ESP,0x14
PUSH 0x0
PUSH ESI
CALL 0x00418cb0
ADD ESP,0x8
POP ESI
RET