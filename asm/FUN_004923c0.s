; FUN_004923c0
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
XOR ECX,ECX
XOR EDX,EDX
LEA ESI,[EAX + 0x3c]
MOV dword ptr [EAX],ECX
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x14],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x1c],ECX
MOV dword ptr [EAX + 0x20],0xffffffff
MOV dword ptr [ESI],EDX
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI + 0x8],EDX
LEA ESI,[EAX + 0x24]
MOV dword ptr [EAX + 0x24],EDX
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [EAX + 0x2c],ECX
MOV dword ptr [EAX + 0x30],ECX
MOV dword ptr [EAX + 0x34],ECX
MOV dword ptr [EAX + 0x38],ECX
MOV EAX,0x1
POP ESI
RET
