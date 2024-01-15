; FUN_0047e880
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV dword ptr [ESI],EAX
XOR EAX,EAX
PUSH EAX
PUSH ESI
MOV dword ptr [ESI + 0x4],EAX
MOV dword ptr [ESI + 0xc],EAX
MOV dword ptr [ESI + 0x8],EAX
MOV dword ptr [ESI + 0x20],EAX
MOV dword ptr [ESI + 0x24],EAX
MOV dword ptr [ESI + 0x28],EAX
MOV dword ptr [ESI + 0x2c],EAX
CALL 0x0044eef0
ADD ESP,0x8
MOV EAX,ESI
POP ESI
RET
