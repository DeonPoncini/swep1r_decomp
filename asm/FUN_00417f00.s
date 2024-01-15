; FUN_00417f00
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
TEST EAX,EAX
JZ 0x00417f42
MOV ECX,dword ptr [ESP + 0xc]
TEST ECX,ECX
JZ 0x00417f42
MOV EDX,dword ptr [ECX]
MOV ESI,dword ptr [EAX]
CMP ESI,EDX
JGE 0x00417f1b
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV ESI,dword ptr [EAX + 0x4]
CMP ESI,EDX
JGE 0x00417f28
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV ESI,dword ptr [EAX + 0x8]
CMP ESI,EDX
JLE 0x00417f35
MOV dword ptr [EAX + 0x8],EDX
MOV ECX,dword ptr [ECX + 0xc]
MOV EDX,dword ptr [EAX + 0xc]
CMP EDX,ECX
JLE 0x00417f42
MOV dword ptr [EAX + 0xc],ECX
POP ESI
RET
