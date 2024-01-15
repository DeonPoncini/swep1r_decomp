; FUN_00465820
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x00465836
MOV ECX,dword ptr [EAX + 0x14]
INC ECX
MOV dword ptr [EAX + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0x18],ECX
RET
