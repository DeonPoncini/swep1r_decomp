; FUN_00413740
MOV ECX,dword ptr [ESP + 0x4]
XOR EAX,EAX
MOV ECX,dword ptr [ECX + 0xc]
TEST ECX,ECX
JZ 0x00413762
MOV EDX,0x80000
TEST dword ptr [ECX + 0x508],EDX
JNZ 0x00413765
MOV ECX,dword ptr [ECX + 0x4]
INC EAX
TEST ECX,ECX
JNZ 0x00413752
OR EAX,0xffffffff
RET