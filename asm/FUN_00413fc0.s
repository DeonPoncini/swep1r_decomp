; FUN_00413fc0
SUB ESP,0x2c
MOV EAX,dword ptr [ESP + 0x4c]
PUSH EBX
PUSH EBP
PUSH ESI
CMP EAX,0x20000
PUSH EDI
MOV dword ptr [ESP + 0x18],0x0
JZ 0x00414035
CMP EAX,0x40000
JZ 0x0041401a
CMP EAX,0x80000
JZ 0x00413fff
MOV EBP,0xfa3
MOV dword ptr [ESP + 0x10],0xfa4
MOV dword ptr [ESP + 0x14],0xfa5
JMP 0x0041404a
MOV EBP,0xfa0
MOV dword ptr [ESP + 0x10],0xfa1
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [ESP + 0x18],0x400000
JMP 0x0041404a
MOV EBP,0xfa3
MOV dword ptr [ESP + 0x10],0xfa4
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [ESP + 0x18],0x400000
JMP 0x0041404a
MOV EBP,0xfa0
MOV dword ptr [ESP + 0x10],0xfa1
MOV dword ptr [ESP + 0x14],0xfa2
MOV EAX,dword ptr [ESP + 0x68]
MOV ECX,dword ptr [ESP + 0x64]
MOV EDX,dword ptr [ESP + 0x4c]
PUSH 0x0
PUSH 0x417be0
PUSH 0x0
PUSH EAX
MOV EAX,dword ptr [ESP + 0x58]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x58]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x58]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00416d90
MOV EBX,dword ptr [ESP + 0x78]
MOV EDI,dword ptr [ESP + 0x74]
ADD ESP,0x24
MOV ESI,EAX
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x00414b60
MOV EAX,dword ptr [ESI + 0x28]
MOV ECX,dword ptr [ESI + 0x30]
ADD ESP,0xc
MOV dword ptr [ESP + 0x30],EAX
LEA EDX,[ESP + 0x48]
LEA EAX,[ESP + 0x68]
PUSH EDX
PUSH EAX
PUSH EBP
MOV dword ptr [ESP + 0x44],ECX
CALL 0x00417120
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
LEA ECX,[ESP + 0x44]
LEA EDX,[ESP + 0x40]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00417120
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0xc
LEA ECX,[ESP + 0x4c]
LEA EDX,[ESP + 0x64]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00417120
MOV EAX,dword ptr [ESP + 0x68]
ADD ESP,0xc
CMP EAX,0x10000
JZ 0x0041424c
CMP EAX,0x20000
JZ 0x0041424c
MOV ECX,dword ptr [ESP + 0x68]
MOV EAX,dword ptr [ESP + 0x48]
PUSH 0x0
PUSH 0x1
LEA EDX,[ECX + EDI*0x1 + -0x1]
LEA ECX,[EAX + EBX*0x1 + -0x1]
MOV dword ptr [ESP + 0x2c],EDX
LEA EDX,[ESP + 0x24]
PUSH EDX
PUSH EBP
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x34],EDI
MOV dword ptr [ESP + 0x38],EBX
MOV dword ptr [ESP + 0x40],ECX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x0041413c
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
CMP ECX,EAX
JG 0x0041414c
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x68]
MOV EBP,dword ptr [ESP + 0x58]
PUSH 0x0
PUSH 0x1
LEA ECX,[EAX + EDI*0x1]
ADD EAX,EBP
MOV dword ptr [ESP + 0x24],ECX
MOV dword ptr [ESP + 0x28],EBX
LEA EDX,[EAX + EDI*0x1 + -0x1]
MOV EAX,dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x2c],EDX
LEA EDX,[ESP + 0x24]
LEA ECX,[EAX + EBX*0x1 + -0x1]
MOV EAX,dword ptr [ESP + 0x18]
PUSH EDX
PUSH EAX
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x40],ECX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x0041419e
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
CMP ECX,EAX
JG 0x004141ae
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [ESP + 0x64]
ADD EDX,EAX
MOV dword ptr [ESP + 0x20],EBX
LEA ECX,[EAX + EBP*0x1]
ADD EDX,EBP
ADD ECX,EDI
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x4c]
LEA EAX,[EDX + EDI*0x1 + -0x1]
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ESP + 0x18]
LEA EDX,[ECX + EBX*0x1 + -0x1]
PUSH EAX
MOV dword ptr [ESP + 0x2c],EDX
MOV EDX,dword ptr [ESP + 0x18]
LEA ECX,[ESP + 0x20]
PUSH 0x1
PUSH ECX
PUSH EDX
PUSH -0x1
PUSH ESI
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x00414207
MOV dword ptr [ESP + 0x30],EAX
MOV ECX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x38]
CMP EAX,ECX
JG 0x00414219
MOV dword ptr [ESP + 0x38],ECX
MOV EAX,ECX
MOV ECX,dword ptr [ESP + 0x60]
TEST ECX,ECX
JZ 0x0041423b
MOV EDX,dword ptr [ESP + 0x4c]
SUB EDI,EBP
SUB EBX,EDX
SUB EDI,0x2
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x00414b60
MOV EAX,dword ptr [ESP + 0x44]
ADD ESP,0xc
MOV ECX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [ESP + 0x64]
ADD EDX,ECX
ADD EBP,EDX
JMP 0x00414398
MOV EAX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [ESP + 0x48]
PUSH 0x0
PUSH 0x1
LEA ECX,[EAX + EDI*0x1 + -0x1]
LEA EAX,[EDX + EBX*0x1 + -0x1]
MOV dword ptr [ESP + 0x2c],ECX
LEA ECX,[ESP + 0x24]
PUSH ECX
PUSH EBP
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x34],EDI
MOV dword ptr [ESP + 0x38],EBX
MOV dword ptr [ESP + 0x40],EAX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x00414291
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
CMP ECX,EAX
JG 0x004142a1
MOV dword ptr [ESP + 0x38],EAX
MOV EDX,dword ptr [ESP + 0x68]
MOV EBP,dword ptr [ESP + 0x58]
ADD EDX,EDI
MOV EAX,EBP
MOV dword ptr [ESP + 0x1c],EDX
MOV EDX,dword ptr [ESP + 0x64]
SUB EAX,EDX
MOV EDX,dword ptr [ESP + 0x44]
PUSH 0x0
PUSH 0x1
LEA ECX,[EAX + EDI*0x1 + -0x1]
LEA EAX,[EDX + EBX*0x1 + -0x1]
MOV EDX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x2c],ECX
LEA ECX,[ESP + 0x24]
MOV dword ptr [ESP + 0x28],EBX
PUSH ECX
PUSH EDX
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x40],EAX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x004142f8
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
CMP ECX,EAX
JG 0x00414308
MOV dword ptr [ESP + 0x38],EAX
MOV EDX,dword ptr [ESP + 0x64]
MOV EAX,EBP
SUB EAX,EDX
MOV EDX,dword ptr [ESP + 0x4c]
ADD EAX,EDI
LEA ECX,[EBP + EDI*0x1 + -0x1]
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x24],ECX
MOV ECX,dword ptr [ESP + 0x18]
LEA EAX,[EDX + EBX*0x1 + -0x1]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x14]
PUSH ECX
LEA EDX,[ESP + 0x20]
PUSH 0x1
PUSH EDX
PUSH EAX
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x38],EBX
CALL 0x00412fb0
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x48]
ADD ESP,0x18
CMP ECX,EAX
JL 0x0041435a
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
CMP ECX,EAX
JG 0x0041436a
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESP + 0x60]
TEST EAX,EAX
JZ 0x00414388
MOV EDX,dword ptr [ESP + 0x4c]
SUB EDI,EBP
SUB EBX,EDX
SUB EDI,0x2
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x00414b60
ADD ESP,0xc
MOV ECX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [ESP + 0x64]
MOV EAX,dword ptr [ESP + 0x38]
ADD EDX,ECX
ADD EBP,EDX
MOV ECX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESI + 0x20]
SUB EAX,ECX
OR EDX,0x4
INC EAX
MOV dword ptr [ESI + 0x20],EDX
PUSH EAX
PUSH EBP
PUSH ESI
CALL 0x00414b40
LEA EAX,[ESI + 0x24]
ADD ESP,0xc
MOV ECX,dword ptr [EAX]
PUSH 0x0
MOV dword ptr [ESP + 0x20],ECX
PUSH 0x1
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x28],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x2c],ECX
MOV EDX,dword ptr [EAX + 0xc]
LEA EAX,[ESP + 0x24]
PUSH EAX
PUSH 0x3f1
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x40],EDX
CALL 0x00412fb0
ADD ESP,0x18
PUSH 0x82
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH EAX
PUSH ESI
CALL 0x00413090
ADD ESP,0x18
PUSH 0x1
PUSH ESI
CALL 0x00414e60
ADD ESP,0x8
MOV dword ptr [ESI + 0x18],0xb
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x2c
RET
