; FUN_00411140
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JZ 0x00411162
MOV EAX,[0x004d8bd4]
TEST EAX,EAX
JZ 0x00411162
MOV EAX,dword ptr [EAX + 0x1c]
MOV ECX,dword ptr [ESP + 0x4]
CMP EAX,ECX
JNZ 0x00411162
MOV EAX,0x1
RET
XOR EAX,EAX
RET
