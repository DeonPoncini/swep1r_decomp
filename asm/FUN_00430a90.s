; FUN_00430a90
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x4],ECX
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [EAX + 0x8],EDX
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0xc],ECX
RET
