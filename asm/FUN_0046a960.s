; FUN_0046a960
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0046a96f
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0x68],ECX
RET
