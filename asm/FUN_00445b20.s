; FUN_00445b20
MOV ECX,dword ptr [0x0050c614]
MOV EAX,dword ptr [ESP + 0x4]
PUSH 0x1
MOV dword ptr [ECX*0x4 + 0xe98200],EAX
CALL 0x00426910
ADD ESP,0x4
RET
