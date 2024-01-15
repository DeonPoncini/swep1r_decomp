; FUN_00429540
SUB ESP,0xc4
MOV EDX,0x20
PUSH EBX
PUSH EBP
PUSH ESI
XOR EBX,EBX
PUSH EDI
XOR EAX,EAX
MOV ECX,dword ptr [0x004b91c4]
ADD EAX,0x7c
MOV EDI,dword ptr [EAX + ECX*0x1 + -0x7c]
AND EDI,0xfffffffd
DEC EDX
MOV dword ptr [EAX + ECX*0x1 + -0x7c],EDI
JNZ 0x00429553
XOR EDI,EDI
CALL 0x004318c0
TEST EAX,EAX
JLE 0x004295c7
XOR ESI,ESI
PUSH ESI
CALL 0x004318d0
MOV EBX,EAX
ADD ESP,0x4
TEST EBX,EBX
JZ 0x004295ba
PUSH EBX
CALL 0x004318b0
ADD ESP,0x4
MOV ESI,EAX
PUSH EBX
CALL 0x00431770
ADD ESP,0x4
TEST AL,0x1
JZ 0x004295ba
TEST ESI,ESI
JL 0x004295ba
CMP ESI,0x20
JGE 0x004295ba
MOV ECX,dword ptr [0x004b91c4]
MOV EAX,ESI
SHL EAX,0x5
SUB EAX,ESI
LEA EAX,[ECX + EAX*0x4]
OR dword ptr [EAX],0x2
INC EDI
MOVSX ESI,DI
CALL 0x004318c0
CMP ESI,EAX
JL 0x00429577
XOR ESI,ESI
MOV dword ptr [ESP + 0x28],0x20
MOV dword ptr [ESP + 0x2c],ESI
MOV EDX,dword ptr [0x004b91c4]
ADD ESI,EDX
CMP word ptr [ESI + 0x4],0x0
JZ 0x00429a90
TEST byte ptr [ESI],0x3
JZ 0x00429a90
MOV AX,word ptr [ESI + 0x6]
TEST AX,AX
JNZ 0x00429660
MOV EAX,dword ptr [ESI + 0x8]
LEA EDI,[ESI + 0x14]
MOV ECX,dword ptr [EAX]
MOV dword ptr [EDI],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x18],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x1c],ECX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ESI + 0x20],EDX
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESI + 0x24],ECX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [ESI + 0x28],EDX
MOV ECX,dword ptr [EAX + 0x18]
MOV dword ptr [ESI + 0x2c],ECX
MOV EDX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESI + 0x30],EDX
MOV ECX,dword ptr [EAX + 0x20]
MOV dword ptr [ESI + 0x34],ECX
MOV EDX,dword ptr [EAX + 0x24]
MOV dword ptr [ESI + 0x38],EDX
MOV ECX,dword ptr [EAX + 0x28]
MOV dword ptr [ESI + 0x3c],ECX
MOV EDX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESI + 0x40],EDX
MOV ECX,dword ptr [EAX + 0x30]
MOV dword ptr [ESI + 0x44],ECX
MOV EDX,dword ptr [EAX + 0x34]
MOV dword ptr [ESI + 0x48],EDX
MOV ECX,dword ptr [EAX + 0x38]
MOV dword ptr [ESI + 0x4c],ECX
MOV EDX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESI + 0x50],EDX
JMP 0x00429689
CMP AX,0x1
LEA EDI,[ESI + 0x14]
JNZ 0x00429678
MOV EAX,dword ptr [ESI + 0x8]
PUSH EAX
PUSH EDI
CALL 0x00431060
ADD ESP,0x8
JMP 0x00429689
MOV ECX,dword ptr [ESI + 0x8]
PUSH EDI
MOVSX EDX,AX
PUSH ECX
PUSH EDX
CALL 0x00428c40
ADD ESP,0xc
FLD dword ptr [ESI + 0x54]
FST dword ptr [ESP + 0x1c]
FCOMP dword ptr [0x004ac4f0]
MOV EAX,dword ptr [ESI + 0x58]
MOV dword ptr [ESP + 0x20],EAX
MOV ECX,dword ptr [ESI + 0x5c]
MOV dword ptr [ESP + 0x24],ECX
FNSTSW AX
TEST AH,0x40
JZ 0x004296cd
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004ac4f0]
FNSTSW AX
TEST AH,0x40
JZ 0x004296cd
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [0x004ac4f0]
FNSTSW AX
TEST AH,0x40
JNZ 0x004296fe
LEA EDX,[ESP + 0x1c]
PUSH EDI
LEA EAX,[ESP + 0x20]
PUSH EDX
PUSH EAX
CALL 0x00430980
FLD dword ptr [ESP + 0x28]
FADD dword ptr [ESI + 0x44]
ADD ESP,0xc
FSTP dword ptr [ESI + 0x44]
FLD dword ptr [ESP + 0x20]
FADD dword ptr [ESI + 0x48]
FSTP dword ptr [ESI + 0x48]
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESI + 0x4c]
FSTP dword ptr [ESI + 0x4c]
FLD dword ptr [ESI + 0x60]
MOV ECX,dword ptr [ESI + 0x64]
MOV EDX,dword ptr [ESI + 0x68]
FST dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ac4f0]
MOV dword ptr [ESP + 0x34],ECX
MOV dword ptr [ESP + 0x38],EDX
FNSTSW AX
TEST AH,0x40
JZ 0x00429742
FLD dword ptr [ESP + 0x34]
FCOMP dword ptr [0x004ac4f0]
FNSTSW AX
TEST AH,0x40
JZ 0x00429742
FLD dword ptr [ESP + 0x38]
FCOMP dword ptr [0x004ac4f0]
FNSTSW AX
TEST AH,0x40
JNZ 0x0042976c
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESP + 0x30]
PUSH EAX
PUSH ECX
LEA EAX,[ESP + 0x44]
PUSH EDX
PUSH EAX
CALL 0x00431020
ADD ESP,0x10
LEA ECX,[ESP + 0x3c]
PUSH ECX
PUSH EDI
CALL 0x0042ff80
ADD ESP,0x8
MOV AX,word ptr [ESI + 0x4]
CMP AX,0x2
JZ 0x00429786
CMP AX,0x3
JZ 0x00429786
CMP AX,0x4
JNZ 0x00429a90
LEA EDX,[ESP + 0xbc]
PUSH EDX
PUSH EDI
CALL 0x00430b80
MOV AX,word ptr [ESI + 0xc]
ADD ESP,0x8
CMP AX,0x1
JNZ 0x004297c8
MOV EAX,dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x6c]
FADD dword ptr [EAX]
FSTP dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x70]
FADD dword ptr [ECX + 0x4]
FSTP dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x74]
FADD dword ptr [EDX + 0x8]
JMP 0x00429995
TEST AX,AX
JNZ 0x0042989f
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x7c],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ESP + 0x80],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x84],EDX
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x88],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV EAX,dword ptr [EDX + 0x10]
MOV dword ptr [ESP + 0x8c],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x90],EDX
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x94],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV EAX,dword ptr [EDX + 0x1c]
MOV dword ptr [ESP + 0x98],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ECX + 0x20]
MOV dword ptr [ESP + 0x9c],EDX
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX + 0x24]
MOV dword ptr [ESP + 0xa0],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV EAX,dword ptr [EDX + 0x28]
MOV dword ptr [ESP + 0xa4],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ECX + 0x2c]
MOV dword ptr [ESP + 0xa8],EDX
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX + 0x30]
MOV dword ptr [ESP + 0xac],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV EAX,dword ptr [EDX + 0x34]
MOV dword ptr [ESP + 0xb0],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ECX + 0x38]
MOV dword ptr [ESP + 0xb4],EDX
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESP + 0xb8],ECX
JMP 0x004298b4
MOV ECX,dword ptr [ESI + 0x10]
LEA EDX,[ESP + 0x7c]
PUSH EDX
PUSH ECX
MOVSX EDX,AX
PUSH EDX
CALL 0x00428c40
ADD ESP,0xc
FLD dword ptr [ESI + 0x6c]
FADD dword ptr [ESP + 0xac]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x70]
FADD dword ptr [ESP + 0xb0]
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESI + 0x74]
FADD dword ptr [ESP + 0xb4]
FSTP dword ptr [ESP + 0x18]
CMP word ptr [ESI + 0x4],0x4
JNZ 0x00429999
FLD dword ptr [ESP + 0x94]
FCOMP dword ptr [0x004ac4f0]
FLD dword ptr [ESP + 0x94]
FNSTSW AX
TEST AH,0x1
JZ 0x00429906
FCHS
FMUL qword ptr [0x004ac510]
FLD dword ptr [ESP + 0x94]
FXCH
FSUB qword ptr [0x004ac518]
FXCH
FCOMP dword ptr [0x004ac4f0]
FMUL dword ptr [ESP + 0x8c]
FNSTSW AX
FADD dword ptr [ESP + 0x10]
TEST AH,0x1
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x94]
JZ 0x00429942
FCHS
FMUL qword ptr [0x004ac510]
FLD dword ptr [ESP + 0x94]
FXCH
FSUB qword ptr [0x004ac518]
FXCH
FCOMP dword ptr [0x004ac4f0]
FMUL dword ptr [ESP + 0x90]
FNSTSW AX
FADD dword ptr [ESP + 0x14]
TEST AH,0x1
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x94]
JZ 0x0042997e
FCHS
FMUL qword ptr [0x004ac510]
FSUB qword ptr [0x004ac518]
FMUL dword ptr [ESP + 0x94]
FADD dword ptr [ESP + 0x18]
FSTP dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0xd0]
LEA ECX,[ESP + 0xbc]
PUSH EAX
PUSH ECX
LEA EDX,[ESP + 0x18]
LEA EBP,[ESI + 0x44]
PUSH EDI
PUSH EDX
PUSH EBP
CALL 0x00481220
ADD ESP,0x14
CMP word ptr [ESI + 0x4],0x3
JNZ 0x00429a90
MOV AX,word ptr [ESI + 0x6]
TEST AX,AX
JNZ 0x00429a63
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [EDI]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x18]
MOV dword ptr [EDX + 0x4],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x1c]
MOV dword ptr [ECX + 0x8],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESI + 0x20]
MOV dword ptr [EAX + 0xc],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x24]
MOV dword ptr [EDX + 0x10],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x28]
MOV dword ptr [ECX + 0x14],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESI + 0x2c]
MOV dword ptr [EAX + 0x18],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x30]
MOV dword ptr [EDX + 0x1c],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x34]
MOV dword ptr [ECX + 0x20],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESI + 0x38]
MOV dword ptr [EAX + 0x24],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x3c]
MOV dword ptr [EDX + 0x28],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x40]
MOV dword ptr [ECX + 0x2c],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [EBP]
MOV dword ptr [EAX + 0x30],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESI + 0x48]
MOV dword ptr [EDX + 0x34],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x4c]
MOV dword ptr [ECX + 0x38],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESI + 0x50]
MOV dword ptr [EAX + 0x3c],ECX
JMP 0x00429a90
CMP AX,0x1
JNZ 0x00429a90
MOV EDX,dword ptr [ESI + 0x8]
MOV EAX,dword ptr [ESP + 0xc8]
MOV dword ptr [EDX + 0xc],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESP + 0xcc]
MOV dword ptr [ECX + 0x10],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESP + 0xd0]
MOV dword ptr [EAX + 0x14],ECX
MOV ESI,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x28]
ADD ESI,0x7c
DEC EAX
MOV dword ptr [ESP + 0x2c],ESI
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x004295d5
CALL 0x004318c0
TEST EAX,EAX
JNZ 0x00429ba5
MOV EAX,[0x0050c038]
MOV ESI,dword ptr [0x004c7cdc]
CMP EAX,-0x1
JNZ 0x00429ad5
PUSH ESI
CALL 0x00428cd0
ADD ESP,0x4
JMP 0x00429b7f
MOV ECX,dword ptr [0x0050c03c]
TEST ECX,ECX
JNZ 0x00429ae9
MOV dword ptr [0x0050c03c],0x1
MOV EDX,EAX
SHL EDX,0x5
SUB EDX,EAX
MOV EAX,[0x004b91c4]
TEST ESI,ESI
MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
LEA EAX,[EAX + EDX*0x4]
MOV dword ptr [ESP + 0x3c],ECX
MOV EDX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x40],EDX
MOV ECX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x44],ECX
MOV EDX,dword ptr [EAX + 0x20]
MOV dword ptr [ESP + 0x48],EDX
MOV ECX,dword ptr [EAX + 0x24]
MOV dword ptr [ESP + 0x4c],ECX
MOV EDX,dword ptr [EAX + 0x28]
MOV dword ptr [ESP + 0x50],EDX
MOV ECX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0x54],ECX
MOV EDX,dword ptr [EAX + 0x30]
MOV dword ptr [ESP + 0x58],EDX
MOV ECX,dword ptr [EAX + 0x34]
MOV dword ptr [ESP + 0x5c],ECX
MOV EDX,dword ptr [EAX + 0x38]
MOV dword ptr [ESP + 0x60],EDX
MOV ECX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESP + 0x64],ECX
MOV EDX,dword ptr [EAX + 0x40]
MOV dword ptr [ESP + 0x68],EDX
MOV ECX,dword ptr [EAX + 0x44]
MOV dword ptr [ESP + 0x6c],ECX
MOV EDX,dword ptr [EAX + 0x48]
MOV dword ptr [ESP + 0x70],EDX
MOV ECX,dword ptr [EAX + 0x4c]
MOV dword ptr [ESP + 0x74],ECX
MOV EDX,dword ptr [EAX + 0x50]
MOV dword ptr [ESP + 0x78],EDX
JZ 0x00429cbd
LEA EAX,[ESP + 0x3c]
PUSH EAX
PUSH ESI
CALL 0x00431950
ADD ESP,0x8
TEST ESI,ESI
JZ 0x00429cbd
PUSH 0xe996cc
PUSH 0xe996c0
PUSH ESI
CALL 0x00431900
ADD ESP,0xc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc4
RET
XOR EDI,EDI
CALL 0x004318c0
TEST EAX,EAX
JLE 0x00429ca6
PUSH EDI
CALL 0x004318d0
MOV EBX,EAX
ADD ESP,0x4
TEST EBX,EBX
JZ 0x00429c98
PUSH EBX
CALL 0x004318b0
ADD ESP,0x4
MOV ESI,EAX
PUSH EBX
CALL 0x00431770
ADD ESP,0x4
TEST AL,0x1
JZ 0x00429c98
CMP ESI,-0x1
JNZ 0x00429bf6
PUSH EBX
CALL 0x00428cd0
ADD ESP,0x4
JMP 0x00429c98
MOV EAX,[0x0050c03c]
TEST EAX,EAX
JNZ 0x00429c09
MOV dword ptr [0x0050c03c],0x1
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,ESI
SHL ECX,0x5
SUB ECX,ESI
LEA EAX,[EDX + ECX*0x4]
MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
MOV dword ptr [ESP + 0x3c],ECX
MOV EDX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x40],EDX
MOV ECX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x44],ECX
MOV EDX,dword ptr [EAX + 0x20]
MOV dword ptr [ESP + 0x48],EDX
MOV ECX,dword ptr [EAX + 0x24]
MOV dword ptr [ESP + 0x4c],ECX
MOV EDX,dword ptr [EAX + 0x28]
MOV dword ptr [ESP + 0x50],EDX
MOV ECX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0x54],ECX
MOV EDX,dword ptr [EAX + 0x30]
MOV dword ptr [ESP + 0x58],EDX
MOV ECX,dword ptr [EAX + 0x34]
MOV dword ptr [ESP + 0x5c],ECX
MOV EDX,dword ptr [EAX + 0x38]
MOV dword ptr [ESP + 0x60],EDX
MOV ECX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESP + 0x64],ECX
MOV EDX,dword ptr [EAX + 0x40]
MOV dword ptr [ESP + 0x68],EDX
MOV ECX,dword ptr [EAX + 0x44]
MOV dword ptr [ESP + 0x6c],ECX
MOV EDX,dword ptr [EAX + 0x48]
MOV dword ptr [ESP + 0x70],EDX
MOV ECX,dword ptr [EAX + 0x4c]
MOV dword ptr [ESP + 0x74],ECX
MOV EDX,dword ptr [EAX + 0x50]
LEA EAX,[ESP + 0x3c]
MOV dword ptr [ESP + 0x78],EDX
PUSH EAX
PUSH EBX
CALL 0x00431950
ADD ESP,0x8
INC EDI
CALL 0x004318c0
CMP EDI,EAX
JL 0x00429bb4
TEST EBX,EBX
JZ 0x00429cbd
PUSH 0xe996cc
PUSH 0xe996c0
PUSH EBX
CALL 0x00431900
ADD ESP,0xc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc4
RET
