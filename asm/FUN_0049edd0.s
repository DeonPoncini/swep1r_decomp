; FUN_0049edd0
PUSH ECX
MOV EAX,[0x00dfab38]
PUSH EBX
PUSH EBP
XOR EBP,EBP
PUSH ESI
PUSH EDI
TEST EAX,EAX
JNZ 0x0049ee0e
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
CMP byte ptr [EAX],0x0
JZ 0x0049ef49
MOV CL,byte ptr [EDX]
CMP CL,0x41
JL 0x0049ee00
CMP CL,0x5a
JG 0x0049ee00
ADD CL,0x20
MOV byte ptr [EDX],CL
MOV CL,byte ptr [EDX + 0x1]
INC EDX
TEST CL,CL
JNZ 0x0049edef
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
PUSH 0xecd60c
CALL dword ptr [0x004ac0d8]
MOV EAX,[0x00ecd608]
TEST EAX,EAX
JZ 0x0049ee41
PUSH 0xecd60c
CALL dword ptr [0x004ac184]
PUSH 0x13
CALL 0x004a1670
ADD ESP,0x4
MOV dword ptr [ESP + 0x10],0x1
JMP 0x0049ee49
MOV dword ptr [ESP + 0x10],0x0
MOV EAX,[0x00dfab38]
TEST EAX,EAX
JNZ 0x0049ee9f
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x0049ee66
PUSH 0x13
CALL 0x004a16f0
ADD ESP,0x4
JMP 0x0049ee71
PUSH 0xecd60c
CALL dword ptr [0x004ac184]
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,EAX
CMP byte ptr [EAX],0x0
JZ 0x0049ef49
MOV CL,byte ptr [EDX]
CMP CL,0x41
JL 0x0049ee91
CMP CL,0x5a
JG 0x0049ee91
ADD CL,0x20
MOV byte ptr [EDX],CL
MOV CL,byte ptr [EDX + 0x1]
INC EDX
TEST CL,CL
JNZ 0x0049ee80
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EBX,dword ptr [ESP + 0x18]
PUSH 0x1
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH -0x1
PUSH EBX
PUSH 0x100
PUSH EAX
CALL 0x004a29a0
MOV ESI,EAX
ADD ESP,0x20
TEST ESI,ESI
JZ 0x0049ef10
PUSH ESI
CALL 0x0049f270
MOV EBP,EAX
ADD ESP,0x4
TEST EBP,EBP
JZ 0x0049ef10
MOV EAX,[0x00dfab38]
PUSH 0x1
PUSH 0x0
PUSH ESI
PUSH EBP
PUSH -0x1
PUSH EBX
PUSH 0x100
PUSH EAX
CALL 0x004a29a0
ADD ESP,0x20
TEST EAX,EAX
JZ 0x0049ef10
MOV EDI,EBP
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
SUB EDI,ECX
MOV EDX,ECX
MOV ESI,EDI
MOV EDI,EBX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EDX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x0049ef33
PUSH 0x13
CALL 0x004a16f0
ADD ESP,0x4
PUSH EBP
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
PUSH 0xecd60c
CALL dword ptr [0x004ac184]
PUSH EBP
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,EBX
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
