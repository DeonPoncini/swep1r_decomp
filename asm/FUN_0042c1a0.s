; FUN_0042c1a0
SUB ESP,0x14
PUSH EBX
PUSH EBP
PUSH ESI
XOR ESI,ESI
PUSH EDI
PUSH ESI
PUSH -0x68
CALL 0x004285d0
MOV EAX,[0x0050c048]
ADD ESP,0x8
TEST AH,0x2
JZ 0x0042c1db
CMP dword ptr [0x0050c040],ESI
JLE 0x0042c1db
MOV EAX,[0x00e98e90]
AND EAX,0x1100
CMP EAX,0x1100
JZ 0x0042c2c8
MOV dword ptr [0x00e9a830],ESI
MOV dword ptr [ESP + 0x10],ESI
MOV EBX,0xe9a3e0
MOV EBP,0xe9a590
MOV EAX,dword ptr [ESI*0x4 + 0x4b94c8]
TEST EAX,EAX
JL 0x0042c28b
MOV ECX,dword ptr [ESI*0x4 + 0xe9a480]
MOV EDX,dword ptr [ESI*0x4 + 0xe9a488]
MOV EAX,dword ptr [ESI*0x4 + 0xe99c20]
MOV dword ptr [ESI*0x4 + 0xe9a598],ECX
MOV ECX,dword ptr [ESI*0x4 + 0xe99c28]
MOV dword ptr [EBP],EDX
MOV dword ptr [ESI*0x4 + 0xe9a480],EAX
LEA EDX,[ESP + 0x1c]
MOV dword ptr [ESI*0x4 + 0xe9a488],ECX
PUSH 0x1
LEA EAX,[ESP + 0x24]
PUSH EDX
LEA ECX,[ESP + 0x20]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x34]
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH EDX
PUSH EBX
PUSH EAX
MOV dword ptr [ESP + 0x2c],0x1
CALL 0x0042b710
FLD dword ptr [ESP + 0x30]
ADD ESP,0x1c
CALL 0x0049ed20
FLD dword ptr [ESP + 0x18]
MOV EDI,EAX
MOV dword ptr [ESI*0x4 + 0xe99c20],EDI
CALL 0x0049ed20
PUSH ESI
PUSH EAX
PUSH EDI
MOV dword ptr [ESI*0x4 + 0xe99c28],EAX
CALL 0x0042bb50
ADD ESP,0xc
ADD EBX,0xc
INC ESI
ADD EBP,0x4
CMP EBX,0xe9a3f8
JL 0x0042c1ef
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x0042c2c8
FILD dword ptr [0x00e9a830]
FMUL qword ptr [0x004ac5c0]
CALL 0x0049ed20
PUSH EAX
PUSH -0x38
PUSH -0x1
PUSH -0x1
PUSH -0x68
CALL 0x00428740
ADD ESP,0x14
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
