; FUN_004a0a60
PUSH EBP
MOV EBP,ESP
PUSH -0x1
PUSH 0x4af9c8
PUSH 0x4a59d8
MOV EAX,FS:[0x0]
PUSH EAX
MOV dword ptr FS:[0x0],ESP
ADD ESP,-0x58
PUSH EBX
PUSH ESI
PUSH EDI
MOV dword ptr [EBP + -0x18],ESP
CALL dword ptr [0x004ac1a0]
XOR EDX,EDX
MOV DL,AH
MOV dword ptr [0x00dfaa84],EDX
MOV ECX,EAX
AND ECX,0xff
MOV dword ptr [0x00dfaa80],ECX
SHL ECX,0x8
ADD ECX,EDX
MOV dword ptr [0x00dfaa7c],ECX
SHR EAX,0x10
MOV [0x00dfaa78],EAX
CALL 0x004a3120
TEST EAX,EAX
JNZ 0x004a0aca
PUSH 0x1c
CALL 0x004a0c40
ADD ESP,0x4
CALL 0x004a3c40
TEST EAX,EAX
JNZ 0x004a0add
PUSH 0x10
CALL 0x004a0c40
ADD ESP,0x4
MOV dword ptr [EBP + -0x4],0x0
CALL 0x004a3de0
CALL 0x004a58d0
CALL dword ptr [0x004ac1b4]
MOV [0x00ecd610],EAX
CALL 0x004a5270
MOV [0x00dfaac0],EAX
TEST EAX,EAX
JZ 0x004a0b10
MOV EAX,[0x00ecd610]
TEST EAX,EAX
JNZ 0x004a0b1a
PUSH -0x1
CALL 0x0049ea40
ADD ESP,0x4
CALL 0x004a4fc0
CALL 0x004a4ed0
CALL 0x0049ea10
MOV ESI,dword ptr [0x00ecd610]
MOV dword ptr [EBP + -0x64],ESI
CMP byte ptr [ESI],0x22
JNZ 0x004a0bf9
INC ESI
MOV dword ptr [EBP + -0x64],ESI
MOV AL,byte ptr [ESI]
CMP AL,0x22
JZ 0x004a0b61
TEST AL,AL
JZ 0x004a0b61
AND EAX,0xff
PUSH EAX
CALL 0x004a4e70
ADD ESP,0x4
TEST EAX,EAX
JZ 0x004a0b3b
INC ESI
MOV dword ptr [EBP + -0x64],ESI
JMP 0x004a0b3b
CMP byte ptr [ESI],0x22
JNZ 0x004a0b6a
INC ESI
MOV dword ptr [EBP + -0x64],ESI
MOV AL,byte ptr [ESI]
TEST AL,AL
JZ 0x004a0b7a
CMP AL,0x20
JA 0x004a0b7a
INC ESI
MOV dword ptr [EBP + -0x64],ESI
JMP 0x004a0b6a
MOV dword ptr [EBP + -0x30],0x0
LEA EAX,[EBP + -0x5c]
PUSH EAX
CALL dword ptr [0x004ac1a4]
TEST byte ptr [EBP + -0x30],0x1
JZ 0x004a0b9b
MOV EAX,dword ptr [EBP + -0x2c]
AND EAX,0xffff
JMP 0x004a0ba0
MOV EAX,0xa
PUSH EAX
PUSH ESI
PUSH 0x0
PUSH 0x0
CALL dword ptr [0x004ac08c]
PUSH EAX
CALL 0x004238d0
MOV dword ptr [EBP + -0x60],EAX
PUSH EAX
CALL 0x0049ea40
JMP 0x004a0bde
ADD ESP,0x4
MOV dword ptr [EBP + -0x4],0xffffffff
MOV ECX,dword ptr [EBP + -0x10]
MOV dword ptr FS:[0x0],ECX
POP EDI
POP ESI
POP EBX
MOV ESP,EBP
POP EBP
RET
CMP byte ptr [ESI],0x20
JBE 0x004a0b6a
INC ESI
MOV dword ptr [EBP + -0x64],ESI
JMP 0x004a0bf9
