; FUN_0048e6d0
SUB ESP,0x12c
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x13c]
PUSH ESI
PUSH EDI
MOV ECX,0x25
XOR EAX,EAX
MOV EDI,EBP
STOSD.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x140]
MOV ECX,dword ptr [0x00ecc428]
PUSH 0x4b5c4c
PUSH EAX
CALL dword ptr [ECX + 0x30]
MOV EBX,EAX
ADD ESP,0x8
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],EBX
JZ 0x0048ea67
MOV EAX,[0x00ecc428]
LEA EDX,[ESP + 0x90]
PUSH 0x4c
PUSH EDX
PUSH EBX
CALL dword ptr [EAX + 0x38]
ADD ESP,0xc
CMP EAX,0x4c
JNZ 0x0048ea56
PUSH 0x4
LEA ECX,[ESP + 0x94]
PUSH 0x4d1a78
PUSH ECX
CALL 0x0049f000
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x0048ea56
CMP dword ptr [ESP + 0x94],0x32
JNZ 0x0048ea56
MOV EAX,dword ptr [ESP + 0x9c]
MOV ECX,dword ptr [ESP + 0xa0]
CMP EAX,ECX
JNZ 0x0048ea56
MOV dword ptr [EBP + 0x88],EAX
LEA EAX,[EBP + 0x44]
MOV ECX,0xe
LEA ESI,[ESP + 0xa4]
MOV EDI,EAX
PUSH EAX
MOVSD.REP ES:EDI,ESI
MOV dword ptr [EBP + 0x8c],0x0
CALL 0x0048a2d0
ADD ESP,0x4
LEA EDX,[ESP + 0x24]
LEA ECX,[ESP + 0x20]
MOV dword ptr [EBP + 0x7c],EAX
PUSH EDX
LEA EDX,[ESP + 0x108]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0048a230
MOV EAX,dword ptr [EBP + 0x88]
ADD ESP,0x10
XOR ESI,ESI
TEST EAX,EAX
JBE 0x0048e81f
MOV ECX,dword ptr [0x00ecc428]
LEA EAX,[ESP + 0xdc]
PUSH 0x18
PUSH EAX
PUSH EBX
CALL dword ptr [ECX + 0x38]
ADD ESP,0xc
CMP EAX,0x18
JNZ 0x0048ea56
TEST byte ptr [ESP + 0xdc],0x8
JZ 0x0048e814
MOV EAX,[0x00ecc428]
LEA EDX,[ESP + 0xf4]
PUSH 0x10
PUSH EDX
PUSH EBX
CALL dword ptr [EAX + 0x38]
ADD ESP,0xc
CMP EAX,0x10
JNZ 0x0048ea56
MOV EAX,dword ptr [EBP + 0x88]
INC ESI
CMP ESI,EAX
JC 0x0048e7cb
MOV EAX,dword ptr [EBP + 0x88]
MOV dword ptr [EBP + 0x90],0x0
TEST EAX,EAX
JZ 0x0048e877
LEA ECX,[EAX + EAX*0x8]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,[0x00ecc428]
SHL EDX,0x2
PUSH EDX
CALL dword ptr [EAX + 0x20]
MOV EDI,EAX
ADD ESP,0x4
TEST EDI,EDI
MOV dword ptr [EBP + 0x90],EDI
JZ 0x0048ea56
MOV EAX,dword ptr [EBP + 0x88]
LEA ECX,[EAX + EAX*0x8]
LEA ECX,[EAX + ECX*0x4]
XOR EAX,EAX
SHL ECX,0x2
MOV EDX,ECX
SHR ECX,0x2
STOSD.REP ES:EDI
MOV ECX,EDX
AND ECX,0x3
STOSB.REP ES:EDI
MOV ECX,dword ptr [EBP + 0x88]
XOR EAX,EAX
CMP ECX,EAX
MOV dword ptr [ESP + 0x1c],EAX
JBE 0x0048ea46
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,dword ptr [0x00ecc428]
LEA EAX,[ESP + 0x28]
PUSH 0x18
PUSH EAX
PUSH EBX
CALL dword ptr [ECX + 0x38]
ADD ESP,0xc
CMP EAX,0x18
JNZ 0x0048ea56
MOV ECX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
MOV dword ptr [EBP + 0x84],ECX
MOV dword ptr [ESP + 0x48],ECX
MOV ECX,0xe
LEA ESI,[EBP + 0x44]
LEA EDI,[ESP + 0x58]
MOV dword ptr [ESP + 0x44],EAX
MOV dword ptr [EBP + 0x80],EAX
MOV EAX,dword ptr [ESP + 0x3c]
MOVSD.REP ES:EDI,ESI
XOR EDI,EDI
TEST EAX,EAX
MOV dword ptr [ESP + 0x14],EDI
JZ 0x0048e915
LEA EDX,[EAX*0x4 + 0x0]
MOV EAX,[0x00ecc428]
PUSH EDX
CALL dword ptr [EAX + 0x20]
MOV EDI,EAX
ADD ESP,0x4
TEST EDI,EDI
MOV dword ptr [ESP + 0x14],EDI
JZ 0x0048ea56
MOV ECX,dword ptr [ESP + 0x3c]
XOR EAX,EAX
STOSD.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x3c]
MOV EDI,dword ptr [ESP + 0x14]
XOR EBX,EBX
TEST EAX,EAX
JLE 0x0048e9d2
MOV ESI,EDI
PUSH 0x0
LEA ECX,[ESP + 0x48]
PUSH 0x0
PUSH ECX
CALL 0x004881c0
ADD ESP,0xc
MOV dword ptr [ESI],EAX
TEST EAX,EAX
JZ 0x0048ea52
PUSH EAX
CALL 0x00488370
MOV EDX,dword ptr [ESI]
ADD ESP,0x4
MOV EDI,EDX
MOV dword ptr [ESP + 0x40],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EDI + 0x14]
MOV ECX,dword ptr [EDI + 0x58]
PUSH EAX
MOV EAX,[0x00ecc428]
PUSH ECX
PUSH EDX
CALL dword ptr [EAX + 0x38]
MOV ECX,dword ptr [EDI + 0x14]
ADD ESP,0xc
CMP ECX,EAX
JNZ 0x0048ea52
PUSH EDI
CALL 0x004883c0
MOV ECX,dword ptr [ESI]
ADD ESP,0x4
MOV EAX,dword ptr [ECX + 0x20]
TEST EAX,EAX
JZ 0x0048e9aa
CALL 0x0048a2f0
TEST EAX,EAX
JBE 0x0048e9aa
MOV EDX,dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESI]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x10c]
PUSH ECX
PUSH EDX
CALL 0x00488670
ADD ESP,0x10
MOV dword ptr [ESI],EAX
MOV EAX,dword ptr [ESP + 0x48]
MOV ECX,dword ptr [ESP + 0x44]
SHR EAX,0x1
SHR ECX,0x1
MOV dword ptr [ESP + 0x48],EAX
MOV EAX,dword ptr [ESP + 0x3c]
INC EBX
ADD ESI,0x4
CMP EBX,EAX
MOV dword ptr [ESP + 0x44],ECX
JL 0x0048e921
MOV EDI,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [EBP + 0x7c]
MOV EDX,dword ptr [ESP + 0x18]
MOV EBX,dword ptr [EBP + 0x90]
PUSH ECX
PUSH EAX
ADD EDX,EBX
PUSH EDI
PUSH EDX
CALL 0x0048a5e0
MOV EAX,dword ptr [ESP + 0x4c]
ADD ESP,0x10
XOR ESI,ESI
TEST EAX,EAX
JLE 0x0048ea10
MOV EBX,EDI
MOV EAX,dword ptr [EBX]
PUSH EAX
CALL 0x00488310
MOV EAX,dword ptr [ESP + 0x40]
ADD ESP,0x4
INC ESI
ADD EBX,0x4
CMP ESI,EAX
JL 0x0048e9f9
MOV ECX,dword ptr [0x00ecc428]
PUSH EDI
CALL dword ptr [ECX + 0x24]
MOV EAX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [EBP + 0x88]
MOV EBX,dword ptr [ESP + 0x14]
ADD ESP,0x4
INC EAX
ADD EDX,0x94
CMP EAX,ECX
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x18],EDX
JC 0x0048e88f
TEST byte ptr [ESP + 0x98],0x1
JZ 0x0048ea77
JMP 0x0048ea56
MOV EBX,dword ptr [ESP + 0x10]
TEST EBX,EBX
JZ 0x0048ea67
MOV EDX,dword ptr [0x00ecc428]
PUSH EBX
CALL dword ptr [EDX + 0x34]
ADD ESP,0x4
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x12c
RET
MOV EAX,dword ptr [ESP + 0x140]
PUSH 0x3f
PUSH EAX
CALL 0x00484860
ADD ESP,0x4
PUSH EAX
PUSH EBP
CALL 0x0049f340
ADD ESP,0xc
MOV byte ptr [EBP + 0x3f],0x0
MOV ECX,dword ptr [0x00ecc428]
PUSH EBX
CALL dword ptr [ECX + 0x34]
ADD ESP,0x4
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x12c
RET
