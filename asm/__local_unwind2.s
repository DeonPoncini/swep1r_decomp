; __local_unwind2
PUSH EBX
PUSH ESI
PUSH EDI
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH -0x2
PUSH 0x4a5900
PUSH dword ptr FS:[0x0]
MOV dword ptr FS:[0x0],ESP
MOV EAX,dword ptr [ESP + 0x20]
MOV EBX,dword ptr [EAX + 0x8]
MOV ESI,dword ptr [EAX + 0xc]
CMP ESI,-0x1
JZ 0x004a597c
CMP ESI,dword ptr [ESP + 0x24]
JZ 0x004a597c
LEA ESI,[ESI + ESI*0x2]
MOV ECX,dword ptr [EBX + ESI*0x4]
MOV dword ptr [ESP + 0x8],ECX
MOV dword ptr [EAX + 0xc],ECX
CMP dword ptr [EBX + ESI*0x4 + 0x4],0x0
JNZ 0x004a597a
PUSH 0x101
MOV EAX,dword ptr [EBX + ESI*0x4 + 0x8]
CALL 0x004a59b6
CALL dword ptr [EBX + ESI*0x4 + 0x8]
JMP 0x004a593f
POP dword ptr FS:[0x0]
ADD ESP,0xc
POP EDI
POP ESI
POP EBX
RET
