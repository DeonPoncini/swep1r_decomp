; FUN_0046a990
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX*0x4 + 0xe98e90]
TEST CH,0x20
JZ 0x0046a9b2
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x60]
TEST AH,0x10
JNZ 0x0046a9b2
OR AH,0x10
MOV dword ptr [ECX + 0x60],EAX
RET
