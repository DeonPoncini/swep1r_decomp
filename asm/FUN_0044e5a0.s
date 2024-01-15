; FUN_0044e5a0
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,EDX
PUSH ESI
SHL EAX,0x3
SUB EAX,EDX
MOV EDX,dword ptr [ECX + 0xc]
LEA EAX,[EAX + EAX*0x2]
SHL EAX,0x2
MOV ESI,dword ptr [EDX + EAX*0x1 + 0x10]
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX],ESI
MOV ESI,dword ptr [ECX + 0xc]
MOV ESI,dword ptr [ESI + EAX*0x1 + 0x14]
MOV dword ptr [EDX + 0x4],ESI
MOV ECX,dword ptr [ECX + 0xc]
POP ESI
MOV EAX,dword ptr [ECX + EAX*0x1 + 0x18]
MOV dword ptr [EDX + 0x8],EAX
RET
