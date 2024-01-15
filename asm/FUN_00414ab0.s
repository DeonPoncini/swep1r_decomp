; FUN_00414ab0
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EAX
MOV ECX,dword ptr [ESI + 0x4f8]
PUSH ECX
CALL 0x004174e0
MOV EDX,dword ptr [ESP + 0x18]
ADD ESP,0x8
MOV dword ptr [ESI + 0x4f8],EAX
MOV dword ptr [ESI + 0x4fc],EDX
POP ESI
RET
