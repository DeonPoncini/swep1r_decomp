; FUN_0049fe50
MOV EAX,[0x00dfab38]
TEST EAX,EAX
JNZ 0x0049fe6b
MOV EAX,dword ptr [ESP + 0x4]
CMP EAX,0x41
JL 0x0049fed1
CMP EAX,0x5a
JG 0x0049fed1
ADD EAX,0x20
RET
PUSH EDI
PUSH ESI
PUSH EBX
PUSH 0xecd60c
CALL dword ptr [0x004ac0d8]
MOV EAX,[0x00ecd608]
MOV EDI,dword ptr [0x004ac184]
TEST EAX,EAX
JZ 0x0049fea0
PUSH 0xecd60c
CALL EDI
PUSH 0x13
CALL 0x004a1670
ADD ESP,0x4
MOV ESI,0x1
JMP 0x0049fea2
XOR ESI,ESI
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
CALL 0x0049fee0
ADD ESP,0x4
MOV EBX,EAX
TEST ESI,ESI
JZ 0x0049fec5
PUSH 0x13
CALL 0x004a16f0
ADD ESP,0x4
MOV EAX,EBX
POP EBX
POP ESI
POP EDI
RET
PUSH 0xecd60c
CALL EDI
MOV EAX,EBX
POP EBX
POP ESI
POP EDI
RET
