; FUN_00466e40
TEST byte ptr [ESP + 0x8],0x4
JZ 0x00466e5f
MOV EAX,[0x00e287e0]
OR byte ptr [0x00e996e0],0x2
TEST EAX,EAX
JZ 0x00466e80
PUSH 0x3
PUSH 0x10
PUSH -0x4
JMP 0x00466e75
MOV EAX,[0x00e287e0]
AND byte ptr [0x00e996e0],0xfd
TEST EAX,EAX
JZ 0x00466e80
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x0050c048]
TEST AH,0x2
JZ 0x00466eb9
MOV EAX,[0x0050c040]
TEST EAX,EAX
JLE 0x00466eb9
MOV EAX,[0x00e98e90]
AND EAX,0x1100
CMP EAX,0x1100
JNZ 0x00466eb9
OR byte ptr [0x00e996e0],0x2
PUSH 0x0
PUSH 0x0
PUSH 0x0
CALL 0x00483a60
ADD ESP,0xc
RET
