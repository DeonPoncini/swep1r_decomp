; FUN_004360e0
SUB ESP,0x2c
MOV AL,[0x004d55cc]
XOR ECX,ECX
MOV dword ptr [ESP + 0x1d],ECX
PUSH EBX
MOV dword ptr [ESP + 0x25],ECX
PUSH EBP
MOV dword ptr [ESP + 0x2d],ECX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x3c]
MOV word ptr [ESP + 0x35],CX
MOV byte ptr [ESP + 0x28],AL
MOV AL,byte ptr [ESP + 0x40]
MOV byte ptr [ESP + 0x37],CL
MOV CL,byte ptr [ESI + 0x5e]
XOR EBX,EBX
CMP AL,CL
MOV dword ptr [ESP + 0x20],EBX
PUSH EDI
MOV dword ptr [ESP + 0x10],0x437e0000
JZ 0x00436134
FLD dword ptr [0x00e295a0]
FMUL dword ptr [0x004ac7a4]
FSTP dword ptr [ESP + 0x10]
MOVSX EAX,AL
MOV dword ptr [ESP + 0x1c],EAX
INC EAX
MOV ECX,dword ptr [ESP + 0x1c]
MOV dword ptr [ESP + 0x28],EAX
CMP ECX,EAX
JGE 0x00436783
MOV EDI,0x5e
MOV EBP,0x62
MOV dword ptr [ESP + 0x20],EBX
MOV EDX,dword ptr [ESP + 0x1c]
MOVSX ECX,byte ptr [EDX + 0x4bfee0]
CMP dword ptr [ESP + 0x20],ECX
JGE 0x00436770
CMP byte ptr [ESI + 0x6c],BL
JZ 0x004361a8
MOV EDX,dword ptr [ESP + 0x1c]
MOV AX,word ptr [EDX*0x2 + 0xe35a8a]
MOV dword ptr [ESP + 0x24],EAX
MOV ECX,dword ptr [ESP + 0x20]
SHL ECX,0x1
MOV dword ptr [ESP + 0x40],ECX
MOV EDX,dword ptr [ESP + 0x24]
MOV CL,byte ptr [ESP + 0x40]
SAR DX,CL
MOV dword ptr [ESP + 0x24],EDX
MOV AL,byte ptr [ESP + 0x24]
AND EAX,0x3
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
MOV ECX,EAX
PUSH 0x1
SHL ECX,0x3
SUB ECX,EAX
LEA EAX,[ECX + EDX*0x1 + 0x63]
MOV dword ptr [ESP + 0x44],EAX
MOV ECX,dword ptr [ESP + 0x24]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA ECX,[EAX + EAX*0x4 + 0x28]
MOV dword ptr [ESP + 0x18],ECX
MOV EAX,dword ptr [ESP + 0x20]
LEA EDX,[EAX + EAX*0x4]
LEA EAX,[EAX + EDX*0x2]
LEA EAX,[EAX + EAX*0x4 + 0x28]
MOV dword ptr [ESP + 0x1c],EAX
MOV ECX,dword ptr [ESP + 0x18]
ADD ECX,0xf
MOV dword ptr [ESP + 0x18],ECX
MOV dword ptr [ESP + 0x1c],EDI
MOV EDX,dword ptr [ESP + 0x44]
PUSH EDX
CALL 0x004285d0
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x48]
ADD ESP,0x8
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00428660
MOV EAX,dword ptr [ESP + 0x4c]
ADD ESP,0xc
PUSH 0x3f2aacda
PUSH 0x3f2aacda
PUSH EAX
CALL 0x004286f0
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0xc
CMP EAX,0x3
JA 0x0043629d
JMP dword ptr [EAX*0x4 + 0x43678c]
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
JMP 0x00436290
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH 0x3e
PUSH -0x1
PUSH 0x44
PUSH EDX
JMP 0x00436295
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
PUSH EAX
MOV EAX,dword ptr [ESP + 0x44]
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH EAX
JMP 0x00436295
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
PUSH EAX
PUSH 0x20
PUSH 0x59
PUSH -0x63
MOV ECX,dword ptr [ESP + 0x50]
PUSH ECX
CALL 0x00428740
ADD ESP,0x14
MOV DL,byte ptr [ESP + 0x20]
MOV AL,byte ptr [ESP + 0x1c]
PUSH EDX
PUSH EAX
PUSH ESI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004362cb
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH -0x80
PUSH -0x80
PUSH -0x80
PUSH ECX
JMP 0x004362e7
CMP word ptr [ESP + 0x24],BX
JLE 0x004362ef
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH EDX
CALL 0x00428740
ADD ESP,0x14
MOV EAX,dword ptr [ESP + 0x20]
LEA ECX,[ESP + 0x2c]
INC EAX
PUSH EAX
PUSH 0x4c0940
PUSH ECX
CALL 0x0049eb80
MOV AL,byte ptr [ESI + 0x6c]
ADD ESP,0xc
CMP AL,BL
JZ 0x00436328
MOV DL,byte ptr [ESP + 0x20]
MOV AL,byte ptr [ESP + 0x1c]
PUSH EDX
PUSH EAX
CALL 0x00440a20
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00436513
MOV CL,byte ptr [ESP + 0x20]
MOV DL,byte ptr [ESP + 0x1c]
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x0043638f
FLD dword ptr [ESP + 0x10]
LEA EAX,[ESP + 0x2c]
PUSH EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH -0x80
PUSH -0x80
ADD ECX,0xf
PUSH -0x80
ADD EDX,0x5
PUSH ECX
PUSH EDX
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c0924
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH -0x80
PUSH -0x80
PUSH -0x80
JMP 0x0043649e
MOV EAX,dword ptr [ESP + 0x1c]
CMP EAX,0x3
JA 0x00436513
JMP dword ptr [EAX*0x4 + 0x43679c]
FLD dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x2c]
PUSH EDX
CALL 0x0049ed20
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
PUSH -0x1
PUSH -0x1
ADD EAX,0xf
PUSH 0x32
ADD ECX,0x5
PUSH EAX
PUSH ECX
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c0924
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
JMP 0x004364fb
FLD dword ptr [ESP + 0x10]
LEA ECX,[ESP + 0x2c]
PUSH ECX
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH 0x3e
PUSH -0x1
ADD EDX,0xf
PUSH 0x44
ADD EAX,0x5
PUSH EDX
PUSH EAX
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c0924
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH 0x3e
PUSH -0x1
ADD ECX,0x11
PUSH 0x44
ADD EDX,0xc
PUSH ECX
PUSH EDX
JMP 0x0043650b
FLD dword ptr [ESP + 0x10]
LEA EAX,[ESP + 0x2c]
PUSH EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH 0x11
PUSH -0x42
ADD ECX,0xf
PUSH -0x5d
ADD EDX,0x5
PUSH ECX
PUSH EDX
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c0924
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
MOV EAX,dword ptr [ESP + 0x2c]
MOV ECX,dword ptr [ESP + 0x28]
ADD EAX,0x11
ADD ECX,0xc
PUSH EAX
PUSH ECX
JMP 0x0043650b
FLD dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x2c]
PUSH EDX
CALL 0x0049ed20
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
PUSH 0x20
PUSH 0x59
ADD EAX,0xf
PUSH -0x63
ADD ECX,0x5
PUSH EAX
PUSH ECX
CALL 0x00450530
ADD ESP,0x1c
PUSH 0x4c0924
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x20
PUSH 0x59
PUSH -0x63
MOV EDX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
ADD EDX,0x11
ADD EAX,0xc
PUSH EDX
PUSH EAX
CALL 0x00450530
ADD ESP,0x1c
CMP byte ptr [ESI + 0x6c],BL
JZ 0x0043660b
CMP word ptr [ESP + 0x24],BX
JNZ 0x0043660b
MOV CL,byte ptr [ESP + 0x20]
MOV DL,byte ptr [ESP + 0x1c]
PUSH ECX
PUSH EDX
CALL 0x00440a20
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0043660b
MOV EAX,dword ptr [ESP + 0x1c]
CMP EAX,0x3
JA 0x0043660b
JMP dword ptr [EAX*0x4 + 0x4367ac]
PUSH 0x4c0908
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
JMP 0x004365f3
PUSH 0x4c0908
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH 0x3e
PUSH -0x1
ADD EDX,0x11
PUSH 0x44
ADD EAX,0x3
PUSH EDX
PUSH EAX
JMP 0x00436603
PUSH 0x4c0908
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH 0x11
PUSH -0x42
ADD ECX,0x11
PUSH -0x5d
ADD EDX,0x3
PUSH ECX
PUSH EDX
JMP 0x00436603
PUSH 0x4c0908
CALL 0x00421360
FLD dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x20
PUSH 0x59
PUSH -0x63
MOV EAX,dword ptr [ESP + 0x2c]
MOV ECX,dword ptr [ESP + 0x28]
ADD EAX,0x11
ADD ECX,0x3
PUSH EAX
PUSH ECX
CALL 0x00450530
ADD ESP,0x1c
MOV EAX,dword ptr [ESP + 0x1c]
PUSH 0x1
MOV EDX,EAX
SHL EDX,0x3
SUB EDX,EAX
MOV EAX,dword ptr [ESP + 0x24]
LEA ECX,[EDX + EAX*0x1 + 0x7f]
MOV dword ptr [ESP + 0x44],ECX
MOV EDX,dword ptr [ESP + 0x44]
PUSH EDX
CALL 0x004285d0
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x48]
ADD ESP,0x8
SUB EAX,0x2
SUB ECX,0x2
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00428660
MOV EAX,dword ptr [ESP + 0x4c]
ADD ESP,0xc
PUSH 0x3f2aacda
PUSH 0x3f2aacda
PUSH EAX
CALL 0x004286f0
FLD dword ptr [ESP + 0x1c]
ADD ESP,0xc
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH ECX
CALL 0x00428740
MOV DL,byte ptr [ESP + 0x34]
MOV AL,byte ptr [ESP + 0x30]
ADD ESP,0x14
PUSH EDX
PUSH EAX
PUSH ESI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004366b6
FLD dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH -0x80
PUSH -0x80
PUSH -0x80
PUSH ECX
CALL 0x00428740
ADD ESP,0x14
MOV DL,byte ptr [ESP + 0x44]
MOV AL,byte ptr [ESI + 0x5e]
CMP DL,AL
JNZ 0x0043674e
MOV EAX,[0x00e295d0]
PUSH EAX
PUSH ESI
CALL 0x00440af0
MOV ECX,dword ptr [ESP + 0x28]
ADD ESP,0x8
CMP ECX,EAX
JNZ 0x0043674e
MOV ECX,dword ptr [ESP + 0x40]
PUSH EBX
PUSH ECX
CALL 0x004285d0
ADD ESP,0x8
MOV dword ptr [ESP + 0x40],EBP
MOV EDX,dword ptr [ESP + 0x40]
PUSH 0x1
PUSH EDX
CALL 0x004285d0
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x48]
ADD ESP,0x8
SUB EAX,0x5
SUB ECX,0x5
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00428660
MOV EAX,dword ptr [ESP + 0x4c]
ADD ESP,0xc
PUSH 0x3f2aacda
PUSH 0x3f2aacda
PUSH EAX
CALL 0x004286f0
FLD dword ptr [ESP + 0x1c]
ADD ESP,0xc
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x40]
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ECX
CALL 0x00428740
ADD ESP,0x14
MOV EDX,dword ptr [ESP + 0x20]
INC EDX
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,dword ptr [ESP + 0x1c]
MOVSX ECX,byte ptr [EAX + 0x4bfee0]
CMP dword ptr [ESP + 0x20],ECX
JL 0x0043616f
MOV EAX,dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0x1c]
INC EDX
MOV dword ptr [ESP + 0x1c],EDX
CMP dword ptr [ESP + 0x1c],EAX
JL 0x00436156
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x2c
RET