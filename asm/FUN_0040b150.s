; FUN_0040b150
MOV EAX,[0x004b2910]
TEST EAX,EAX
JZ 0x0040b1b1
MOV EAX,[0x004d78a4]
TEST EAX,EAX
JZ 0x0040b1b1
MOV ECX,dword ptr [EAX + 0x84]
TEST ECX,ECX
JZ 0x0040b1b1
MOV EAX,[0x004d78a8]
TEST EAX,EAX
JZ 0x0040b1b1
MOV ECX,dword ptr [0x004d789c]
TEST ECX,ECX
JZ 0x0040b1b1
MOV ECX,dword ptr [EAX + 0x60]
TEST CH,0x50
JNZ 0x0040b1b1
PUSH EDI
MOV EDI,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
PUSH ESI
PUSH EDI
CALL 0x0040b1c0
ADD ESP,0x8
PUSH ESI
PUSH EDI
CALL 0x0040b3d0
ADD ESP,0x8
PUSH ESI
PUSH EDI
CALL 0x0040b5e0
ADD ESP,0x8
POP ESI
POP EDI
RET