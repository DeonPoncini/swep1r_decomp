; FUN_0045bf20
SUB ESP,0x28
LEA ECX,[ESP + 0x1c]
PUSH EBP
MOV EBP,dword ptr [ESP + 0x30]
PUSH ESI
MOV EAX,dword ptr [EBP + 0x34]
SHL EAX,0x5
ADD EAX,0x4c4010
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
MOV EDX,dword ptr [EBP + 0x34]
ADD ESP,0x8
SHL EDX,0x5
ADD EDX,0x4c401c
LEA EAX,[ESP + 0xc]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
MOV AL,byte ptr [EBP + 0x70]
ADD ESP,0x8
XOR ESI,ESI
TEST AL,AL
JLE 0x0045c008
PUSH EDI
PUSH EBX
MOV dword ptr [ESP + 0x3c],0xe29970
PUSH ESI
PUSH EBP
CALL 0x0045cb80
ADD ESP,0x8
LEA EDI,[ESI + 0x1c]
PUSH EDI
PUSH 0x456c6d6f
CALL 0x00450b30
MOV EBX,EAX
ADD ESP,0x8
TEST EBX,EBX
JZ 0x0045bfee
MOV EDX,dword ptr [ESP + 0x3c]
LEA ECX,[ESP + 0x20]
PUSH ECX
MOV EAX,dword ptr [EDX]
PUSH EAX
CALL 0x0044afb0
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [0x00e298a4]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [0x00e298a0]
FSUB dword ptr [ESP + 0x18]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [EBX + 0x68]
ADD ESP,0x8
LEA EAX,[ESP + 0x20]
PUSH ECX
PUSH EDX
PUSH 0xe298a0
PUSH EAX
PUSH 0x14
PUSH EDI
CALL 0x00468800
ADD ESP,0x18
MOV ECX,dword ptr [ESP + 0x3c]
INC ESI
ADD ECX,0x4
MOV dword ptr [ESP + 0x3c],ECX
MOVSX ECX,byte ptr [EBP + 0x70]
CMP ESI,ECX
JL 0x0045bf73
POP EBX
POP EDI
POP ESI
POP EBP
ADD ESP,0x28
RET
