; FUN_00413870
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x520]
PUSH EAX
PUSH ESI
CALL 0x00413770
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x004138a1
MOV EAX,dword ptr [ESI + 0x51c]
TEST EAX,EAX
JZ 0x004138ac
PUSH EAX
PUSH ESI
CALL 0x004136f0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x004138ac
PUSH 0x1
PUSH EAX
CALL 0x00413610
ADD ESP,0x8
POP ESI
RET
