; FUN_00414cd0
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x44]
MOV EAX,dword ptr [ECX + EDX*0x4]
LEA ECX,[ECX + EDX*0x4]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX],EDX
RET
