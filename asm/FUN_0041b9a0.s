; FUN_0041b9a0
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
MOV EAX,0x4e991c
CMP EDX,dword ptr [EAX + -0x4]
JNZ 0x0041b9b6
CMP ECX,dword ptr [EAX]
JZ 0x0041b9ed
ADD EAX,0x8
CMP EAX,0x4e9d1c
JC 0x0041b9ad
MOV EAX,[0x004e9ec0]
MOV dword ptr [EAX*0x8 + 0x4e9918],EDX
MOV dword ptr [EAX*0x8 + 0x4e991c],ECX
INC EAX
CMP EAX,0x80
MOV [0x004e9ec0],EAX
JC 0x0041b9ea
MOV dword ptr [0x004e9ec0],0x0
XOR EAX,EAX
RET
MOV EAX,0x1
RET