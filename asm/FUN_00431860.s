; FUN_00431860
CMP dword ptr [ESP + 0x8],0x2
JNZ 0x00431872
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX + 0x8],EAX
RET
