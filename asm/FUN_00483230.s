; FUN_00483230
MOV EAX,dword ptr [ESP + 0x4]
LEA ECX,[EAX + EAX*0x4]
LEA ECX,[ECX + ECX*0x8]
LEA EDX,[EAX + ECX*0x2]
MOV ECX,dword ptr [ESP + 0x8]
TEST ECX,ECX
LEA EAX,[EDX*0x4 + 0xdfb040]
MOV EDX,dword ptr [EDX*0x4 + 0xdfb040]
JGE 0x0048325c
AND EDX,0xfffffffe
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX],EDX
RET
OR EDX,0x1
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX],EDX
RET
