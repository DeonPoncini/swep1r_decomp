; FUN_0040a160
MOV EDX,dword ptr [ESP + 0x4]
XOR EAX,EAX
MOV ECX,0x4d6f10
CMP EDX,dword ptr [ECX]
JBE 0x0040a17e
ADD ECX,0x174
INC EAX
CMP ECX,0x4d77c8
JL 0x0040a16b
CMP EAX,0x6
JL 0x0040a186
OR EAX,0xffffffff
RET
