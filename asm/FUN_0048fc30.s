; FUN_0048fc30
MOV EAX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [EAX + 0x48]
TEST EAX,EAX
JZ 0x0048fc48
MOV ECX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [ECX + 0x24]
ADD ESP,0x4
RET
