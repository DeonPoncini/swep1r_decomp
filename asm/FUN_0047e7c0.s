; FUN_0047e7c0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JL 0x0047e7d8
CMP EAX,dword ptr [0x0050cb54]
JGE 0x0047e7d8
MOV EAX,dword ptr [EAX*0x4 + 0xe25ac0]
RET
XOR EAX,EAX
RET