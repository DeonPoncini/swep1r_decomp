; FUN_004a59b6
PUSH EBX
PUSH ECX
MOV EBX,0x4d4548
MOV ECX,dword ptr [EBP + 0x8]
MOV dword ptr [EBX + 0x8],ECX
MOV dword ptr [EBX + 0x4],EAX
MOV dword ptr [EBX + 0xc],EBP
POP ECX
POP EBX
RET 0x4
