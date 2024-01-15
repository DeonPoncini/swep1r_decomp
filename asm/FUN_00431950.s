; FUN_00431950
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ECX]
LEA EDX,[EAX + 0xb0]
PUSH EDX
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0xb4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0xb8],ESI
MOV ESI,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xbc],ESI
MOV ESI,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0xc0],ESI
MOV ESI,dword ptr [ECX + 0x14]
MOV dword ptr [EAX + 0xc4],ESI
MOV ESI,dword ptr [ECX + 0x18]
MOV dword ptr [EAX + 0xc8],ESI
MOV ESI,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX + 0xcc],ESI
MOV ESI,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0xd0],ESI
MOV ESI,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0xd4],ESI
MOV ESI,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0xd8],ESI
MOV ESI,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0xdc],ESI
MOV ESI,dword ptr [ECX + 0x30]
MOV dword ptr [EAX + 0xe0],ESI
MOV ESI,dword ptr [ECX + 0x34]
MOV dword ptr [EAX + 0xe4],ESI
MOV ESI,dword ptr [ECX + 0x38]
MOV dword ptr [EAX + 0xe8],ESI
MOV ECX,dword ptr [ECX + 0x3c]
MOV dword ptr [EAX + 0xec],ECX
LEA EDX,[EAX + 0x30]
ADD EAX,0x70
PUSH EDX
PUSH EAX
CALL 0x0042fb70
ADD ESP,0xc
POP ESI
RET
