; FUN_00416890
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x004168f0
MOV EAX,dword ptr [ESI + 0x8]
ADD ESP,0x4
CMP ESI,dword ptr [EAX + 0xc]
JNZ 0x004168c8
MOV ECX,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0xc],ECX
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x004168df
MOV dword ptr [EAX],0x0
MOV dword ptr [ESI],0x0
MOV dword ptr [ESI + 0x4],0x0
POP ESI
RET
MOV EAX,dword ptr [ESI]
TEST EAX,EAX
JZ 0x004168d4
MOV EDX,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x004168df
MOV ECX,dword ptr [ESI]
MOV dword ptr [EAX],ECX
MOV dword ptr [ESI],0x0
MOV dword ptr [ESI + 0x4],0x0
POP ESI
RET
