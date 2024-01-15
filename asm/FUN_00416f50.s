; FUN_00416f50
MOV ECX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ECX + 0x2c]
MOV EBX,dword ptr [ECX + 0x28]
PUSH ESI
MOV ESI,dword ptr [ECX + 0x24]
MOV EDX,EBP
PUSH EDI
MOV EDI,dword ptr [ECX + 0x30]
SUB EAX,ESI
SUB EDX,ESI
MOV ESI,dword ptr [ESP + 0x1c]
INC EAX
SUB EDI,EBX
SUB ESI,EBX
MOV EBX,dword ptr [ESP + 0x1c]
INC EDI
LEA EAX,[EAX + EBP*0x1 + -0x1]
MOV dword ptr [ECX + 0x2c],EAX
MOV dword ptr [ECX + 0x24],EBP
LEA EAX,[EDI + EBX*0x1 + -0x1]
XOR EDI,EDI
MOV dword ptr [ECX + 0x30],EAX
MOV EAX,dword ptr [ECX + 0x5c]
TEST EAX,EAX
MOV dword ptr [ECX + 0x28],EBX
JBE 0x00416fc7
LEA EAX,[ECX + 0x7c]
MOV EBX,dword ptr [EAX + -0x8]
ADD EAX,0x38
ADD EBX,EDX
MOV dword ptr [EAX + -0x40],EBX
MOV EBP,dword ptr [EAX + -0x38]
ADD EBP,EDX
MOV dword ptr [EAX + -0x38],EBP
MOV EBX,dword ptr [EAX + -0x3c]
ADD EBX,ESI
MOV dword ptr [EAX + -0x3c],EBX
MOV EBP,dword ptr [EAX + -0x34]
ADD EBP,ESI
INC EDI
MOV dword ptr [EAX + -0x34],EBP
MOV EBX,dword ptr [ECX + 0x5c]
CMP EDI,EBX
JC 0x00416f9c
POP EDI
POP ESI
POP EBP
POP EBX
RET
