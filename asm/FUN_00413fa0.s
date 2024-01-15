; FUN_00413fa0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX + 0x53c]
TEST ECX,ECX
JZ 0x00413fb5
MOV EAX,dword ptr [EAX + 0x540]
RET
OR EAX,0xffffffff
RET
