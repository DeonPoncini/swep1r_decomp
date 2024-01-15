; FUN_00426d10
SUB ESP,0x8
MOV EAX,[0x004b8550]
MOV ECX,dword ptr [0x004b8554]
MOV EDX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP],EAX
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x4],ECX
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [0x004b8550],EDX
MOV EDX,dword ptr [ESP + 0x20]
MOV [0x004b8554],EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x1c]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x1c]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00426d80
MOV EDX,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x1c
MOV dword ptr [0x004b8550],EDX
MOV [0x004b8554],EAX
ADD ESP,0x8
RET
