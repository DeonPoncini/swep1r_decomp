; FUN_00486ca0
MOV EAX,dword ptr [ESP + 0x14]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [0x00510254]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ECX]
PUSH ESI
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x68]
POP ESI
RET
