; FUN_004117b0
MOV EDX,dword ptr [ESP + 0x4]
MOV EAX,0x4d8160
XOR ECX,ECX
CMP dword ptr [EAX + 0xc],EDX
JNZ 0x004117cb
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX],ECX
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0xc],ECX
ADD EAX,0x10
CMP EAX,0x4d8200
JL 0x004117bb
RET
