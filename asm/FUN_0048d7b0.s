; FUN_0048d7b0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX]
TEST ECX,ECX
JZ 0x0048d7c0
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV ECX,dword ptr [EAX + 0x4]
TEST ECX,ECX
JZ 0x0048d7cb
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX],0x0
RET
