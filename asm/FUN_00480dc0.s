; FUN_00480dc0
SUB ESP,0x34
MOV EAX,dword ptr [ESP + 0x40]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x4c]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x48]
PUSH EDI
PUSH EBP
PUSH EAX
LEA ECX,[ESP + 0x3c]
PUSH ESI
PUSH ECX
CALL 0x004314f0
MOV EDI,dword ptr [ESP + 0x58]
ADD ESP,0x10
MOV dword ptr [ESP + 0x4c],0x1
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EDI]
FSUB dword ptr [ESI]
FXCH
FSUB dword ptr [ESI + 0x8]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ESI + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x34]
FXCH
FMUL dword ptr [ESP + 0x3c]
FXCH ST2
FMUL dword ptr [ESP + 0x38]
FXCH ST2
FADDP
FXCH
FADDP
FCOMP dword ptr [0x004adfb8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00480e30
MOV dword ptr [ESP + 0x4c],0x0
MOV EBX,dword ptr [ESP + 0x5c]
LEA EDX,[ESP + 0x34]
PUSH EBX
PUSH EDI
PUSH EDX
CALL 0x00480890
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [EBX + 0x4]
FXCH
FSUB dword ptr [EBX + 0x8]
FLD dword ptr [EDI]
FSUB dword ptr [EBX]
FXCH ST2
FST dword ptr [ESP + 0x60]
FLD ST1
FXCH
FMUL dword ptr [ESP + 0x60]
FXCH
FMUL ST2
FXCH ST3
FST dword ptr [ESP + 0x60]
FMUL dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x64]
FCOMP dword ptr [0x004adfb8]
FXCH ST3
FADDP
FXCH ST2
FADDP ST2,ST0
FXCH
FNSTSW AX
FSTP dword ptr [ESP + 0x60]
ADD ESP,0xc
TEST AH,0x41
FSTP ST0
JNZ 0x00480eaf
FLD dword ptr [ESP + 0x54]
FCOMP dword ptr [ESP + 0x58]
FNSTSW AX
TEST AH,0x41
JNZ 0x00480eaf
FLD dword ptr [0x004adfcc]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x34
RET
MOV EAX,dword ptr [ESP + 0x50]
LEA ECX,[ESP + 0x28]
LEA EDX,[ESP + 0x1c]
PUSH ECX
FLD dword ptr [EAX]
FLD dword ptr [EBP]
FLD dword ptr [ESI]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI + 0x8]
FXCH ST4
FSUB dword ptr [ESI]
FLD dword ptr [EAX + 0x4]
FXCH
LEA ECX,[ESP + 0x14]
PUSH EDX
PUSH ECX
PUSH EBP
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [EAX + 0x8]
FXCH
FSUB dword ptr [ESI + 0x4]
PUSH EAX
PUSH ESI
PUSH EBX
FSTP dword ptr [ESP + 0x30]
FSUB dword ptr [ESI + 0x8]
FXCH ST3
FSUB dword ptr [EAX]
FLD dword ptr [EBP + 0x4]
FXCH ST4
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [EBP + 0x8]
FXCH
FSTP dword ptr [ESP + 0x38]
FXCH ST3
FSUB dword ptr [EAX + 0x4]
FXCH ST3
FSUB dword ptr [EAX + 0x8]
FXCH ST2
FSUB dword ptr [EBP]
FXCH
FSUB dword ptr [EBP + 0x4]
FXCH ST4
FSUB dword ptr [EBP + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x3c]
FXCH
FSTP dword ptr [ESP + 0x40]
FSTP dword ptr [ESP + 0x44]
FXCH
FSTP dword ptr [ESP + 0x48]
FSTP dword ptr [ESP + 0x4c]
CALL 0x00480a70
ADD ESP,0x1c
TEST EAX,EAX
JNZ 0x004810a4
MOV EAX,dword ptr [ESP + 0x50]
LEA EDX,[ESP + 0x10]
PUSH EDX
PUSH EAX
PUSH ESI
PUSH EBX
CALL 0x004808f0
MOV EDX,dword ptr [ESP + 0x60]
ADD ESP,0x10
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH EBP
PUSH EDX
PUSH EBX
CALL 0x004808f0
ADD ESP,0x10
LEA EAX,[ESP + 0x28]
PUSH EAX
PUSH ESI
PUSH EBP
PUSH EBX
CALL 0x004808f0
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FXCH ST2
FSUB dword ptr [ESP + 0x20]
ADD ESP,0x10
FST dword ptr [ESP + 0x50]
FXCH
FSUB dword ptr [ESP + 0x14]
FST dword ptr [ESP + 0x58]
FXCH ST2
FSUB dword ptr [ESP + 0x18]
FST dword ptr [ESP + 0x54]
FXCH
FMUL dword ptr [ESP + 0x50]
FXCH ST2
FMUL dword ptr [ESP + 0x58]
FADDP ST2,ST0
FXCH ST4
FSTP dword ptr [EBX]
FXCH ST2
FSTP dword ptr [EBX + 0x4]
FSTP dword ptr [EBX + 0x8]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ESP + 0x1c]
FXCH
FSUB dword ptr [ESP + 0x20]
FLD dword ptr [EDI + 0x8]
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
FXCH ST5
FMUL dword ptr [ESP + 0x54]
FXCH ST3
FADDP
FXCH ST4
FADDP ST4,ST0
FXCH
FADDP ST2,ST0
FXCH ST2
FST dword ptr [ESP + 0x50]
FXCH
FSTP ST2
FCOMP
FNSTSW AX
TEST AH,0x1
JZ 0x0048103d
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [EBX],ECX
FSTP ST0
FLD dword ptr [ESP + 0x50]
MOV dword ptr [EBX + 0x4],EDX
MOV dword ptr [EBX + 0x8],EAX
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI]
FSUB dword ptr [ESP + 0x28]
FXCH
FSUB dword ptr [ESP + 0x2c]
FLD dword ptr [EDI + 0x8]
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
FST dword ptr [ESP + 0x50]
FSTP ST1
FCOMP
FNSTSW AX
TEST AH,0x1
JZ 0x004810a8
MOV ECX,dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x30]
MOV dword ptr [EBX],ECX
FSTP ST0
FLD dword ptr [ESP + 0x50]
MOV dword ptr [EBX + 0x4],EDX
MOV dword ptr [EBX + 0x8],EAX
JMP 0x004810a8
FLD dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESP + 0x4c]
FLD dword ptr [ESP + 0x34]
TEST EAX,EAX
JZ 0x004810d6
MOV EAX,dword ptr [ESP + 0x60]
FCHS
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0x38]
FCHS
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ESP + 0x3c]
FCHS
FSTP dword ptr [EAX + 0x8]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x34
RET
MOV EAX,dword ptr [ESP + 0x60]
MOV ECX,dword ptr [ESP + 0x38]
MOV EDX,dword ptr [ESP + 0x3c]
POP EDI
FSTP dword ptr [EAX]
POP ESI
POP EBP
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x8],EDX
POP EBX
ADD ESP,0x34
RET
