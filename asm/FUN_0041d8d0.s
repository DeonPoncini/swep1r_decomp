; FUN_0041d8d0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0041d92b
PUSH ESI
MOV ESI,dword ptr [EAX + 0x64]
OR ESI,0x40000
MOV dword ptr [EAX + 0x64],ESI
MOV EAX,dword ptr [EAX + 0x1e70]
MOV ESI,dword ptr [EAX]
PUSH ESI
PUSH 0x68656c6c
PUSH 0x1
PUSH -0x1
CALL 0x0041df10
ADD ESP,0x10
SHL ESI,0x4
MOV dword ptr [ESI + 0xea05c0],0x29a
MOV dword ptr [ESI + 0xea05c4],0x0
MOV dword ptr [ESI + 0xea05c8],0x0
MOV dword ptr [ESI + 0xea05cc],0x0
POP ESI
RET
