; FUN_004841e0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JZ 0x00484210
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x004841ff
MOV EAX,dword ptr [ESI + 0x88]
PUSH EAX
CALL 0x004a0ec0
ADD ESP,0x4
TEST ESI,ESI
JZ 0x00484210
MOV ECX,dword ptr [0x00ecc420]
PUSH ESI
CALL dword ptr [ECX + 0x24]
ADD ESP,0x4
POP ESI
RET