; FUN_0041d0c0
MOV EAX,[0x004d5e00]
TEST EAX,EAX
JZ 0x0041d15e
MOV EDX,dword ptr [ESP + 0x4]
TEST EDX,EDX
JZ 0x0041d15e
PUSH EDI
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
PUSH ESI
MOV ESI,ECX
INC ESI
CMP ESI,0x80
JC 0x0041d0f7
MOV ESI,0x80
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x14]
MOV [0x00ec7bc8],EAX
LEA EAX,[ESI + -0x1]
PUSH EAX
PUSH EDX
PUSH 0xec7bd4
MOV dword ptr [0x00ec7bcc],ECX
MOV dword ptr [0x00ec7bd0],ESI
CALL 0x0049f340
ADD ESP,0xc
LEA EAX,[ESI + 0xec7bd4]
PUSH 0x1
MOV byte ptr [EAX + -0x1],0x0
PUSH 0x1
SUB EAX,0xec7bc8
PUSH -0x1
PUSH 0xec7ba0
MOV [0x00ec7bc0],EAX
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x2
CALL 0x0041b760
ADD ESP,0x10
POP ESI
POP EDI
RET
