; FUN_0044d1e0
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
PUSH EDI
ADD EAX,0x24
MOV ESI,EDX
ADD ECX,0x18
MOV EDI,0x3
FLD dword ptr [ECX + -0x18]
FMUL dword ptr [EDX]
ADD ECX,0x4
ADD ESI,0x4
ADD EAX,0x4
DEC EDI
FCHS
FADD dword ptr [EAX + -0x4]
FST dword ptr [EAX + -0x4]
FLD dword ptr [ECX + -0x10]
FMUL dword ptr [EDX + 0x4]
FCHS
FADDP
FST dword ptr [EAX + -0x4]
FLD dword ptr [EDX + 0x8]
FMUL dword ptr [ECX + -0x4]
FCHS
FADDP
FST dword ptr [EAX + -0x4]
FLD dword ptr [ESI + -0x4]
FADD ST0,ST1
FSTP dword ptr [EAX + -0x4]
FSTP ST0
JNZ 0x0044d1fb
POP EDI
POP ESI
RET
