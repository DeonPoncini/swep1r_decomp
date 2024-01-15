; FUN_00431790
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JNZ 0x00431799
RET
MOV EAX,dword ptr [EAX + 0x18]
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [EAX + ECX*0x4]
RET
