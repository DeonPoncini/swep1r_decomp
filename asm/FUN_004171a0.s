; FUN_004171a0
SUB ESP,0x8
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
TEST EDI,EDI
JZ 0x00417297
MOV EBX,dword ptr [ESP + 0x20]
LEA ECX,[ESP + 0x20]
MOV EAX,EBX
LEA EDX,[ESP + 0x1c]
SHL EAX,0x3
SUB EAX,EBX
PUSH ECX
PUSH EDX
LEA ESI,[EDI + EAX*0x8]
MOV EAX,dword ptr [EDI + EAX*0x8 + 0x64]
PUSH EAX
CALL 0x00417120
MOV ECX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x2c]
ADD ESP,0xc
MOV dword ptr [ESI + 0x84],ECX
MOV dword ptr [ESI + 0x88],EDX
TEST EAX,EAX
JZ 0x00417264
MOV EBP,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x10],ECX
SUB EBP,dword ptr [EAX]
XOR ECX,ECX
MOV dword ptr [ESP + 0x14],ECX
INC EBP
MOV dword ptr [ESP + 0x1c],EBP
MOV EBP,dword ptr [EAX + 0xc]
SUB EBP,dword ptr [EAX + 0x4]
FILD dword ptr [ESP + 0x1c]
FIDIV dword ptr [ESP + 0x10]
INC EBP
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0x1c],EBP
MOV dword ptr [ESP + 0x14],ECX
LEA ECX,[EBX + 0x2]
MOV EDX,ECX
SHL EDX,0x3
SUB EDX,ECX
ADD ESI,0x74
FILD dword ptr [ESP + 0x1c]
FIDIV dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x1c]
FSTP dword ptr [ESI + -0x8]
FLD dword ptr [ESP + 0x1c]
FSTP dword ptr [EDI + EDX*0x8]
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x4],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x8],ECX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ESI + 0xc],EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
LEA EAX,[EDI + 0x24]
LEA EBX,[ESI + 0x74]
MOV EBP,dword ptr [EAX]
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EBP,dword ptr [EAX + 0x8]
MOV dword ptr [EBX + 0x8],EBP
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [EBX + 0xc],EAX
MOV EAX,dword ptr [EDI + 0x24]
LEA ECX,[ECX + EAX*0x1 + -0x1]
MOV dword ptr [ESI + 0x7c],ECX
MOV EAX,dword ptr [EDI + 0x28]
LEA ECX,[EAX + EDX*0x1 + -0x1]
MOV dword ptr [ESI + 0x80],ECX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
