; FUN_0049cd40
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x10]
SUB ESP,0x1c
MOV [0x00dfaa2c],EAX
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x2c]
PUSH EDI
PUSH ECX
PUSH EAX
PUSH ESI
CALL 0x0049cea0
MOV EDX,dword ptr [0x00dfaa28]
ADD ESP,0xc
PUSH EDX
CALL 0x0048c770
ADD ESP,0x4
PUSH ESI
CALL 0x0048c790
ADD ESP,0x4
PUSH 0x4af9b0
CALL 0x0048c7b0
ADD ESP,0x4
CALL dword ptr [0x004ac018]
MOV ESI,dword ptr [0x004ac22c]
PUSH 0x20
CALL ESI
SHL EAX,0x1
PUSH 0x20
MOV [0x00dfaa34],EAX
CALL ESI
PUSH 0xf
MOV EDI,EAX
CALL ESI
MOV ECX,dword ptr [ESP + 0x38]
LEA EAX,[EAX + EDI*0x2]
PUSH ECX
MOV [0x00dfaa38],EAX
CALL 0x00423cc0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0049ce48
MOV ESI,dword ptr [0x004ac254]
MOV EDI,dword ptr [0x004ac258]
MOV EBX,dword ptr [0x004ac218]
MOV EBP,dword ptr [0x004ac25c]
PUSH 0x0
PUSH 0x0
PUSH 0x0
LEA EDX,[ESP + 0x1c]
PUSH 0x0
PUSH EDX
CALL ESI
TEST EAX,EAX
JZ 0x0049ce2a
PUSH 0x0
PUSH 0x0
LEA EAX,[ESP + 0x18]
PUSH 0x0
PUSH EAX
CALL EDI
CMP EAX,-0x1
JZ 0x0049ce3d
TEST EAX,EAX
JZ 0x0049ce31
LEA ECX,[ESP + 0x10]
PUSH ECX
CALL EBX
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL EBP
PUSH 0x0
PUSH 0x0
PUSH 0x0
LEA EAX,[ESP + 0x1c]
PUSH 0x0
PUSH EAX
CALL ESI
TEST EAX,EAX
JNZ 0x0049cdf1
JMP 0x0049cdde
CALL 0x00424140
JMP 0x0049cdde
MOV EAX,dword ptr [ESP + 0x18]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
ADD ESP,0x1c
RET