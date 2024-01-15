; FUN_0041d060
MOV EDX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH 0x0
PUSH 0x1
PUSH EDX
PUSH 0xec7ba0
MOV [0x00ec7bc8],EAX
MOV dword ptr [0x00ec7bcc],ECX
MOV dword ptr [0x00ec7bc0],0x8
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x24
CALL 0x0041b760
ADD ESP,0x10
RET
