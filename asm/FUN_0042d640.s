; FUN_0042d640
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
PUSH EAX
CALL 0x0042d600
MOV ECX,dword ptr [ESP + 0x10]
ADD ESP,0x4
MOV ESI,EAX
PUSH 0x0
PUSH ECX
MOV EDX,dword ptr [ESI]
PUSH EDX
CALL 0x004a0950
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
PUSH EAX
PUSH 0x1
PUSH ECX
PUSH EDX
CALL 0x0049ffe0
ADD ESP,0x10
POP ESI
RET
