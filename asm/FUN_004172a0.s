; FUN_004172a0
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH EAX
ADD EDX,0x24
PUSH ECX
PUSH EDX
CALL 0x004172c0
ADD ESP,0xc
RET