; FUN_0048f180
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
PUSH EDI
MOV EAX,dword ptr [EBX + 0x88]
CMP EAX,-0x1
JZ 0x0048f1c2
MOV ECX,dword ptr [EBX + 0xf0]
LEA EDX,[EBX + 0xf4]
PUSH ECX
LEA ECX,[EBX + 0xc0]
PUSH EDX
PUSH ECX
MOV ECX,dword ptr [0x00deb110]
LEA EDX,[EAX + EAX*0x8]
LEA EAX,[EAX + EDX*0x4]
MOV EDX,dword ptr [ECX + 0x4]
LEA EAX,[EDX + EAX*0x4]
PUSH EAX
CALL 0x0048f210
ADD ESP,0x10
MOV EAX,dword ptr [EBX + 0x90]
TEST EAX,EAX
JBE 0x0048f20b
MOV ESI,dword ptr [EBX + 0x94]
XOR EDI,EDI
TEST EAX,EAX
JBE 0x0048f20b
MOV ECX,dword ptr [0x00df7ef8]
MOV EAX,dword ptr [ECX + 0x24]
TEST EAX,EAX
JZ 0x0048f1f1
MOV EDX,dword ptr [ESI + 0x80]
CMP dword ptr [EAX + EDX*0x4],0x0
JNZ 0x0048f1fa
PUSH ESI
CALL 0x0048f180
ADD ESP,0x4
MOV EAX,dword ptr [EBX + 0x90]
MOV ESI,dword ptr [ESI + 0x98]
INC EDI
CMP EDI,EAX
JC 0x0048f1d8
POP EDI
POP ESI
POP EBX
RET
