; FUN_00414420
SUB ESP,0x14
PUSH ESI
MOV ESI,dword ptr [ESP + 0x1c]
TEST ESI,ESI
JZ 0x0041458b
MOV EAX,dword ptr [ESI + 0x20]
PUSH EDI
PUSH EBP
PUSH EBX
MOV EBX,dword ptr [ESP + 0x2c]
AND EAX,0x20000
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],EAX
JZ 0x0041445e
PUSH ESI
CALL 0x00418b70
ADD ESP,0x4
TEST EBX,EBX
JZ 0x0041445e
MOV EAX,dword ptr [ESI + 0x20]
OR EAX,0x20000
JMP 0x00414466
MOV EAX,dword ptr [ESI + 0x20]
AND EAX,0xfffdffff
TEST EAX,0x40000
MOV dword ptr [ESI + 0x20],EAX
JZ 0x00414480
XOR EAX,EAX
TEST EBX,EBX
SETNZ AL
ADD EAX,0x3f4
MOV EDI,EAX
JMP 0x004144a7
TEST EAX,0x10000
JZ 0x00414498
XOR ECX,ECX
TEST EBX,EBX
SETNZ CL
ADD ECX,0x3f2
MOV EDI,ECX
JMP 0x004144a7
XOR EDX,EDX
TEST EBX,EBX
SETNZ DL
ADD EDX,0x3f6
MOV EDI,EDX
LEA EAX,[ESP + 0x2c]
LEA ECX,[ESP + 0x28]
PUSH EAX
PUSH ECX
PUSH EDI
CALL 0x00417120
LEA EDX,[ESI + 0x24]
ADD ESP,0xc
MOV EBP,EDX
CMP EDI,0x3f7
MOV EDX,dword ptr [EBP]
MOV EAX,dword ptr [EBP + 0x4]
MOV ECX,dword ptr [EBP + 0x8]
MOV EBP,dword ptr [EBP + 0xc]
MOV dword ptr [ESP + 0x20],EBP
JZ 0x004144f4
CMP EDI,0x3f6
JZ 0x004144f4
MOV ECX,dword ptr [ESP + 0x28]
ADD EDX,0x3
MOV dword ptr [ESP + 0x14],EDX
LEA EDX,[EDX + ECX*0x1 + -0x1]
MOV dword ptr [ESP + 0x1c],EDX
JMP 0x0041450a
MOV EBP,dword ptr [ESP + 0x28]
MOV EDX,ECX
SUB EDX,EBP
SUB EDX,0x3
SUB ECX,0x3
MOV dword ptr [ESP + 0x14],EDX
MOV dword ptr [ESP + 0x1c],ECX
MOV EDX,dword ptr [ESI + 0x30]
MOV ECX,dword ptr [ESI + 0x28]
SUB EDX,ECX
MOV ECX,dword ptr [ESP + 0x2c]
SUB EDX,ECX
INC EDX
SHR EDX,0x1
ADD EAX,EDX
MOV dword ptr [ESP + 0x18],EAX
LEA EAX,[EAX + ECX*0x1 + -0x1]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESI + 0xc]
TEST EAX,EAX
JNZ 0x00414550
PUSH 0x0
PUSH 0x0
PUSH 0x0
LEA ECX,[ESP + 0x20]
PUSH EDI
PUSH ECX
PUSH 0x0
PUSH ESI
CALL 0x00413b90
MOV ECX,dword ptr [EAX + 0x20]
ADD ESP,0x1c
OR CH,0x4
MOV dword ptr [EAX + 0x20],ECX
MOV EAX,dword ptr [ESI + 0xc]
PUSH 0x0
LEA EDX,[ESP + 0x18]
PUSH 0x1
PUSH EDX
PUSH EDI
PUSH 0x0
PUSH EAX
CALL 0x00412fb0
MOV EDI,dword ptr [ESP + 0x28]
ADD ESP,0x18
CMP EBX,EDI
JZ 0x00414586
MOV ECX,dword ptr [ESI + 0x1c]
MOV EDX,dword ptr [ESI + 0x8]
PUSH EBX
PUSH ECX
PUSH 0x1388
PUSH EDX
CALL 0x004151a0
ADD ESP,0x10
POP EBX
MOV EAX,EDI
POP EBP
POP EDI
POP ESI
ADD ESP,0x14
RET
