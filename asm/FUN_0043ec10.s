; FUN_0043ec10
MOV EAX,[0x0050c470]
SUB ESP,0x44
TEST EAX,EAX
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
JNZ 0x0043ec2d
MOV EAX,[0x0050c954]
TEST EAX,EAX
JZ 0x0043f375
MOV EAX,[0x0050c934]
TEST EAX,EAX
JZ 0x0043f375
FLD dword ptr [0x00e99358]
FSUB dword ptr [0x004ac940]
CALL 0x0049ed20
PUSH -0x2
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH 0x7b
MOV ESI,EAX
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7b
CALL 0x004285d0
ADD ESP,0x8
PUSH ESI
PUSH 0x1e
PUSH 0x7b
CALL 0x00428660
ADD ESP,0xc
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x78
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x78
CALL 0x004285d0
ADD ESP,0x8
LEA EAX,[ESI + 0x4]
PUSH EAX
PUSH 0x22
PUSH 0x78
CALL 0x00428660
MOV EAX,[0x00e295d0]
ADD ESP,0xc
MOV ECX,EAX
SHL ECX,0x3
SUB ECX,EAX
MOVSX EDX,byte ptr [ECX*0x8 + 0xe2a6c0]
SHL EDX,0x4
MOV EAX,dword ptr [EDX + 0x4c1cc4]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0d24
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x18]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP + 0x14]
LEA EAX,[ESI + 0x6]
PUSH EDX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EAX
PUSH 0x56
CALL 0x00450530
ADD ESP,0x1c
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x80
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x80
CALL 0x004285d0
ADD ESP,0x8
LEA ECX,[ESI + 0x13]
PUSH ECX
PUSH 0x21
PUSH 0x80
CALL 0x00428660
MOV EAX,[0x00e295d0]
ADD ESP,0xc
MOV EDX,EAX
MOV EBP,dword ptr [ESP + 0x58]
SHL EDX,0x3
SUB EDX,EAX
XOR EAX,EAX
PUSH 0x42240000
PUSH 0x41200000
MOV AL,byte ptr [EDX*0x8 + 0xe2a6c1]
PUSH 0xc0000000
MOV dword ptr [ESP + 0x1c],EAX
PUSH ECX
FILD dword ptr [ESP + 0x20]
MOVSX ECX,SI
FMUL dword ptr [0x004ac9dc]
ADD ECX,0x11
FSTP dword ptr [ESP]
PUSH ECX
PUSH 0x88
PUSH EBP
CALL 0x004557e0
ADD ESP,0x1c
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x79
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x79
CALL 0x004285d0
ADD ESP,0x8
LEA EDX,[ESI + 0x10]
PUSH EDX
PUSH 0x2a
PUSH 0x79
CALL 0x00428660
ADD ESP,0xc
LEA EDI,[ESI + 0x12]
PUSH 0x4c12c8
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDI
PUSH 0x2c
CALL 0x00450530
MOV EAX,[0x00e99220]
ADD ESP,0x1c
PUSH EAX
PUSH 0x4c12c0
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x18]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP + 0x14]
PUSH EDX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDI
PUSH 0x87
CALL 0x00450530
ADD ESP,0x1c
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x7a
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7a
CALL 0x004285d0
ADD ESP,0x8
ADD ESI,0x1b
PUSH ESI
PUSH 0x29
PUSH 0x7a
CALL 0x00428660
FLD dword ptr [0x00e99358]
FSUB dword ptr [0x004ac760]
ADD ESP,0xc
CALL 0x0049ed20
PUSH -0x2
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH 0x7f
MOV EDI,EAX
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7f
CALL 0x004285d0
ADD ESP,0x8
PUSH EDI
PUSH 0xae
PUSH 0x7f
CALL 0x00428660
ADD ESP,0xc
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x7d
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7d
CALL 0x004285d0
ADD ESP,0x8
LEA EAX,[EDI + 0x5]
PUSH EAX
PUSH 0xb3
PUSH 0x7d
CALL 0x00428660
ADD ESP,0xc
PUSH 0x4c12a4
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[EDI + 0x6]
PUSH EAX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ECX
PUSH 0xb6
CALL 0x00450530
ADD ESP,0x1c
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x81
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x81
CALL 0x004285d0
ADD ESP,0x8
LEA EDX,[EDI + 0x14]
PUSH EDX
PUSH 0xb2
PUSH 0x81
CALL 0x00428660
ADD ESP,0xc
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x7c
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7c
CALL 0x004285d0
ADD ESP,0x8
LEA EAX,[EDI + 0x17]
PUSH EAX
PUSH 0xbe
PUSH 0x7c
CALL 0x00428660
MOV EAX,[0x00e295d0]
ADD ESP,0xc
MOV ECX,EAX
SHL ECX,0x3
SUB ECX,EAX
MOVSX EDX,byte ptr [ECX*0x8 + 0xe2a6c0]
SHL EDX,0x4
MOVSX ESI,byte ptr [EDX + 0x4c1cbb]
MOV EAX,ESI
SHL EAX,0x3
SUB EAX,ESI
MOVSX ECX,byte ptr [EAX*0x8 + 0xe2b220]
SHL ECX,0x4
MOV EDX,dword ptr [ECX + 0x4c1cc4]
PUSH EDX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0d24
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
LEA EAX,[ESP + 0x1c]
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
LEA EDX,[EDI + 0x1a]
PUSH ECX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDX
PUSH 0xee
CALL 0x00450530
ADD ESP,0x1c
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x7e
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0x7e
CALL 0x004285d0
ADD ESP,0x8
LEA EAX,[EDI + 0x28]
PUSH EAX
PUSH 0xd6
PUSH 0x7e
CALL 0x00428660
XOR ECX,ECX
ADD ESP,0xc
MOV CL,byte ptr [ESI + 0xe35aa8]
MOV dword ptr [ESP + 0x58],ECX
PUSH 0x41d00000
FILD dword ptr [ESP + 0x5c]
MOVSX EAX,DI
FMUL dword ptr [0x004ac9dc]
PUSH 0x40e00000
PUSH 0xc0000000
PUSH ECX
ADD EAX,0x30
FSTP dword ptr [ESP]
PUSH EAX
PUSH 0xff
PUSH EBP
CALL 0x004557e0
ADD ESP,0x1c
XOR ESI,ESI
PUSH -0x2
PUSH -0x1
LEA EBX,[ESI + 0x76]
PUSH -0x1
PUSH 0x32
PUSH EBX
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH EBX
CALL 0x004285d0
LEA EDX,[ESI + ESI*0x4]
LEA EAX,[EDI + ESI*0x1]
ADD ESP,0x8
LEA ECX,[EAX + EDX*0x2 + 0x5d]
PUSH ECX
PUSH 0xc2
PUSH EBX
CALL 0x00428660
ADD ESP,0xc
LEA EBX,[ESI + 0x74]
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EBX
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH EBX
CALL 0x004285d0
LEA EDX,[ESI + ESI*0x2]
LEA EAX,[EDI + ESI*0x1]
ADD ESP,0x8
LEA ECX,[EAX + EDX*0x4 + 0x7c]
PUSH ECX
PUSH 0xdb
PUSH EBX
CALL 0x00428660
ADD ESP,0xc
INC ESI
CMP ESI,0x2
JL 0x0043f033
PUSH 0x4c128c
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x14]
PUSH EAX
PUSH 0x4b9484
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP + 0x14]
LEA ESI,[EDI + 0x60]
PUSH EAX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ESI
PUSH 0xc4
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c1274
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x14]
PUSH EAX
PUSH 0x4b9484
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP + 0x14]
LEA EBX,[EDI + 0x6b]
PUSH EDX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EBX
PUSH 0xc4
CALL 0x00450530
MOV EAX,[0x00e9935c]
ADD ESP,0x1c
PUSH EAX
PUSH 0x4c12c0
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x18]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP + 0x14]
LEA EAX,[ESP + 0x34]
PUSH EDX
PUSH 0x4b9484
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP + 0x34]
PUSH ECX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ESI
PUSH 0x114
CALL 0x00450530
MOV EDX,dword ptr [0x00e99220]
MOV ESI,dword ptr [0x00e9935c]
ADD ESP,0x1c
SUB EDX,ESI
PUSH EDX
PUSH 0x4c12c0
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
LEA EAX,[ESP + 0x1c]
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
PUSH ECX
LEA EDX,[ESP + 0x38]
PUSH 0x4b9484
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP + 0x34]
PUSH EAX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EBX
PUSH 0x114
CALL 0x00450530
MOV ECX,dword ptr [0x00e99220]
MOV EDX,dword ptr [0x00e9935c]
MOV EAX,[0x00e35a98]
SUB ECX,EDX
ADD ESP,0x1c
CMP EAX,ECX
JGE 0x0043f1f4
MOV word ptr [0x00e99400],0x1
MOVSX EAX,DI
PUSH 0x4c125c
LEA ESI,[EAX + 0x7e]
CALL 0x00421360
MOVSX EDX,word ptr [0x00e99400]
ADD ESP,0x4
PUSH EAX
PUSH 0x0
PUSH EDX
PUSH 0xd
PUSH ESI
PUSH 0xfc
PUSH EBP
CALL 0x0043fce0
ADD ESP,0x1c
PUSH 0x4c1240
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x1
MOVSX EAX,word ptr [0x00e99400]
PUSH EAX
PUSH 0xd
PUSH ESI
PUSH 0xfc
PUSH EBP
CALL 0x0043fce0
ADD ESP,0x1c
PUSH 0x4c1224
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[EDI + 0xa5]
PUSH EAX
PUSH -0x2
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH ECX
PUSH 0xfe
CALL 0x00450530
FLD dword ptr [0x00e99358]
FSUB dword ptr [0x004ac9e0]
ADD ESP,0x1c
FSUB qword ptr [0x004ac9e8]
PUSH 0x3f800000
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x40a00000
PUSH 0x0
CALL 0x00457140
MOV EDX,dword ptr [0x00e35a98]
ADD ESP,0x10
PUSH EDX
PUSH 0x4c1218
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
LEA EAX,[ESP + 0x1c]
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
ADD EDI,0xb4
PUSH ECX
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDI
PUSH 0x122
CALL 0x00450530
MOV EAX,[0x00e99220]
MOV ESI,dword ptr [0x00e9935c]
MOV ECX,dword ptr [0x00e35a98]
MOV EDX,EAX
SUB EDX,ESI
ADD ESP,0x1c
CMP ECX,EDX
JGE 0x0043f31c
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH -0x2
PUSH 0x0
PUSH 0x0
PUSH -0x1
PUSH EDI
PUSH 0x122
CALL 0x00450530
MOV EAX,[0x00e99220]
ADD ESP,0x1c
MOV ESI,0x50c918
MOV ECX,dword ptr [0x0050c470]
TEST ECX,ECX
JZ 0x0043f36a
MOV ECX,dword ptr [ESI]
TEST CH,0xc0
JZ 0x0043f36a
MOV EDX,dword ptr [0x00e9935c]
MOV ECX,dword ptr [0x00e35a98]
SUB EAX,EDX
CMP ECX,EAX
JL 0x0043f35b
XOR ECX,ECX
PUSH 0x58
CMP word ptr [0x00e99400],CX
SETZ CL
MOV word ptr [0x00e99400],CX
JMP 0x0043f35d
PUSH 0x4b
CALL 0x00440550
MOV EAX,[0x00e99220]
ADD ESP,0x4
ADD ESI,0x4
CMP ESI,0x50c91c
JL 0x0043f321
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x44
RET
