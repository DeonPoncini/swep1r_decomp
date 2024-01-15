; FUN_00411490
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x004114a1
MOV ECX,dword ptr [EAX + 0x20]
AND CH,0xfe
MOV dword ptr [EAX + 0x20],ECX
RET
