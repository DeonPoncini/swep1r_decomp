; FUN_004137d0
MOV ECX,dword ptr [ESP + 0x4]
XOR EAX,EAX
MOV ECX,dword ptr [ECX + 0xc]
TEST ECX,ECX
JZ 0x004137f0
MOV EDX,dword ptr [ECX + 0x18]
AND EDX,0xc
CMP DL,0xc
JNZ 0x004137e9
INC EAX
MOV ECX,dword ptr [ECX + 0x4]
TEST ECX,ECX
JNZ 0x004137dd
RET
