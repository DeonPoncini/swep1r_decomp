; FUN_004269c0
MOV EAX,dword ptr [ESP + 0x4]
CMP EAX,0x8e
JL 0x004269d8
CMP EAX,0xa5
JG 0x004269d8
MOV EAX,0x1
RET
XOR ECX,ECX
CMP EAX,0x22
SETZ CL
MOV EAX,ECX
RET