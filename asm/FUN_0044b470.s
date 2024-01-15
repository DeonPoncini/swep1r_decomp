; FUN_0044b470
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JNZ 0x0044b47f
FLD dword ptr [0x004acc38]
RET
MOV EAX,dword ptr [EAX]
TEST EAX,EAX
JNZ 0x0044b48c
FLD dword ptr [0x004acc38]
RET
FLD dword ptr [EAX + 0x114]
RET
