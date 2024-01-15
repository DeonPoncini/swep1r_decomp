; FUN_00431b00
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JNZ 0x00431b10
MOV EAX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [EAX + 0x8]
RET
CMP EAX,0x2
JNZ 0x00431b1d
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x4]
RET
XOR EAX,EAX
RET
