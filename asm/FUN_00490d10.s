; FUN_00490d10
SUB ESP,0x3c
LEA ECX,[ESP + 0xc]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x54]
LEA EAX,[EDI + 0x9c]
PUSH EAX
PUSH ECX
CALL 0x00492930
MOV EAX,dword ptr [EDI + 0x80]
MOV EBX,dword ptr [ESP + 0x58]
ADD ESP,0x8
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0x1c]
SHL EDX,0x4
ADD EDX,EAX
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
CALL 0x00492f40
MOV EAX,dword ptr [EDI + 0x8c]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00490d92
FLD dword ptr [EAX + 0x9c]
FCHS
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [EAX + 0xa0]
FCHS
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EAX + 0xa4]
LEA ECX,[ESP + 0x10]
LEA EDX,[ESP + 0x1c]
FCHS
FSTP dword ptr [ESP + 0x18]
PUSH ECX
PUSH EDX
CALL 0x00493160
ADD ESP,0x8
LEA EAX,[ESP + 0x1c]
MOV EBP,dword ptr [EBX + 0x1c]
MOV ECX,dword ptr [ESP + 0x58]
PUSH EAX
MOV EAX,dword ptr [EDI + 0x80]
PUSH ECX
LEA EDX,[EAX + EAX*0x2]
SHL EDX,0x4
ADD EDX,EBP
PUSH EDX
CALL 0x00492b70
MOV EAX,dword ptr [EDI + 0x90]
ADD ESP,0xc
TEST EAX,EAX
JBE 0x00490e08
MOV ESI,dword ptr [EDI + 0x94]
XOR EBP,EBP
TEST EAX,EAX
JBE 0x00490e08
MOV EAX,dword ptr [ESI + 0x80]
MOV ECX,dword ptr [EBX + 0x24]
CMP dword ptr [ECX + EAX*0x4],0x0
JNZ 0x00490df7
MOV EAX,dword ptr [EDI + 0x80]
MOV ECX,dword ptr [EBX + 0x1c]
LEA EDX,[EAX + EAX*0x2]
SHL EDX,0x4
ADD EDX,ECX
PUSH EDX
PUSH ESI
PUSH EBX
CALL 0x00490d10
ADD ESP,0xc
MOV EAX,dword ptr [EDI + 0x90]
MOV ESI,dword ptr [ESI + 0x98]
INC EBP
CMP EBP,EAX
JC 0x00490dcc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x3c
RET
