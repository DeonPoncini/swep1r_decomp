; FUN_00486140
MOV EAX,dword ptr [ESP + 0x4]
CMP EAX,0x30
JC 0x00486159
CMP EAX,0x32
JA 0x00486159
MOV dword ptr [0x004c8170],0x1
RET
CMP EAX,0xb
JA 0x00486168
MOV dword ptr [0x0050fec4],0x1
RET
