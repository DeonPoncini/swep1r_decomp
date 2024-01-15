; FUN_00484d40
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ae190]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484d77
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ae194]
FNSTSW AX
TEST AH,0x41
JZ 0x00484d6c
MOV EAX,dword ptr [ESP + 0x4]
MOV [0x004c7d7c],EAX
RET
MOV dword ptr [0x004c7d7c],0x41200000
RET
MOV dword ptr [0x004c7d7c],0x0
RET
