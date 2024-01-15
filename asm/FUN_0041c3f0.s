; FUN_0041c3f0
MOV EAX,[0x004d5e00]
TEST EAX,EAX
JZ 0x0041c44a
MOV ECX,dword ptr [0x00ec7620]
MOV EAX,[0x004eb3b4]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH 0x0
PUSH 0x1
PUSH ECX
PUSH 0xec7ba0
MOV [0x00ec7bc8],EAX
MOV dword ptr [0x00ec7bcc],ESI
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x3d
MOV dword ptr [0x00ec7bc0],0x8
CALL 0x0041b760
ADD ESP,0x10
MOV dword ptr [0x004eb234],ESI
POP ESI
RET
