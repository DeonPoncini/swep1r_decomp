; FUN_00456800
SUB ESP,0x58
FLD dword ptr [ESP + 0x64]
FMUL dword ptr [0x004ad04c]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,0xe299f4
MOV ESI,0xe98f4c
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x4]
FMUL dword ptr [0x00e22a50]
FADD dword ptr [ESI]
FLD ST0
FXCH
FLD ST1
FCOMP dword ptr [0x004ad050]
FSTP dword ptr [ESI]
FNSTSW AX
TEST AH,0x41
JNZ 0x00456849
FSUB dword ptr [0x004ad050]
FSTP dword ptr [ESI]
JMP 0x0045684b
FSTP ST0
FLD dword ptr [ESI]
FCOMP dword ptr [0x004acf50]
FNSTSW AX
TEST AH,0x1
JZ 0x00456864
FLD dword ptr [ESI]
FSUB dword ptr [0x004ad054]
FSTP dword ptr [ESI]
FLD dword ptr [ESI + 0xc]
FMUL dword ptr [0x00e22a50]
FADD dword ptr [ESI + 0x8]
FLD ST0
FXCH
FLD ST1
FCOMP dword ptr [0x004ad050]
FSTP dword ptr [ESI + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00456891
FSUB dword ptr [0x004ad050]
FSTP dword ptr [ESI + 0x8]
JMP 0x00456893
FSTP ST0
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004acf50]
FNSTSW AX
TEST AH,0x1
JZ 0x004568af
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [0x004ad054]
FSTP dword ptr [ESI + 0x8]
MOV EAX,dword ptr [EDI]
TEST EAX,EAX
JZ 0x004568cc
MOV EAX,dword ptr [EAX]
TEST EAX,EAX
JZ 0x004568cc
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
ADD ESI,0x5c
ADD EDI,0x4
CMP ESI,0xe9922c
JL 0x0045681f
MOV ECX,0xe293cc
FLD dword ptr [0x00e22a50]
FMUL dword ptr [ECX + 0x4]
FADD dword ptr [ECX]
FLD ST0
FXCH
FLD ST1
FCOMP dword ptr [0x004ad050]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045690d
FSUB dword ptr [0x004ad050]
FSTP dword ptr [ECX]
JMP 0x0045690f
FSTP ST0
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acf50]
FNSTSW AX
TEST AH,0x1
JZ 0x00456928
FLD dword ptr [ECX]
FSUB dword ptr [0x004ad054]
FSTP dword ptr [ECX]
FLD dword ptr [0x00e22a50]
FMUL dword ptr [ECX + 0x4]
FADD dword ptr [ECX]
FLD ST0
FXCH
FLD ST1
FCOMP dword ptr [0x004ad050]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00456952
FSUB dword ptr [0x004ad050]
FSTP dword ptr [ECX]
JMP 0x00456954
FSTP ST0
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acf50]
FNSTSW AX
TEST AH,0x1
JZ 0x0045696d
FLD dword ptr [ECX]
FSUB dword ptr [0x004ad054]
FSTP dword ptr [ECX]
ADD ECX,0x18
CMP ECX,0xe29594
JL 0x004568e3
MOV EDI,dword ptr [ESP + 0x70]
PUSH EDI
CALL 0x004565e0
ADD ESP,0x4
CALL 0x0043e210
MOV EAX,dword ptr [EDI*0x4 + 0xe299f4]
MOV EBX,dword ptr [EAX]
TEST EBX,EBX
JZ 0x00456aa2
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EBX
CALL 0x00431a50
ADD ESP,0x14
LEA ECX,[ESP + 0x28]
PUSH 0xe2af60
PUSH ECX
CALL 0x0044bb10
ADD ESP,0x8
LEA EDX,[ESP + 0x1c]
PUSH 0x4c449c
PUSH EDX
CALL 0x0042f7d0
MOV EAX,[0x00e298e8]
MOV ECX,dword ptr [0x00e298e4]
LEA ESI,[EDI + EDI*0x2]
MOV EDX,dword ptr [0x00e298e0]
SHL ESI,0x3
SUB ESI,EDI
ADD ESP,0x8
SHL ESI,0x2
PUSH EAX
PUSH ECX
MOV EAX,dword ptr [ESI + 0xe98f4c]
PUSH EDX
LEA ECX,[ESP + 0x34]
PUSH EAX
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
CALL 0x00431410
MOV EAX,[0x00e298d8]
MOV ECX,dword ptr [0x00e298d4]
MOV EDX,dword ptr [0x00e298d0]
ADD ESP,0x18
PUSH EAX
MOV EAX,dword ptr [ESI + 0xe98f48]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x34]
PUSH EAX
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
CALL 0x00431410
ADD ESP,0x18
CMP EDI,0x6
JNZ 0x00456a4a
FLD dword ptr [ESP + 0x10]
FMUL qword ptr [0x004ad058]
JMP 0x00456a54
FLD dword ptr [0x004c45d0]
FMUL dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x70]
LEA EAX,[ESP + 0x28]
LEA ECX,[ESP + 0x28]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x74]
PUSH EAX
PUSH EAX
PUSH EAX
PUSH ECX
CALL 0x00431450
ADD ESP,0x14
LEA EDX,[ESP + 0x1c]
LEA EAX,[ESP + 0x58]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x28]
PUSH ECX
PUSH EBX
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EBX
CALL 0x00431a50
ADD ESP,0x14
LEA EBX,[EDI + EDI*0x2]
SHL EBX,0x3
SUB EBX,EDI
SHL EBX,0x2
MOV EBP,dword ptr [EBX + 0xe98f40]
MOV EAX,dword ptr [EBX + 0xe98f44]
CMP EBP,EAX
JG 0x00456c67
LEA EDX,[EBP + EBP*0x2]
LEA ESI,[EDX*0x8 + 0xe293c4]
MOV ECX,dword ptr [EBX + 0xe98f40]
MOV EAX,EBP
SUB EAX,ECX
MOV ECX,dword ptr [EAX*0x4 + 0xe29a18]
MOV EDI,dword ptr [ECX]
TEST EDI,EDI
JZ 0x00456c55
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EDI
CALL 0x00431a50
ADD ESP,0x14
LEA EDX,[ESP + 0x28]
PUSH 0xe2af60
PUSH EDX
CALL 0x0044bb10
ADD ESP,0x8
LEA EAX,[ESP + 0x1c]
PUSH 0x4c449c
PUSH EAX
CALL 0x0042f7d0
MOV EAX,dword ptr [ESI + 0x8]
ADD ESP,0x8
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f380
FLD dword ptr [ESI + -0x4]
FMUL dword ptr [ESP + 0x24]
ADD ESP,0xc
LEA EDX,[ESP + 0x1c]
FMUL dword ptr [ESP + 0x74]
PUSH 0xe298c0
PUSH ECX
LEA ECX,[ESP + 0x24]
FSTP dword ptr [ESP]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x84]
ADD ESP,0x10
LEA EAX,[ESP + 0x1c]
FMUL dword ptr [ESI]
PUSH 0xe298d0
PUSH ECX
LEA ECX,[ESP + 0x24]
FSTP dword ptr [ESP]
PUSH EAX
PUSH ECX
CALL 0x0042fa80
FLD dword ptr [ESI + 0x4]
FMUL dword ptr [ESP + 0x24]
ADD ESP,0x10
LEA EDX,[ESP + 0x1c]
LEA EAX,[ESP + 0x1c]
FMUL dword ptr [ESP + 0x74]
PUSH 0xe298e0
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
MOV ECX,dword ptr [0x00e298e8]
MOV EDX,dword ptr [0x00e298e4]
MOV EAX,[0x00e298e0]
ADD ESP,0x10
PUSH ECX
MOV ECX,dword ptr [ESI + 0x8]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x34]
PUSH ECX
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
CALL 0x00431410
MOV ECX,dword ptr [0x00e298d8]
MOV EDX,dword ptr [0x00e298d4]
MOV EAX,[0x00e298d0]
ADD ESP,0x18
PUSH ECX
PUSH EDX
PUSH EAX
MOV ECX,dword ptr [EBX + 0xe98f48]
LEA EDX,[ESP + 0x34]
PUSH ECX
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
CALL 0x00431410
FLD dword ptr [ESI + 0x10]
FMUL dword ptr [ESP + 0x8c]
ADD ESP,0x18
LEA ECX,[ESP + 0x28]
LEA EDX,[ESP + 0x28]
PUSH ECX
FSTP dword ptr [ESP + 0x74]
MOV EAX,dword ptr [ESP + 0x74]
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EDX
CALL 0x00431450
ADD ESP,0x14
LEA EAX,[ESP + 0x1c]
LEA ECX,[ESP + 0x58]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0x28]
PUSH EDX
PUSH EDI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EDI
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,dword ptr [EBX + 0xe98f44]
INC EBP
ADD ESI,0x18
CMP EBP,EAX
JLE 0x00456acc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x58
RET
