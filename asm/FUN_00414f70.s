; FUN_00414f70
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JZ 0x00414f88
MOV EAX,dword ptr [ESI + 0x18]
TEST EAX,EAX
JZ 0x00414fd4
MOV EAX,dword ptr [ESI + 0x20]
TEST AH,0x1
JNZ 0x00414fd4
MOV EAX,[0x004d8794]
TEST EAX,EAX
JZ 0x00414f9f
MOV ECX,dword ptr [EAX + 0x20]
AND ECX,0xffffffdf
MOV dword ptr [EAX + 0x20],ECX
MOV EAX,[0x004d8794]
PUSH 0x0
PUSH 0x0
PUSH 0xd
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
MOV dword ptr [0x004d8794],ESI
TEST ESI,ESI
JZ 0x00414fc0
MOV EAX,dword ptr [ESI + 0x20]
OR AL,0x20
MOV dword ptr [ESI + 0x20],EAX
MOV EAX,[0x004d8794]
PUSH 0x0
PUSH 0x1
PUSH 0xd
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
POP ESI
RET