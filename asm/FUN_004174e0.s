; FUN_004174e0
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH ESI
PUSH EDI
XOR EDI,EDI
TEST EAX,EAX
JZ 0x004174f6
PUSH EAX
CALL 0x0049f200
ADD ESP,0x4
MOV EBX,dword ptr [ESP + 0x14]
TEST EBX,EBX
JZ 0x0041752b
MOV EDI,EBX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
MOV ESI,ECX
INC ESI
PUSH ESI
CALL 0x0049f270
ADD ESP,0x4
MOV EDI,EAX
LEA EAX,[ESI + -0x1]
PUSH EAX
PUSH EBX
PUSH EDI
CALL 0x0049f340
ADD ESP,0xc
MOV byte ptr [ESI + EDI*0x1 + -0x1],0x0
MOV EAX,EDI
POP EDI
POP ESI
POP EBX
RET
