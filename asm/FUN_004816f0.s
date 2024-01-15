; FUN_004816f0
SUB ESP,0x84
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xa0]
TEST EDI,EDI
JZ 0x0048190e
PUSH EDI
CALL 0x00431770
ADD ESP,0x4
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0xa4]
LEA ECX,[ESP + 0x10]
PUSH EAX
PUSH ECX
CALL 0x0044bb10
ADD ESP,0x8
CMP ESI,0x5064
JZ 0x00481856
CMP ESI,0xd063
JLE 0x00481919
CMP ESI,0xd065
JG 0x00481919
JNZ 0x00481756
MOV EDX,EDI
LEA ECX,[EDI + 0x1c]
JMP 0x00481760
MOV EDX,dword ptr [ESP + 0x90]
LEA ECX,[EDI + 0x1c]
MOV EAX,dword ptr [ECX]
MOV ESI,dword ptr [ECX + 0x18]
MOV dword ptr [ESP + 0x50],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x54],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x58],EAX
MOV EAX,dword ptr [ECX + 0xc]
MOV dword ptr [ESP + 0x60],EAX
MOV EAX,dword ptr [ECX + 0x10]
MOV dword ptr [ESP + 0x64],EAX
MOV EAX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x68],EAX
LEA EAX,[ECX + 0x18]
MOV dword ptr [ESP + 0x70],ESI
MOV ESI,dword ptr [ECX + 0x1c]
MOV dword ptr [ESP + 0x74],ESI
MOV ESI,dword ptr [ECX + 0x20]
MOV BL,byte ptr [EDI + 0xc]
MOV dword ptr [ESP + 0x78],ESI
MOV ESI,dword ptr [ECX + 0x24]
MOV dword ptr [ESP + 0x5c],0x0
MOV dword ptr [ESP + 0x80],ESI
MOV ESI,dword ptr [ECX + 0x28]
MOV dword ptr [ESP + 0x84],ESI
MOV ESI,dword ptr [ECX + 0x2c]
TEST BL,0x10
MOV dword ptr [ESP + 0x88],ESI
MOV dword ptr [ESP + 0x6c],0x0
MOV dword ptr [ESP + 0x7c],0x0
MOV dword ptr [ESP + 0x8c],0x3f800000
JZ 0x0048183c
LEA EDI,[EDX + 0x4c]
LEA EBX,[ESP + 0x68]
MOV ESI,EDI
SUB EBX,ECX
MOV EBP,0x3
FLD dword ptr [EAX + -0xc]
FLD dword ptr [EAX]
FMUL dword ptr [EDX + 0x54]
FLD dword ptr [EAX + -0x18]
FXCH ST2
FMUL dword ptr [EDX + 0x50]
FXCH
FCHS
FXCH ST2
FMUL dword ptr [EDI]
FXCH
FCHS
FADDP ST2,ST0
LEA ECX,[EBX + EAX*0x1]
ADD EAX,0x4
ADD ESI,0x4
DEC EBP
FCHS
FADDP
FLD dword ptr [ESI + -0x4]
FXCH
FADD dword ptr [ECX]
FXCH
FADDP
FSTP dword ptr [ECX]
JNZ 0x004817fa
MOV EDI,dword ptr [ESP + 0xa0]
MOV ECX,dword ptr [ESP + 0xa4]
LEA EDX,[ESP + 0x50]
PUSH ECX
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH EAX
CALL 0x0042fb70
ADD ESP,0xc
MOV EAX,dword ptr [ESP + 0x98]
MOV EBX,dword ptr [ESP + 0x9c]
CMP EAX,EDI
JNZ 0x004818d7
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [EBX],EDX
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [EBX + 0x4],EAX
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [EBX + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [EBX + 0xc],EDX
MOV EDX,dword ptr [ESP + 0x28]
MOV dword ptr [EBX + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [EBX + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [EBX + 0x18],EDX
MOV EDX,dword ptr [ESP + 0x34]
MOV dword ptr [EBX + 0x1c],EAX
MOV EAX,dword ptr [ESP + 0x38]
MOV dword ptr [EBX + 0x20],ECX
MOV ECX,dword ptr [ESP + 0x3c]
MOV dword ptr [EBX + 0x24],EDX
MOV EDX,dword ptr [ESP + 0x40]
MOV dword ptr [EBX + 0x28],EAX
MOV EAX,dword ptr [ESP + 0x44]
MOV dword ptr [EBX + 0x2c],ECX
MOV ECX,dword ptr [ESP + 0x48]
MOV dword ptr [EBX + 0x30],EDX
MOV EDX,dword ptr [ESP + 0x4c]
MOV dword ptr [EBX + 0x34],EAX
MOV dword ptr [EBX + 0x38],ECX
MOV dword ptr [EBX + 0x3c],EDX
PUSH EDI
CALL 0x00431780
MOV EBP,EAX
ADD ESP,0x4
XOR ESI,ESI
TEST EBP,EBP
JLE 0x0048190e
MOV EAX,dword ptr [EDI + 0x18]
MOV EAX,dword ptr [EAX + ESI*0x4]
TEST EAX,EAX
JZ 0x00481909
MOV EDX,dword ptr [ESP + 0x98]
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH EAX
PUSH EBX
PUSH EDX
CALL 0x004816f0
ADD ESP,0x10
INC ESI
CMP ESI,EBP
JL 0x004818e8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x84
RET
CMP dword ptr [ESP + 0x98],EDI
JNZ 0x0048190e
MOV EAX,dword ptr [ESP + 0x9c]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x18]
POP EDI
MOV dword ptr [EAX + 0x4],ECX
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [EAX + 0x8],EDX
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [EAX + 0xc],ECX
MOV ECX,dword ptr [ESP + 0x20]
MOV dword ptr [EAX + 0x10],EDX
MOV EDX,dword ptr [ESP + 0x24]
MOV dword ptr [EAX + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [EAX + 0x18],EDX
MOV EDX,dword ptr [ESP + 0x2c]
MOV dword ptr [EAX + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0xc]
MOV dword ptr [EAX + 0x20],EDX
MOV EDX,dword ptr [ESP + 0x34]
MOV dword ptr [EAX + 0x24],ECX
MOV ECX,dword ptr [ESP + 0x38]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0x28],EDX
MOV EDX,dword ptr [ESP + 0x3c]
MOV dword ptr [EAX + 0x2c],ECX
MOV ECX,dword ptr [ESP + 0x40]
MOV dword ptr [EAX + 0x30],EDX
MOV EDX,dword ptr [ESP + 0x44]
MOV dword ptr [EAX + 0x34],ECX
MOV ECX,dword ptr [ESP + 0x48]
POP ESI
POP EBP
MOV dword ptr [EAX + 0x38],EDX
MOV dword ptr [EAX + 0x3c],ECX
POP EBX
ADD ESP,0x84
RET
