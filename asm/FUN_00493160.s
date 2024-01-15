; FUN_00493160
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
FLD dword ptr [ECX]
FADD dword ptr [EAX + 0x24]
FSTP dword ptr [EAX + 0x24]
FLD dword ptr [ECX + 0x4]
FADD dword ptr [EAX + 0x28]
FSTP dword ptr [EAX + 0x28]
FLD dword ptr [ECX + 0x8]
FADD dword ptr [EAX + 0x2c]
FSTP dword ptr [EAX + 0x2c]
RET
