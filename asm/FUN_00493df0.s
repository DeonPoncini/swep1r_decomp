; FUN_00493df0
MOV EAX,[0x00df7fd0]
TEST EAX,EAX
JZ 0x00493dff
MOV EAX,0xfffffffe
RET
MOV dword ptr [0x00df7fd0],0x1
XOR EAX,EAX
RET
