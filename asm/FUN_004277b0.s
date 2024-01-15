; FUN_004277b0
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0x4]
PUSH 0x0
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00427410
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x28]
ADD ESP,0x10
MOV [0x004b85d8],EAX
MOV dword ptr [0x004b85dc],ECX
MOV dword ptr [0x004b85d4],EDX
RET
