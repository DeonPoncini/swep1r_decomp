; FUN_0044eef0
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,ECX
PUSH ESI
MOV ESI,dword ptr [EAX]
MOV dword ptr [EAX + 0x10],ECX
SHL EDX,0x3
SUB EDX,ECX
MOV dword ptr [EAX + 0x14],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x1c],ECX
LEA ECX,[EDX + EDX*0x2]
MOV EDX,dword ptr [ESI + 0xc]
CMP word ptr [EDX + ECX*0x4],0x0
LEA ECX,[EDX + ECX*0x4]
JZ 0x0044ef6b
MOVSX EDX,word ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x14],EDX
CMP word ptr [ESI],0x0
JNZ 0x0044ef6b
LEA ECX,[EDX*0x8 + 0x0]
SUB ECX,EDX
MOV EDX,dword ptr [ESI + 0xc]
LEA ECX,[ECX + ECX*0x2]
CMP word ptr [EDX + ECX*0x4],0x0
LEA ECX,[EDX + ECX*0x4]
JZ 0x0044ef6b
MOVSX EDX,word ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x18],EDX
LEA ECX,[EDX*0x8 + 0x0]
SUB ECX,EDX
MOV EDX,dword ptr [ESI + 0xc]
LEA ECX,[ECX + ECX*0x2]
CMP word ptr [EDX + ECX*0x4],0x0
LEA ECX,[EDX + ECX*0x4]
JZ 0x0044ef6b
MOVSX ECX,word ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x1c],ECX
POP ESI
RET
