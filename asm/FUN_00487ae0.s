; FUN_00487ae0
CALL 0x00487b20
TEST EAX,EAX
JZ 0x00487b0e
MOV EAX,[0x00ec9e84]
PUSH EAX
CALL 0x00487a50
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x00487b0e
MOV EAX,[0x00ec8e80]
TEST EAX,EAX
JNZ 0x00487b11
CALL 0x00487b20
TEST EAX,EAX
JNZ 0x00487ae9
RET
XOR EAX,EAX
RET
MOV EAX,0x1
RET
