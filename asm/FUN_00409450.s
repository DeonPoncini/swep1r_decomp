; FUN_00409450
MOVSX EAX,word ptr [ESP + 0x4]
MOV dword ptr [ESP + 0x4],EAX
FILD dword ptr [ESP + 0x4]
MOVSX ECX,word ptr [ESP + 0x8]
FMUL dword ptr [0x004ac358]
MOV dword ptr [ESP + 0x4],ECX
MOV ECX,dword ptr [0x00ec857c]
MOVSX EDX,word ptr [ESP + 0xc]
FSTP dword ptr [0x00ec8564]
FILD dword ptr [ESP + 0x4]
MOV dword ptr [ESP + 0x4],EDX
MOV EDX,dword ptr [0x00ec8578]
MOVSX EAX,word ptr [ESP + 0x10]
FMUL dword ptr [0x004ac358]
PUSH ECX
PUSH EDX
MOV EDX,dword ptr [0x00ec8564]
FSTP dword ptr [0x00ec8568]
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],EAX
MOV ECX,dword ptr [0x00ec8568]
FMUL dword ptr [0x004ac358]
FSTP dword ptr [0x00ec856c]
FILD dword ptr [ESP + 0xc]
MOV EAX,[0x00ec856c]
PUSH EAX
PUSH ECX
FMUL dword ptr [0x004ac358]
PUSH EDX
FSTP dword ptr [0x00ec8570]
CALL 0x0048b340
ADD ESP,0x14
RET
