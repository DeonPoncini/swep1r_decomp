; FUN_0043ca30
MOV EAX,[0x004c4000]
SUB ESP,0x40
PUSH EBX
XOR EBX,EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x4c]
PUSH ESI
CMP EAX,EBX
PUSH EDI
JZ 0x0043cbfe
MOV EAX,[0x00e29970]
PUSH 0x50c2f8
PUSH EAX
MOV dword ptr [0x004c4000],EBX
MOV dword ptr [0x0050c110],0x40a00000
MOV dword ptr [0x0050c20c],EBX
MOV dword ptr [0x0050c120],EBX
CALL 0x0044afb0
ADD ESP,0x8
PUSH 0x50c2f8
PUSH 0x50c440
CALL 0x0042f7d0
MOVSX EAX,byte ptr [EBP + 0x73]
ADD ESP,0x8
LEA ECX,[EAX + EAX*0x2]
PUSH 0x50c128
LEA EDX,[EAX + ECX*0x4]
MOV EAX,[0x00e29974]
PUSH EAX
FLD dword ptr [EDX*0x4 + 0x4c2720]
FMUL qword ptr [0x004ac950]
FSUB qword ptr [0x004ac958]
FSTP dword ptr [0x0050c300]
FLD dword ptr [0x004c2788]
FMUL qword ptr [0x004ac950]
FSUB qword ptr [0x004ac958]
FSTP dword ptr [0x0050c448]
FLD dword ptr [0x0050c440]
FSUB dword ptr [0x004ac84c]
FSTP dword ptr [0x0050c440]
FLD dword ptr [0x0050c444]
FSUB dword ptr [0x004ac8d0]
FSTP dword ptr [0x0050c444]
CALL 0x0044afb0
ADD ESP,0x8
PUSH 0x50c128
PUSH 0x50c318
CALL 0x0042f7d0
FLD dword ptr [0x004c2788]
FMUL qword ptr [0x004ac950]
ADD ESP,0x8
FSUB qword ptr [0x004ac958]
PUSH 0xc2880000
PUSH 0xc34e0000
PUSH 0x43940000
PUSH 0x50c440
FSTP dword ptr [0x0050c130]
MOVSX EAX,byte ptr [EBP + 0x73]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
FLD dword ptr [EDX*0x4 + 0x4c2720]
FMUL qword ptr [0x004ac950]
FSUB qword ptr [0x004ac958]
FSTP dword ptr [0x0050c320]
FLD dword ptr [0x0050c318]
FSUB dword ptr [0x004ac84c]
FSTP dword ptr [0x0050c318]
FLD dword ptr [0x0050c31c]
FSUB dword ptr [0x004ac81c]
FSTP dword ptr [0x0050c31c]
CALL 0x0042f7b0
ADD ESP,0x10
PUSH 0xc2a40000
PUSH 0x43b68000
PUSH 0xc39d8000
PUSH 0x50c2f8
CALL 0x0042f7b0
ADD ESP,0x10
PUSH 0xc28c0000
PUSH 0xc40d8000
PUSH 0x439d8000
PUSH 0x50c318
CALL 0x0042f7b0
ADD ESP,0x10
PUSH 0xc2880000
PUSH 0xc42a0000
PUSH EBX
PUSH 0x50c128
CALL 0x0042f7b0
ADD ESP,0x10
PUSH 0x50c440
PUSH 0xe298f0
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0x50c128
PUSH 0xe2af90
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0x1
PUSH 0x3f4ccccd
PUSH 0x3d4ccccd
PUSH 0x7
PUSH 0x1b
CALL 0x00426c80
FLD dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac778]
ADD ESP,0x14
FNSTSW AX
TEST AH,0x1
JNZ 0x0043cc58
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac788]
FSUBR dword ptr [0x0050c110]
FST dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JZ 0x0043cc58
MOV dword ptr [0x0050c944],0xffffffff
MOV dword ptr [ESP + 0x54],EBX
MOV EDI,0xe2993c
MOV ESI,0xe99364
CMP dword ptr [EDI],EBX
JZ 0x0043ccfe
FILD dword ptr [ESP + 0x54]
MOV dword ptr [ESI + -0x4],EBX
FMUL qword ptr [0x004ac860]
FSTP dword ptr [ESI]
MOV dword ptr [ESI + 0x4],0x42480000
MOV AL,byte ptr [EBP + 0x73]
CMP AL,0x7
JNZ 0x0043cc95
MOV dword ptr [0x00e99364],0x43480000
CMP byte ptr [EBP + 0x73],0x11
JNZ 0x0043cca5
MOV dword ptr [0x00e99364],0x43c80000
PUSH EBX
PUSH EBX
LEA EAX,[ESP + 0x18]
PUSH EBX
PUSH EAX
CALL 0x00431020
MOV ECX,dword ptr [ESI + 0x4]
MOV EDX,dword ptr [ESI]
MOV EAX,dword ptr [ESI + -0x4]
ADD ESP,0x10
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x48]
PUSH EAX
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
MOV EAX,dword ptr [EDI]
LEA EDX,[ESP + 0x10]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x1
PUSH 0xc31d0000
PUSH 0x428c0000
PUSH 0x428c0000
PUSH 0x428c0000
PUSH EBX
PUSH EDX
PUSH EAX
CALL 0x004337e0
ADD ESP,0x28
MOV EAX,dword ptr [ESP + 0x54]
ADD ESI,0x28
INC EAX
ADD EDI,0x4
CMP ESI,0xe993b4
MOV dword ptr [ESP + 0x54],EAX
JL 0x0043cc66
CMP dword ptr [0x004d6b48],EBX
JNZ 0x0043cd29
CMP dword ptr [0x004d6b44],EBX
JZ 0x0043cd3d
MOV dword ptr [0x0050c110],0x0
MOV dword ptr [0x0050c944],0xffffffff
FLD dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac968]
FNSTSW AX
TEST AH,0x1
JZ 0x0043cde1
FLD dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac96c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043cde1
CMP dword ptr [0x0050c20c],EBX
JNZ 0x0043cdb0
PUSH 0x18
PUSH 0x1d
MOV dword ptr [0x0050c20c],0x1
CALL 0x00468fe0
MOVSX EAX,byte ptr [EBP + 0x5d]
ADD ESP,0x8
LEA ECX,[EAX + EAX*0x2]
PUSH EBX
PUSH 0x3f800000
MOVSX EDX,byte ptr [ECX*0x4 + 0x4bfef2]
PUSH 0x3e800000
ADD EDX,0xb7
PUSH 0x7
PUSH EDX
CALL 0x00426c80
ADD ESP,0x14
MOVSX EAX,byte ptr [EBP + 0x5d]
LEA EAX,[EAX + EAX*0x2]
MOVSX ECX,byte ptr [EAX*0x4 + 0x4bfef2]
MOV EDX,dword ptr [ECX*0x4 + 0x4c0238]
PUSH EDX
PUSH -0x1
PUSH -0x56
PUSH -0x56
PUSH 0x78
PUSH 0xc8
PUSH 0xa0
CALL 0x00450530
ADD ESP,0x1c
FLD dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac78c]
FNSTSW AX
TEST AH,0x1
JZ 0x0043ce9b
FLD dword ptr [0x0050c110]
FCOMP dword ptr [0x004ac970]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043ce9b
CMP dword ptr [0x0050c120],EBX
JNZ 0x0043ce73
PUSH 0x18
PUSH 0x1c
MOV dword ptr [0x0050c120],0x1
CALL 0x00468fe0
ADD ESP,0x8
PUSH 0x50c318
PUSH 0xe298f0
CALL 0x0042f7d0
ADD ESP,0x8
PUSH 0x50c2f8
PUSH 0xe2af90
CALL 0x0042f7d0
MOVSX EAX,byte ptr [0x00e35a84]
ADD ESP,0x8
ADD EAX,0xb7
PUSH EBX
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x7
PUSH EAX
CALL 0x00426c80
ADD ESP,0x14
MOVSX ECX,byte ptr [0x00e35a84]
MOV EDX,dword ptr [ECX*0x4 + 0x4c0238]
PUSH EDX
PUSH -0x1
PUSH EBX
PUSH -0x56
PUSH -0x56
PUSH 0xc8
PUSH 0xa0
CALL 0x00450530
ADD ESP,0x1c
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x40
RET