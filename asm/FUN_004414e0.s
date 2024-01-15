; FUN_004414e0
SUB ESP,0x30
PUSH EBX
MOV EBX,dword ptr [ESP + 0x3c]
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x48]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x50]
MOV EBP,dword ptr [ESP + 0x44]
FLD dword ptr [ESI]
FLD dword ptr [EDI]
FLD dword ptr [EBX]
FXCH ST2
FSUB dword ptr [EBX]
FLD dword ptr [EBX + 0x4]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [EBX + 0x4]
FLD dword ptr [ESI + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [EBX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x14]
FXCH ST2
FSUB dword ptr [EBX + 0x8]
FXCH ST3
FSUB dword ptr [ESI]
FLD dword ptr [EDI + 0x4]
FXCH ST4
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [EDI + 0x8]
FXCH
FSTP dword ptr [ESP + 0x1c]
FXCH ST3
FSUB dword ptr [ESI + 0x4]
FXCH ST3
FSUB dword ptr [ESI + 0x8]
FXCH ST4
FSUB dword ptr [EDI]
FXCH
FSUB dword ptr [EDI + 0x4]
FXCH ST2
FSUB dword ptr [EDI + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x20]
FXCH ST3
FSTP dword ptr [ESP + 0x24]
FXCH ST2
FSTP dword ptr [ESP + 0x28]
LEA EAX,[ESP + 0x10]
FXCH
FSTP dword ptr [ESP + 0x2c]
PUSH EAX
PUSH ESI
FSTP dword ptr [ESP + 0x38]
PUSH EBX
PUSH EBP
CALL 0x004808f0
ADD ESP,0x10
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH EDI
PUSH ESI
PUSH EBP
CALL 0x004808f0
ADD ESP,0x10
LEA EDX,[ESP + 0x28]
PUSH EDX
PUSH EBX
PUSH EDI
PUSH EBP
CALL 0x004808f0
MOV ECX,dword ptr [ESP + 0x64]
FLD dword ptr [ECX]
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x4]
FSUB dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [ESP + 0x28]
FXCH ST2
FST dword ptr [ESP + 0x5c]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x5c]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x5c]
FMUL dword ptr [ESP + 0x5c]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FSTP dword ptr [ESP + 0x5c]
ADD ESP,0x10
FSTP ST0
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FSUB dword ptr [ESP + 0x1c]
FXCH
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [ESP + 0x24]
FXCH ST2
FST dword ptr [ESP + 0x50]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x50]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x50]
FMUL dword ptr [ESP + 0x50]
FXCH ST3
FADDP
FLD dword ptr [ESP + 0x10]
FXCH ST3
FADDP
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FXCH ST2
FSTP ST3
FLD ST2
FCOMP dword ptr [ESP + 0x4c]
FXCH ST3
FSTP dword ptr [ESP + 0x34]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
FNSTSW AX
FXCH
FSTP dword ptr [ESP + 0x3c]
TEST AH,0x1
JZ 0x00441666
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
FSTP dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x34],EAX
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x38],EDX
MOV dword ptr [ESP + 0x3c],EAX
JMP 0x00441668
FSTP ST0
FLD dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FSUB dword ptr [ESP + 0x28]
FXCH
FSUB dword ptr [ESP + 0x2c]
FLD dword ptr [ECX + 0x8]
FSUB dword ptr [ESP + 0x30]
FXCH ST2
FST dword ptr [ESP + 0x50]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x50]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x50]
FMUL dword ptr [ESP + 0x50]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FSTP ST1
FCOM dword ptr [ESP + 0x4c]
FNSTSW AX
TEST AH,0x1
JZ 0x004416cf
MOV EDX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x34],EDX
MOV EDX,dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x38],EAX
MOV dword ptr [ESP + 0x3c],EDX
JMP 0x004416d1
FSTP ST0
FLD dword ptr [ESP + 0x4c]
FCOMP dword ptr [0x00e98258]
FNSTSW AX
TEST AH,0x41
JZ 0x004416fa
MOV EAX,dword ptr [ESP + 0x58]
LEA EDX,[ESP + 0x34]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x50]
PUSH EDX
PUSH ECX
PUSH EAX
CALL 0x00441390
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x30
RET
