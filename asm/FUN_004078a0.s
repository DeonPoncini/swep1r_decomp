; FUN_004078a0
MOV EAX,dword ptr [ESP + 0xc]
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
PUSH 0x0
PUSH EAX
PUSH ESI
PUSH EDI
PUSH EBX
CALL 0x00407500
MOV ECX,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESP + 0x38]
ADD ESP,0x14
PUSH EAX
PUSH ECX
PUSH ESI
PUSH EDX
PUSH EDI
PUSH EBX
CALL 0x004078e0
ADD ESP,0x18
POP EDI
POP ESI
POP EBX
RET
