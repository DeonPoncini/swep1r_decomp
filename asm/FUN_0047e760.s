; FUN_0047e760
MOV ECX,dword ptr [ESP + 0x4]
TEST ECX,ECX
JZ 0x0047e781
MOV EAX,[0x0050cb54]
CMP EAX,0xc8
JGE 0x0047e781
MOV dword ptr [EAX*0x4 + 0xe25ac0],ECX
INC EAX
MOV [0x0050cb54],EAX
RET
