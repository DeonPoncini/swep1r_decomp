; FUN_00431a50
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
TEST EDI,EDI
JZ 0x00431af9
MOV EAX,dword ptr [ESP + 0x18]
TEST EAX,EAX
JNZ 0x00431a6d
LEA EAX,[EDI + 0x8]
JMP 0x00431a79
CMP EAX,0x2
JNZ 0x00431af9
LEA EAX,[EDI + 0x4]
MOV EDX,dword ptr [ESP + 0x20]
MOV EBX,dword ptr [ESP + 0x1c]
MOV EBP,EDX
AND EBP,0x10
JZ 0x00431aa5
MOV ECX,dword ptr [ESP + 0x24]
CMP ECX,0x2
JNZ 0x00431a95
OR dword ptr [EAX],EBX
JMP 0x00431aa5
CMP ECX,0x3
JNZ 0x00431a9e
AND dword ptr [EAX],EBX
JMP 0x00431aa5
CMP ECX,0x1
JNZ 0x00431aa5
MOV dword ptr [EAX],EBX
TEST DL,0x20
JZ 0x00431afb
PUSH EDI
CALL 0x00431770
ADD ESP,0x4
TEST AH,0x40
JZ 0x00431afb
PUSH EDI
XOR ESI,ESI
CALL 0x00431780
ADD ESP,0x4
TEST EAX,EAX
JLE 0x00431afb
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH EBP
PUSH EBX
PUSH ECX
PUSH ESI
PUSH EDI
CALL 0x00431790
ADD ESP,0x8
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
INC ESI
PUSH EDI
CALL 0x00431780
ADD ESP,0x4
CMP ESI,EAX
JL 0x00431ac7
POP EDI
POP ESI
POP EBP
POP EBX
RET
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET