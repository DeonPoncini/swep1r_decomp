; FUN_00485020
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
PUSH EDX
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0xd0]
RET
