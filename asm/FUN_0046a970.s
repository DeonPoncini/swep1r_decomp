; FUN_0046a970
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0046a982
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0xf0],ECX
RET
