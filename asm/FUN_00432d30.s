; FUN_00432d30
MOV EAX,0x2404c
CALL 0x004a0a30
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x24068]
XOR EBX,EBX
MOV ECX,0x1
MOV dword ptr [ESP + 0x44],EBX
MOV EAX,dword ptr [EDI]
MOV dword ptr [ESP + 0x3c],EBX
CMP EAX,EBX
MOV dword ptr [ESP + 0x24],EBX
MOV dword ptr [ESP + 0x2c],EBX
MOV dword ptr [ESP + 0x20],0x3f800000
MOV dword ptr [ESP + 0x18],0x3f800000
MOV dword ptr [ESP + 0x4c],EBX
MOV byte ptr [ESP + 0x13],BL
MOV dword ptr [ESP + 0x50],ECX
MOV dword ptr [ESP + 0x28],EAX
JZ 0x00432f8f
MOV ESI,dword ptr [EAX + 0xc]
MOV EAX,dword ptr [EAX + 0x8]
CMP EAX,EBX
JZ 0x00432dc7
MOV EBP,dword ptr [EAX + 0x38]
MOV EAX,dword ptr [EAX + 0x1c]
CMP EAX,EBX
MOV dword ptr [ESP + 0x4c],EBP
JZ 0x00432dda
MOV AL,byte ptr [EAX + 0x3]
TEST AL,0x10
JZ 0x00432dad
MOV dword ptr [ESP + 0x20],0x40000000
TEST AL,0x1
JZ 0x00432db9
MOV dword ptr [ESP + 0x18],0x40000000
TEST AL,0x20
JZ 0x00432dda
TEST AL,0x2
JZ 0x00432dda
MOV dword ptr [ESP + 0x24],ECX
JMP 0x00432dda
MOV EAX,dword ptr [ESP + 0x28]
PUSH EAX
CALL 0x00409040
MOV EBP,EAX
ADD ESP,0x4
MOV dword ptr [ESP + 0x4c],EBP
TEST ESI,ESI
JZ 0x00432f6e
MOV EBX,dword ptr [ESI + 0x18]
MOV EAX,dword ptr [ESI + 0x1c]
OR EBX,EAX
XOR EAX,EAX
CMP byte ptr [EAX + ESI*0x1 + 0x6],0x3
JZ 0x00432e02
CMP byte ptr [ESI + EAX*0x1 + 0xe],0x3
JZ 0x00432e02
INC EAX
CMP EAX,0x4
JC 0x00432dec
JMP 0x00432e07
MOV byte ptr [ESP + 0x13],0x1
MOV EAX,0x4
CMP byte ptr [EAX + ESI*0x1 + 0x6],0x3
JZ 0x00432e22
CMP byte ptr [ESI + EAX*0x1 + 0xe],0x3
JZ 0x00432e22
INC EAX
CMP EAX,0x8
JC 0x00432e0c
JMP 0x00432e3d
MOV CL,byte ptr [ESP + 0x13]
MOV EAX,dword ptr [ESP + 0x2406c]
OR CL,0x2
OR AL,0x2
MOV byte ptr [ESP + 0x13],CL
MOV dword ptr [ESP + 0x2406c],EAX
CMP dword ptr [0x0050c618],EBP
JZ 0x00432f46
TEST BL,0x30
MOV EAX,0x20
JNZ 0x00432e5a
OR dword ptr [ESP + 0x2406c],EAX
CMP EBX,0xc81049f8
JZ 0x00432f36
CMP EBX,0xc8104b50
JZ 0x00432f36
CMP EBX,0xc1841c8
JNZ 0x00432e98
TEST EBP,EBP
JZ 0x00432e87
PUSH EBP
CALL 0x00431cf0
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x2406c]
OR EAX,0x421
JMP 0x00432f3f
CMP dword ptr [0x0050c620],EBP
JZ 0x00432f46
CMP dword ptr [0x0050c624],EBP
JZ 0x00432f46
CMP EBX,0xc81041d8
JZ 0x00432f36
CMP EBX,0xc81049d8
JZ 0x00432f36
CMP EBX,0xf0a2008
JNZ 0x00432ed1
OR dword ptr [ESP + 0x2406c],EAX
JMP 0x00432f46
CMP EBX,0xc184950
JNZ 0x00432ef5
MOV ECX,dword ptr [ESP + 0x2406c]
OR ECX,EAX
MOV AL,byte ptr [ESP + 0x13]
OR AL,0x4
MOV dword ptr [ESP + 0x2406c],ECX
MOV byte ptr [ESP + 0x13],AL
JMP 0x00432f46
CMP EBX,0xc180079
JZ 0x00432f46
CMP dword ptr [0x0050c61c],EBP
JZ 0x00432f46
CMP EBX,0xc8104340
JZ 0x00432f46
TEST BH,0x8
JNZ 0x00432f46
TEST EBP,EBP
JZ 0x00432f46
CMP dword ptr [EBP + 0x7c],0x1
JNZ 0x00432f25
PUSH EBP
CALL 0x00431ef0
ADD ESP,0x4
CMP dword ptr [EBP + 0x7c],0x2
JNZ 0x00432f46
PUSH EBP
CALL 0x00431fd0
ADD ESP,0x4
JMP 0x00432f46
MOV EAX,dword ptr [ESP + 0x2406c]
OR AL,0x21
MOV dword ptr [ESP + 0x2406c],EAX
CMP EBX,0xf0a2008
JNZ 0x00432f56
MOV dword ptr [ESP + 0x24],0x1
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JZ 0x00432f6e
MOV EAX,dword ptr [ESP + 0x2406c]
OR AL,0xc
MOV dword ptr [ESP + 0x2406c],EAX
CMP EBX,0xc81041c8
JZ 0x00432f8f
MOV ECX,dword ptr [ESP + 0x28]
TEST byte ptr [ECX],0x11
JZ 0x00432f8f
MOV dword ptr [ESP + 0x3c],0x1
MOV dword ptr [ESP + 0x50],0x3
MOV ESI,dword ptr [EDI + 0x34]
MOV EBP,dword ptr [ESP + 0x24064]
MOVSX EDI,word ptr [EDI + 0x3a]
MOV EDX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x48],EDI
LEA EBX,[EDI + EDI*0x2]
MOV dword ptr [EBP + 0x74],EDI
SHL EBX,0x2
PUSH EBX
PUSH EDX
CALL 0x00408e60
MOV ECX,dword ptr [ESP + 0x30]
ADD ESP,0x8
MOV dword ptr [ESP + 0x30],EAX
MOV dword ptr [EBP + 0x4c],EAX
LEA EAX,[EDI*0x8 + 0x0]
MOV dword ptr [EBP + 0x78],EDI
PUSH EAX
PUSH ECX
CALL 0x00408e60
MOV EDX,dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x48],EAX
MOV dword ptr [EBP + 0x50],EAX
MOV EAX,EDI
ADD ESP,0x8
SHL EAX,0x4
PUSH EAX
PUSH EDX
MOV dword ptr [ESP + 0x1c],EAX
CALL 0x00408e60
MOV ECX,dword ptr [ESP + 0x30]
ADD ESP,0x8
MOV dword ptr [ESP + 0x54],EAX
MOV dword ptr [EBP + 0x54],EAX
MOV EAX,dword ptr [ESP + 0x14]
PUSH EAX
PUSH ECX
CALL 0x00408e60
MOV EDX,dword ptr [ESP + 0x30]
ADD ESP,0x8
MOV dword ptr [EBP + 0x58],EAX
PUSH EBX
PUSH EDX
CALL 0x00408e60
MOV CL,byte ptr [ESP + 0x1b]
ADD ESP,0x8
MOV dword ptr [EBP + 0x70],EAX
MOV EAX,dword ptr [ESP + 0x50]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x3f800000
LEA EDX,[EBP + 0x5c]
PUSH 0x3f800000
PUSH EDX
MOV dword ptr [EBP + 0x44],0x4
MOV dword ptr [EBP + 0x48],EAX
MOV byte ptr [EBP + 0x88],CL
CALL 0x00430a90
ADD ESP,0x14
TEST EDI,EDI
JBE 0x0043321e
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004ac738]
MOV ECX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x48]
MOV EBX,dword ptr [ESP + 0x40]
XOR EAX,EAX
MOV dword ptr [ESP + 0x20],EAX
LEA EDI,[ECX + 0x8]
FSTP dword ptr [ESP + 0x58]
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004ac738]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x54]
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x30],EDX
FSTP dword ptr [ESP + 0x34]
MOV AX,word ptr [ESI]
XOR ECX,ECX
MOV CH,AL
MOV CL,AH
MOVSX EDX,CX
MOV dword ptr [ESP + 0x14],EDX
XOR ECX,ECX
FILD dword ptr [ESP + 0x14]
FSTP dword ptr [EDI + -0x8]
MOV AX,word ptr [ESI + 0x2]
MOV CL,AH
MOV CH,AL
MOVSX EDX,CX
MOV dword ptr [ESP + 0x14],EDX
XOR ECX,ECX
FILD dword ptr [ESP + 0x14]
FSTP dword ptr [EDI + -0x4]
MOV AX,word ptr [ESI + 0x4]
MOV CH,AL
MOV CL,AH
MOVSX EDX,CX
MOV dword ptr [ESP + 0x14],EDX
XOR ECX,ECX
FILD dword ptr [ESP + 0x14]
FSTP dword ptr [EDI]
MOV AX,word ptr [ESI + 0x8]
MOV CL,AH
MOV CH,AL
MOVSX EDX,CX
MOV dword ptr [ESP + 0x14],EDX
XOR ECX,ECX
FILD dword ptr [ESP + 0x14]
FDIV dword ptr [ESP + 0x58]
FSTP dword ptr [EBX]
MOV AX,word ptr [ESI + 0xa]
MOV CL,AH
MOV CH,AL
MOV EAX,dword ptr [ESP + 0x3c]
MOVSX EDX,CX
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
TEST EAX,EAX
FDIV dword ptr [ESP + 0x34]
FSTP dword ptr [EBX + 0x4]
JNZ 0x00433150
MOV ECX,dword ptr [ESP + 0x1c]
XOR EAX,EAX
XOR EDX,EDX
ADD ECX,0x4
MOV DL,byte ptr [EAX + ESI*0x1 + 0xc]
INC EAX
MOV dword ptr [ESP + 0x14],EDX
CMP EAX,0x3
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac730]
FSTP dword ptr [ECX + -0x4]
JBE 0x0043312e
JMP 0x004331c0
MOV ECX,dword ptr [ESP + 0x1c]
MOV EAX,0x3f800000
MOV dword ptr [ECX],EAX
MOV dword ptr [ECX + 0x4],EAX
MOV dword ptr [ECX + 0x8],EAX
MOV dword ptr [ECX + 0xc],EAX
MOV ECX,dword ptr [EBP + 0x70]
MOVSX EDX,byte ptr [ESI + 0xc]
MOV dword ptr [ESP + 0x14],EDX
MOV EAX,dword ptr [ESP + 0x18]
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac73c]
FSTP dword ptr [EAX + ECX*0x1]
MOVSX EDX,byte ptr [ESI + 0xd]
MOV dword ptr [ESP + 0x14],EDX
MOV ECX,dword ptr [EBP + 0x70]
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac73c]
FSTP dword ptr [EAX + ECX*0x1 + 0x4]
MOVSX EDX,byte ptr [ESI + 0xe]
MOV dword ptr [ESP + 0x14],EDX
MOV ECX,dword ptr [EBP + 0x70]
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac73c]
FSTP dword ptr [EAX + ECX*0x1 + 0x8]
ADD EAX,dword ptr [EBP + 0x70]
PUSH EAX
CALL 0x00492440
FSTP ST0
ADD ESP,0x4
MOV EDX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [EBP + 0x58]
ADD EDX,EAX
MOV EAX,dword ptr [ESP + 0x1c]
ADD EBX,0x8
ADD EDI,0xc
MOV ECX,dword ptr [EAX]
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [EDX + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [EDX + 0xc],EAX
MOV EDX,dword ptr [ESP + 0x18]
ADD EDX,0xc
MOV EAX,0x10
MOV dword ptr [ESP + 0x18],EDX
MOV EDX,dword ptr [ESP + 0x20]
ADD ESI,EAX
ADD EDX,EAX
ADD ECX,EAX
MOV EAX,dword ptr [ESP + 0x30]
DEC EAX
MOV dword ptr [ESP + 0x20],EDX
MOV dword ptr [ESP + 0x1c],ECX
MOV dword ptr [ESP + 0x30],EAX
JNZ 0x004330a3
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JZ 0x00433250
MOV EDX,dword ptr [ESP + 0x48]
TEST EDX,EDX
JBE 0x00433250
MOV EAX,dword ptr [ESP + 0x40]
FLD dword ptr [EAX]
FSUB dword ptr [0x004ac728]
LEA ECX,[EAX + 0x4]
ADD EAX,0x8
DEC EDX
FSTP dword ptr [EAX + -0x8]
FLD dword ptr [ECX]
FSUB dword ptr [0x004ac728]
FSTP dword ptr [ECX]
JNZ 0x00433232
MOV EDX,dword ptr [ESP + 0x24060]
MOV ESI,dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x34],EDX
XOR EDI,EDI
MOV EAX,dword ptr [EDX]
AND EAX,0xff
MOV ECX,EAX
MOV EBX,EAX
AND ECX,0xff00
SHL EBX,0x10
OR ECX,EBX
MOV EBX,EAX
SHR EBX,0x10
AND EAX,0xff0000
OR EBX,EAX
SHL ECX,0x8
SHR EBX,0x8
OR ECX,EBX
CMP ECX,0x5000000
JZ 0x004332af
CMP ECX,0x6000000
JZ 0x004332aa
CMP ECX,0xdf000000
JNZ 0x004332b2
MOV ESI,0x1
JMP 0x004332b2
ADD EDI,0x30
JMP 0x004332b2
ADD EDI,0x18
ADD EDX,0x8
TEST ESI,ESI
JZ 0x00433261
MOV ECX,dword ptr [ESP + 0x28]
PUSH EDI
PUSH ECX
CALL 0x00408e60
MOV ESI,dword ptr [ESP + 0x2c]
MOV EDI,EAX
MOV EAX,dword ptr [ESP + 0x3c]
ADD ESP,0x8
MOV dword ptr [ESP + 0x44],0x0
MOV dword ptr [ESP + 0x24060],EAX
MOV dword ptr [ESP + 0x18],0x0
MOV ECX,dword ptr [EAX]
MOV EAX,dword ptr [EAX + 0x4]
MOV EDX,ECX
AND ECX,0xff
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,ECX
MOV EBX,ECX
AND EAX,0xff00
SHL EBX,0x10
OR EAX,EBX
MOV EBX,ECX
SHR EBX,0x10
AND ECX,0xff0000
MOV dword ptr [ESP + 0x34],EDX
OR EBX,ECX
SHL EAX,0x8
SHR EBX,0x8
OR EAX,EBX
CMP EAX,0x5000000
JA 0x00433432
JZ 0x00433377
CMP EAX,0x1000000
JNZ 0x004335d4
MOV EDX,dword ptr [ESP + 0x24060]
MOV ECX,dword ptr [ESP + 0x24068]
MOV EAX,dword ptr [EDX + 0x4]
MOV [0x00e996a0],EAX
MOVSX EDX,word ptr [ECX + 0x3e]
NEG EDX
SHL EDX,0x4
ADD EAX,EDX
MOV [0x00e996a0],EAX
MOV EBX,dword ptr [ECX + 0x34]
SUB EAX,EBX
CDQ
AND EDX,0xf
ADD EAX,EDX
MOV ESI,EAX
SAR ESI,0x4
MOV dword ptr [ESP + 0x24],ESI
JMP 0x004335d4
MOV AL,byte ptr [ESP + 0x36]
MOV DL,DH
SAR DL,0x1
MOV ECX,dword ptr [ESP + 0x24]
MOVSX EBP,DL
MOV DL,byte ptr [ESP + 0x37]
ADD EBP,ECX
SAR AL,0x1
SAR DL,0x1
MOVSX EAX,AL
MOVSX EBX,DL
ADD EAX,ECX
ADD EBX,ECX
MOV ECX,dword ptr [ESP + 0x48]
MOV dword ptr [ESP + 0x1c],EAX
CMP EBP,ECX
JBE 0x004333a8
XOR EBP,EBP
CMP EAX,ECX
JBE 0x004333b4
MOV dword ptr [ESP + 0x1c],0x0
CMP EBX,ECX
JBE 0x004333ba
XOR EBX,EBX
MOV EAX,dword ptr [ESP + 0x2c]
LEA EAX,[EAX + EAX*0x8]
LEA ESI,[ESP + EAX*0x8 + 0x5c]
PUSH ESI
CALL 0x004923c0
MOV ECX,dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x24070]
MOV dword ptr [ESI + 0xc],ECX
MOV dword ptr [ESI + 0x14],EDI
MOV ECX,dword ptr [ESI + 0x14]
MOV dword ptr [ESI],EAX
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI + 0x8],0x4
MOV dword ptr [ESI + 0x10],0x3
MOV dword ptr [ECX],EBP
MOV EDX,dword ptr [ESI + 0x14]
MOV ECX,dword ptr [ESP + 0x20]
ADD EDI,0xc
MOV dword ptr [EDX + 0x4],ECX
MOV EDX,dword ptr [ESI + 0x14]
ADD ESP,0x4
MOV dword ptr [EDX + 0x8],EBX
MOV dword ptr [ESI + 0x18],EDI
MOV EDX,dword ptr [ESI + 0x18]
ADD EDI,0xc
INC EAX
MOV dword ptr [EDX],EBP
MOV EDX,dword ptr [ESI + 0x18]
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [ESI + 0x18]
MOV EDX,dword ptr [ESP + 0x4c]
MOV dword ptr [ECX + 0x8],EBX
MOV dword ptr [ESI + 0x1c],EDX
JMP 0x004335c5
CMP EAX,0x6000000
JZ 0x00433451
CMP EAX,0xdf000000
JNZ 0x004335d4
MOV dword ptr [ESP + 0x44],0x1
JMP 0x004335d4
MOV DL,DH
MOV CL,byte ptr [ESP + 0x37]
SAR DL,0x1
MOVSX EAX,DL
MOV DL,byte ptr [ESP + 0x39]
ADD EAX,ESI
MOV dword ptr [ESP + 0x20],EAX
MOV AL,byte ptr [ESP + 0x36]
SAR AL,0x1
SAR DL,0x1
MOVSX EBP,AL
MOV AL,byte ptr [ESP + 0x3a]
ADD EBP,ESI
MOVSX EBX,DL
MOV DL,byte ptr [ESP + 0x3b]
ADD EBX,ESI
SAR CL,0x1
SAR AL,0x1
SAR DL,0x1
MOVSX ECX,CL
MOVSX EAX,AL
MOVSX EDX,DL
ADD ECX,ESI
ADD EAX,ESI
ADD EDX,ESI
MOV ESI,dword ptr [ESP + 0x48]
CMP EBX,ESI
MOV dword ptr [ESP + 0x3c],EBP
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x14],EDX
JBE 0x004334af
XOR EBX,EBX
CMP EAX,ESI
JBE 0x004334bb
XOR EAX,EAX
MOV dword ptr [ESP + 0x1c],EAX
JMP 0x004334bd
XOR EAX,EAX
CMP EDX,ESI
JBE 0x004334c5
MOV dword ptr [ESP + 0x14],EAX
CMP dword ptr [ESP + 0x20],ESI
JBE 0x004334cf
MOV dword ptr [ESP + 0x20],EAX
CMP EBP,ESI
JBE 0x004334d9
XOR EBP,EBP
MOV dword ptr [ESP + 0x3c],EBP
CMP ECX,ESI
JBE 0x004334e3
XOR ECX,ECX
MOV dword ptr [ESP + 0x30],ECX
MOV EDX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x18],EDX
LEA EAX,[EDX + EDX*0x8]
LEA ESI,[ESP + EAX*0x8 + 0x5c]
LEA EAX,[EDX + 0x2]
CMP EDX,EAX
MOV dword ptr [ESP + 0x54],ESI
JNC 0x00433567
MOV ECX,EDX
MOV EBP,ESI
SUB EAX,ECX
ADD ECX,EAX
MOV dword ptr [ESP + 0x40],EAX
MOV dword ptr [ESP + 0x18],ECX
PUSH EBP
CALL 0x004923c0
MOV ECX,dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESP + 0x24070]
MOV EDX,dword ptr [ESP + 0x30]
MOV dword ptr [ESI + 0xc],ECX
MOV ECX,dword ptr [ESP + 0x50]
MOV dword ptr [ESI + 0x14],EDI
ADD EDI,0xc
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x44]
MOV dword ptr [ESI],EDX
MOV dword ptr [ESI + 0x8],0x4
MOV dword ptr [ESI + 0x10],0x3
MOV dword ptr [ESI + 0x18],EDI
MOV dword ptr [ESI + 0x1c],ECX
ADD ESP,0x4
ADD EDI,0xc
ADD ESI,0x48
ADD EBP,0x48
DEC EAX
MOV dword ptr [ESP + 0x40],EAX
JNZ 0x0043350d
MOV ECX,dword ptr [ESP + 0x30]
MOV EBP,dword ptr [ESP + 0x3c]
MOV EAX,dword ptr [ESP + 0x54]
MOV EDX,dword ptr [ESP + 0x20]
MOV ESI,dword ptr [EAX + 0x14]
ADD EAX,0x48
MOV dword ptr [ESI],EDX
MOV ESI,dword ptr [EAX + -0x34]
MOV dword ptr [ESI + 0x4],EBP
MOV ESI,dword ptr [EAX + -0x34]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [EAX + -0x30]
MOV dword ptr [ESI],EDX
MOV EDX,dword ptr [EAX + -0x30]
MOV dword ptr [EDX + 0x4],EBP
MOV EDX,dword ptr [EAX + -0x30]
MOV dword ptr [EDX + 0x8],ECX
MOV ECX,dword ptr [EAX + 0x14]
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [ECX],EBX
MOV ECX,dword ptr [EAX + 0x14]
MOV dword ptr [ECX + 0x4],EDX
MOV ESI,dword ptr [EAX + 0x14]
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x8],ECX
MOV ESI,dword ptr [EAX + 0x18]
MOV dword ptr [ESI],EBX
MOV ESI,dword ptr [EAX + 0x18]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [EDX + 0x8],ECX
ADD EAX,0x2
MOV ESI,dword ptr [ESP + 0x24]
MOV EBP,dword ptr [ESP + 0x24064]
MOV dword ptr [ESP + 0x2c],EAX
MOV EBX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x24060]
MOV ECX,dword ptr [ESP + 0x44]
INC EBX
ADD EAX,0x8
MOV dword ptr [ESP + 0x18],EBX
TEST ECX,ECX
MOV dword ptr [ESP + 0x24060],EAX
JZ 0x004332e8
MOV EBX,dword ptr [ESP + 0x2c]
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [EBP + 0x7c],EBX
LEA EAX,[EBX + EBX*0x8]
SHL EAX,0x3
PUSH EAX
PUSH ECX
CALL 0x00408e60
ADD ESP,0x8
MOV dword ptr [EBP + 0x6c],EAX
TEST EBX,EBX
JBE 0x0043366b
XOR EDI,EDI
MOV ECX,dword ptr [EBP + 0x6c]
MOV ESI,EDI
ADD ESI,ECX
PUSH ESI
CALL 0x004923c0
MOV EDX,dword ptr [ESP + EDI*0x1 + 0x60]
ADD ESP,0x4
MOV dword ptr [ESI],EDX
MOV EAX,dword ptr [ESP + EDI*0x1 + 0x60]
MOV dword ptr [ESI + 0x4],EAX
MOV ECX,dword ptr [ESP + EDI*0x1 + 0x64]
MOV dword ptr [ESI + 0x8],ECX
MOV EDX,dword ptr [ESP + EDI*0x1 + 0x68]
MOV dword ptr [ESI + 0xc],EDX
MOV EAX,dword ptr [ESP + EDI*0x1 + 0x6c]
MOV dword ptr [ESI + 0x10],EAX
MOV ECX,dword ptr [ESP + EDI*0x1 + 0x70]
MOV dword ptr [ESI + 0x14],ECX
MOV EDX,dword ptr [ESP + EDI*0x1 + 0x74]
MOV dword ptr [ESI + 0x18],EDX
MOV EAX,dword ptr [ESP + EDI*0x1 + 0x78]
ADD EDI,0x48
DEC EBX
MOV dword ptr [ESI + 0x1c],EAX
JNZ 0x0043361e
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x2404c
RET
