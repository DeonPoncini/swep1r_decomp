; FUN_004a32d0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH 0x8000
PUSH 0x0
MOV EAX,dword ptr [ESI + 0x10]
PUSH EAX
CALL dword ptr [0x004ac154]
CMP dword ptr [0x004d4228],ESI
JNZ 0x004a32f7
MOV ECX,dword ptr [ESI + 0x4]
MOV dword ptr [0x004d4228],ECX
CMP ESI,0x4d2208
JZ 0x004a331f
MOV EDX,dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESI]
PUSH ESI
PUSH 0x0
MOV dword ptr [EDX],EAX
MOV ECX,dword ptr [ESI]
MOV EDX,dword ptr [ESI + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,[0x00ecd604]
PUSH EAX
CALL dword ptr [0x004ac190]
POP ESI
RET
MOV dword ptr [0x004d2218],0xffffffff
POP ESI
RET
