; FUN_00484fb0
MOV EAX,[0x0050d548]
TEST EAX,EAX
JZ 0x00485010
MOV ECX,dword ptr [ESP + 0x4]
TEST ECX,ECX
JZ 0x00485010
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ae190]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484ffa
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ae194]
FNSTSW AX
TEST AH,0x41
JNZ 0x00485002
MOV EAX,dword ptr [ECX]
MOV dword ptr [ESP + 0x8],0x41200000
MOV EDX,dword ptr [ESP + 0x8]
PUSH EDX
PUSH ECX
CALL dword ptr [EAX + 0xb8]
RET
MOV dword ptr [ESP + 0x8],0x0
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ECX]
PUSH EDX
PUSH ECX
CALL dword ptr [EAX + 0xb8]
RET
