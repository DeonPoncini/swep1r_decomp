; FUN_004aa950
MOV EDX,dword ptr [ESP + 0x4]
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
MOV EAX,EDX
MOV ECX,ESI
TEST ECX,ECX
JZ 0x004aa97e
CMP word ptr [EAX],0x0
JZ 0x004aa96d
ADD EAX,0x2
DEC ECX
JNZ 0x004aa961
TEST ECX,ECX
JZ 0x004aa97e
CMP word ptr [EAX],0x0
JNZ 0x004aa97e
SUB EAX,EDX
SAR EAX,0x1
INC EAX
POP ESI
RET
MOV EAX,ESI
POP ESI
RET