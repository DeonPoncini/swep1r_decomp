; FUN_0047bf20
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [EAX*0x4 + 0xe25e60]
MOV EAX,dword ptr [ECX]
TEST EAX,EAX
JZ 0x0047bf62
MOV EDX,0x10000000
TEST dword ptr [EAX + 0x100],EDX
JZ 0x0047bf5c
FLD dword ptr [EAX + 0x114]
FCOMP dword ptr [EAX + 0x108]
FNSTSW AX
TEST AH,0x1
JZ 0x0047bf5c
MOV EAX,dword ptr [ECX + 0x4]
ADD ECX,0x4
TEST EAX,EAX
JNZ 0x0047bf36
RET
MOV EAX,0x1
RET
XOR EAX,EAX
RET
