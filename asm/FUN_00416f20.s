; FUN_00416f20
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
MOV EDX,dword ptr [EAX + 0x24]
MOV ESI,dword ptr [EAX + 0x28]
MOV dword ptr [EAX + 0x34],ECX
LEA EDX,[EDX + ECX*0x1 + -0x1]
MOV dword ptr [EAX + 0x2c],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x38],EDX
LEA ESI,[ESI + EDX*0x1 + -0x1]
MOV dword ptr [EAX + 0x30],ESI
POP ESI
RET
