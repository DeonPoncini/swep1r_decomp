; FUN_00421d90
MOV EAX,[0x004b6d20]
TEST EAX,EAX
JNZ 0x00421d9c
XOR EAX,EAX
RET
PUSH 0x2
CALL 0x00408640
MOV EAX,[0x004eb474]
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x00421db9
CALL 0x004848a0
TEST EAX,EAX
JNZ 0x00421db9
RET
PUSH 0x4
CALL 0x00408640
ADD ESP,0x4
PUSH 0x4b0
CALL 0x0048bee0
ADD ESP,0x4
MOV [0x004eb464],EAX
TEST EAX,EAX
JNZ 0x00421dda
RET
PUSH 0x6
CALL 0x00408640
MOV EAX,[0x004eb474]
ADD ESP,0x4
TEST EAX,EAX
MOV dword ptr [0x004eb458],0x1
MOV dword ptr [0x004eb450],0x1
JNZ 0x00421e08
CALL 0x00423210
JMP 0x00421e14
MOV EAX,[0x004eb478]
PUSH EAX
CALL dword ptr [0x004ac0ac]
PUSH 0x8
CALL 0x00408640
ADD ESP,0x4
PUSH 0x4b2640
CALL 0x00422440
ADD ESP,0x4
TEST EAX,EAX
JGE 0x00421e41
CALL 0x004220b0
PUSH 0x4b2640
CALL 0x00422140
ADD ESP,0x4
MOV EAX,[0x004b6d20]
TEST EAX,EAX
JNZ 0x00421e55
PUSH 0x0
CALL 0x00421eb0
ADD ESP,0x4
RET
PUSH 0xa
CALL 0x00408640
ADD ESP,0x4
PUSH 0x4b740c
CALL 0x004877b0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x00421e77
CALL 0x00421f30
JMP 0x00421e7c
CALL 0x00422060
CALL 0x00487900
PUSH 0xf
CALL 0x00408640
ADD ESP,0x4
PUSH 0x3f800000
CALL 0x00484a80
ADD ESP,0x4
CALL 0x00449ea0
PUSH 0x14
CALL 0x00408640
ADD ESP,0x4
MOV EAX,0x1
RET