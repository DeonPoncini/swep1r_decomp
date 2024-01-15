; FUN_0042c420
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX*0x4 + 0xe9a840],ECX
MOV ECX,dword ptr [ESP + 0x8]
LEA EAX,[EAX + EAX*0x2]
MOV EDX,dword ptr [ECX]
SHL EAX,0x2
MOV dword ptr [EAX + 0xe9a4a0],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0xe9a4a4],EDX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0xe9a4a8],ECX
RET
