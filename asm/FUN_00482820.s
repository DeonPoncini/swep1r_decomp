; FUN_00482820
SUB ESP,0x8c
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0xa0]
TEST ESI,ESI
PUSH EDI
JZ 0x00482c2e
PUSH 0x2
PUSH ESI
CALL 0x00431b00
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00482c2e
PUSH ESI
CALL 0x00431770
MOV EBX,dword ptr [ESP + 0xa4]
ADD ESP,0x4
CMP ESI,EBX
MOV EDI,EAX
JNZ 0x00482870
MOV EBP,0x1
MOV dword ptr [ESP + 0xac],EBP
JMP 0x00482877
MOV EBP,dword ptr [ESP + 0xac]
MOV EAX,dword ptr [ESP + 0xa8]
LEA ECX,[ESP + 0x5c]
PUSH EAX
PUSH ECX
CALL 0x0044bb10
ADD ESP,0x8
CMP EDI,0x5064
JG 0x004828ef
JZ 0x00482a64
CMP EDI,0x3064
JNZ 0x00482c2e
TEST EBP,EBP
JZ 0x00482c2e
MOV EDX,dword ptr [ESP + 0xc0]
MOV EAX,dword ptr [ESP + 0xbc]
MOV ECX,dword ptr [ESP + 0xb8]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xb8]
PUSH EAX
MOV EAX,dword ptr [ESP + 0xb8]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x6c]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00482690
ADD ESP,0x1c
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8c
RET
CMP EDI,0xd065
JG 0x00482c2e
CMP EDI,0xd064
JGE 0x00482a64
SUB EDI,0x5065
JZ 0x00482979
DEC EDI
JNZ 0x00482c2e
PUSH ESI
CALL 0x004827b0
ADD ESP,0x4
CMP EAX,-0x1
JZ 0x00482c2e
MOV EDX,dword ptr [ESI + 0x18]
MOV EAX,dword ptr [EDX + EAX*0x4]
TEST EAX,EAX
JZ 0x00482c2e
MOV ECX,dword ptr [ESP + 0xc0]
MOV EDX,dword ptr [ESP + 0xbc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0xbc]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xbc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0xbc]
PUSH EDX
PUSH ECX
LEA EDX,[ESP + 0x70]
PUSH EBP
PUSH EDX
PUSH EAX
PUSH EBX
CALL 0x00482820
ADD ESP,0x24
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8c
RET
PUSH ESI
CALL 0x00431780
MOV EDX,EAX
MOV EAX,dword ptr [ESI + 0x1c]
ADD ESP,0x4
CMP EAX,-0x2
MOV dword ptr [ESP + 0x14],EDX
JZ 0x00482c2e
CMP EAX,-0x1
JNZ 0x00482a13
XOR ECX,ECX
TEST EDX,EDX
MOV dword ptr [ESP + 0x10],ECX
JLE 0x00482c2e
MOV EDI,dword ptr [ESP + 0xc0]
MOV EBX,dword ptr [ESP + 0xbc]
MOV EBP,dword ptr [ESP + 0xb8]
MOV EAX,dword ptr [ESI + 0x18]
MOV EAX,dword ptr [EAX + ECX*0x4]
TEST EAX,EAX
JZ 0x004829ff
MOV ECX,dword ptr [ESP + 0xb4]
MOV EDX,dword ptr [ESP + 0xb0]
PUSH EDI
PUSH EBX
PUSH EBP
PUSH ECX
MOV ECX,dword ptr [ESP + 0xbc]
PUSH EDX
LEA EDX,[ESP + 0x70]
PUSH ECX
PUSH EDX
PUSH EAX
MOV EAX,dword ptr [ESP + 0xc0]
PUSH EAX
CALL 0x00482820
MOV EDX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x34]
ADD ESP,0x24
INC ECX
CMP ECX,EDX
MOV dword ptr [ESP + 0x10],ECX
JL 0x004829bc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8c
RET
MOV ECX,dword ptr [ESI + 0x18]
MOV EAX,dword ptr [ECX + EAX*0x4]
TEST EAX,EAX
JZ 0x00482c2e
MOV EDX,dword ptr [ESP + 0xc0]
MOV ECX,dword ptr [ESP + 0xbc]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xbc]
PUSH ECX
MOV ECX,dword ptr [ESP + 0xbc]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xbc]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x70]
PUSH EBP
PUSH ECX
PUSH EAX
PUSH EBX
CALL 0x00482820
ADD ESP,0x24
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8c
RET
MOV EAX,EDI
AND EAX,0x8000
MOV dword ptr [ESP + 0x18],EAX
JZ 0x00482b96
MOV EAX,[0x0050ccd0]
TEST EAX,EAX
JL 0x00482a96
MOV EDX,dword ptr [0x0050cccc]
DEC EDX
CMP EAX,EDX
JGE 0x00482a90
MOV dword ptr [EAX*0x4 + 0xe229e0],ESI
INC EAX
MOV [0x0050ccd0],EAX
CMP EDI,0xd065
JNZ 0x00482aa5
MOV EDX,ESI
LEA ECX,[ESI + 0x1c]
JMP 0x00482aac
MOV EDX,dword ptr [ESP + 0x18]
LEA ECX,[ESI + 0x1c]
MOV EAX,dword ptr [ECX]
MOV EDI,dword ptr [ECX + 0x18]
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x24],EAX
MOV EAX,dword ptr [ECX + 0xc]
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,dword ptr [ECX + 0x10]
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x34],EAX
LEA EAX,[ECX + 0x18]
MOV dword ptr [ESP + 0x3c],EDI
MOV EDI,dword ptr [ECX + 0x1c]
MOV dword ptr [ESP + 0x40],EDI
MOV EDI,dword ptr [ECX + 0x20]
MOV BL,byte ptr [ESI + 0xc]
MOV dword ptr [ESP + 0x44],EDI
MOV EDI,dword ptr [ECX + 0x24]
MOV dword ptr [ESP + 0x28],0x0
MOV dword ptr [ESP + 0x4c],EDI
MOV EDI,dword ptr [ECX + 0x28]
MOV dword ptr [ESP + 0x50],EDI
MOV EDI,dword ptr [ECX + 0x2c]
TEST BL,0x10
MOV dword ptr [ESP + 0x54],EDI
MOV dword ptr [ESP + 0x38],0x0
MOV dword ptr [ESP + 0x48],0x0
MOV dword ptr [ESP + 0x58],0x3f800000
JZ 0x00482b7c
LEA EDI,[EDX + 0x4c]
LEA EBX,[ESP + 0x34]
MOV ESI,EDI
SUB EBX,ECX
MOV EBP,0x3
FLD dword ptr [EAX + -0x18]
FLD dword ptr [EAX + -0xc]
FMUL dword ptr [EDX + 0x50]
FLD dword ptr [EAX]
FXCH ST2
FMUL dword ptr [EDI]
FXCH
FCHS
FXCH ST2
FMUL dword ptr [EDX + 0x54]
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
JNZ 0x00482b3a
MOV ESI,dword ptr [ESP + 0xa4]
MOV ECX,dword ptr [ESP + 0xa8]
LEA EDX,[ESP + 0x1c]
PUSH ECX
LEA EAX,[ESP + 0x60]
PUSH EDX
PUSH EAX
CALL 0x0042fb70
ADD ESP,0xc
PUSH ESI
CALL 0x00431780
MOV EDX,EAX
ADD ESP,0x4
XOR ECX,ECX
MOV dword ptr [ESP + 0x14],EDX
TEST EDX,EDX
MOV dword ptr [ESP + 0x10],ECX
JLE 0x00482c17
MOV ESI,dword ptr [ESP + 0xc0]
MOV EDI,dword ptr [ESP + 0xbc]
MOV EBX,dword ptr [ESP + 0xb8]
MOV EBP,dword ptr [ESP + 0xb4]
MOV EAX,dword ptr [ESP + 0xa4]
MOV EAX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [EAX + ECX*0x4]
TEST EAX,EAX
JZ 0x00482c0e
MOV ECX,dword ptr [ESP + 0xb0]
MOV EDX,dword ptr [ESP + 0xac]
PUSH ESI
PUSH EDI
PUSH EBX
PUSH EBP
PUSH ECX
LEA ECX,[ESP + 0x70]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xb8]
PUSH ECX
PUSH EAX
PUSH EDX
CALL 0x00482820
MOV EDX,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x34]
ADD ESP,0x24
INC ECX
CMP ECX,EDX
MOV dword ptr [ESP + 0x10],ECX
JL 0x00482bcb
MOV EAX,dword ptr [ESP + 0x18]
TEST EAX,EAX
JZ 0x00482c2e
MOV EAX,[0x0050ccd0]
TEST EAX,EAX
JL 0x00482c2e
DEC EAX
MOV [0x0050ccd0],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8c
RET