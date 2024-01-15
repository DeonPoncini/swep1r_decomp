; FUN_0041d690
MOV EAX,dword ptr [ESP + 0x4]
XOR ECX,ECX
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EAX*0x4 + 0x4ea020]
MOV EDX,EAX
MOV dword ptr [EDX],ECX
MOV dword ptr [EDX + 0x4],ECX
MOV dword ptr [EDX + 0x8],ECX
MOV dword ptr [EAX],ECX
RET
