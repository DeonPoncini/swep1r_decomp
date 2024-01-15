; FUN_00426890
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x100]
MOV ECX,dword ptr [ESI + 0x118]
FLD dword ptr [ESI + 0x114]
OR EAX,0x20000000
MOV dword ptr [ESI + 0xe4],0x0
MOV dword ptr [ESI + 0x100],EAX
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0xe0],EAX
MOV dword ptr [ESI + 0xe8],ECX
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0xc]
PUSH ESI
MOV dword ptr [ESI + 0xec],EAX
MOV dword ptr [ESI + 0x114],EDX
CALL 0x00426220
ADD ESP,0x4
MOV dword ptr [ESI + 0x118],EAX
POP ESI
RET
