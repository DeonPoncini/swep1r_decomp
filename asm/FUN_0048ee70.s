; FUN_0048ee70
SUB ESP,0x8
PUSH EBX
MOV EBX,dword ptr [ESP + 0x10]
PUSH EBP
PUSH ESI
TEST EBX,EBX
PUSH EDI
JZ 0x0048efd7
MOV EAX,dword ptr [EBX + 0x64]
LEA EBP,[EBX + 0x44]
TEST EAX,EAX
MOV dword ptr [ESP + 0x14],0x0
JBE 0x0048ef8f
MOV ECX,dword ptr [EBP]
MOV EAX,dword ptr [EBP + 0x4]
TEST ECX,ECX
MOV dword ptr [ESP + 0x10],0x0
JBE 0x0048ef64
LEA ESI,[EAX + 0x50]
MOV EAX,dword ptr [ESI + -0x4]
TEST EAX,EAX
JZ 0x0048eec5
PUSH EAX
MOV EAX,[0x00ecc428]
CALL dword ptr [EAX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [ESI]
TEST EAX,EAX
JZ 0x0048eed8
MOV ECX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [ECX + 0x24]
ADD ESP,0x4
MOV EDI,dword ptr [ESI + 0x1c]
TEST EDI,EDI
JZ 0x0048ef0f
MOV EAX,dword ptr [ESI + 0x2c]
XOR EBX,EBX
TEST EAX,EAX
JBE 0x0048eefc
PUSH EDI
CALL 0x00492410
MOV EAX,dword ptr [ESI + 0x2c]
ADD ESP,0x4
ADD EDI,0x48
INC EBX
CMP EBX,EAX
JC 0x0048eee8
MOV EDX,dword ptr [ESI + 0x1c]
MOV EAX,[0x00ecc428]
PUSH EDX
CALL dword ptr [EAX + 0x24]
MOV EBX,dword ptr [ESP + 0x20]
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x0048ef23
MOV ECX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [ECX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x8]
TEST EAX,EAX
JZ 0x0048ef37
MOV EDX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [EDX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x20]
TEST EAX,EAX
JZ 0x0048ef4a
PUSH EAX
MOV EAX,[0x00ecc428]
CALL dword ptr [EAX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBP]
ADD ESI,0x94
INC EAX
CMP EAX,ECX
MOV dword ptr [ESP + 0x10],EAX
JC 0x0048eeb2
MOV EAX,dword ptr [EBP + 0x4]
TEST EAX,EAX
JZ 0x0048ef78
MOV ECX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [ECX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [EBX + 0x64]
ADD EBP,0x8
INC EAX
CMP EAX,ECX
MOV dword ptr [ESP + 0x14],EAX
JC 0x0048ee99
MOV EAX,dword ptr [EBX + 0x78]
TEST EAX,EAX
JZ 0x0048efa3
MOV EDX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [EDX + 0x24]
ADD ESP,0x4
MOV EAX,dword ptr [EBX + 0x6c]
XOR ESI,ESI
TEST EAX,EAX
JBE 0x0048efc3
MOV EAX,dword ptr [EBX + 0x68]
MOV ECX,dword ptr [EAX + ESI*0x4]
PUSH ECX
CALL 0x0048eac0
MOV EAX,dword ptr [EBX + 0x6c]
ADD ESP,0x4
INC ESI
CMP ESI,EAX
JC 0x0048efac
MOV EAX,dword ptr [EBX + 0x68]
TEST EAX,EAX
JZ 0x0048efd7
MOV EDX,dword ptr [0x00ecc428]
PUSH EAX
CALL dword ptr [EDX + 0x24]
ADD ESP,0x4
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
