; FUN_00493e10
MOV EAX,[0x00df7fd4]
TEST EAX,EAX
JZ 0x00493e1e
CALL 0x00493e60
MOV EAX,[0x00df7fd0]
TEST EAX,EAX
JZ 0x00493e31
MOV dword ptr [0x00df7fd0],0x0
RET
