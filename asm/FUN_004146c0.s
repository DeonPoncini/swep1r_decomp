; FUN_004146c0
MOV EAX,dword ptr [ESP + 0x24]
SUB ESP,0x40
MOV ECX,dword ptr [ESP + 0x44]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH EAX
PUSH 0x416820
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ECX
CALL 0x00416d90
MOV EDX,dword ptr [ESP + 0x84]
ADD ESP,0x24
MOV ESI,EAX
LEA EAX,[ESP + 0x10]
PUSH 0x6
PUSH EDX
PUSH EAX
XOR EDI,EDI
CALL 0x004176f0
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x1c]
MOV EBX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x20]
SUB ECX,EDX
SUB EBX,EAX
ADD ESP,0xc
INC EBX
LEA EAX,[ECX + 0x1]
TEST EAX,EAX
JL 0x00414723
MOV EDI,EAX
MOV EBP,dword ptr [ESP + 0x64]
PUSH 0x0
LEA EDX,[ESP + 0x24]
PUSH EBP
PUSH EDX
CALL 0x00417740
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x2c]
SUB EAX,ECX
MOV ECX,dword ptr [ESP + 0x34]
ADD ESP,0xc
SUB ECX,EDX
LEA EBX,[EBX + EAX*0x1 + 0x1]
LEA EAX,[ECX + 0x1]
CMP EDI,EAX
JG 0x00414758
MOV EDI,EAX
MOV EDX,dword ptr [ESP + 0x70]
MOV EAX,dword ptr [ESP + 0x6c]
MOV ECX,dword ptr [ESP + 0x68]
PUSH 0x0
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x3c]
PUSH ECX
PUSH EDX
CALL 0x004177b0
MOV dword ptr [ESP + 0x88],EAX
MOV EAX,dword ptr [ESP + 0x48]
MOV EDX,dword ptr [ESP + 0x50]
MOV ECX,EAX
NEG ECX
SHL ECX,0x1f
SUB ECX,EAX
MOV EAX,dword ptr [ESP + 0x44]
ADD ECX,EDX
MOV EDX,dword ptr [ESP + 0x4c]
SUB EDX,EAX
ADD ESP,0x14
LEA EBX,[EBX + ECX*0x2 + 0x2]
LEA EAX,[EDX + 0x1]
CMP EDI,EAX
JG 0x004147a7
MOV EDI,EAX
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x00414b40
MOV EAX,dword ptr [ESP + 0x64]
ADD ESP,0xc
CMP EAX,-0x1
JNZ 0x004147ca
MOV EAX,dword ptr [ESI + 0x24]
MOV ECX,dword ptr [ESI + 0x2c]
SUB EAX,ECX
ADD EAX,0x27f
SAR EAX,0x1
MOV ECX,dword ptr [ESP + 0x5c]
CMP ECX,-0x1
JNZ 0x004147e3
MOV ECX,dword ptr [ESI + 0x28]
MOV EDX,dword ptr [ESI + 0x30]
SUB ECX,EDX
ADD ECX,0x1df
SAR ECX,0x1
PUSH ECX
PUSH EAX
PUSH ESI
CALL 0x00414b60
ADD ESP,0xc
MOV EAX,0x280
MOV ECX,0x1e0
SUB EAX,EDI
SUB ECX,EBX
PUSH 0x0
LEA EDX,[ESP + 0x44]
PUSH 0x1
SHR EAX,0x1
SHR ECX,0x1
PUSH EDX
MOV dword ptr [ESP + 0x4c],EAX
MOV dword ptr [ESP + 0x50],ECX
PUSH 0x3f1
LEA EAX,[EDI + EAX*0x1 + -0x1]
LEA ECX,[EBX + ECX*0x1 + -0x1]
PUSH -0x1
PUSH ESI
MOV dword ptr [ESP + 0x60],EAX
MOV dword ptr [ESP + 0x64],ECX
CALL 0x00412fb0
ADD ESP,0x18
PUSH 0x82
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x00413090
MOV ECX,dword ptr [ESI + 0x28]
MOV EDX,dword ptr [ESP + 0x2c]
MOV EDI,dword ptr [ESP + 0x30]
MOV EAX,dword ptr [ESI + 0x24]
ADD ESP,0x18
ADD ECX,EDX
MOV EDX,dword ptr [ESP + 0x10]
PUSH ECX
MOV ECX,dword ptr [ESI + 0x2c]
SUB EDX,EDI
ADD EDX,ECX
SUB EDX,EAX
SAR EDX,0x1
ADD EDX,EAX
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH EAX
CALL 0x00417900
MOV ECX,dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0x2c]
MOV EBX,dword ptr [ESI + 0x2c]
ADD ESP,0xc
MOV EAX,dword ptr [ESI + 0x24]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x2c]
SUB EDX,ECX
ADD EDX,EBX
SUB EDX,EAX
SAR EDX,0x1
ADD EDX,EAX
LEA EAX,[ESP + 0x24]
PUSH EDX
PUSH EAX
CALL 0x00417900
MOV ECX,dword ptr [ESP + 0x38]
MOV EDX,dword ptr [ESP + 0x3c]
MOV EDI,dword ptr [ESP + 0x44]
MOV EAX,dword ptr [ESI + 0x24]
ADD ESP,0xc
SUB EDX,EDI
PUSH ECX
MOV ECX,dword ptr [ESI + 0x2c]
ADD EDX,ECX
SUB EDX,EAX
SAR EDX,0x1
ADD EDX,EAX
LEA EAX,[ESP + 0x34]
PUSH EDX
PUSH EAX
CALL 0x00417900
MOV ECX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x6c]
ADD ESP,0xc
ADD ECX,0xa
ADD EDX,0xa
PUSH 0x0
PUSH 0x0
PUSH ECX
PUSH EDX
PUSH EAX
PUSH 0x6
PUSH 0x0
PUSH ESI
CALL 0x004131c0
ADD ESP,0x20
LEA ECX,[ESP + 0x20]
PUSH 0x0
PUSH 0x100000
PUSH 0x0
PUSH ECX
PUSH 0x0
PUSH ESI
CALL 0x00413520
ADD ESP,0x18
PUSH 0x1
PUSH EBP
PUSH EAX
CALL 0x00417fe0
MOV EAX,dword ptr [ESP + 0x40]
MOV EDX,dword ptr [ESP + 0x3c]
XOR EBX,EBX
ADD ESP,0xc
LEA EBP,[EAX + 0xa]
MOV EAX,dword ptr [ESP + 0x68]
CMP EAX,EBX
LEA EDI,[EDX + 0xa]
MOV dword ptr [ESP + 0x60],EBX
JZ 0x0041494b
MOV ECX,dword ptr [0x00e99720]
PUSH ECX
PUSH EAX
CALL 0x0042de30
LEA EDX,[EAX + EAX*0x2]
ADD ESP,0x8
MOV dword ptr [ESP + 0x60],EDX
MOV EAX,dword ptr [ESP + 0x6c]
TEST EAX,EAX
JZ 0x00414972
MOV ECX,dword ptr [0x00e99720]
PUSH ECX
PUSH EAX
CALL 0x0042de30
MOV ECX,dword ptr [ESP + 0x68]
LEA EAX,[EAX + EAX*0x2]
ADD ESP,0x8
CMP ECX,EAX
JA 0x00414972
MOV dword ptr [ESP + 0x60],EAX
MOV EAX,dword ptr [ESP + 0x70]
TEST EAX,EAX
JZ 0x00414999
MOV EDX,dword ptr [0x00e99720]
PUSH EDX
PUSH EAX
CALL 0x0042de30
MOV ECX,dword ptr [ESP + 0x68]
LEA EAX,[EAX + EAX*0x2]
ADD ESP,0x8
CMP ECX,EAX
JA 0x00414999
MOV dword ptr [ESP + 0x60],EAX
MOV EAX,dword ptr [ESP + 0x60]
CMP EAX,0x96
MOV dword ptr [ESP + 0x60],EAX
JA 0x004149b0
MOV dword ptr [ESP + 0x60],0x96
MOV EAX,dword ptr [ESP + 0x68]
TEST EAX,EAX
JZ 0x00414a12
MOV ECX,dword ptr [0x00e99720]
PUSH ECX
PUSH EAX
CALL 0x0042df70
MOV EDX,dword ptr [ESP + 0x68]
ADD ESP,0x8
LEA EAX,[EAX + EAX*0x2]
MOV EBX,0x1
PUSH 0x0
PUSH 0x100000
PUSH EAX
MOV dword ptr [ESP + 0x60],EAX
MOV EAX,dword ptr [ESP + 0x74]
PUSH EDX
PUSH EBP
PUSH EDI
PUSH EAX
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x004132a0
MOV EAX,dword ptr [ESP + 0x98]
ADD ESP,0x28
TEST EAX,EAX
JZ 0x00414a0a
MOV ECX,dword ptr [ESP + 0x54]
LEA EBP,[EBP + ECX*0x1 + 0xa]
JMP 0x00414a12
MOV EDX,dword ptr [ESP + 0x74]
LEA EDI,[EDI + EDX*0x1 + 0x14]
MOV EAX,dword ptr [ESP + 0x6c]
TEST EAX,EAX
JZ 0x00414a5b
MOV ECX,dword ptr [0x00e99720]
PUSH ECX
PUSH EAX
CALL 0x0042df70
MOV EDX,dword ptr [ESP + 0x68]
ADD ESP,0x8
LEA EAX,[EAX + EAX*0x2]
MOV ECX,EBX
PUSH 0x0
PUSH 0x100000
PUSH EAX
MOV EAX,dword ptr [ESP + 0x78]
PUSH EDX
PUSH EBP
PUSH EDI
PUSH EAX
PUSH 0x0
PUSH ECX
PUSH ESI
INC EBX
CALL 0x004132a0
MOV ECX,dword ptr [ESP + 0x9c]
ADD ESP,0x28
LEA EDI,[EDI + ECX*0x1 + 0x14]
MOV EAX,dword ptr [ESP + 0x70]
TEST EAX,EAX
JZ 0x00414a96
MOV EDX,dword ptr [0x00e99720]
PUSH EDX
PUSH EAX
CALL 0x0042df70
ADD ESP,0x8
MOV ECX,dword ptr [ESP + 0x70]
LEA EAX,[EAX + EAX*0x2]
PUSH 0x0
PUSH 0x100000
PUSH EAX
MOV EAX,dword ptr [ESP + 0x6c]
PUSH EAX
PUSH EBP
PUSH EDI
PUSH ECX
PUSH 0x0
PUSH EBX
PUSH ESI
CALL 0x004132a0
ADD ESP,0x28
PUSH 0x1
PUSH ESI
CALL 0x00414e60
ADD ESP,0x8
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x40
RET
