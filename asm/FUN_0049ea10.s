; FUN_0049ea10
MOV EAX,[0x004d1d7c]
TEST EAX,EAX
JZ 0x0049ea1b
CALL EAX
PUSH 0x4b2010
PUSH 0x4b2008
CALL 0x0049eb60
ADD ESP,0x8
PUSH 0x4b2004
PUSH 0x4b2000
CALL 0x0049eb60
ADD ESP,0x8
RET