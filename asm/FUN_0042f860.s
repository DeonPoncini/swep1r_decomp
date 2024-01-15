; FUN_0042f860
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x4]
FLD dword ptr [EAX]
FSUB dword ptr [ECX]
FSTP dword ptr [EDX]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ECX + 0x4]
FSTP dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ECX + 0x8]
FSTP dword ptr [EDX + 0x8]
RET
