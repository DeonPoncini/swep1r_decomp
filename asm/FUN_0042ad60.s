; FUN_0042ad60
MOV EDX,dword ptr [0x0050c070]
PUSH ESI
CMP EDX,-0x2
JNZ 0x0042ad7d
MOV EAX,0x3
OR ECX,0xffffffff
DEC EAX
MOV dword ptr [0x0050c07c],ECX
JNZ 0x0042ad74
XOR ESI,ESI
MOV dword ptr [0x0050c04c],EDX
PUSH ESI
PUSH 0x4a646765
MOV dword ptr [0x0050c054],ESI
MOV dword ptr [0x00e9a9b4],ESI
CALL 0x00450b30
MOV AX,word ptr [EAX + 0x6]
ADD ESP,0x8
AND EAX,0x1000
TEST AX,AX
JZ 0x0042adc3
MOV ECX,dword ptr [0x00e9a9b4]
XOR EAX,EAX
MOV [0x0050c07c],EAX
MOV dword ptr [ECX*0x4 + 0xe9a9c0],EAX
POP ESI
RET
MOV ECX,dword ptr [0x00e9a9b4]
MOV EAX,0x2
MOV dword ptr [0x0050c064],ESI
MOV dword ptr [0x0050c04c],ESI
MOV [0x0050c07c],EAX
MOV dword ptr [ECX*0x4 + 0xe9a9c0],EAX
POP ESI
RET
