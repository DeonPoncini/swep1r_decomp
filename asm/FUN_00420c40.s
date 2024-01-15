; FUN_00420c40
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX*0x4 + 0x4eb238],EAX
MOV ECX,dword ptr [ESP + 0x4]
PUSH ECX
CALL 0x00420c60
ADD ESP,0x4
RET
