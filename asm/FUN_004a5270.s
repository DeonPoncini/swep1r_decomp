; FUN_004a5270
MOV EAX,[0x00dfac80]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [0x004ac0f4]
PUSH ESI
XOR ESI,ESI
XOR EBX,EBX
PUSH EDI
MOV EDI,dword ptr [0x004ac0f0]
TEST EAX,EAX
JNZ 0x004a52b2
CALL EDI
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004a529c
MOV EAX,0x1
JMP 0x004a52ad
CALL EBP
MOV EBX,EAX
TEST EBX,EBX
JZ 0x004a53bf
MOV EAX,0x2
MOV [0x00dfac80],EAX
CMP EAX,0x1
JNZ 0x004a5352
TEST ESI,ESI
JNZ 0x004a52cb
CALL EDI
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004a53bf
CMP word ptr [ESI],0x0
MOV EAX,ESI
JZ 0x004a52e5
ADD EAX,0x2
CMP word ptr [EAX],0x0
JNZ 0x004a52d3
ADD EAX,0x2
CMP word ptr [EAX],0x0
JNZ 0x004a52d3
SUB EAX,ESI
PUSH 0x0
SAR EAX,0x1
INC EAX
PUSH 0x0
MOV EBP,EAX
PUSH 0x0
PUSH 0x0
PUSH EBP
PUSH ESI
PUSH 0x0
PUSH 0x0
CALL dword ptr [0x004ac0d0]
MOV EDI,EAX
TEST EDI,EDI
JZ 0x004a5344
PUSH EDI
CALL 0x0049f270
MOV EBX,EAX
ADD ESP,0x4
TEST EBX,EBX
JZ 0x004a5344
PUSH 0x0
PUSH 0x0
PUSH EDI
PUSH EBX
PUSH EBP
PUSH ESI
PUSH 0x0
PUSH 0x0
CALL dword ptr [0x004ac0d0]
TEST EAX,EAX
JNZ 0x004a5336
PUSH EBX
CALL 0x0049f200
ADD ESP,0x4
XOR EBX,EBX
PUSH ESI
CALL dword ptr [0x004ac0f8]
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
RET
PUSH ESI
CALL dword ptr [0x004ac0f8]
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
CMP EAX,0x2
JNZ 0x004a53bf
TEST EBX,EBX
JNZ 0x004a5363
CALL EBP
MOV EBX,EAX
TEST EBX,EBX
JZ 0x004a53bf
MOV CL,byte ptr [EBX]
MOV EAX,EBX
TEST CL,CL
JZ 0x004a537b
MOV CL,byte ptr [EAX + 0x1]
INC EAX
TEST CL,CL
JNZ 0x004a536b
MOV CL,byte ptr [EAX + 0x1]
INC EAX
TEST CL,CL
JNZ 0x004a536b
SUB EAX,EBX
INC EAX
MOV ESI,EAX
PUSH ESI
CALL 0x0049f270
MOV EBP,EAX
ADD ESP,0x4
TEST EBP,EBP
JNZ 0x004a539d
PUSH EBX
CALL dword ptr [0x004ac0fc]
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV ECX,ESI
MOV ESI,EBX
MOV EAX,ECX
MOV EDI,EBP
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
PUSH EBX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
CALL dword ptr [0x004ac0fc]
MOV EAX,EBP
POP EDI
POP ESI
POP EBP
POP EBX
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
RET
