; FUN_00451ec0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x80]
CMP EAX,0x2
JZ 0x00451ed8
CMP EAX,0x1
JZ 0x00451ed8
MOV dword ptr [ECX + 0x7c],EAX
RET
PUSH EAX
PUSH ECX
CALL 0x00451d60
ADD ESP,0x8
RET
