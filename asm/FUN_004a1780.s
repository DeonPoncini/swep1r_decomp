; FUN_004a1780
PUSH EBP
MOV EBP,ESP
MOV EAX,dword ptr [EBP + 0x8]
CMP EAX,0x4d45f8
JC 0x004a17aa
CMP EAX,0x4d4858
JA 0x004a17aa
SUB EAX,0x4d45f8
SAR EAX,0x5
ADD EAX,0x1c
PUSH EAX
CALL 0x004a16f0
ADD ESP,0x4
POP EBP
RET
ADD EAX,0x20
PUSH EAX
CALL dword ptr [0x004ac138]
POP EBP
RET
