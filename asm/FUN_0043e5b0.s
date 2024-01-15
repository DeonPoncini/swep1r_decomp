; FUN_0043e5b0
MOV EAX,0x4c4018
MOVSX ECX,word ptr [EAX + 0x10]
INC ECX
CMP ECX,0x5
JA 0x0043e5fb
JMP dword ptr [ECX*0x4 + 0x43e608]
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac94c]
JMP 0x0043e5f9
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac9c8]
FST dword ptr [EAX]
FSTP dword ptr [EAX + 0xc]
JMP 0x0043e5fb
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac9cc]
JMP 0x0043e5f9
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac9c8]
FSTP dword ptr [EAX]
ADD EAX,0x20
CMP EAX,0x4c4518
JL 0x0043e5b5
RET
