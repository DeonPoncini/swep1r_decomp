; FUN_004879a0
PUSH EBX
MOV EBX,dword ptr [0x00529508]
PUSH ESI
PUSH EDI
TEST EBX,EBX
JZ 0x004879de
MOV EDX,dword ptr [ESP + 0x10]
TEST EDX,EDX
JZ 0x004879de
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
MOV EAX,[0x00ecc420]
NOT ECX
DEC ECX
MOV ESI,ECX
PUSH ESI
PUSH EDX
PUSH EBX
CALL dword ptr [EAX + 0x40]
ADD ESP,0xc
XOR ECX,ECX
CMP ESI,EAX
SETNZ CL
MOV EAX,ECX
POP EDI
POP ESI
POP EBX
RET
POP EDI
POP ESI
XOR EAX,EAX
POP EBX
RET