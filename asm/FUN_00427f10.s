; FUN_00427f10
PUSH ECX
PUSH EBX
PUSH ESI
PUSH 0x54657374
CALL 0x00450b00
MOV ESI,EAX
ADD ESP,0x4
XOR EBX,EBX
MOV dword ptr [ESP + 0x8],ESI
TEST ESI,ESI
JLE 0x00427f9e
PUSH EDI
PUSH EBP
PUSH EBX
PUSH 0x54657374
CALL 0x00450b30
MOV EBP,EAX
ADD ESP,0x8
TEST EBP,EBP
JZ 0x00427f97
MOV EAX,dword ptr [EBP + 0x1e70]
MOV ESI,0x4b9098
MOV ECX,dword ptr [EAX + 0x18]
MOV EDI,dword ptr [ECX]
MOV EDX,dword ptr [ESI]
PUSH 0x0
PUSH EDX
PUSH EDI
PUSH 0x1
CALL 0x00427fb0
ADD ESI,0x4
ADD ESP,0x10
CMP ESI,0x4b90c8
JC 0x00427f52
TEST byte ptr [EBP + 0x60],0x20
JZ 0x00427f93
MOV ESI,0x4b90c8
MOV EAX,dword ptr [ESI]
PUSH 0x0
PUSH EAX
PUSH EDI
PUSH 0x1
CALL 0x00427fb0
ADD ESI,0x4
ADD ESP,0x10
CMP ESI,0x4b90f0
JC 0x00427f78
MOV ESI,dword ptr [ESP + 0x10]
INC EBX
CMP EBX,ESI
JL 0x00427f2e
POP EBP
POP EDI
POP ESI
POP EBX
POP ECX
RET