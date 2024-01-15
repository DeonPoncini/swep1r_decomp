; FUN_0046d6a0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x250]
MOV dword ptr [ESP + 0x4],EAX
MOV EAX,dword ptr [ECX + 0x344]
TEST EAX,EAX
JZ 0x0046d72b
MOV EDX,dword ptr [EAX + 0x4]
TEST EDX,EDX
JZ 0x0046d6cf
FLD dword ptr [ESP + 0x4]
FADD dword ptr [ECX + 0x3c8]
FSTP dword ptr [ECX + 0x3c8]
MOV EDX,dword ptr [EAX + 0x8]
TEST EDX,EDX
JZ 0x0046d6e6
FLD dword ptr [ESP + 0x4]
FADD dword ptr [ECX + 0x408]
FSTP dword ptr [ECX + 0x408]
MOV EDX,dword ptr [EAX + 0xc]
TEST EDX,EDX
JZ 0x0046d6fd
FLD dword ptr [ESP + 0x4]
FADD dword ptr [ECX + 0x448]
FSTP dword ptr [ECX + 0x448]
MOV EDX,dword ptr [EAX + 0x10]
TEST EDX,EDX
JZ 0x0046d714
FLD dword ptr [ESP + 0x4]
FADD dword ptr [ECX + 0x488]
FSTP dword ptr [ECX + 0x488]
MOV EDX,dword ptr [EAX + 0x14]
TEST EDX,EDX
JZ 0x0046d72b
FLD dword ptr [ESP + 0x4]
FADD dword ptr [ECX + 0x4c8]
FSTP dword ptr [ECX + 0x4c8]
RET
