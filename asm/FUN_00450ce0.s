; FUN_00450ce0
MOV ECX,dword ptr [0x004bfec0]
MOV EAX,dword ptr [ECX]
TEST EAX,EAX
JZ 0x00450d14
MOV EDX,dword ptr [ESP + 0x4]
CMP dword ptr [EAX],EDX
JZ 0x00450cff
MOV EAX,dword ptr [ECX + 0x4]
ADD ECX,0x4
TEST EAX,EAX
JNZ 0x00450cf0
RET
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX + 0x10],ECX
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,dword ptr [EAX + 0xc]
IMUL EAX,ECX
RET
XOR EAX,EAX
RET
