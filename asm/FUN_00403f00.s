; FUN_00403f00
MOV EAX,[0x004b2910]
TEST EAX,EAX
JZ 0x00403f2f
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x00404040
MOV EAX,dword ptr [ESI + 0x40]
ADD ESP,0x4
TEST EAX,EAX
JZ 0x00403f25
PUSH EAX
CALL dword ptr [0x004ac054]
PUSH ESI
CALL 0x00403e10
ADD ESP,0x4
POP ESI
RET