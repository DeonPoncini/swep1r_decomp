; FUN_0047f450
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x8]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x8]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0047f060
ADD ESP,0x10
RET
