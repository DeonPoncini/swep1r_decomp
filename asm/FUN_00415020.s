; FUN_00415020
MOV EAX,[0x004d87a0]
PUSH EBX
PUSH EBP
PUSH ESI
TEST EAX,EAX
PUSH EDI
JZ 0x00415032
CALL 0x00412630
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JNZ 0x0041503f
MOV EAX,[0x004b5d74]
XOR EBX,EBX
MOV EBP,EAX
TEST EAX,EAX
JZ 0x0041505c
MOV ECX,dword ptr [EAX + 0x20]
TEST CL,0x40
JZ 0x00415055
TEST CL,0x1
JZ 0x00415055
INC EBX
MOV EAX,dword ptr [EAX + 0x4]
TEST EAX,EAX
JNZ 0x00415047
XOR EDI,EDI
MOV ESI,EBP
TEST EBP,EBP
JZ 0x00415094
TEST byte ptr [ESI + 0x20],0x40
JZ 0x0041508d
PUSH ESI
CALL 0x00416930
ADD ESP,0x4
OR EDI,EAX
PUSH ESI
CALL 0x004151f0
ADD ESP,0x4
PUSH 0x0
PUSH 0x0
PUSH 0x9
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
MOV ESI,dword ptr [ESI + 0x4]
TEST ESI,ESI
JNZ 0x00415064
TEST EDI,EDI
JNZ 0x004150b0
TEST EBX,EBX
JZ 0x004150b0
MOV EAX,dword ptr [EBP + 0x8]
TEST EAX,EAX
JZ 0x004150b0
PUSH EDI
PUSH EDI
PUSH 0x48
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
TEST EBP,EBP
MOV ESI,EBP
JZ 0x004150d3
TEST byte ptr [ESI + 0x20],0x40
JZ 0x004150cc
MOV EAX,dword ptr [ESI + 0xc]
TEST EAX,EAX
JZ 0x004150cc
PUSH EAX
CALL 0x00415020
ADD ESP,0x4
MOV ESI,dword ptr [ESI + 0x4]
TEST ESI,ESI
JNZ 0x004150b6
POP EDI
POP ESI
POP EBP
POP EBX
RET
