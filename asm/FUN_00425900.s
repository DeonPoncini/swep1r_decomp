; FUN_00425900
MOV ECX,dword ptr [0x0050b5ec]
MOV EAX,dword ptr [ESP + 0x4]
XOR EDX,EDX
PUSH ESI
MOV dword ptr [ECX*0x4 + 0xe9edc0],EAX
INC ECX
MOV dword ptr [0x0050b5ec],ECX
MOV ECX,dword ptr [EAX + 0x100]
TEST CL,0x20
MOV dword ptr [EAX + 0xf0],EDX
JZ 0x00425934
MOV ESI,dword ptr [EAX + 0x10c]
JMP 0x0042593a
MOV ESI,dword ptr [EAX + 0x108]
AND ECX,0xf
MOV dword ptr [EAX + 0xf4],ESI
CMP CL,0x8
MOV dword ptr [EAX + 0xf8],ESI
MOV dword ptr [EAX + 0xfc],ESI
MOV dword ptr [EAX + 0xdc],EDX
JNZ 0x0042596a
MOV ECX,dword ptr [EAX + 0x124]
CMP ECX,EDX
JZ 0x0042596a
AND word ptr [ECX + 0xc],0xfff7
MOV ECX,dword ptr [EAX + 0x100]
POP ESI
OR ECX,0x1000000
MOV dword ptr [EAX + 0x100],ECX
RET
