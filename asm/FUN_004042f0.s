; FUN_004042f0
MOV EAX,[0x004b2910]
TEST EAX,EAX
JNZ 0x004042fd
OR EAX,0xffffffff
RET
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX + 0x4]
TEST ECX,ECX
JNZ 0x0040430c
OR EAX,0xffffffff
RET
MOV EAX,dword ptr [EAX + 0x2c]
MOV ECX,dword ptr [EAX]
MOV EAX,0x51eb851f
IMUL ECX
MOV EAX,EDX
SAR EAX,0x5
MOV ECX,EAX
SHR ECX,0x1f
ADD EAX,ECX
RET
