; FUN_0041e5a0
MOV EAX,[0x004d5e00]
TEST EAX,EAX
JZ 0x0041e611
MOV EAX,[0x00ea05a0]
MOV ECX,dword ptr [0x00ea05a4]
MOV EDX,dword ptr [0x00ea05a8]
PUSH 0x0
MOV [0x00ec7bc8],EAX
MOV EAX,[0x00ea05ac]
MOV dword ptr [0x00ec7bcc],ECX
MOV ECX,dword ptr [0x00ea05b0]
PUSH 0x1
PUSH -0x1
PUSH 0xec7ba0
MOV dword ptr [0x00ec7bd0],EDX
MOV [0x00ec7bd4],EAX
MOV dword ptr [0x00ec7bd8],ECX
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x38
MOV dword ptr [0x00ec7bc0],0x14
CALL 0x0041b760
ADD ESP,0x10
RET
