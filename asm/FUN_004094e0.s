; FUN_004094e0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JNZ 0x004094f3
PUSH 0x0
CALL 0x0048fab0
ADD ESP,0x4
RET
MOV EAX,[0x004d79d8]
PUSH EAX
CALL 0x0048fab0
ADD ESP,0x4
RET