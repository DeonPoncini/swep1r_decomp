; FUN_00442090
SUB ESP,0x34
PUSH EBX
MOV EBX,dword ptr [ESP + 0x40]
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x54]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x48]
MOV dword ptr [ESP + 0x10],0x0
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x8]
FXCH
FSUB dword ptr [EBX]
FXCH
FSUB dword ptr [EBX + 0x8]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [EBX + 0x4]
FXCH ST2
FMUL dword ptr [EDI]
FXCH
FMUL dword ptr [EDI + 0x8]
FXCH ST2
FMUL dword ptr [EDI + 0x4]
FXCH ST2
FADDP
FXCH
FADDP
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x004420f7
MOV EAX,[0x004c1778]
TEST EAX,EAX
JZ 0x00442467
MOV dword ptr [ESP + 0x10],0x1
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ESI
PUSH EDI
CALL 0x00480890
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FSUB dword ptr [ESP + 0x20]
FXCH
FSUB dword ptr [ESP + 0x24]
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [ESP + 0x28]
FXCH ST2
FST dword ptr [ESP + 0x64]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x64]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x64]
FMUL dword ptr [ESP + 0x64]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FST dword ptr [ESP + 0x64]
FSTP ST1
FCOMP dword ptr [0x00e98e6c]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x41
JZ 0x00442467
MOV EBP,dword ptr [ESP + 0x50]
MOV EAX,dword ptr [ESP + 0x54]
LEA ECX,[ESP + 0x38]
LEA EDX,[ESP + 0x2c]
FLD dword ptr [EBP]
FLD dword ptr [EAX]
FLD dword ptr [EBX]
FLD dword ptr [EBX + 0x4]
FLD dword ptr [EBX + 0x8]
FXCH ST4
FSUB dword ptr [EBX]
FLD dword ptr [EBP + 0x4]
FXCH
PUSH ECX
LEA ECX,[ESP + 0x24]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [EBP + 0x8]
FXCH
FSUB dword ptr [EBX + 0x4]
PUSH EAX
PUSH EBP
LEA EDX,[ESP + 0x28]
PUSH EBX
PUSH EDX
FSTP dword ptr [ESP + 0x40]
FSUB dword ptr [EBX + 0x8]
FXCH ST3
FSUB dword ptr [EBP]
FLD dword ptr [EAX + 0x4]
FXCH ST4
FSTP dword ptr [ESP + 0x44]
FLD dword ptr [EAX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x48]
FXCH ST3
FSUB dword ptr [EBP + 0x4]
FXCH ST3
FSUB dword ptr [EBP + 0x8]
FXCH ST2
FSUB dword ptr [EAX]
FXCH
FSUB dword ptr [EAX + 0x4]
FXCH ST4
FSUB dword ptr [EAX + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x4c]
FXCH
FSTP dword ptr [ESP + 0x50]
FSTP dword ptr [ESP + 0x54]
FXCH
FSTP dword ptr [ESP + 0x58]
FSTP dword ptr [ESP + 0x5c]
CALL 0x00441040
ADD ESP,0x1c
TEST EAX,EAX
JNZ 0x00442376
LEA EAX,[ESP + 0x20]
LEA ECX,[ESP + 0x14]
PUSH EAX
PUSH EBP
PUSH EBX
PUSH ECX
CALL 0x004808f0
MOV ECX,dword ptr [ESP + 0x64]
ADD ESP,0x10
LEA EDX,[ESP + 0x2c]
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH ECX
PUSH EBP
PUSH EAX
CALL 0x004808f0
MOV ECX,dword ptr [ESP + 0x64]
ADD ESP,0x10
LEA EDX,[ESP + 0x38]
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH EBX
PUSH ECX
PUSH EAX
CALL 0x004808f0
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FXCH ST3
FSUB dword ptr [ESP + 0x30]
FXCH ST2
FSUB dword ptr [ESP + 0x34]
FXCH
FSUB dword ptr [ESP + 0x3c]
FXCH ST3
FSUB dword ptr [ESP + 0x40]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x8]
FXCH ST4
FST dword ptr [ESP + 0x68]
FXCH ST3
FST dword ptr [ESP + 0x5c]
FXCH
FSUB dword ptr [ESP + 0x38]
ADD ESP,0x10
FST dword ptr [ESP + 0x48]
FXCH ST3
FMUL dword ptr [ESP + 0x58]
FXCH
FMUL dword ptr [ESP + 0x4c]
FADDP
FXCH ST3
FSUB dword ptr [ESP + 0x34]
FXCH ST4
FST dword ptr [ESP + 0x58]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x58]
FXCH
FMUL ST2
FXCH ST5
FST dword ptr [ESP + 0x58]
FXCH ST3
FMUL dword ptr [ESP + 0x48]
FXCH ST3
FMUL dword ptr [ESP + 0x58]
FXCH ST5
FADDP
FXCH ST2
FADDP ST3,ST0
FXCH ST2
FSTP dword ptr [ESP + 0x58]
FXCH ST2
FADDP ST2,ST0
FXCH
MOV EAX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x20]
FSTP ST1
FCOM dword ptr [ESP + 0x58]
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x14],EDX
MOV dword ptr [ESP + 0x1c],ECX
FNSTSW AX
TEST AH,0x1
JZ 0x0044230b
MOV EDX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x30]
MOV ECX,dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x14],EDX
FSTP dword ptr [ESP + 0x58]
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x1c],ECX
JMP 0x0044230d
FSTP ST0
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FSUB dword ptr [ESP + 0x38]
FXCH
FSUB dword ptr [ESP + 0x3c]
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [ESP + 0x40]
FXCH ST2
FST dword ptr [ESP + 0x4c]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x4c]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x4c]
FMUL dword ptr [ESP + 0x4c]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FSTP ST1
FCOM dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x1
JZ 0x00442374
MOV EDX,dword ptr [ESP + 0x38]
MOV EAX,dword ptr [ESP + 0x3c]
MOV ECX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x14],EDX
FSTP dword ptr [ESP + 0x58]
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x1c],ECX
JMP 0x00442376
FSTP ST0
MOV EAX,[0x0050c5d8]
TEST EAX,EAX
JZ 0x004423bc
MOV CX,word ptr [0x0050c5d4]
CMP CX,0x3f
JGE 0x004423bc
MOVSX EAX,CX
MOV EDX,dword ptr [ESP + 0x14]
LEA EAX,[EAX + EAX*0x2]
SHL EAX,0x2
INC CX
MOV dword ptr [EAX + 0xe982a0],EDX
MOV EDX,dword ptr [ESP + 0x18]
MOV dword ptr [EAX + 0xe982a4],EDX
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [EAX + 0xe982a8],EDX
MOV word ptr [0x0050c5d4],CX
FLD dword ptr [ESP + 0x58]
FCOMP dword ptr [0x00e98258]
FNSTSW AX
TEST AH,0x41
JZ 0x00442467
CMP word ptr [0x00e98e1c],0x3
JNZ 0x0044242b
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x00442408
FLD dword ptr [EDI]
FCHS
FSTP dword ptr [EDI]
FLD dword ptr [EDI + 0x4]
MOV EAX,dword ptr [ESP + 0x58]
MOV ECX,dword ptr [ESP + 0x54]
FCHS
FSTP dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
PUSH EDI
PUSH EAX
FCHS
FSTP dword ptr [EDI + 0x8]
PUSH ESI
PUSH EBP
PUSH ECX
JMP 0x00442415
MOV EAX,dword ptr [ESP + 0x58]
MOV ECX,dword ptr [ESP + 0x54]
PUSH EDI
PUSH EAX
PUSH ESI
PUSH ECX
PUSH EBP
LEA EDX,[ESP + 0x28]
PUSH EBX
PUSH EDX
CALL 0x00441810
ADD ESP,0x1c
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x34
RET
MOV EAX,dword ptr [ESP + 0x58]
MOV ECX,dword ptr [0x00e98284]
MOV EDX,dword ptr [ESP + 0x14]
MOV [0x00e98258],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [0x00e98254],ECX
MOV ECX,dword ptr [ESP + 0x1c]
MOV dword ptr [0x00e98250],0x1
MOV dword ptr [0x00e98e60],EDX
MOV [0x00e98e64],EAX
MOV dword ptr [0x00e98e68],ECX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x34
RET
