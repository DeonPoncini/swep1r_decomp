; FUN_004210e0
MOV ECX,dword ptr [ESP + 0x4]
LEA EAX,[ECX + ECX*0x4]
LEA EAX,[ECX + EAX*0x2]
SHL EAX,0x4
ADD EAX,0xe9f3c0
CMP ECX,0x14
JNC 0x00421116
XOR ECX,ECX
MOV dword ptr [EAX + 0x88],ECX
MOV word ptr [EAX + 0x4],CX
MOV word ptr [EAX + 0x44],CX
MOV ECX,dword ptr [EAX + 0x84]
AND ECX,0xfffffffa
MOV dword ptr [EAX + 0x84],ECX
RET
