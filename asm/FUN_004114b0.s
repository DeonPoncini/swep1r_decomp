; FUN_004114b0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x004114c1
MOV ECX,dword ptr [EAX + 0x20]
OR CH,0x1
MOV dword ptr [EAX + 0x20],ECX
RET
