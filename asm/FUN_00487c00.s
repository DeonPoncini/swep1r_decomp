; FUN_00487c00
MOV EDX,dword ptr [0x0052950c]
PUSH EBX
MOV EBX,EDX
PUSH ESI
PUSH EDI
MOV EDI,0x5143d8
SHL EBX,0x7
OR ECX,0xffffffff
XOR EAX,EAX
ADD EBX,0x513938
SCASB.REPNE ES:EDI
NOT ECX
SUB EDI,ECX
MOV EAX,ECX
MOV ESI,EDI
MOV EDI,EBX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
XOR EAX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ECX,dword ptr [0x005284f8]
MOV [0x005284f8],EAX
MOV dword ptr [EDX*0x4 + 0x514388],ECX
MOV ECX,dword ptr [0x00529504]
MOV [0x00529504],EAX
MOV EAX,[0x00ec9e84]
MOV dword ptr [EDX*0x4 + 0x514338],EAX
MOV EAX,EDX
SHL EAX,0xa
ADD EAX,EDX
MOV dword ptr [EDX*0x4 + 0x5284a8],ECX
MOV ECX,0x401
MOV ESI,0xec8e80
LEA EDI,[EAX*0x4 + 0x514458]
INC EDX
MOVSD.REP ES:EDI,ESI
POP EDI
POP ESI
MOV dword ptr [0x0052950c],EDX
POP EBX
RET
