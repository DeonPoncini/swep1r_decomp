; FUN_0049eb60
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
CMP ESI,EDI
JNC 0x0049eb7d
MOV EAX,dword ptr [ESI]
TEST EAX,EAX
JZ 0x0049eb76
CALL EAX
ADD ESI,0x4
CMP ESI,EDI
JC 0x0049eb6e
POP EDI
POP ESI
RET
