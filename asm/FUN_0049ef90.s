; FUN_0049ef90
SUB ESP,0x18
PUSH ESI
MOV ESI,dword ptr [ESP + 0x20]
PUSH EDI
CMP dword ptr [0x004d1f9c],0x1
JLE 0x0049efb3
XOR EAX,EAX
PUSH 0x8
MOV AL,byte ptr [ESI]
PUSH EAX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x0049efc3
MOV EDX,dword ptr [0x004d1d90]
XOR ECX,ECX
MOV CL,byte ptr [ESI]
MOV AL,byte ptr [EDX + ECX*0x2]
AND EAX,0x8
TEST EAX,EAX
JZ 0x0049efca
INC ESI
JMP 0x0049ef99
MOV EDI,ESI
OR ECX,0xffffffff
XOR EAX,EAX
PUSH 0x0
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
PUSH 0x0
PUSH ECX
LEA EAX,[ESP + 0x14]
PUSH ESI
PUSH EAX
CALL 0x004a2bd0
FLD qword ptr [EAX + 0x10]
ADD ESP,0x14
POP EDI
POP ESI
ADD ESP,0x18
RET
