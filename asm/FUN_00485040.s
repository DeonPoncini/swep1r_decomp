; FUN_00485040
PUSH ECX
MOV EAX,dword ptr [ESP + 0x8]
LEA EDX,[ESP]
PUSH EDX
PUSH EAX
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x8],0xffffffff
CALL dword ptr [ECX + 0xd4]
MOV EAX,dword ptr [ESP]
POP ECX
RET
