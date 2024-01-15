; FUN_00425980
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [EAX + 0x11c]
FLD dword ptr [EAX + ECX*0x4]
FLD dword ptr [EAX + ECX*0x4 + 0x4]
FLD dword ptr [ESP + 0x8]
FSUB ST0,ST2
FXCH
FSUB ST0,ST2
FDIVP
FSTP ST1
RET
