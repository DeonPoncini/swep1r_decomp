; FUN_00483a90
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
LEA ECX,[EAX + EAX*0x4]
LEA ECX,[ECX + ECX*0x8]
LEA EDX,[EAX + ECX*0x2]
MOV ECX,dword ptr [0x0050ccf0]
TEST ECX,ECX
LEA ESI,[EDX*0x4 + 0xdfb040]
JZ 0x00483b7a
CMP EAX,0x1
MOV EAX,[0x0050ccf8]
JNZ 0x00483b17
TEST EAX,EAX
JZ 0x00483ad2
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050cd00]
TEST EAX,EAX
JZ 0x00483aec
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050ccfc]
TEST EAX,EAX
JZ 0x00483b06
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050cd04]
TEST EAX,EAX
JZ 0x00483b7a
PUSH 0x2
PUSH 0x10
PUSH 0x3
JMP 0x00483b6f
TEST EAX,EAX
JZ 0x00483b2c
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050cd00]
TEST EAX,EAX
JZ 0x00483b46
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050ccfc]
TEST EAX,EAX
JZ 0x00483b60
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050cd04]
TEST EAX,EAX
JZ 0x00483b7a
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
PUSH 0xe229b0
CALL 0x0044e000
ADD ESP,0x4
PUSH ESI
PUSH 0xe229b0
CALL 0x0044db70
ADD ESP,0x8
POP ESI
RET
