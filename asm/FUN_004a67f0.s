; FUN_004a67f0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX]
ADD ECX,0x8
MOV dword ptr [EAX],ECX
MOV EAX,dword ptr [ECX + -0x8]
MOV EDX,dword ptr [ECX + -0x4]
RET
