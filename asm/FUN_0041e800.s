; FUN_0041e800
PUSH EBX
PUSH ESI
PUSH EDI
XOR EBX,EBX
MOV EAX,0x4eb188
CMP dword ptr [EAX],0x0
JZ 0x0041e81e
ADD EAX,0x4
INC EBX
CMP EAX,0x4eb1c4
JL 0x0041e80a
POP EDI
POP ESI
POP EBX
RET
MOV ESI,dword ptr [ESP + 0x10]
OR ECX,0xffffffff
MOV EDI,ESI
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
PUSH ECX
CALL 0x0049f270
MOV EDX,EAX
MOV EDI,ESI
OR ECX,0xffffffff
XOR EAX,EAX
ADD ESP,0x4
MOV dword ptr [EBX*0x4 + 0x4eb188],EDX
SCASB.REPNE ES:EDI
NOT ECX
MOV EAX,ECX
MOV EDI,EDX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV dword ptr [EBX*0x4 + 0x4ea940],0x0
MOV dword ptr [EBX*0x4 + 0x4e9ed8],0x2710
CALL dword ptr [0x004ac274]
POP EDI
POP ESI
MOV [0x004eb220],EAX
POP EBX
RET
