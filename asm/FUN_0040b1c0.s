; FUN_0040b1c0
SUB ESP,0x10
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [0x004d78a8]
XOR ESI,ESI
MOV dword ptr [ESP + 0x14],0xbf800000
MOV dword ptr [ESP + 0x8],0x0
MOV EAX,dword ptr [EDI + 0x64]
MOV dword ptr [ESP + 0x10],ESI
TEST AH,0x40
MOV dword ptr [ESP + 0xc],ESI
JZ 0x0040b215
PUSH ESI
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x16
CALL 0x00409ee0
ADD ESP,0x14
PUSH ESI
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x9
CALL 0x00409ee0
ADD ESP,0x14
POP EDI
POP ESI
ADD ESP,0x10
RET
FLD dword ptr [EDI + 0x244]
FCOMP dword ptr [0x004ac3a0]
FNSTSW AX
TEST AH,0x1
JZ 0x0040b280
FLD dword ptr [EDI + 0x244]
FMUL dword ptr [0x004ac3a4]
FSUBR dword ptr [0x004ac3a8]
CALL 0x0049ed20
MOV ESI,EAX
MOV EAX,[0x004b4dcc]
MOV ECX,ESI
SUB ECX,EAX
JNS 0x0040b250
SUB EAX,ESI
JMP 0x0040b252
MOV EAX,ECX
CMP EAX,0x4e20
JL 0x0040b270
PUSH ESI
PUSH 0x17
CALL 0x0040a500
MOV EDI,dword ptr [0x004d78a8]
ADD ESP,0x8
MOV dword ptr [0x004b4dcc],ESI
MOV ESI,dword ptr [ESP + 0x10]
MOV dword ptr [0x004d78b0],0x1
JMP 0x0040b29f
PUSH 0x1f40
PUSH 0x17
CALL 0x0040a500
MOV EDI,dword ptr [0x004d78a8]
ADD ESP,0x8
MOV dword ptr [0x004d78b0],0x0
TEST byte ptr [EDI + 0x64],0x1
JZ 0x0040b2b9
PUSH 0x0
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x9
CALL 0x00409ee0
ADD ESP,0x14
JMP 0x0040b2c3
PUSH 0x9
CALL 0x0040a0b0
ADD ESP,0x4
MOV EAX,[0x004d78a8]
MOV ECX,dword ptr [EAX + 0x64]
TEST CH,0x2
JZ 0x0040b2dc
PUSH 0x0
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0xd
JMP 0x0040b325
PUSH 0xd
CALL 0x0040a0b0
MOV EAX,[0x004d78a8]
ADD ESP,0x4
MOV ECX,dword ptr [EAX + 0x140]
TEST ECX,ECX
JZ 0x0040b32d
FLD dword ptr [EAX + 0x1a0]
FCOMP dword ptr [0x004ac3ac]
FNSTSW AX
TEST AH,0x41
JNZ 0x0040b32d
PUSH ECX
CALL 0x004318b0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0040b32d
TEST byte ptr [EAX + 0x2c],0x20
JZ 0x0040b32d
PUSH 0x0
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0xc
CALL 0x00409ee0
ADD ESP,0x14
MOV EDX,dword ptr [0x004d78a8]
XOR ECX,ECX
FLD dword ptr [ESP + 0x14]
ADD EDX,0x288
FCOM dword ptr [EDX]
FNSTSW AX
TEST AH,0x1
JZ 0x0040b374
MOV EAX,dword ptr [EDX + 0x18]
MOV EDI,dword ptr [ESP + 0x8]
FSTP ST0
FLD dword ptr [EDX]
OR EDI,EAX
TEST ECX,ECX
MOV dword ptr [ESP + 0x8],EDI
JL 0x0040b367
XOR EAX,EAX
CMP ECX,0x2
SETLE AL
JMP 0x0040b369
XOR EAX,EAX
TEST EAX,EAX
JZ 0x0040b373
INC dword ptr [ESP + 0xc]
JMP 0x0040b374
INC ESI
INC ECX
ADD EDX,0x4
CMP ECX,0x6
JL 0x0040b33f
TEST byte ptr [ESP + 0x8],0x8
FSTP ST0
JZ 0x0040b3b5
MOV EDI,dword ptr [ESP + 0xc]
XOR EAX,EAX
CMP ESI,EDI
PUSH 0x0
SETG AL
PUSH -0x1
LEA EAX,[EAX + EAX*0x4]
LEA ECX,[EAX + EAX*0x8]
LEA EDX,[ECX*0x4 + 0x5a]
PUSH EDX
PUSH -0x1
PUSH 0x1a
CALL 0x00409ee0
ADD ESP,0x14
POP EDI
POP ESI
ADD ESP,0x10
RET
PUSH 0x1a
CALL 0x0040a0b0
ADD ESP,0x4
POP EDI
POP ESI
ADD ESP,0x10
RET