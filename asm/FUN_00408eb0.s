; FUN_00408eb0
MOV ECX,dword ptr [0x0050c6b0]
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
TEST ECX,ECX
PUSH EDI
JZ 0x00408ee1
MOV EAX,dword ptr [EBX*0x4 + 0xec8660]
MOV EDX,dword ptr [ECX + 0x44]
SUB EDX,EAX
MOV dword ptr [ECX + 0x44],EDX
MOV ECX,dword ptr [0x0050c6b0]
MOV dword ptr [EBX*0x4 + 0xec8660],0x0
MOV EAX,[0x004d6c6c]
MOV ESI,dword ptr [EBX*0x4 + 0xec85c0]
MOV EDI,EAX
SUB EAX,ESI
TEST ECX,ECX
MOV [0x004d6c6c],EAX
MOV dword ptr [EBX*0x4 + 0xec85c0],0x0
JZ 0x00408f08
MOV dword ptr [ECX + 0x6c],EAX
CMP EAX,EDI
MOV ESI,EAX
JGE 0x00408f31
MOV ECX,dword ptr [0x004d6c68]
MOV EDX,dword ptr [ECX + ESI*0x4]
PUSH EDX
CALL 0x0048eac0
MOV EAX,[0x004d6c68]
ADD ESP,0x4
MOV dword ptr [EAX + ESI*0x4],0x0
INC ESI
CMP ESI,EDI
JL 0x00408f0e
MOV ESI,dword ptr [EBX*0x4 + 0xec8700]
TEST ESI,ESI
JZ 0x00408f60
MOV EDX,dword ptr [0x00ecc420]
MOV EDI,ESI
MOV ESI,dword ptr [ESI + 0x4]
MOV ECX,dword ptr [EDI]
PUSH ECX
CALL dword ptr [EDX + 0x24]
MOV EAX,[0x00ecc420]
ADD ESP,0x4
PUSH EDI
CALL dword ptr [EAX + 0x24]
ADD ESP,0x4
TEST ESI,ESI
JNZ 0x00408f3c
POP EDI
MOV dword ptr [EBX*0x4 + 0xec8700],0x0
POP ESI
POP EBX
RET
