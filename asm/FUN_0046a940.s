; FUN_0046a940
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0046a959
MOV ECX,dword ptr [ESP + 0x8]
ADD EAX,0x74
PUSH ECX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
RET