; FUN_0048e680
MOV EAX,[0x00deb108]
PUSH ESI
TEST EAX,EAX
JZ 0x0048e696
MOV ECX,dword ptr [ESP + 0x8]
PUSH ECX
CALL EAX
ADD ESP,0x4
POP ESI
RET
MOV EDX,dword ptr [0x00ecc428]
PUSH 0x94
CALL dword ptr [EDX + 0x20]
MOV ESI,EAX
ADD ESP,0x4
TEST ESI,ESI
JZ 0x0048e6c3
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
PUSH EAX
CALL 0x0048e6d0
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0048e6c3
MOV EAX,ESI
POP ESI
RET
PUSH ESI
CALL 0x0048eac0
ADD ESP,0x4
XOR EAX,EAX
POP ESI
RET
