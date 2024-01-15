; FUN_0048d790
MOV EDX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ECX],EDX
MOV dword ptr [ECX + 0x4],EAX
MOV dword ptr [EDX + 0x4],ECX
TEST EAX,EAX
JZ 0x0048d7a9
MOV dword ptr [EAX],ECX
RET
