; FUN_0044e140
MOV EAX,dword ptr [ESP + 0xc]
MOV CX,word ptr [EAX + 0x4]
MOV DX,word ptr [EAX + 0x2]
MOV AX,word ptr [EAX]
NEG CX
NEG DX
PUSH ECX
PUSH EDX
NEG AX
PUSH EAX
MOV EAX,dword ptr [ESP + 0x14]
MOV CX,word ptr [EAX + 0x4]
MOV DX,word ptr [EAX + 0x2]
MOV AX,word ptr [EAX]
PUSH ECX
PUSH EDX
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
MOV CX,word ptr [EAX + 0x4]
MOV DX,word ptr [EAX + 0x2]
MOV AX,word ptr [EAX]
PUSH ECX
PUSH EDX
PUSH EAX
PUSH 0x0
CALL 0x00409600
ADD ESP,0x28
RET
