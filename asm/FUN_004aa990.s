; FUN_004aa990
PUSH EBX
MOV EBX,dword ptr [0x00dfaa94]
PUSH EBP
PUSH ESI
TEST EBX,EBX
PUSH EDI
JNZ 0x004aa9ba
MOV EAX,[0x00dfaa9c]
TEST EAX,EAX
JZ 0x004aa9b6
CALL 0x004aae20
TEST EAX,EAX
JNZ 0x004aaa17
MOV EBX,dword ptr [0x00dfaa94]
TEST EBX,EBX
JZ 0x004aaa17
MOV EBP,dword ptr [ESP + 0x14]
TEST EBP,EBP
JZ 0x004aaa17
MOV EDI,EBP
OR ECX,0xffffffff
XOR EAX,EAX
MOV EDX,dword ptr [EBX]
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
TEST EDX,EDX
MOV ESI,ECX
JZ 0x004aaa17
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
CMP ECX,ESI
JBE 0x004aa9fb
CMP byte ptr [ESI + EDX*0x1],0x3d
JNZ 0x004aa9fb
PUSH ESI
PUSH EBP
PUSH EDX
CALL 0x004aade0
ADD ESP,0xc
TEST EAX,EAX
JZ 0x004aaa0c
MOV EDX,dword ptr [EBX + 0x4]
ADD EBX,0x4
TEST EDX,EDX
JNZ 0x004aa9d6
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [EBX]
LEA EAX,[EAX + ESI*0x1 + 0x1]
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
