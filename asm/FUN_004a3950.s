; FUN_004a3950
MOV EAX,[0x00dfab68]
TEST EAX,EAX
JZ 0x004a396d
MOV ECX,dword ptr [ESP + 0x4]
PUSH ECX
CALL EAX
ADD ESP,0x4
TEST EAX,EAX
JZ 0x004a396d
MOV EAX,0x1
RET
XOR EAX,EAX
RET
