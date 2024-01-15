; FUN_00431a10
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x4]
CMP EDX,0x4
JNZ 0x00431a27
MOV dword ptr [ECX + 0x15c],EAX
CMP EDX,0x3
JNZ 0x00431a32
MOV dword ptr [ECX + 0x164],EAX
CMP EDX,0x6
JNZ 0x00431a3d
MOV dword ptr [ECX + 0x158],EAX
CMP EDX,0x5
JNZ 0x00431a48
MOV dword ptr [ECX + 0x160],EAX
RET
