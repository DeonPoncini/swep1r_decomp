; FUN_00417900
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x00417938
MOV ECX,dword ptr [EAX + 0x8]
MOV EDX,dword ptr [EAX + 0xc]
PUSH EDI
MOV EDI,dword ptr [EAX + 0x4]
PUSH ESI
MOV ESI,dword ptr [EAX]
SUB ECX,ESI
MOV ESI,dword ptr [ESP + 0x10]
SUB EDX,EDI
MOV EDI,dword ptr [ESP + 0x14]
INC ECX
INC EDX
MOV dword ptr [EAX],ESI
MOV dword ptr [EAX + 0x4],EDI
LEA ECX,[ECX + ESI*0x1 + -0x1]
LEA EDX,[EDX + EDI*0x1 + -0x1]
POP ESI
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [EAX + 0xc],EDX
POP EDI
RET
