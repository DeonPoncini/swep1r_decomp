; FUN_0042f7b0
FLD dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x8],EDX
RET
