; FUN_00427530
MOV EAX,dword ptr [ESP + 0xc]
PUSH EAX
CALL 0x0044a930
MOV EAX,dword ptr [ESP + 0x8]
ADD ESP,0x4
FSUB dword ptr [0x004ac470]
TEST EAX,EAX
JL 0x00427582
CMP EAX,0x1
JLE 0x0042756f
CMP EAX,0x2
JNZ 0x00427582
MOV ECX,dword ptr [ESP + 0x10]
FSTP ST0
FLD dword ptr [ECX*0x4 + 0x4b85e4]
FSUB dword ptr [0x004ac4a4]
FSTP dword ptr [0x0050b608]
RET
MOV ECX,dword ptr [ESP + 0x8]
FSTP dword ptr [ECX*0x4 + 0x50b620]
MOV dword ptr [ECX*0x4 + 0x50b680],EAX
RET
FSTP dword ptr [EAX*0x4 + 0x50b600]
RET
