; FUN_004276a0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
NOT ECX
AND dword ptr [EAX*0x4 + 0xe9ed60],ECX
RET
