; FUN_00438d20
SUB ESP,0x54
MOV EAX,[0x004c021c]
PUSH EBX
PUSH EBP
XOR EBP,EBP
XOR EBX,EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x64]
CMP EAX,EBP
MOV EAX,[0x004c4000]
PUSH EDI
MOV dword ptr [ESP + 0x10],EBP
JNZ 0x00438d53
CMP EAX,EBP
JNZ 0x00438d57
CMP word ptr [0x0050c930],0x4
JNZ 0x00438eb9
CMP EAX,EBP
JZ 0x00438d82
PUSH 0x4d55cc
PUSH 0x50c328
CALL 0x0049eb80
MOV EAX,[0x004c4000]
ADD ESP,0x8
CMP EAX,EBP
JZ 0x00438d82
PUSH EBP
PUSH EBP
PUSH EBP
PUSH 0xe2af90
CALL 0x0042f7b0
ADD ESP,0x10
PUSH EBP
PUSH 0x14
PUSH ESI
MOV dword ptr [ESI + 0x34],0x14
CALL 0x0043f8e0
ADD ESP,0xc
LEA EAX,[ESP + 0x18]
PUSH 0xe2af90
PUSH 0xe298f0
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x18]
PUSH ECX
CALL 0x0042f8c0
FSTP dword ptr [0x0050c210]
ADD ESP,0x4
LEA EDX,[ESP + 0x18]
PUSH EDX
CALL 0x0042f9b0
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x4
FSTP ST0
FLD dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f560
MOV ECX,dword ptr [ESP + 0x28]
ADD ESP,0x8
FSTP dword ptr [0x0050c1fc]
PUSH ECX
CALL 0x0042f3e0
FSTP dword ptr [0x0050c2f0]
FLD dword ptr [0x0050c1fc]
FCOMP dword ptr [0x004ac778]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x00438e23
FLD dword ptr [0x0050c1fc]
FSUB dword ptr [0x004ac7f8]
FSTP dword ptr [0x0050c1fc]
FLD dword ptr [0x0050c1fc]
FCOMP dword ptr [0x004ac7b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00438e48
FLD dword ptr [0x0050c1fc]
FSUB dword ptr [0x004ac7b0]
FSTP dword ptr [0x0050c1fc]
FLD dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac7d0]
FNSTSW AX
TEST AH,0x1
JZ 0x00438e6d
FLD dword ptr [0x0050c2f0]
FSUB dword ptr [0x004ac7fc]
FSTP dword ptr [0x0050c2f0]
FLD dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac800]
FNSTSW AX
TEST AH,0x41
JNZ 0x00438e92
FLD dword ptr [0x0050c2f0]
FSUB dword ptr [0x004ac7ec]
FSTP dword ptr [0x0050c2f0]
MOV dword ptr [0x004c0220],0x1
MOV dword ptr [0x0050c95c],0x0
MOV dword ptr [0x004c021c],EBP
MOV dword ptr [0x004c4000],EBP
MOV word ptr [0x0050c930],BP
CMP dword ptr [0x004c0220],EBP
JZ 0x00438eea
FLD dword ptr [0x0050c95c]
FADD dword ptr [0x00e22a50]
FST dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
FNSTSW AX
TEST AH,0x1
JNZ 0x00438eea
MOV dword ptr [0x0050c95c],0x40a00000
MOV EAX,dword ptr [ESI + 0x34]
ADD EAX,-0x14
CMP EAX,0xa
JA 0x00438fb6
JMP dword ptr [EAX*0x4 + 0x439698]
PUSH 0x4d55cc
JMP 0x00438fa9
PUSH 0x4c0cb8
JMP 0x00438fa0
PUSH 0x4c0c98
JMP 0x00438fa0
PUSH 0x4c0c78
JMP 0x00438fa0
PUSH 0x4c0c58
JMP 0x00438fa0
PUSH 0x4c0c38
JMP 0x00438fa0
MOVSX EAX,byte ptr [ESI + 0x73]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EAX + EDX*0x4]
MOV ECX,dword ptr [EAX*0x4 + 0x4c2718]
PUSH ECX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
MOVSX EAX,byte ptr [ESI + 0x73]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EAX + EDX*0x4]
MOV ECX,dword ptr [EAX*0x4 + 0x4c2714]
PUSH ECX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c08d8
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x50c328
CALL 0x0049eb80
ADD ESP,0x10
JMP 0x00438fb6
PUSH 0x4c0c1c
JMP 0x00438fa0
PUSH 0x4c0c00
JMP 0x00438fa0
PUSH 0x4c0be4
JMP 0x00438fa0
PUSH 0x4c0bc8
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x50c328
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x50c328
PUSH -0x1
PUSH 0x0
PUSH -0x1
PUSH 0x0
PUSH 0xc3
PUSH 0xa0
CALL 0x00450530
MOV AL,byte ptr [ESI + 0x70]
ADD ESP,0x1c
XOR EDI,EDI
TEST AL,AL
JLE 0x00439514
MOV dword ptr [ESP + 0x68],0x50c908
MOV EAX,[0x004eb39c]
TEST EAX,EAX
JNZ 0x0043900d
MOV EAX,[0x004d6b48]
TEST EAX,EAX
JNZ 0x00439648
MOV EAX,[0x004d6b44]
TEST EAX,EAX
JNZ 0x00439664
FLD dword ptr [EDI*0x4 + 0xe98ea0]
MOV EDX,dword ptr [0x0050c210]
FCOMP qword ptr [0x004ac880]
MOV dword ptr [ESP + 0x14],EDX
FNSTSW AX
TEST AH,0x41
JZ 0x0043903f
FLD dword ptr [EDI*0x4 + 0xe98ea0]
FCOMP qword ptr [0x004ac748]
FNSTSW AX
TEST AH,0x1
JZ 0x0043909b
MOV EAX,[0x004c0220]
TEST EAX,EAX
JNZ 0x00439076
FLD dword ptr [EDI*0x4 + 0xe98ea0]
FMUL dword ptr [0x00e22a50]
FLD dword ptr [0x0050c1fc]
FXCH
FMUL dword ptr [0x004ac8d0]
MOV EBX,0x1
FMUL qword ptr [0x004ac888]
FSUBP
FSTP dword ptr [0x0050c1fc]
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
FNSTSW AX
TEST AH,0x40
JZ 0x00439091
MOV dword ptr [ESP + 0x10],0x1
XOR ECX,ECX
MOV dword ptr [0x004c0220],ECX
JMP 0x004390a1
MOV ECX,dword ptr [0x004c0220]
FLD dword ptr [EDI*0x4 + 0xe98e80]
FCOMP qword ptr [0x004ac880]
FNSTSW AX
TEST AH,0x41
JZ 0x004390cd
FLD dword ptr [EDI*0x4 + 0xe98e80]
FCOMP qword ptr [0x004ac748]
FNSTSW AX
TEST AH,0x1
JZ 0x00439156
TEST ECX,ECX
JNZ 0x00439133
FLD dword ptr [EDI*0x4 + 0xe98e80]
FMUL dword ptr [0x00e22a50]
FLD dword ptr [0x0050c2f0]
FXCH
FMUL dword ptr [0x004ac814]
FMUL qword ptr [0x004ac888]
FSUBP
FST dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac8d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00439111
MOV dword ptr [0x0050c2f0],0x42b20000
FLD dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac8d8]
FNSTSW AX
TEST AH,0x1
JZ 0x0043912e
MOV dword ptr [0x0050c2f0],0xc2b20000
MOV EBX,0x1
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
FNSTSW AX
TEST AH,0x40
JZ 0x0043914e
MOV dword ptr [ESP + 0x10],0x1
XOR ECX,ECX
MOV dword ptr [0x004c0220],ECX
MOV EAX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [EAX]
TEST DL,0x4
JZ 0x004391bc
TEST ECX,ECX
JNZ 0x00439199
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac8dc]
FSUBR dword ptr [0x0050c210]
FST dword ptr [0x0050c210]
FCOMP dword ptr [0x004ac79c]
FNSTSW AX
TEST AH,0x1
JZ 0x00439194
MOV dword ptr [0x0050c210],0x42c80000
MOV EBX,0x1
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
FNSTSW AX
TEST AH,0x40
JZ 0x004391b4
MOV dword ptr [ESP + 0x10],0x1
XOR ECX,ECX
MOV dword ptr [0x004c0220],ECX
TEST DL,0x8
JZ 0x0043921e
TEST ECX,ECX
JNZ 0x004391f9
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac8e0]
FSUBR dword ptr [0x0050c210]
FST dword ptr [0x0050c210]
FCOMP dword ptr [0x004ac8e4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004391f4
MOV dword ptr [0x0050c210],0x44a70000
MOV EBX,0x1
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
FNSTSW AX
TEST AH,0x40
JZ 0x00439214
MOV dword ptr [ESP + 0x10],0x1
MOV dword ptr [0x004c0220],0x0
TEST byte ptr [0x0050c908],0x10
JZ 0x004392e4
CMP word ptr [0x0050c930],0x3
JZ 0x004392e4
MOV ECX,dword ptr [ESI + 0x34]
INC ECX
MOV EAX,ECX
MOV dword ptr [ESI + 0x34],ECX
CMP EAX,0x16
JNZ 0x00439263
MOVSX EAX,byte ptr [EDI + ESI*0x1 + 0x73]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
CMP dword ptr [EDX*0x4 + 0x4c2704],0x1e
JNZ 0x00439263
MOV dword ptr [ESI + 0x34],0x1a
CMP dword ptr [ESI + 0x34],0x18
JNZ 0x00439285
MOVSX EAX,byte ptr [EDI + ESI*0x1 + 0x73]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
CMP dword ptr [EDX*0x4 + 0x4c2704],0x28
JZ 0x00439285
MOV dword ptr [ESI + 0x34],0x1a
MOV EAX,dword ptr [ESI + 0x34]
CMP EAX,0x1d
JG 0x004392a7
MOV ECX,dword ptr [0x00e35aa0]
ADD EAX,-0x19
AND ECX,0xff
CMP EAX,ECX
JLE 0x004392a7
MOV dword ptr [ESI + 0x34],0x1e
CMP dword ptr [ESI + 0x34],0x1e
JLE 0x004392b4
MOV dword ptr [ESI + 0x34],0x14
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
MOV EBP,0x1
FNSTSW AX
TEST AH,0x40
JZ 0x004392d0
MOV dword ptr [ESP + 0x10],EBP
MOV dword ptr [0x004c0220],0x0
MOV dword ptr [0x0050c95c],0x0
TEST byte ptr [0x0050c908],0x20
JZ 0x004393a2
CMP word ptr [0x0050c930],0x3
JZ 0x004393a2
MOV ECX,dword ptr [ESI + 0x34]
DEC ECX
MOV EAX,ECX
MOV dword ptr [ESI + 0x34],ECX
CMP EAX,0x19
JNZ 0x0043934b
MOVSX EAX,byte ptr [EDI + ESI*0x1 + 0x73]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EAX + EDX*0x4]
CMP dword ptr [EAX*0x4 + 0x4c2704],0x1e
JNZ 0x00439329
MOV dword ptr [ESI + 0x34],0x15
CMP dword ptr [ESI + 0x34],0x19
JNZ 0x0043934b
MOVSX EAX,byte ptr [EDI + ESI*0x1 + 0x73]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
CMP dword ptr [EDX*0x4 + 0x4c2704],0x28
JZ 0x0043934b
MOV dword ptr [ESI + 0x34],0x17
MOV EAX,[0x00e35aa0]
MOV ECX,dword ptr [ESI + 0x34]
AND EAX,0xff
SUB ECX,0x19
CMP ECX,EAX
JLE 0x00439365
ADD EAX,0x19
MOV dword ptr [ESI + 0x34],EAX
CMP dword ptr [ESI + 0x34],0x14
JGE 0x00439372
MOV dword ptr [ESI + 0x34],0x1e
FLD dword ptr [0x0050c95c]
FCOMP dword ptr [0x004ac760]
MOV EBP,0x1
FNSTSW AX
TEST AH,0x40
JZ 0x0043938e
MOV dword ptr [ESP + 0x10],EBP
MOV dword ptr [0x004c0220],0x0
MOV dword ptr [0x0050c95c],0x0
TEST EBP,EBP
JZ 0x004393c1
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JNZ 0x004393c1
MOV EDX,dword ptr [ESI + 0x34]
PUSH 0x1
PUSH EDX
PUSH ESI
CALL 0x0043f8e0
ADD ESP,0xc
XOR EBP,EBP
JMP 0x004393ce
MOV EAX,dword ptr [ESI + 0x34]
PUSH EAX
PUSH ESI
CALL 0x0043fbc0
ADD ESP,0x8
TEST EBX,EBX
JNZ 0x004393e0
CMP word ptr [0x0050c930],0x3
JNZ 0x004394fc
MOV ECX,dword ptr [0x0050c2f0]
MOV EDX,dword ptr [0x0050c1fc]
PUSH 0x0
PUSH ECX
LEA EAX,[ESP + 0x2c]
PUSH EDX
PUSH EAX
CALL 0x00431020
MOV EDX,dword ptr [0x0050c210]
ADD ESP,0x10
LEA ECX,[ESP + 0x34]
PUSH ECX
PUSH EDX
PUSH 0xe2af90
PUSH 0xe298f0
CALL 0x0042fa80
FLD dword ptr [0x00e298f8]
FCOMP dword ptr [0x004ac8e8]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JZ 0x0043946b
FLD dword ptr [0x00e2af98]
FLD dword ptr [0x00e2af98]
FSUB dword ptr [0x004ac8e8]
FXCH
FSUB dword ptr [0x00e298f8]
LEA EAX,[ESP + 0x34]
FDIVP
PUSH EAX
PUSH ECX
FMUL dword ptr [0x0050c210]
FSTP dword ptr [ESP]
PUSH 0xe2af90
PUSH 0xe298f0
CALL 0x0042fa80
ADD ESP,0x10
FLD dword ptr [0x00e298f8]
FCOMP dword ptr [0x004ac8ec]
FNSTSW AX
TEST AH,0x41
JNZ 0x004394bb
FLD dword ptr [0x00e2af98]
FLD dword ptr [0x00e2af98]
FSUB dword ptr [0x004ac8ec]
FXCH
FSUB dword ptr [0x00e298f8]
LEA ECX,[ESP + 0x34]
FDIVP
PUSH ECX
PUSH ECX
FMUL dword ptr [0x0050c210]
FSTP dword ptr [ESP]
PUSH 0xe2af90
PUSH 0xe298f0
CALL 0x0042fa80
ADD ESP,0x10
FLD dword ptr [0x0050c210]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x40
JNZ 0x004394e4
PUSH 0xe2af90
PUSH 0xe298f0
CALL 0x0042f950
FSTP dword ptr [0x0050c210]
ADD ESP,0x8
TEST EBX,EBX
JZ 0x004394fa
PUSH 0xe2af60
PUSH 0xe2b3e0
CALL 0x0044bb10
ADD ESP,0x8
XOR EBX,EBX
MOVSX EDX,byte ptr [ESI + 0x70]
MOV ECX,dword ptr [ESP + 0x68]
INC EDI
ADD ECX,0x4
CMP EDI,EDX
MOV dword ptr [ESP + 0x68],ECX
JL 0x00438fea
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x00439640
MOV dword ptr [0x004c0220],0x0
MOV dword ptr [0x0050c95c],0x0
MOV EAX,dword ptr [ESI + 0x34]
PUSH 0x1
PUSH EAX
PUSH ESI
CALL 0x0043f8e0
ADD ESP,0xc
LEA ECX,[ESP + 0x18]
PUSH 0xe2af90
PUSH 0xe298f0
PUSH ECX
CALL 0x0042f860
ADD ESP,0xc
LEA EDX,[ESP + 0x18]
PUSH EDX
CALL 0x0042f8c0
FSTP dword ptr [0x0050c210]
ADD ESP,0x4
LEA EAX,[ESP + 0x18]
PUSH EAX
CALL 0x0042f9b0
MOV ECX,dword ptr [ESP + 0x20]
ADD ESP,0x4
FSTP ST0
FLD dword ptr [ESP + 0x18]
PUSH ECX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f560
MOV EDX,dword ptr [ESP + 0x28]
ADD ESP,0x8
FSTP dword ptr [0x0050c1fc]
PUSH EDX
CALL 0x0042f3e0
FSTP dword ptr [0x0050c2f0]
FLD dword ptr [0x0050c1fc]
FCOMP dword ptr [0x004ac778]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x004395d1
FLD dword ptr [0x0050c1fc]
FSUB dword ptr [0x004ac7f8]
FSTP dword ptr [0x0050c1fc]
FLD dword ptr [0x0050c1fc]
FCOMP dword ptr [0x004ac7b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004395f6
FLD dword ptr [0x0050c1fc]
FSUB dword ptr [0x004ac7b0]
FSTP dword ptr [0x0050c1fc]
FLD dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac7d0]
FNSTSW AX
TEST AH,0x1
JZ 0x0043961b
FLD dword ptr [0x0050c2f0]
FSUB dword ptr [0x004ac7fc]
FSTP dword ptr [0x0050c2f0]
FLD dword ptr [0x0050c2f0]
FCOMP dword ptr [0x004ac800]
FNSTSW AX
TEST AH,0x41
JNZ 0x00439640
FLD dword ptr [0x0050c2f0]
FSUB dword ptr [0x004ac7ec]
FSTP dword ptr [0x0050c2f0]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x54
RET
PUSH 0x54
CALL 0x00440550
ADD ESP,0x4
MOV dword ptr [0x004c021c],0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x54
RET
PUSH 0x4d
CALL 0x00440550
ADD ESP,0x4
MOV dword ptr [0x004c021c],0x1
MOV dword ptr [0x0050c958],0x0
PUSH 0x3
PUSH ESI
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x54
RET
