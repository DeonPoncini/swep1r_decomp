; FUN_00485570
MOV EAX,[0x0050fea8]
TEST EAX,EAX
JNZ 0x0048557f
MOV EAX,0x1
RET
PUSH 0x1
MOV dword ptr [0x0050feac],0x1
CALL 0x00485a30
ADD ESP,0x4
XOR EAX,EAX
RET
