; FUN_00413b30
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x00413b55
MOV EDX,dword ptr [EAX + 0x20]
MOV ECX,dword ptr [ESP + 0x8]
SHR EDX,0xc
AND EDX,0x1
MOV dword ptr [EAX + 0x55c],ECX
PUSH EDX
PUSH EAX
CALL 0x00419db0
ADD ESP,0x8
RET