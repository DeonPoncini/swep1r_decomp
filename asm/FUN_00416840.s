; FUN_00416840
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JNZ 0x0041684d
MOV EAX,[0x004b5d74]
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [EDX],0x0
MOV dword ptr [EDX + 0x4],0x0
MOV dword ptr [EDX + 0x8],EAX
MOV ECX,dword ptr [EAX + 0xc]
TEST ECX,ECX
JZ 0x0041687e
MOV EAX,dword ptr [ECX + 0x4]
TEST EAX,EAX
JZ 0x00416878
MOV ECX,EAX
MOV EAX,dword ptr [ECX + 0x4]
TEST EAX,EAX
JNZ 0x0041686f
MOV dword ptr [ECX + 0x4],EDX
MOV dword ptr [EDX],ECX
RET
MOV dword ptr [EAX + 0xc],EDX
RET
