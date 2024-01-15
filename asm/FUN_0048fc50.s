; FUN_0048fc50
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH EAX
MOV dword ptr [EAX + 0x4],ECX
CALL 0x0048fdc0
ADD ESP,0x4
MOV EAX,0x1
RET
