; FUN_0041d3b0
MOV EAX,[0x004d5e00]
PUSH ESI
TEST EAX,EAX
JZ 0x0041d415
MOV ECX,dword ptr [ESP + 0x8]
XOR EDX,EDX
LEA EAX,[ECX + ECX*0x2]
LEA EAX,[EAX*0x4 + 0x4ea020]
MOV ESI,EAX
MOV dword ptr [ESI],EDX
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI + 0x8],EDX
MOV dword ptr [EAX],0x1
MOV EAX,[0x004eb1c8]
TEST EAX,EAX
JZ 0x0041d415
PUSH 0x1
PUSH 0x1
PUSH -0x1
PUSH 0xec7ba0
MOV dword ptr [0x00ec7bc8],ECX
MOV dword ptr [0x00ec7ba4],EDX
MOV word ptr [0x00ec7bc4],0x2c
MOV dword ptr [0x00ec7bc0],0x4
CALL 0x0041b760
ADD ESP,0x10
POP ESI
RET
