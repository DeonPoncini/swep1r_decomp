; FUN_00427360
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JL 0x0042738b
CMP EAX,0x1
JG 0x0042738b
MOV EAX,dword ptr [ESP + 0x8]
FLD dword ptr [EAX*0x4 + 0x50b620]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004273a5
MOV EAX,0x1
RET
FLD dword ptr [EAX*0x4 + 0x50b600]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004273a5
MOV EAX,0x1
RET
XOR EAX,EAX
RET
