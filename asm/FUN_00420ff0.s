; FUN_00420ff0
MOV EAX,dword ptr [ESP + 0x4]
LEA ECX,[EAX + EAX*0x4]
LEA EAX,[EAX + ECX*0x2]
SHL EAX,0x4
ADD EAX,0xe9f3c0
MOV ECX,dword ptr [EAX + 0x84]
MOV dword ptr [EAX + 0x88],0x0
AND ECX,0xfffffffe
MOV dword ptr [EAX + 0x84],ECX
RET
