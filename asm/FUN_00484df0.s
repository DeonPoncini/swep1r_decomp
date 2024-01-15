; FUN_00484df0
MOV EDX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x4]
PUSH 0x1
PUSH EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EAX]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x98]
RET
