; FUN_004157f0
MOV ECX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ECX + 0x500]
MOV dword ptr [ECX + 0x500],EDX
RET
