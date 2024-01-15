; FUN_0042f380
FLD dword ptr [ESP + 0x4]
FMUL qword ptr [0x004ac650]
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
FMUL qword ptr [0x004ac658]
FLD ST0
FCOS
FXCH
FSIN
FST dword ptr [ESP + 0x4]
FXCH
FSTP dword ptr [EAX]
FSTP dword ptr [ECX]
RET
