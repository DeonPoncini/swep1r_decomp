; FUN_0042c7a0
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x14]
PUSH EAX
PUSH ECX
PUSH EDX
MOVSX EDX,word ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x14],EDX
MOV EAX,dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
FIDIV dword ptr [0x00ec85e8]
FMUL dword ptr [0x004ac594]
CALL 0x0049ed20
PUSH EAX
MOVSX EAX,word ptr [ESP + 0x1c]
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FIDIV dword ptr [0x00ec86c4]
FMUL dword ptr [0x004ac598]
CALL 0x0049ed20
PUSH EAX
CALL 0x00450530
ADD ESP,0x1c
RET
