; FUN_00426820
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
NOT ECX
AND dword ptr [EAX + 0x100],ECX
RET
