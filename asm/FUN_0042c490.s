; FUN_0042c490
MOV ECX,dword ptr [ESP + 0x4]
CMP ECX,0x28
JGE 0x0042c4d1
MOV EDX,dword ptr [ESP + 0x8]
LEA EAX,[ECX + ECX*0x2]
PUSH ESI
MOV ESI,dword ptr [EDX]
SHL EAX,0x2
MOV dword ptr [EAX + 0xe99e20],ESI
MOV ESI,dword ptr [EDX + 0x4]
MOV dword ptr [EAX + 0xe99e24],ESI
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [EAX + 0xe99e28],EDX
MOV dword ptr [ECX*0x4 + 0xe99d80],0xc47a0000
MOV byte ptr [ECX + 0xe9a6e0],0x1
POP ESI
RET
