; FUN_00416fd0
XOR ECX,ECX
MOV EAX,0x4d7c68
CMP dword ptr [EAX],0x0
JZ 0x00416fe8
ADD EAX,0x8
INC ECX
CMP EAX,0x4d8110
JL 0x00416fd7
RET
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [ECX*0x8 + 0x4d7c68],EAX
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX*0x8 + 0x4d7c6c],EDX
MOV dword ptr [ECX*0x4 + 0x4d79f8],EAX
RET
