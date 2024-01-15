; FUN_0042fb10
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
SHL EAX,0x4
ADD EAX,ECX
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ECX
RET
