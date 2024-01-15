; FUN_0042c4e0
MOV EAX,dword ptr [ESP + 0x4]
CMP EAX,0xa
JGE 0x0042c4ff
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX*0x4 + 0xe9a5a0],ECX
MOV dword ptr [EAX*0x4 + 0xe9a400],EDX
RET
