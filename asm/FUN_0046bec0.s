; FUN_0046bec0
SUB ESP,0x60
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x70]
XOR EAX,EAX
PUSH EDI
MOV dword ptr [ESP + 0x28],EAX
MOV dword ptr [ESP + 0x30],EAX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x24],EAX
MOV dword ptr [ESP + 0x2c],EAX
MOV dword ptr [ESP + 0x20],EAX
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x38],EAX
MOV dword ptr [ESP + 0x3c],EAX
MOV dword ptr [ESP + 0x34],EAX
MOV dword ptr [ESI + 0x18c],EAX
MOV dword ptr [ESI + 0x1f0],EAX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0xc]
MOV EDX,dword ptr [EAX + 0x8]
MOVSX EBP,byte ptr [EAX + 0x10]
MOVSX EBX,byte ptr [ECX + 0x23]
AND EDX,0xfffffffb
MOV dword ptr [EAX + 0x8],EDX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x8]
AND ECX,0xfffffff7
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,dword ptr [ESI + 0x60]
MOV EDI,dword ptr [EBP*0x4 + 0xe98e90]
AND EAX,0x200000
MOV dword ptr [ESP + 0x4c],EAX
MOV EAX,EDI
AND EAX,0x400
MOV dword ptr [ESP + 0x48],EAX
MOV EAX,EDI
AND EAX,0x800
CMP EBX,0x9
MOV dword ptr [ESP + 0x44],EAX
JA 0x0046c238
XOR EDX,EDX
MOV DL,byte ptr [EBX + 0x46ce20]
JMP dword ptr [EDX*0x4 + 0x46ce10]
MOV EAX,[0x00e996dc]
FLD dword ptr [EBP*0x4 + 0xe98ea0]
TEST AH,0x40
JZ 0x0046bf9e
MOV EAX,EDI
AND EAX,0x10
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,EDI
FCHS
FSTP dword ptr [ESP + 0x14]
AND EAX,0x20
MOV dword ptr [ESP + 0x1c],EAX
JMP 0x0046bfb4
MOV EAX,EDI
FSTP dword ptr [ESP + 0x14]
AND EAX,0x10
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,EDI
AND EAX,0x20
MOV dword ptr [ESP + 0x18],EAX
FLD dword ptr [EBP*0x4 + 0xe98e80]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [0x00ec884c]
CALL 0x0049ed20
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,EDI
AND EAX,0x2
AND EDI,0x8
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [EBP*0x4 + 0xe98eb0]
MOV ECX,EAX
MOV dword ptr [ESP + 0x38],EDI
AND ECX,0x4
TEST AL,0x80
MOV dword ptr [ESP + 0x3c],ECX
JZ 0x0046c03d
FLD dword ptr [ESI + 0x2f4]
FSUBR qword ptr [0x00e22a38]
FCOMP qword ptr [0x004ad8d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c012
MOV byte ptr [ESI + 0x2f9],0x0
MOV CL,byte ptr [ESI + 0x2f9]
FLD qword ptr [0x00e22a38]
INC CL
FSTP dword ptr [ESI + 0x2f4]
MOV AL,CL
MOV byte ptr [ESI + 0x2f9],CL
CMP AL,0x1
JLE 0x0046c03d
MOV EDX,0x1
MOV dword ptr [ESP + 0x34],EDX
JMP 0x0046c042
MOV EDX,0x1
TEST byte ptr [EBP*0x4 + 0xe98ec0],0x80
JZ 0x0046c058
FLD qword ptr [0x00e22a38]
FSTP dword ptr [ESI + 0x2f4]
MOV ECX,dword ptr [EBP*0x4 + 0xe98e90]
TEST CL,0x80
JZ 0x0046c081
FLD dword ptr [ESI + 0x2f4]
FSUBR qword ptr [0x00e22a38]
FCOMP qword ptr [0x004ad778]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c081
MOV dword ptr [ESP + 0x2c],EDX
TEST CH,0x1
JZ 0x0046c08a
MOV dword ptr [ESP + 0x24],EDX
CMP EBX,EDX
JNZ 0x0046c238
MOV ECX,dword ptr [ESP + 0x28]
XOR EAX,EAX
TEST ECX,ECX
SETZ AL
MOV dword ptr [ESP + 0x24],EAX
JMP 0x0046c238
MOV EAX,[0x00e996dc]
TEST AH,0x40
JZ 0x0046c0dc
FLD dword ptr [0x00ec8838]
FCHS
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [0x00ec8858]
CALL 0x0049ed20
FLD dword ptr [0x00ec885c]
MOV dword ptr [ESP + 0x18],EAX
CALL 0x0049ed20
MOV dword ptr [ESP + 0x1c],EAX
JMP 0x0046c104
MOV ECX,dword ptr [0x00ec8838]
FLD dword ptr [0x00ec8858]
MOV dword ptr [ESP + 0x14],ECX
CALL 0x0049ed20
FLD dword ptr [0x00ec885c]
MOV dword ptr [ESP + 0x1c],EAX
CALL 0x0049ed20
MOV dword ptr [ESP + 0x18],EAX
FLD dword ptr [0x00ec883c]
FLD dword ptr [0x00ec884c]
CALL 0x0049ed20
FLD dword ptr [0x00ec8848]
MOV EDI,EAX
MOV dword ptr [ESP + 0x28],EDI
CALL 0x0049ed20
FLD dword ptr [0x00ec8840]
MOV EBX,EAX
MOV dword ptr [ESP + 0x20],EBX
CALL 0x0049ed20
FLD dword ptr [0x00ec8844]
MOV dword ptr [ESP + 0x3c],EAX
CALL 0x0049ed20
FLD dword ptr [0x00ec8860]
MOV dword ptr [ESP + 0x38],EAX
CALL 0x0049ed20
FLD dword ptr [0x00ec8864]
FCOMP dword ptr [0x004ad750]
MOV dword ptr [ESP + 0x34],EAX
FNSTSW AX
TEST AH,0x40
JNZ 0x0046c187
FLD dword ptr [0x00ec88c4]
FCOMP qword ptr [0x004ad778]
MOV dword ptr [ESP + 0x2c],0x1
FNSTSW AX
TEST AH,0x41
JZ 0x0046c18f
MOV dword ptr [ESP + 0x2c],0x0
FLD dword ptr [0x00ec8854]
CALL 0x0049ed20
MOV EDX,dword ptr [0x00ec8830]
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,[0x00ec8820]
MOV dword ptr [ESP + 0x30],EDX
TEST EAX,EAX
JNZ 0x0046c1b5
TEST EBX,EBX
JNZ 0x0046c1b9
TEST EDI,EDI
JZ 0x0046c1c7
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x8]
AND ECX,0xfffffff7
JMP 0x0046c1e4
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JNZ 0x0046c1e7
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x8]
OR ECX,0x8
MOV dword ptr [EAX + 0x8],ECX
TEST EDI,EDI
JZ 0x0046c200
MOV EAX,[0x00ec8820]
TEST EAX,EAX
JZ 0x0046c200
TEST EBX,EBX
JZ 0x0046c200
MOV dword ptr [ESP + 0x20],0x0
FMUL dword ptr [0x004ad8d8]
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad8d8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c21f
MOV dword ptr [ESP + 0x10],0x3f4ccccd
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad8dc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c238
MOV dword ptr [ESP + 0x10],0x3f4ccccd
PUSH EBP
PUSH ESI
CALL 0x0046bd20
MOV dword ptr [ESP + 0x48],EAX
MOV EAX,[0x0050c048]
ADD ESP,0x8
TEST EAX,0x2000000
JZ 0x0046c49c
MOV EAX,dword ptr [ESI + 0x1e70]
XOR ECX,ECX
MOV DL,byte ptr [EAX + 0x10]
TEST DL,DL
SETNZ CL
MOV EBP,ECX
FLD dword ptr [EBP*0x4 + 0xe98ea0]
FLD dword ptr [EBP*0x4 + 0xe98e80]
FLD dword ptr [EBP*0x4 + 0xe98ea8]
FSTP dword ptr [ESP + 0x74]
FLD dword ptr [EBP*0x4 + 0xe98e88]
FSTP dword ptr [ESP + 0x24]
FCOM dword ptr [0x004ad800]
FNSTSW AX
TEST AH,0x41
JZ 0x0046c2b5
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ad800]
FNSTSW AX
TEST AH,0x41
JZ 0x0046c2b5
XOR EBX,EBX
XOR EDX,EDX
MOV EDI,0x1
JMP 0x0046c2be
MOV EDI,0x1
XOR EBX,EBX
MOV EDX,EDI
FLD ST0
MOV EAX,[0x00e996dc]
MOV ECX,dword ptr [EBP*0x4 + 0xe98eb0]
FLD ST2
FXCH
FSUB dword ptr [ESP + 0x24]
FXCH
FCOMP dword ptr [0x004ad8e0]
TEST AH,0x40
JZ 0x0046c337
FMUL dword ptr [0x004ad8e0]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0x14]
JZ 0x0046c307
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad8e0]
MOV dword ptr [ESP + 0x18],EDI
FNSTSW AX
TEST AH,0x1
JNZ 0x0046c30b
MOV dword ptr [ESP + 0x18],EBX
FLD ST1
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c331
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c331
MOV dword ptr [ESP + 0x1c],EDI
JMP 0x0046c389
MOV dword ptr [ESP + 0x1c],EBX
JMP 0x0046c389
FMUL dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0x14]
JZ 0x0046c35d
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad8e0]
MOV dword ptr [ESP + 0x1c],EDI
FNSTSW AX
TEST AH,0x1
JNZ 0x0046c361
MOV dword ptr [ESP + 0x1c],EBX
FLD ST1
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c385
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad774]
MOV dword ptr [ESP + 0x18],EDI
FNSTSW AX
TEST AH,0x41
JZ 0x0046c389
MOV dword ptr [ESP + 0x18],EBX
FLD dword ptr [EBP*0x4 + 0xe98e88]
FXCH
FCOMP dword ptr [0x004ad8e4]
FADD dword ptr [EBP*0x4 + 0xe98e80]
MOV dword ptr [ESP + 0x28],EDX
FMUL dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0x10]
JZ 0x0046c3c9
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ad8e4]
MOV dword ptr [ESP + 0x20],EDI
FNSTSW AX
TEST AH,0x1
JNZ 0x0046c3cd
MOV dword ptr [ESP + 0x20],EBX
MOV EDI,dword ptr [EBP*0x4 + 0xe98e90]
MOV EBX,ECX
AND EBX,0x4
AND EDI,0x8
TEST CL,0x80
JZ 0x0046c42c
FLD dword ptr [ESI + 0x2f4]
FSUBR qword ptr [0x00e22a38]
FCOMP qword ptr [0x004ad8d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c401
MOV byte ptr [ESI + 0x2f9],0x0
MOV CL,byte ptr [ESI + 0x2f9]
FLD qword ptr [0x00e22a38]
INC CL
FSTP dword ptr [ESI + 0x2f4]
MOV AL,CL
MOV byte ptr [ESI + 0x2f9],CL
CMP AL,0x1
JLE 0x0046c42c
MOV ECX,0x1
MOV dword ptr [ESP + 0x34],ECX
JMP 0x0046c431
MOV ECX,0x1
TEST byte ptr [EBP*0x4 + 0xe98ec0],0x80
JZ 0x0046c447
FLD qword ptr [0x00e22a38]
FSTP dword ptr [ESI + 0x2f4]
TEST byte ptr [EBP*0x4 + 0xe98e90],0x80
JZ 0x0046c46e
FLD dword ptr [ESI + 0x2f4]
FSUBR qword ptr [0x00e22a38]
FCOMP qword ptr [0x004ad778]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c46e
MOV dword ptr [ESP + 0x2c],ECX
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c492
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad8e0]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c492
MOV dword ptr [ESP + 0x24],ECX
JMP 0x0046c4a4
MOV dword ptr [ESP + 0x24],0x0
JMP 0x0046c4a4
MOV EDI,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESI + 0xd4],0x0
MOV ECX,dword ptr [0x004c7084]
TEST ECX,ECX
JLE 0x0046c528
CMP ECX,0x5
JNZ 0x0046c4f3
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7dc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c4f3
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e0]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c4f3
MOV dword ptr [ESI + 0xd4],0x1
MOV ECX,dword ptr [0x004c7084]
CMP ECX,0x6
JNZ 0x0046c528
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c528
FLD dword ptr [ESI + 0xe0]
FCOMP dword ptr [0x004ad7e8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c528
MOV dword ptr [ESI + 0xd4],0x1
PUSH ESI
CALL 0x0046a9c0
ADD ESP,0x4
MOV dword ptr [ESP + 0x3c],EAX
TEST EAX,EAX
JZ 0x0046c55a
XOR EAX,EAX
MOV dword ptr [ESP + 0x3c],0x1
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xff7fffff
MOV dword ptr [ESI + 0x60],EAX
MOV EAX,dword ptr [ESI + 0x60]
TEST AL,0x10
JZ 0x0046c633
TEST AH,0x2
JNZ 0x0046c633
TEST dword ptr [ESI + 0x64],0x2000000
JNZ 0x0046c633
PUSH ESI
CALL 0x0046a9f0
MOV AL,byte ptr [ESP + 0x40]
ADD ESP,0x4
TEST AL,0x1
JZ 0x0046c594
FSUB dword ptr [0x004ad8e8]
JMP 0x0046c59e
TEST AL,0x2
JZ 0x0046c59e
FSUB dword ptr [0x004ad8ec]
FMUL dword ptr [0x004ad8f0]
FST dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JNZ 0x0046c60d
FLD dword ptr [ESP + 0x74]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046c5cd
MOV EAX,0x1
JMP 0x0046c5cf
XOR EAX,EAX
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ad8f4]
LEA EAX,[EAX + EAX*0x4]
PUSH 0x0
PUSH -0x1
FSUBR dword ptr [0x004ad8f8]
LEA EDX,[EAX + EAX*0x8]
LEA EAX,[EDX*0x4 + 0x5a]
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH 0x1
CALL 0x00409ee0
ADD ESP,0x14
MOV dword ptr [0x004d78a0],0x1
JMP 0x0046c617
PUSH 0x1
CALL 0x0040a0b0
ADD ESP,0x4
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ad8e4]
MOV ECX,dword ptr [ESP + 0x74]
MOV dword ptr [0x0050cae4],ECX
FSUBR dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x14]
MOV EAX,[0x0050c048]
TEST AH,0x1
JZ 0x0046c694
MOV EAX,[0x0050c040]
TEST EAX,EAX
JZ 0x0046c677
MOV EAX,dword ptr [ESP + 0x44]
TEST EAX,EAX
JNZ 0x0046c656
MOV ECX,dword ptr [ESP + 0x48]
TEST ECX,ECX
JZ 0x0046c677
NEG EAX
SBB EAX,EAX
LEA EDX,[ESP + 0x50]
AND AL,0xfe
PUSH EDX
INC EAX
PUSH ESI
MOV dword ptr [ESP + 0x58],0x536e6170
MOV dword ptr [ESP + 0x5c],EAX
CALL 0x00450c00
ADD ESP,0x8
MOV EAX,[0x0050c048]
TEST AH,0x1
JZ 0x0046c694
MOV EAX,[0x0050c040]
TEST EAX,EAX
JZ 0x0046c694
PUSH EBP
PUSH ESI
CALL 0x0046a990
ADD ESP,0x8
MOV EAX,dword ptr [ESP + 0x34]
TEST EAX,EAX
JNZ 0x0046c6a9
MOV EAX,[0x004d79e0]
TEST EAX,EAX
JZ 0x0046c7b9
MOV dword ptr [0x004d79e0],0x0
MOV EAX,dword ptr [ESI + 0x60]
MOV ECX,EAX
AND ECX,0xf
CMP CL,0x2
JNZ 0x0046c7b9
TEST AH,0x58
JNZ 0x0046c7b9
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x40
JNZ 0x0046c7b9
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x18]
CMP dword ptr [EAX],0x2
JNZ 0x0046c701
PUSH ESI
CALL 0x0046ba30
MOV ECX,dword ptr [ESI + 0x1e70]
ADD ESP,0x4
MOV EDX,dword ptr [ECX]
PUSH EDX
CALL 0x0046bb30
ADD ESP,0x4
CALL 0x004816b0
MOV dword ptr [ESP + 0x74],EAX
FILD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ad768]
FCOMP qword ptr [0x004ad778]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c775
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [ECX]
CMP EAX,0xe
JNZ 0x0046c742
LEA EDX,[ESI + 0x50]
PUSH EDX
PUSH 0x14
PUSH 0x13
PUSH 0x12
PUSH 0x12
PUSH 0x3
PUSH EAX
JMP 0x0046c78f
LEA ECX,[ESI + 0x50]
PUSH ECX
PUSH 0x14
PUSH 0x13
PUSH 0x12
PUSH 0x11
PUSH 0x3
PUSH EAX
PUSH 0x1
CALL 0x00427590
MOV EDX,dword ptr [ESI + 0x1e70]
ADD ESP,0x20
PUSH EAX
MOV EAX,dword ptr [EDX + 0x18]
MOV ECX,dword ptr [EAX]
PUSH ECX
PUSH 0x1
PUSH 0x7461756e
PUSH 0x0
PUSH 0x1
JMP 0x0046c7b1
MOV EAX,dword ptr [ESI + 0x1e70]
LEA EDX,[ESI + 0x50]
PUSH EDX
PUSH 0x19
MOV ECX,dword ptr [EAX + 0x18]
PUSH 0x18
PUSH 0x17
PUSH 0x16
MOV EDX,dword ptr [ECX]
PUSH 0x15
PUSH EDX
PUSH 0x1
CALL 0x00427590
ADD ESP,0x20
PUSH EAX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x18]
MOV EDX,dword ptr [ECX]
PUSH EDX
PUSH 0x1
PUSH 0x7461756e
PUSH 0x0
PUSH -0x1
CALL 0x0041df10
ADD ESP,0x18
MOV EAX,dword ptr [ESI + 0x60]
TEST EDI,EDI
JZ 0x0046c7c7
OR EAX,0x100000
JMP 0x0046c7cc
AND EAX,0xffefffff
MOV dword ptr [ESI + 0x60],EAX
MOV EAX,dword ptr [ESP + 0x2c]
TEST EAX,EAX
MOV EAX,dword ptr [ESI + 0x60]
JZ 0x0046c7df
OR AH,0x4
JMP 0x0046c7e2
AND AH,0xfb
MOV EDX,EAX
MOV dword ptr [ESI + 0x60],EAX
AND EDX,0x7fffffff
MOV EAX,EDX
MOV dword ptr [ESI + 0x60],EDX
TEST AL,0xf
JZ 0x0046c84c
TEST AH,0x40
JNZ 0x0046c84c
TEST EBX,EBX
JZ 0x0046c81f
LEA EAX,[ESP + 0x50]
MOV dword ptr [ESP + 0x50],0x43427574
PUSH EAX
PUSH 0x634d616e
MOV dword ptr [ESP + 0x5c],ESI
CALL 0x00450c50
ADD ESP,0x8
JMP 0x0046c84c
MOV EAX,[0x00ec83d0]
TEST EAX,EAX
JZ 0x0046c84c
LEA ECX,[ESP + 0x50]
MOV dword ptr [ESP + 0x50],EAX
PUSH ECX
PUSH 0x634d616e
MOV dword ptr [ESP + 0x5c],ESI
CALL 0x00450c50
ADD ESP,0x8
MOV dword ptr [0x00ec83d0],0x0
PUSH ESI
CALL 0x0046aa30
ADD ESP,0x4
PUSH ESI
CALL 0x0046ab10
MOV EAX,dword ptr [ESI + 0x60]
ADD ESP,0x4
TEST EAX,0x2000000
JZ 0x0046c8dc
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad8fc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c898
FLD dword ptr [ESP + 0x10]
FCHS
FCOMP dword ptr [0x004ad8fc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c898
MOV dword ptr [ESI + 0x224],0x0
JMP 0x0046c8d4
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad750]
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad900]
FNSTSW AX
FLD ST0
FMULP
TEST AH,0x1
JZ 0x0046c8b9
FCHS
FMUL dword ptr [0x004ad8d8]
FLD dword ptr [ESI + 0x74]
FMUL ST1
FCHS
FMUL dword ptr [0x004ad774]
FSTP dword ptr [ESI + 0x224]
FSTP ST0
MOV dword ptr [ESP + 0x10],0x0
FLD dword ptr [0x00ec884c]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JNZ 0x0046c915
FLD dword ptr [0x00ec88ac]
FCOMP qword ptr [0x004ad908]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c915
FLD dword ptr [0x00ec88ac]
FCOMP qword ptr [0x004ad830]
FNSTSW AX
TEST AH,0x41
JZ 0x0046c961
FLD dword ptr [0x00ec8830]
FCOMP qword ptr [0x004ad8c8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c97a
FLD dword ptr [0x00ec8850]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JNZ 0x0046c97a
FLD dword ptr [0x00ec88b0]
FCOMP qword ptr [0x004ad908]
FNSTSW AX
TEST AH,0x1
JZ 0x0046c97a
FLD dword ptr [0x00ec88b0]
FCOMP qword ptr [0x004ad830]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046c97a
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x10
JNZ 0x0046c97a
OR AH,0x10
TEST AH,0x8
MOV dword ptr [ESI + 0x64],EAX
JZ 0x0046c97a
OR AH,0x20
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x20
JZ 0x0046ca0e
PUSH 0x80000
PUSH 0x0
CALL 0x00427670
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0046c9cc
MOV EAX,dword ptr [ESI + 0x1e70]
LEA EDX,[ESI + 0x50]
PUSH EDX
PUSH 0x2
MOV ECX,dword ptr [EAX + 0x18]
PUSH 0x2
PUSH 0x2
PUSH 0x2
MOV EDX,dword ptr [ECX]
PUSH 0x2
PUSH EDX
PUSH 0x1
CALL 0x00427590
ADD ESP,0x20
PUSH 0x80000
PUSH 0x0
CALL 0x00427690
ADD ESP,0x8
FLD dword ptr [0x00ec884c]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JZ 0x0046c9f2
FLD dword ptr [0x00ec8830]
FCOMP qword ptr [0x004ad8c8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ca05
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004ad910]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ca0e
MOV EAX,dword ptr [ESI + 0x64]
AND AH,0xdf
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [ESI + 0x60]
MOV ECX,EAX
AND ECX,0xf
CMP CL,0x2
JNZ 0x0046ce07
TEST AH,0x40
JNZ 0x0046ce07
MOV ECX,dword ptr [ESP + 0x20]
TEST ECX,ECX
JZ 0x0046ca53
FLD dword ptr [ESI + 0x1a0]
FCOMP qword ptr [0x004ad918]
MOV ECX,EAX
OR CH,0x2
MOV dword ptr [ESI + 0x60],ECX
FNSTSW AX
TEST AH,0x1
JZ 0x0046ca59
AND ECX,0xffffffef
MOV dword ptr [ESI + 0x60],ECX
JMP 0x0046ca59
AND AH,0xfd
MOV dword ptr [ESI + 0x60],EAX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EDI,0x3f800000
TEST byte ptr [EDX + 0x8],0x8
JZ 0x0046cab8
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ad80c]
FMUL dword ptr [0x004ad774]
FMUL dword ptr [0x004ad920]
FCOM dword ptr [0x004ad7f4]
FSTP dword ptr [ESI + 0x18c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ca99
MOV dword ptr [ESI + 0x18c],EDI
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004ad80c]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cb20
MOV dword ptr [ESI + 0x18c],0xbf800000
JMP 0x0046cb20
MOV EAX,dword ptr [ESP + 0x28]
TEST EAX,EAX
JZ 0x0046cada
MOV EAX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESI + 0x18c],EDI
TEST EAX,EAX
JZ 0x0046cb20
MOV dword ptr [ESI + 0x18c],0x3f000000
JMP 0x0046cb20
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004ad928]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cb10
FLD dword ptr [ESI + 0x1a0]
FCOMP qword ptr [0x004ad930]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cb10
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad938]
FSTP dword ptr [ESI + 0x18c]
JMP 0x0046cb20
MOV EAX,dword ptr [ESI + 0x60]
MOV dword ptr [ESI + 0x18c],0x3dcccccd
TEST AH,0x2
FLD dword ptr [ESI + 0x264]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x41
JZ 0x0046cb4e
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004ad800]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cb4e
MOV EAX,dword ptr [ESI + 0x60]
OR AL,0x10
MOV dword ptr [ESI + 0x60],EAX
MOV EAX,dword ptr [ESI + 0x64]
MOV ECX,0x1
TEST AH,0x2
JNZ 0x0046cb5f
MOV ECX,dword ptr [ESP + 0x24]
TEST ECX,ECX
JZ 0x0046cb67
OR AL,0x8
JMP 0x0046cb69
AND AL,0xf7
MOV EBX,dword ptr [ESP + 0x28]
MOV dword ptr [ESI + 0x64],EAX
TEST EBX,EBX
JNZ 0x0046cb8c
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JZ 0x0046cb8c
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x4
JMP 0x0046cb91
MOV EAX,dword ptr [ESI + 0x64]
AND AL,0xfb
TEST ECX,ECX
MOV dword ptr [ESI + 0x64],EAX
JZ 0x0046cbdc
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004ad93c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cbdc
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad928]
FLD dword ptr [ESI + 0x1e8]
FXCH
FSUBP
FCOM dword ptr [0x004ad7f4]
FSTP dword ptr [ESI + 0x1e8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cc0f
MOV dword ptr [ESI + 0x1e8],EDI
JMP 0x0046cc0f
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ad778]
FLD dword ptr [ESI + 0x1e8]
FXCH
FSUBP
FCOM dword ptr [0x004ad750]
FSTP dword ptr [ESI + 0x1e8]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cc0f
MOV dword ptr [ESI + 0x1e8],0x0
MOV EAX,dword ptr [ESP + 0x40]
TEST EAX,EAX
JZ 0x0046cc2b
MOV EAX,dword ptr [ESP + 0x4c]
TEST EAX,EAX
JZ 0x0046cc2b
CALL 0x004816b0
OR dword ptr [ESI + 0x60],0x800000
MOV ECX,dword ptr [ESI + 0x60]
TEST ECX,0x800000
JZ 0x0046cc54
TEST EBX,EBX
JNZ 0x0046cc54
FLD dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JZ 0x0046cc54
AND ECX,0xff7fffff
MOV dword ptr [ESI + 0x60],ECX
FLD qword ptr [0x00e22a40]
FSUBR dword ptr [ESI + 0x1f14]
MOV EBP,dword ptr [ESP + 0x1c]
MOV EBX,dword ptr [ESP + 0x18]
TEST EBP,EBP
FSTP dword ptr [ESI + 0x1f14]
JNZ 0x0046cc76
TEST EBX,EBX
JZ 0x0046cc92
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x4
JZ 0x0046cc92
PUSH 0x1
PUSH EDI
PUSH 0x3f000000
PUSH 0x7
PUSH 0x4b
CALL 0x00426c80
ADD ESP,0x14
TEST EBP,EBP
JZ 0x0046cca1
TEST EBX,EBX
JNZ 0x0046cca5
PUSH 0xbf800000
JMP 0x0046ccae
TEST EBX,EBX
JZ 0x0046ccac
TEST EBP,EBP
JNZ 0x0046ccac
PUSH EDI
JMP 0x0046ccae
PUSH 0x0
PUSH ESI
CALL 0x0046b5a0
FLD dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004ad8fc]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x0046cce7
FLD dword ptr [ESP + 0x14]
FCHS
FCOMP dword ptr [0x004ad8fc]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cce7
MOV dword ptr [ESI + 0x1f0],0x0
JMP 0x0046cd1d
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ad750]
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ad900]
FNSTSW AX
FLD ST0
FMULP
TEST AH,0x1
JZ 0x0046cd08
FCHS
FMUL dword ptr [0x004ad8d8]
FLD dword ptr [ESI + 0x74]
FMUL ST1
FCHS
FSTP dword ptr [ESI + 0x1f0]
FSTP ST0
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad76c]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x2fc],EAX
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cd7d
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad938]
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004ad774]
FSUBR dword ptr [0x004ad7f4]
FNSTSW AX
FMUL dword ptr [ESI + 0x1f0]
TEST AH,0x41
FSTP dword ptr [ESI + 0x1f0]
JNZ 0x0046cd7d
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad940]
FSUBR dword ptr [ESI + 0x18c]
FSTP dword ptr [ESI + 0x18c]
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad770]
FNSTSW AX
TEST AH,0x1
JZ 0x0046cddb
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad938]
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x2
FSUBR dword ptr [0x004ad7f4]
FMUL dword ptr [ESI + 0x1f0]
FSTP dword ptr [ESI + 0x1f0]
JNZ 0x0046cddb
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004ad774]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cddb
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad940]
FSUBR dword ptr [ESI + 0x18c]
FSTP dword ptr [ESI + 0x18c]
TEST dword ptr [ESI + 0x60],0x400000
JZ 0x0046ce01
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004ad944]
FNSTSW AX
TEST AH,0x1
JZ 0x0046ce01
MOV dword ptr [ESI + 0x18c],0x3f99999a
MOV dword ptr [ESI + 0x22c],EDI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x60
RET
