; FUN_00414eb0
MOV EAX,[0x004d878c]
TEST EAX,EAX
JZ 0x00414ec7
MOV ECX,dword ptr [EAX + 0x20]
AND ECX,0xffffffef
MOV dword ptr [EAX + 0x20],ECX
MOV EAX,[0x004d878c]
PUSH 0x0
PUSH 0x0
PUSH 0x1
PUSH EAX
CALL 0x004151a0
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0x10
TEST EAX,EAX
MOV [0x004d878c],EAX
JZ 0x00414ee7
OR dword ptr [EAX + 0x20],0x10
PUSH 0x0
PUSH 0x1
PUSH 0x1
PUSH EAX
CALL 0x004151a0
ADD ESP,0x10
RET