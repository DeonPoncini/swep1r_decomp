; FUN_00414e30
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x00414e50
MOV ECX,dword ptr [ESP + 0x8]
TEST ECX,ECX
MOV ECX,dword ptr [EAX + 0x20]
JZ 0x00414e4a
OR CH,0x8
MOV dword ptr [EAX + 0x20],ECX
RET
AND CH,0xf7
MOV dword ptr [EAX + 0x20],ECX
RET
