; FUN_00428cd0
SUB ESP,0xd8
LEA EAX,[ESP + 0x18]
PUSH ESI
PUSH EAX
MOV EDX,dword ptr [0x004b91c4]
MOVSX EAX,word ptr [0x00e9b9c4]
MOV ECX,EAX
SHL ECX,0x5
SUB ECX,EAX
LEA EAX,[EDX + ECX*0x4 + 0x14]
PUSH EAX
CALL 0x00430b80
MOVSX EAX,word ptr [0x00e9b9c6]
MOV EDX,EAX
ADD ESP,0x8
SHL EDX,0x5
SUB EDX,EAX
MOV EAX,[0x004b91c4]
LEA ECX,[ESP + 0x4]
PUSH ECX
LEA ECX,[EAX + EDX*0x4 + 0x14]
PUSH ECX
CALL 0x00430b80
FLD dword ptr [0x00e9b9e0]
FDIV dword ptr [0x00e9b9e4]
ADD ESP,0x8
LEA EDX,[ESP + 0x34]
PUSH EDX
PUSH 0xe9b9e8
FSTP dword ptr [ESP + 0x54]
CALL 0x00430b80
FLD dword ptr [ESP + 0xc]
FSUB dword ptr [ESP + 0x24]
MOV ESI,dword ptr [ESP + 0x54]
ADD ESP,0x8
LEA EAX,[ESP + 0x34]
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH ESI
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [ESP + 0x28]
LEA EDX,[ESP + 0x3c]
PUSH ECX
PUSH EDX
FSTP dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [ESP + 0x34]
FSTP dword ptr [ESP + 0x4c]
CALL 0x0042fa80
MOV EAX,[0x00e9ba44]
ADD ESP,0x10
TEST EAX,EAX
JNZ 0x00428fdd
FLD dword ptr [ESP + 0x4c]
FCOMP dword ptr [0x004ac4f0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428eba
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [0x00e9b9c8]
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x00e9b9d0]
FXCH
FST dword ptr [ESP + 0x50]
FXCH
FXCH
FCOMP dword ptr [0x004ac4fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428ddf
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x50]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428dfe
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [0x004ac508]
FSTP dword ptr [ESP + 0x28]
FCOM dword ptr [0x004ac4fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428e19
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x30]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428e34
FLD dword ptr [ESP + 0x30]
FSUB dword ptr [0x004ac508]
FSTP dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x00e9b9d4]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x00e9b9dc]
FLD ST1
FCOMP dword ptr [0x004ac4fc]
FSTP dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428e69
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428e84
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ac508]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x58]
FCOMP dword ptr [0x004ac4fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428ea3
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x58]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428f44
JMP 0x00428f36
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x30]
FXCH
FST dword ptr [ESP + 0x50]
FXCH
FXCH
FCOMP dword ptr [0x004ac4fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428eef
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x50]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428f0e
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ac508]
FSTP dword ptr [ESP + 0x10]
FCOM dword ptr [0x004ac4fc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00428f29
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ac500]
FSTP dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ac504]
FNSTSW AX
TEST AH,0x1
JZ 0x00428f44
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [0x004ac508]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FXCH ST2
FSUB dword ptr [ESP + 0x28]
FXCH
FSUB dword ptr [ESP + 0x2c]
FXCH ST2
FSUB dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0x2c]
FSTP dword ptr [0x00e9b9d8]
LEA EAX,[ESP + 0x40]
MOV dword ptr [0x00e9b9c8],ECX
FSTP dword ptr [0x00e9b9dc]
MOV ECX,dword ptr [ESP + 0x30]
PUSH EAX
FXCH
FSTP dword ptr [ESP + 0x44]
FXCH
FSTP dword ptr [ESP + 0x48]
MOV dword ptr [0x00e9b9d0],ECX
LEA EAX,[ESP + 0x2c]
FSTP dword ptr [ESP + 0x4c]
MOV dword ptr [0x00e9b9cc],EDX
MOV EDX,dword ptr [ESP + 0x14]
PUSH ESI
LEA ECX,[ESP + 0x48]
PUSH EAX
PUSH ECX
MOV dword ptr [0x00e9b9d4],EDX
CALL 0x0042fa80
ADD ESP,0x10
LEA EDX,[ESP + 0x34]
PUSH EDX
PUSH 0xe9b9e8
CALL 0x00431060
ADD ESP,0x8
JMP 0x004290e5
MOV CX,word ptr [0x00e9ba40]
CMP CX,0x1
JNZ 0x00429004
MOV ECX,dword ptr [ESP + 0x48]
LEA EDX,[ESP + 0x34]
PUSH ECX
PUSH EDX
PUSH 0xe9b9e8
PUSH EAX
LEA EAX,[ESP + 0x44]
PUSH EAX
JMP 0x004290dd
TEST CX,CX
JNZ 0x004290af
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x5c],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x60],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x64],ECX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x68],EDX
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x6c],ECX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x70],EDX
MOV ECX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x74],ECX
MOV EDX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x78],EDX
MOV ECX,dword ptr [EAX + 0x20]
MOV dword ptr [ESP + 0x7c],ECX
MOV EDX,dword ptr [EAX + 0x24]
MOV dword ptr [ESP + 0x80],EDX
MOV ECX,dword ptr [EAX + 0x28]
MOV dword ptr [ESP + 0x84],ECX
MOV EDX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0x88],EDX
MOV ECX,dword ptr [EAX + 0x30]
MOV dword ptr [ESP + 0x8c],ECX
MOV EDX,dword ptr [EAX + 0x34]
MOV dword ptr [ESP + 0x90],EDX
MOV ECX,dword ptr [EAX + 0x38]
MOV dword ptr [ESP + 0x94],ECX
MOV EDX,dword ptr [EAX + 0x3c]
MOV EAX,dword ptr [ESP + 0x48]
LEA ECX,[ESP + 0x34]
MOV dword ptr [ESP + 0x98],EDX
PUSH EAX
PUSH ECX
LEA EDX,[ESP + 0x94]
PUSH 0xe9b9e8
LEA EAX,[ESP + 0x40]
PUSH EDX
PUSH EAX
JMP 0x004290dd
LEA EDX,[ESP + 0x5c]
PUSH EDX
PUSH EAX
MOVSX EAX,CX
PUSH EAX
CALL 0x00428c40
MOV ECX,dword ptr [ESP + 0x54]
ADD ESP,0xc
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x8c]
PUSH ECX
PUSH EDX
PUSH 0xe9b9e8
LEA ECX,[ESP + 0x40]
PUSH EAX
PUSH ECX
CALL 0x00481220
ADD ESP,0x14
MOV EAX,[0x00e9b9ec]
MOV ECX,dword ptr [0x00e9b9f0]
MOV EDX,dword ptr [0x00e9b9e8]
MOV dword ptr [ESP + 0xa0],EAX
MOV EAX,[0x00e9b9f8]
MOV dword ptr [ESP + 0xa4],ECX
MOV ECX,dword ptr [0x00e9b9fc]
MOV dword ptr [ESP + 0x9c],EDX
MOV EDX,dword ptr [0x00e9b9f4]
MOV dword ptr [ESP + 0xac],EAX
MOV EAX,[0x00e9ba04]
MOV dword ptr [ESP + 0xb0],ECX
MOV ECX,dword ptr [0x00e9ba08]
MOV dword ptr [ESP + 0xa8],EDX
MOV EDX,dword ptr [0x00e9ba00]
MOV dword ptr [ESP + 0xb8],EAX
MOV EAX,[0x00e9ba10]
MOV dword ptr [ESP + 0xbc],ECX
MOV ECX,dword ptr [0x00e9ba14]
MOV dword ptr [ESP + 0xb4],EDX
MOV EDX,dword ptr [0x00e9ba0c]
MOV dword ptr [ESP + 0xc4],EAX
MOV EAX,[0x00e9ba1c]
MOV dword ptr [ESP + 0xc8],ECX
MOV ECX,dword ptr [0x00e9ba20]
MOV dword ptr [ESP + 0xc0],EDX
MOV EDX,dword ptr [0x00e9ba18]
MOV dword ptr [ESP + 0xd0],EAX
MOV dword ptr [ESP + 0xd4],ECX
MOV ECX,dword ptr [ESP + 0xe0]
LEA EAX,[ESP + 0x9c]
MOV dword ptr [ESP + 0xcc],EDX
MOV EDX,dword ptr [0x00e9ba24]
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0xe0],EDX
CALL 0x00431950
MOVSX EAX,word ptr [0x00e9b9c4]
MOV EDX,EAX
ADD ESP,0x8
SHL EDX,0x5
SUB EDX,EAX
MOV EAX,[0x004b91c4]
MOV EAX,dword ptr [EAX + EDX*0x4 + 0x78]
TEST EAX,EAX
JZ 0x004291f4
PUSH 0x2
PUSH 0x10
PUSH 0x1
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOVSX EAX,word ptr [0x00e9b9c6]
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,EAX
SHL ECX,0x5
SUB ECX,EAX
MOV EAX,dword ptr [EDX + ECX*0x4 + 0x78]
TEST EAX,EAX
JZ 0x00429221
PUSH 0x2
PUSH 0x10
PUSH 0x1
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
FLD dword ptr [0x00e9b9e0]
FADD qword ptr [0x00e22a40]
FST dword ptr [0x00e9b9e0]
FCOMP dword ptr [0x00e9b9e4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042929b
MOVSX EAX,word ptr [0x00e9b9c6]
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,EAX
SHL ECX,0x5
SUB ECX,EAX
MOV EAX,dword ptr [EDX + ECX*0x4 + 0x78]
TEST EAX,EAX
JZ 0x0042926d
PUSH 0x3
PUSH 0x10
PUSH -0x2
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV AX,[0x00e9b9c6]
PUSH EAX
CALL 0x00428bd0
MOVSX EAX,word ptr [0x00e9b9c4]
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,EAX
SHL ECX,0x5
SUB ECX,EAX
ADD ESP,0x4
LEA EAX,[EDX + ECX*0x4]
MOV ECX,dword ptr [EDX + ECX*0x4]
AND ECX,0xfffffffe
MOV dword ptr [EAX],ECX
POP ESI
ADD ESP,0xd8
RET
