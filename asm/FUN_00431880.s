; FUN_00431880
MOV ECX,dword ptr [ESP + 0x4]
OR EAX,0xffffffff
TEST ECX,ECX
JZ 0x004318ae
CMP dword ptr [ESP + 0x8],0x1
JNZ 0x004318ae
MOV ECX,dword ptr [ECX]
MOVSX EAX,CL
AND EAX,0x8
SHR EAX,0x3
TEST CL,0x40
JZ 0x004318ae
XOR ECX,ECX
TEST EAX,EAX
SETNZ CL
ADD ECX,0x2
MOV EAX,ECX
RET
