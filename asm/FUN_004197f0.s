; FUN_004197f0
MOV EAX,dword ptr [ESP + 0x4]
XOR ECX,ECX
CMP EAX,ECX
JZ 0x00419824
CMP dword ptr [ESP + 0x8],ECX
JZ 0x0041980c
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX],ECX
RET
MOV ECX,0x1a
MOV dword ptr [EAX + 0x8],0x14
MOV dword ptr [EAX],0x14
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x4],ECX
RET
