; FUN_00413c50
SUB ESP,0x18
MOV EAX,dword ptr [ESP + 0x40]
PUSH EBX
PUSH EBP
XOR EBP,EBP
PUSH ESI
PUSH EDI
TEST EAX,0x80000
MOV dword ptr [ESP + 0x10],EBP
MOV dword ptr [ESP + 0x14],EBP
JZ 0x00413c77
AND EAX,0xff
MOV dword ptr [ESP + 0x14],EAX
XOR EAX,EAX
MOV EBX,dword ptr [ESP + 0x4c]
MOV ECX,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESP + 0x30]
PUSH EBP
PUSH 0x417940
PUSH EBP
PUSH EAX
MOV EAX,dword ptr [ESP + 0x48]
PUSH EBX
PUSH EAX
MOV EAX,dword ptr [ESP + 0x44]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00416d90
MOV ESI,EAX
ADD ESP,0x24
MOV EAX,dword ptr [ESI + 0x20]
TEST EAX,0x20000
JZ 0x00413cf1
LEA ECX,[ESP + 0x50]
LEA EDX,[ESP + 0x10]
PUSH ECX
PUSH EDX
PUSH 0xfa3
CALL 0x00417120
MOV EDI,dword ptr [ESP + 0x50]
MOV EDX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
LEA EAX,[ESP + 0x50]
LEA ECX,[ESP + 0x10]
ADD EDI,EDX
PUSH EAX
PUSH ECX
PUSH 0x3f7
CALL 0x00417120
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
ADD EDI,EAX
MOV EBP,0x1
JMP 0x00413d54
TEST EAX,0x10000
JZ 0x00413d20
LEA EDX,[ESP + 0x50]
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH EAX
PUSH 0x3f3
CALL 0x00417120
MOV EDI,dword ptr [ESP + 0x50]
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
ADD EDI,EAX
MOV EBP,0x1
JMP 0x00413d54
TEST EAX,0x40000
JZ 0x00413d50
LEA ECX,[ESP + 0x50]
LEA EDX,[ESP + 0x10]
PUSH ECX
PUSH EDX
PUSH 0x3f4
CALL 0x00417120
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x50]
ADD ESP,0xc
CMP EAX,EDI
JBE 0x00413d54
SHR EAX,0x1
ADD EDI,EAX
JMP 0x00413d54
MOV EDI,dword ptr [ESP + 0x44]
MOV EAX,dword ptr [ESP + 0x48]
PUSH EAX
PUSH EDI
PUSH ESI
CALL 0x00414b40
MOV ECX,dword ptr [ESP + 0x4c]
MOV EDX,dword ptr [ESP + 0x48]
ADD ESP,0xc
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x00414b60
ADD ESP,0xc
TEST EBP,EBP
JZ 0x00413dcd
LEA EAX,[ESI + 0x24]
MOV EBP,0x1
PUSH 0x0
PUSH EBP
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x20],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x24],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x28],ECX
MOV EDX,dword ptr [EAX + 0xc]
LEA EAX,[ESP + 0x20]
PUSH EAX
PUSH 0x3f1
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x3c],EDX
CALL 0x00412fb0
ADD ESP,0x18
PUSH 0x82
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x00413090
ADD ESP,0x18
JMP 0x00413dd2
MOV EBP,0x1
MOV ECX,dword ptr [ESP + 0x38]
PUSH 0x0
PUSH ECX
PUSH ESI
CALL 0x00414b80
ADD ESP,0xc
AND EBX,0x20000
PUSH EBX
PUSH ESI
CALL 0x00414420
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0x8
TEST EAX,0x20000
JZ 0x00413ec0
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x4c]
PUSH EDX
PUSH EAX
PUSH 0xfa3
CALL 0x00417120
ADD ESP,0xc
LEA ECX,[ESP + 0x30]
LEA EDX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
PUSH 0xfa4
CALL 0x00417120
MOV EAX,dword ptr [ESI + 0x24]
ADD ESP,0xc
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,dword ptr [ESI + 0x28]
MOV EAX,dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x1c],ECX
MOV EDX,dword ptr [ESI + 0x24]
XOR EBX,EBX
PUSH EBX
PUSH EBP
LEA ECX,[EAX + EDX*0x1 + -0x1]
MOV EAX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESP + 0x28],ECX
MOV EDX,dword ptr [ESI + 0x28]
LEA ECX,[EAX + EDX*0x1 + -0x1]
LEA EDX,[ESP + 0x20]
PUSH EDX
PUSH 0xfa3
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x3c],ECX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x64]
MOV ECX,dword ptr [ESI + 0x24]
ADD EAX,ECX
ADD ESP,0x18
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,dword ptr [ESI + 0x28]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x1c],ECX
MOV EDX,dword ptr [ESI + 0x24]
SUB EDI,EAX
PUSH EBX
PUSH EBP
LEA EAX,[EDI + EDX*0x1 + -0x1]
MOV EDX,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x28],EAX
MOV ECX,dword ptr [ESI + 0x28]
LEA EAX,[EDX + ECX*0x1 + -0x1]
LEA ECX,[ESP + 0x20]
PUSH ECX
PUSH 0xfa4
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x3c],EAX
CALL 0x00412fb0
ADD ESP,0x18
JMP 0x00413ec2
XOR EBX,EBX
PUSH EBP
PUSH ESI
CALL 0x00414e60
MOV AL,byte ptr [ESI + 0x20]
ADD ESP,0x8
MOV dword ptr [ESI + 0x18],0xa
TEST AL,0x80
MOV EAX,[0x004d7c54]
JZ 0x00413f5c
CMP EAX,EBX
JNZ 0x00413f2d
MOV EAX,dword ptr [ESP + 0x14]
MOV dword ptr [0x004d7c50],EBX
CMP EAX,EBX
MOV dword ptr [ESI + 0x53c],EBP
JNZ 0x00413f05
MOV EDX,dword ptr [0x004d7c50]
MOV dword ptr [ESI + 0x540],EDX
JMP 0x00413f0b
MOV dword ptr [ESI + 0x540],EAX
MOV ECX,dword ptr [0x004d7c50]
MOV EAX,[0x004d7c54]
INC ECX
INC EAX
MOV [0x004d7c54],EAX
MOV dword ptr [0x004d7c50],ECX
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
MOV EAX,dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x53c],EBP
CMP EAX,EBX
JNZ 0x00413f40
MOV EAX,[0x004d7c50]
MOV dword ptr [ESI + 0x540],EAX
MOV dword ptr [0x004d7c54],EBX
MOV dword ptr [0x004d7c50],EBX
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
CMP EAX,EBX
JZ 0x00413f88
MOV EAX,dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x53c],EBP
CMP EAX,EBX
JNZ 0x00413f7c
MOV ECX,dword ptr [0x004d7c50]
MOV dword ptr [ESI + 0x540],ECX
JMP 0x00413f82
MOV dword ptr [ESI + 0x540],EAX
INC dword ptr [0x004d7c50]
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
