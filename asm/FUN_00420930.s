; FUN_00420930
MOV EAX,dword ptr [ESP + 0x4]
PUSH EAX
CALL 0x00440620
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0xc]
ADD ESP,0x4
PUSH EAX
PUSH 0x4b2304
PUSH ECX
PUSH EDX
CALL 0x0049f850
ADD ESP,0x10
RET
