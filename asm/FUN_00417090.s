; FUN_00417090
PUSH ECX
PUSH EBX
PUSH EBP
MOV EAX,0x4d79f8
PUSH ESI
PUSH EDI
MOV dword ptr [ESP + 0x10],EAX
MOV EBX,0x4d7c68
CMP dword ptr [EAX],0x0
JZ 0x004170ed
MOV ESI,dword ptr [EBX]
TEST ESI,ESI
JZ 0x004170ed
MOV EAX,dword ptr [ESI + 0x10]
XOR EDI,EDI
CMP word ptr [ESI + 0xc],DI
JBE 0x004170d4
LEA EBP,[EAX + 0x4]
MOV EAX,dword ptr [EBP]
PUSH EAX
CALL 0x0048eac0
MOVSX ECX,word ptr [ESI + 0xc]
ADD ESP,0x4
ADD EBP,0x8
INC EDI
CMP EDI,ECX
JC 0x004170bc
MOV EDX,dword ptr [ESI + 0x10]
PUSH EDX
CALL 0x0049f200
ADD ESP,0x4
PUSH ESI
CALL 0x0049f200
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0x4
MOV dword ptr [EBX],0x0
MOV dword ptr [EBX + 0x4],0x0
MOV dword ptr [EAX],0x0
ADD EBX,0x8
ADD EAX,0x4
CMP EBX,0x4d8110
MOV dword ptr [ESP + 0x10],EAX
JL 0x004170a3
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
