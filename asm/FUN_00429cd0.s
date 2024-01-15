; FUN_00429cd0
MOV EAX,[0x0050c07c]
MOV ECX,dword ptr [0x0050c04c]
MOV dword ptr [EAX*0x4 + 0x50c070],ECX
MOV ECX,dword ptr [0x00e9a9b4]
MOV EAX,dword ptr [ESP + 0x4]
INC ECX
MOV dword ptr [0x00e9a9b4],ECX
MOV [0x0050c07c],EAX
MOV EDX,dword ptr [EAX*0x4 + 0x50c070]
MOV dword ptr [ECX*0x4 + 0xe9a9c0],EAX
MOV dword ptr [0x0050c04c],EDX
RET
