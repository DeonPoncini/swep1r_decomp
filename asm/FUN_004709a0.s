; FUN_004709a0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESI + 0x1994]
TEST ECX,ECX
JZ 0x00470a3d
TEST byte ptr [ESI + 0x64],0x40
JZ 0x004709c6
TEST dword ptr [ESI + 0x60],0x84000
JNZ 0x004709c6
XOR EAX,EAX
JMP 0x004709cb
MOV EAX,0x1
MOV EDX,dword ptr [0x0050c048]
TEST DH,0x1
JZ 0x004709f0
MOV EDX,dword ptr [0x0050c040]
TEST EDX,EDX
JZ 0x004709f0
MOV EDX,dword ptr [0x00e98e90]
TEST DH,0x10
JZ 0x004709f0
MOV EAX,0x1
TEST EAX,EAX
JZ 0x00470a07
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH ECX
CALL 0x00431a50
ADD ESP,0x14
POP ESI
RET
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ECX
CALL 0x00431a50
FLD dword ptr [ESI + 0x188]
FADD ST0,ST0
MOV EAX,dword ptr [ESI + 0x1994]
ADD ESP,0x14
FSUB dword ptr [0x004ada44]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x0
PUSH 0x0
PUSH EAX
CALL 0x00431620
ADD ESP,0x10
POP ESI
RET
