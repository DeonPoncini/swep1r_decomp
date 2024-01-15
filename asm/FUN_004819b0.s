; FUN_004819b0
SUB ESP,0x40
MOV EAX,0x3f800000
PUSH EBP
PUSH EDI
MOV EDI,dword ptr [ESP + 0x50]
XOR EBP,EBP
MOV dword ptr [EDI],EAX
MOV dword ptr [EDI + 0x14],EAX
MOV dword ptr [EDI + 0x28],EAX
MOV dword ptr [EDI + 0x3c],EAX
MOV EAX,dword ptr [ESP + 0x4c]
MOV dword ptr [EDI + 0x4],EBP
MOV dword ptr [EDI + 0x8],EBP
MOV dword ptr [EDI + 0xc],EBP
MOV dword ptr [EDI + 0x10],EBP
MOV dword ptr [EDI + 0x18],EBP
MOV dword ptr [EDI + 0x1c],EBP
MOV dword ptr [EDI + 0x20],EBP
MOV dword ptr [EDI + 0x24],EBP
MOV dword ptr [EDI + 0x2c],EBP
MOV dword ptr [EDI + 0x30],EBP
MOV dword ptr [EDI + 0x34],EBP
MOV dword ptr [EDI + 0x38],EBP
MOV ECX,dword ptr [EAX]
CMP ECX,EBP
JZ 0x00481b1b
PUSH ESI
MOV ESI,dword ptr [ESP + 0x54]
PUSH EBX
MOV EBX,EAX
MOV EAX,dword ptr [EAX]
PUSH EAX
CALL 0x00431770
ADD ESP,0x4
TEST AH,0x80
JZ 0x00481b09
MOV EDX,dword ptr [EBX]
CMP EAX,0xd065
JNZ 0x00481a29
MOV ESI,EDX
LEA EAX,[ESI + 0x1c]
JMP 0x00481a2c
LEA EAX,[EDX + 0x1c]
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x10],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x14],ECX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x18],ECX
MOV ECX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x20],ECX
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x24],ECX
MOV ECX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x28],ECX
MOV EBP,dword ptr [EAX + 0x18]
LEA ECX,[EAX + 0x18]
MOV dword ptr [ESP + 0x30],EBP
MOV EBP,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x34],EBP
MOV EBP,dword ptr [EAX + 0x20]
MOV dword ptr [ESP + 0x38],EBP
MOV EBP,dword ptr [EAX + 0x24]
MOV dword ptr [ESP + 0x40],EBP
MOV EBP,dword ptr [EAX + 0x28]
MOV dword ptr [ESP + 0x44],EBP
MOV EAX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0x48],EAX
MOV dword ptr [ESP + 0x1c],0x0
MOV dword ptr [ESP + 0x2c],0x0
MOV dword ptr [ESP + 0x3c],0x0
MOV dword ptr [ESP + 0x4c],0x3f800000
MOV AL,byte ptr [EDX + 0xc]
TEST AL,0x10
JZ 0x00481af8
LEA EDI,[ESI + 0x4c]
LEA EAX,[ESP + 0x40]
MOV EDX,EDI
MOV EBP,0x3
FLD dword ptr [ECX + -0x18]
FMUL dword ptr [EDI]
ADD ECX,0x4
ADD EDX,0x4
ADD EAX,0x4
DEC EBP
FCHS
FADD dword ptr [EAX + -0x4]
FST dword ptr [EAX + -0x4]
FLD dword ptr [ECX + -0x10]
FMUL dword ptr [ESI + 0x50]
FCHS
FADDP
FST dword ptr [EAX + -0x4]
FLD dword ptr [ECX + -0x4]
FMUL dword ptr [ESI + 0x54]
FCHS
FADDP
FST dword ptr [EAX + -0x4]
FLD dword ptr [EDX + -0x4]
FADD ST0,ST1
FSTP dword ptr [EAX + -0x4]
FSTP ST0
JNZ 0x00481ab7
MOV EDI,dword ptr [ESP + 0x58]
LEA ECX,[ESP + 0x10]
PUSH EDI
PUSH ECX
PUSH EDI
XOR EBP,EBP
CALL 0x0042fb70
ADD ESP,0xc
MOV ECX,dword ptr [EBX + 0x4]
ADD EBX,0x4
CMP ECX,EBP
MOV EAX,EBX
JNZ 0x00481a05
POP EBX
POP ESI
POP EDI
POP EBP
ADD ESP,0x40
RET
