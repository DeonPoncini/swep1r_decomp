; FUN_00459150
SUB ESP,0x80
MOV EAX,[0x004c3fb8]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH 0x3800
MOV dword ptr [ESP + 0x18],0x462be000
MOV dword ptr [ESP + 0x24],0x41200000
MOV dword ptr [ESP + 0x30],EAX
CALL 0x00428820
ADD ESP,0x4
XOR EBX,EBX
LEA ECX,[ESP + 0x60]
MOV word ptr [0x0050c930],BX
PUSH EBX
PUSH 0x3f800000
PUSH EBX
PUSH ECX
MOV dword ptr [0x00e295a4],EBX
MOV dword ptr [0x00e295a8],EBX
MOV dword ptr [0x00e295ac],EBX
MOV dword ptr [0x00e295a0],EBX
MOV dword ptr [0x00e295b0],EBX
MOV dword ptr [0x00e295b4],EBX
MOV dword ptr [0x00e295b8],EBX
MOV dword ptr [0x00e295bc],EBX
MOV dword ptr [0x00e295c0],EBX
MOV dword ptr [0x00e295c4],EBX
MOV dword ptr [ESP + 0x4c],0x42a00000
MOV dword ptr [ESP + 0x50],0x42960000
MOV dword ptr [ESP + 0x54],0x42480000
MOV dword ptr [ESP + 0x64],0x437f0000
MOV dword ptr [ESP + 0x68],0x437f0000
MOV dword ptr [ESP + 0x6c],0x43480000
MOV dword ptr [ESP + 0x58],EBX
MOV dword ptr [ESP + 0x5c],EBX
MOV dword ptr [ESP + 0x60],0xc71c4000
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESP + 0x6c]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESP + 0x78]
PUSH EBX
PUSH 0x3f800000
PUSH EBX
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESP + 0x84]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESP + 0x60]
PUSH EDX
PUSH 0xe2af00
CALL 0x00431060
ADD ESP,0x8
LEA EAX,[ESP + 0x60]
PUSH EAX
PUSH 0xe298c0
CALL 0x00431060
ADD ESP,0x8
LEA ECX,[ESP + 0x78]
PUSH ECX
PUSH 0xe2af60
CALL 0x00431060
ADD ESP,0x8
PUSH EBX
CALL 0x0044e0c0
MOV ESI,dword ptr [ESP + 0x98]
ADD ESP,0x4
MOV dword ptr [ESI + 0x34],0x24
MOV dword ptr [ESI + 0x40],0xffffffff
MOV AL,byte ptr [ESI + 0x70]
XOR EDI,EDI
TEST AL,AL
JLE 0x004592d3
MOVSX EDX,DI
ADD EDX,0x1c
PUSH EDX
PUSH 0x456c6d6f
CALL 0x00450b30
ADD ESP,0x8
CMP EAX,EBX
JZ 0x004592c8
MOV dword ptr [EAX + 0x14],EBX
MOVSX AX,byte ptr [ESI + 0x70]
INC EDI
CMP DI,AX
JL 0x004592ad
MOV ECX,dword ptr [ESI + 0x38]
MOV EAX,0x3
CMP ECX,EAX
JNZ 0x00459464
CMP dword ptr [ESI + 0x3c],EAX
JZ 0x00459464
LEA ECX,[ESP + 0x30]
PUSH 0x4c457c
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
LEA EDX,[ESP + 0x30]
FILD dword ptr [ESP + 0x1c]
LEA EAX,[ESP + 0x30]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad050]
FSTP dword ptr [ESP + 0x10]
MOV EBP,dword ptr [ESP + 0x10]
PUSH EBP
PUSH EBP
PUSH EDX
PUSH EAX
PUSH 0x11
PUSH 0x38
CALL 0x00468800
ADD ESP,0x18
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad0b8]
CALL 0x0049ed20
MOV EDI,0xa
SUB EDI,EAX
LEA EAX,[ESP + 0x30]
LEA ECX,[EDI + EDI*0x2]
LEA EDX,[ECX*0x4 + 0x4c4510]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0x39
PUSH 0x456c6d6f
CALL 0x00450b30
MOV ECX,dword ptr [EAX + 0x8]
ADD ESP,0x8
CMP ECX,0x1
PUSH EBP
PUSH EBP
JNZ 0x0045939a
LEA ECX,[ESP + 0x38]
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH EBX
JMP 0x004593a6
LEA EAX,[ESP + 0x38]
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
PUSH 0x11
PUSH 0x39
CALL 0x00468800
ADD ESP,0x18
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad0b8]
CALL 0x0049ed20
MOV ECX,0xa
SUB ECX,EAX
CMP ECX,EDI
JZ 0x004593b0
MOV DL,CL
LEA EAX,[ECX + ECX*0x2]
SUB DL,0x9
MOV byte ptr [ESI + 0x50],DL
LEA ECX,[EAX*0x4 + 0x4c4510]
LEA EDX,[ESP + 0x30]
PUSH ECX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
LEA ECX,[ESP + 0x30]
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad050]
FSTP dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH EAX
LEA EAX,[ESP + 0x38]
PUSH EAX
PUSH ECX
PUSH 0x2e
PUSH 0x17
CALL 0x00468800
ADD ESP,0x18
LEA EDX,[ESP + 0x30]
PUSH 0x4c4570
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x30]
LEA ECX,[ESP + 0x30]
PUSH 0x433e147b
PUSH 0x433e147b
PUSH EAX
PUSH ECX
PUSH 0x2a
PUSH 0x16
CALL 0x00468800
ADD ESP,0x18
MOV EAX,dword ptr [ESI + 0x8]
CMP EAX,0x12
JA 0x004598f9
XOR EDX,EDX
MOV DL,byte ptr [EAX + 0x45a014]
JMP dword ptr [EDX*0x4 + 0x459fe4]
CMP dword ptr [ESI + 0xc],0xc
JNZ 0x0045948c
MOV dword ptr [ESI + 0x34],0x25
MOV EAX,0x1
MOV [0x00e295a4],EAX
MOV [0x00e295a8],EAX
JMP 0x004598f9
CMP dword ptr [ESI + 0xc],0xd
JMP 0x004594aa
CMP dword ptr [ESI + 0xc],0xc
JNZ 0x004594bd
MOV dword ptr [ESI + 0x34],0x25
MOV dword ptr [0x00e295a0],0x3f800000
MOV dword ptr [0x00e295a4],0x1
JMP 0x004598f9
MOV dword ptr [ESI + 0x34],0x14
MOV dword ptr [ESP + 0x14],0x47a41000
MOV dword ptr [0x00e295cc],0x7
JMP 0x004598f9
MOV EAX,[0x0050c47c]
MOV dword ptr [ESP + 0x20],0x40a00000
CMP EAX,0x2
JNZ 0x00459505
MOV dword ptr [ESI + 0x10],0x1
JMP 0x0045950d
CMP EAX,0x1
JNZ 0x0045950d
MOV dword ptr [ESI + 0x10],EBX
MOV ECX,dword ptr [ESI + 0x10]
MOV EAX,0x1
CMP ECX,EAX
MOV dword ptr [ESI + 0x34],EAX
JNZ 0x00459523
MOV dword ptr [ESI + 0x34],0x2
LEA EAX,[ESP + 0x30]
PUSH 0x4c4540
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x30]
PUSH ECX
PUSH 0xe298a0
CALL 0x0042f7d0
FLD dword ptr [0x004ad0c0]
FSUB dword ptr [ESP + 0x3c]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x004acfa0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
MOV EAX,dword ptr [ESI + 0xc]
MOV EBX,0x4
FST dword ptr [ESP + 0x24]
FSTP dword ptr [ESP + 0x18]
ADD ESP,0x8
CMP EAX,EBX
MOV EDI,0x1d
JNZ 0x004595d3
MOV EDX,dword ptr [ESI + 0x34]
LEA EAX,[ESP + 0x30]
SHL EDX,0x5
ADD EDX,0x4c401c
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x3c]
ADD ESP,0x8
MOV dword ptr [ESP + 0x38],0xc2200000
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x00e298a0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
ADD ESP,0x8
MOV EDI,0x1e
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x10]
PUSH ECX
PUSH EDX
LEA EAX,[ESP + 0x38]
PUSH 0xe298a0
PUSH EAX
PUSH EDI
PUSH 0x15
CALL 0x00468800
ADD ESP,0x18
PUSH 0x4c4540
PUSH 0xe298a0
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FADD ST0,ST0
CALL 0x0049ed20
TEST EAX,EAX
JNZ 0x0045967d
LEA ECX,[ESP + 0x30]
PUSH 0x4c45ac
PUSH ECX
CALL 0x0042f7d0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x38]
FSUB dword ptr [0x00e298a0]
FXCH
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad0c8]
FSUBR dword ptr [ESP + 0x10]
JMP 0x004596b3
LEA EDX,[ESP + 0x30]
PUSH 0x4c45b8
PUSH EDX
CALL 0x0042f7d0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x3c]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x00e298a0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
ADD ESP,0x8
FSTP dword ptr [ESP + 0x10]
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
FILD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004acf64]
CALL 0x0049ed20
MOV ECX,0x17
SUB ECX,EAX
LEA EAX,[ECX + -0x17]
CMP EAX,EBX
JA 0x0045970b
JMP dword ptr [EAX*0x4 + 0x45a028]
MOV EAX,dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x30]
PUSH EAX
PUSH EAX
LEA EAX,[ESP + 0x38]
PUSH EAX
PUSH EDX
PUSH EDI
PUSH ECX
CALL 0x00468800
MOV AL,byte ptr [ESI + 0x70]
ADD ESP,0x18
XOR EDI,EDI
TEST AL,AL
JLE 0x00459814
MOVSX EBP,DI
MOV dword ptr [ESP + 0x10],EBP
PUSH 0xc2700000
FILD dword ptr [ESP + 0x14]
PUSH 0xc3480000
PUSH ECX
LEA EAX,[ESP + 0x3c]
FMUL qword ptr [0x004ad0d0]
FSUBR qword ptr [0x004ad0d8]
FSTP dword ptr [ESP]
PUSH EAX
CALL 0x0042f7b0
MOV EAX,dword ptr [ESI + 0xc]
ADD ESP,0x10
CMP EAX,EBX
JNZ 0x00459785
MOV ECX,dword ptr [ESI + 0x34]
LEA EDX,[ESP + 0x30]
SHL ECX,0x5
ADD ECX,0x4c401c
PUSH ECX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0xc2700000
PUSH 0xc2c80000
LEA EAX,[ESP + 0x38]
PUSH 0xc1a00000
PUSH EAX
MOV dword ptr [ESP + 0x48],0xc2700000
CALL 0x0042f7b0
ADD ESP,0x10
PUSH 0xc2700000
PUSH 0x0
PUSH 0x0
PUSH 0xe298a0
CALL 0x0042f7b0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x44]
ADD ESP,0x10
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x00e298a0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
LEA ECX,[ESP + 0x30]
ADD EBP,0x1c
PUSH EAX
PUSH EAX
PUSH 0xe298a0
PUSH ECX
PUSH 0x13
PUSH EBP
CALL 0x00468800
MOVSX DX,byte ptr [ESI + 0x70]
ADD ESP,0x18
INC EDI
CMP DI,DX
JL 0x00459732
MOV EAX,[0x00e35aa0]
MOV ECX,EBX
AND EAX,0xff
XOR EBP,EBP
SUB ECX,EAX
TEST ECX,ECX
JLE 0x004598f7
XOR EDI,EDI
MOV EAX,0x1d
LEA ECX,[ESP + 0x24]
SUB EAX,EDI
LEA EDX,[EAX + EAX*0x4]
LEA EAX,[ESP + 0x28]
SHL EDX,0x1
MOV dword ptr [ESP + 0x1c],EDX
PUSH EAX
FILD dword ptr [ESP + 0x20]
PUSH ECX
FSTP dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x24]
PUSH EDX
CALL 0x0042f380
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad0e4]
ADD ESP,0xc
LEA EAX,[ESP + 0x30]
FSUBR dword ptr [0x004ad0c0]
PUSH 0xc2700000
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad0e4]
PUSH ECX
FSUBR dword ptr [0x004acfa0]
FSTP dword ptr [ESP]
PUSH EAX
CALL 0x0042f7b0
FLD dword ptr [0x004ad0c0]
FSUB dword ptr [ESP + 0x44]
ADD ESP,0x10
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x004acfa0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
LEA ECX,[ESP + 0x30]
LEA EDX,[ESP + 0x30]
PUSH EAX
PUSH EAX
PUSH ECX
PUSH EDX
ADD EDI,0x34
PUSH 0x5
PUSH EDI
CALL 0x00468800
MOV EAX,[0x00e35aa0]
ADD ESP,0x18
INC EBP
AND EAX,0xff
MOVSX EDI,BP
MOV ECX,EBX
SUB ECX,EAX
CMP EDI,ECX
JL 0x0045982e
XOR EBX,EBX
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH EBX
CALL 0x004831d0
MOV EAX,[0x004c3fb0]
ADD ESP,0x14
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH EAX
CALL 0x004831d0
MOV EDI,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [0x004c3fb0]
ADD ESP,0x14
PUSH EDI
PUSH ECX
CALL 0x00483230
MOV EDX,dword ptr [0x004c3fb0]
ADD ESP,0x8
PUSH EDX
CALL 0x004318d0
ADD ESP,0x4
PUSH EAX
PUSH EDI
CALL 0x00428b40
MOV AX,[0x004c3fb4]
ADD ESP,0x8
PUSH EBX
PUSH 0xe2af00
PUSH 0x1
PUSH EAX
CALL 0x00428a60
MOV CX,word ptr [0x004c3fb8]
ADD ESP,0x10
PUSH EBX
PUSH 0xe298c0
PUSH 0x2
PUSH ECX
CALL 0x00428a60
MOV DX,word ptr [0x004c3fb8]
ADD ESP,0x10
PUSH EBX
PUSH 0xe2af60
PUSH EDX
CALL 0x00428b10
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x2c]
MOV EDX,dword ptr [0x004c3fb0]
ADD ESP,0xc
PUSH 0xbf800000
PUSH EAX
PUSH ECX
PUSH 0xbf800000
PUSH 0x42340000
PUSH EDX
CALL 0x00483590
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0x18
CMP EAX,-0x1
JZ 0x004599fd
SHL EAX,0x5
ADD EAX,0x4c4010
PUSH EAX
PUSH 0xe298f0
CALL 0x0042f7d0
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0x8
SHL EAX,0x5
ADD EAX,0x4c401c
PUSH EAX
PUSH 0xe2af90
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0xe298c0
PUSH 0xe2ae80
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe298c0
PUSH 0xe29b60
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe2af60
PUSH 0xe2b3e0
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe2af60
PUSH 0xe2b440
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe29ba0
PUSH 0xe2af00
CALL 0x00430b80
ADD ESP,0x8
PUSH 0xe2b420
PUSH 0xe2af00
CALL 0x00430b80
ADD ESP,0x8
PUSH 0xe2b200
PUSH 0xe2af00
CALL 0x00430b80
MOV EAX,dword ptr [ESI + 0x38]
ADD ESP,0x8
CMP EAX,0x3
JZ 0x00459a9c
LEA ECX,[ESP + 0x48]
LEA EDX,[ESP + 0x54]
PUSH ECX
LEA EAX,[ESP + 0x40]
PUSH EDX
PUSH EAX
PUSH -0x1
CALL 0x00483840
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x80
RET
MOV EBX,0x4
MOV dword ptr [ESP + 0x20],0x3f4ccccd
MOV dword ptr [ESP + 0x3c],0x42f00000
MOV dword ptr [ESP + 0x40],0x43070000
MOV dword ptr [ESP + 0x44],0x430c0000
MOV dword ptr [ESI + 0x34],EBX
MOV EAX,EBX
MOVSX EDX,AX
SHL EDX,0x5
CMP word ptr [EDX + 0x4c4028],BX
JZ 0x00459ae9
INC EAX
CMP AX,0x13
JL 0x00459ad1
JMP 0x00459aef
MOVSX EAX,AX
MOV dword ptr [ESI + 0x34],EAX
MOV AL,byte ptr [ESI + 0x70]
XOR EDI,EDI
TEST AL,AL
JLE 0x00459ba0
MOVSX EBP,DI
MOV dword ptr [ESP + 0x10],EBP
PUSH 0xc3110000
FILD dword ptr [ESP + 0x14]
PUSH 0xc40e4000
PUSH ECX
LEA ECX,[ESP + 0x3c]
FMUL qword ptr [0x004ad0d0]
FSUBR qword ptr [0x004ad0f8]
FSTP dword ptr [ESP]
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
PUSH EBP
PUSH ESI
CALL 0x0045cb80
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0x8
SHL EAX,0x5
PUSH ECX
FLD dword ptr [EAX + 0x4c4014]
FSUB dword ptr [EAX + 0x4c4020]
FSTP dword ptr [ESP]
FLD dword ptr [EAX + 0x4c401c]
FSUB dword ptr [EAX + 0x4c4010]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FST dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ad100]
MOV EDX,dword ptr [ESP + 0x18]
ADD ESP,0x8
LEA EAX,[ESP + 0x30]
ADD EBP,0x1c
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
PUSH 0xe298a0
PUSH EAX
PUSH 0x14
PUSH EBP
CALL 0x00468800
MOVSX CX,byte ptr [ESI + 0x70]
ADD ESP,0x18
INC EDI
CMP DI,CX
JL 0x00459afc
LEA EDX,[ESP + 0x30]
PUSH 0x4c407c
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
MOV dword ptr [ESP + 0x38],0xc2fa0000
PUSH 0x4c454c
PUSH 0xe298a0
CALL 0x0042f7d0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x3c]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x00e298a0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FST dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ad108]
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
PUSH ECX
LEA ECX,[ESP + 0x34]
FSTP dword ptr [ESP]
PUSH EAX
PUSH 0xe298a0
PUSH ECX
PUSH 0x1e
PUSH 0x15
CALL 0x00468800
ADD ESP,0x18
LEA EDX,[ESP + 0x30]
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH EDX
CALL 0x0042f7b0
MOV EAX,[0x00e35aa0]
MOV ECX,EBX
AND EAX,0xff
ADD ESP,0x10
SUB ECX,EAX
XOR EDI,EDI
TEST ECX,ECX
JLE 0x00459c76
XOR EAX,EAX
PUSH 0x0
LEA EDX,[ESP + 0x34]
PUSH 0x0
LEA ECX,[ESP + 0x38]
PUSH EDX
PUSH ECX
ADD EAX,0x34
PUSH 0x0
PUSH EAX
CALL 0x00468800
MOV EDX,dword ptr [0x00e35aa0]
ADD ESP,0x18
INC EDI
AND EDX,0xff
MOVSX EAX,DI
MOV ECX,EBX
SUB ECX,EDX
CMP EAX,ECX
JL 0x00459c42
LEA EDX,[ESP + 0x30]
PUSH 0x4c45c4
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0x4c484c
PUSH 0xe35a60
CALL 0x004409d0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00459cc3
PUSH 0x43340000
LEA EAX,[ESP + 0x34]
PUSH 0x43340000
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
PUSH 0x28
PUSH 0x13
CALL 0x00468800
ADD ESP,0x18
JMP 0x004598f7
PUSH 0x4c4848
PUSH 0xe35a60
CALL 0x004409d0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x004598f7
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x004ad090]
PUSH 0x43400000
LEA EDX,[ESP + 0x34]
PUSH 0x43400000
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
FSTP dword ptr [ESP + 0x44]
PUSH 0x29
PUSH 0x14
CALL 0x00468800
ADD ESP,0x18
JMP 0x004598f7
MOV AL,byte ptr [ESI + 0x6c]
TEST AL,AL
JNZ 0x00459d23
MOV EDI,0x38
MOV EBX,0x39
JMP 0x00459d2d
MOV EDI,0x39
MOV EBX,0x38
LEA ECX,[ESP + 0x30]
PUSH 0x4c4490
MOV dword ptr [ESI + 0x34],0x27
MOV dword ptr [ESI + 0x40],EDI
PUSH ECX
MOV dword ptr [0x00e295a0],0x3f800000
MOV dword ptr [0x00e295a4],0x1
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0x30]
PUSH 0x4c449c
PUSH 0x3ecccccd
PUSH 0x4c4490
PUSH 0x3f19999a
PUSH EDX
CALL 0x0042fac0
ADD ESP,0x14
MOV dword ptr [ESP + 0x38],0xc2700000
PUSH 0x4c449c
PUSH 0xe298a0
CALL 0x0042f7d0
FLD dword ptr [0x00e298a4]
FSUB dword ptr [ESP + 0x3c]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [0x00e298a0]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x18]
ADD ESP,0x8
PUSH EDI
PUSH 0x456c6d6f
CALL 0x00450b30
MOV EBP,EAX
ADD ESP,0x8
MOV EAX,dword ptr [EBP + 0x8]
CMP EAX,0x1
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH EAX
JNZ 0x00459df5
LEA EAX,[ESP + 0x38]
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
PUSH 0x2
PUSH EDI
CALL 0x00468800
ADD ESP,0x18
JMP 0x00459e14
LEA EDX,[ESP + 0x38]
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
PUSH 0x11
PUSH EDI
CALL 0x00468800
ADD ESP,0x18
MOV dword ptr [EBP + 0xac],0x42c80000
LEA ECX,[ESP + 0x30]
PUSH 0x4c457c
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x1c],EAX
PUSH EBX
FILD dword ptr [ESP + 0x20]
PUSH 0x456c6d6f
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad050]
FSTP dword ptr [ESP + 0x18]
CALL 0x00450b30
MOV ECX,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
CMP ECX,0x1
PUSH EAX
PUSH EAX
JNZ 0x00459e79
LEA EDX,[ESP + 0x38]
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
PUSH 0x0
PUSH EBX
CALL 0x00468800
ADD ESP,0x18
JMP 0x004598f7
LEA ECX,[ESP + 0x38]
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH 0x11
PUSH EBX
CALL 0x00468800
ADD ESP,0x18
JMP 0x004598f7
MOV dword ptr [ESP + 0x14],0x47a41000
MOV dword ptr [ESI + 0x34],0x14
MOV EDI,0x1c
MOV dword ptr [ESP + 0x18],EBX
MOV dword ptr [ESP + 0x1c],0xb4
MOV EBP,0x2
PUSH 0xc31d0000
PUSH 0xc3960000
PUSH 0x43480000
PUSH 0xe298a0
CALL 0x0042f7b0
FILD dword ptr [ESP + 0x28]
ADD ESP,0x10
FSUBR dword ptr [0x00e298a4]
FSTP dword ptr [0x00e298a4]
FILD dword ptr [ESP + 0x1c]
FSTP dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH EAX
PUSH 0xe298a0
PUSH 0xe298a0
PUSH 0x14
PUSH EDI
CALL 0x00468800
MOV EAX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x34]
ADD ESP,0x18
ADD EAX,0xc8
SUB EDX,0xb4
INC EDI
DEC EBP
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x1c],EDX
JNZ 0x00459eb8
JMP 0x004598f9
MOV dword ptr [ESP + 0x14],0x47a41000
XOR EDI,EDI
MOVSX EBP,DI
MOV dword ptr [ESP + 0x10],EBP
PUSH EBX
FILD dword ptr [ESP + 0x14]
PUSH ECX
FMUL dword ptr [0x004ad10c]
FSTP dword ptr [ESP]
PUSH EBX
PUSH 0xe298a0
CALL 0x0042f7b0
ADD ESP,0x10
CMP DI,0x2
JNZ 0x00459f71
FLD dword ptr [0x00e298a4]
FSUB dword ptr [0x004ad110]
FSTP dword ptr [0x00e298a4]
PUSH 0xc2b40000
PUSH 0xc2b40000
PUSH 0xe298a0
PUSH 0xe298a0
ADD EBP,0x1c
PUSH 0x1c
PUSH EBP
CALL 0x00468800
ADD ESP,0x18
INC EDI
CMP DI,0x3
JL 0x00459f35
JMP 0x004598f9
PUSH 0xc31d0000
PUSH 0xc47a0000
LEA EAX,[ESP + 0x38]
PUSH EBX
PUSH EAX
MOV dword ptr [ESP + 0x24],0x47a41000
MOV dword ptr [ESI + 0x34],0x1a
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESP + 0x30]
LEA EDX,[ESP + 0x30]
PUSH EBX
PUSH EBX
PUSH ECX
PUSH EDX
PUSH 0x10
PUSH 0x34
CALL 0x00468800
ADD ESP,0x18
JMP 0x004598f9
