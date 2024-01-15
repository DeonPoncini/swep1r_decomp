; FUN_00430810
MOV ECX,dword ptr [ESP + 0x8]
SUB ESP,0x58
LEA EAX,[ESP + 0xc]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x60]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x004304c0
ADD ESP,0xc
TEST EAX,EAX
JZ 0x0043096d
PUSH EDI
PUSH EBP
PUSH EBX
XOR EDI,EDI
MOV EBX,0x3f800000
XOR EDX,EDX
LEA EAX,[ESP + 0x10]
MOV dword ptr [ESP + 0x10],EDX
LEA ECX,[ESP + 0x1c]
MOV dword ptr [ESP + 0x14],EDX
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0x20],EDX
PUSH ESI
MOV dword ptr [ESP + EDI*0x1 + 0x1c],EBX
CALL 0x00430730
ADD ESP,0xc
LEA ECX,[ESP + 0x10]
LEA EAX,[ESP + EDI*0x1 + 0x28]
MOV EDX,0x3
MOV EBP,dword ptr [ECX]
ADD ECX,0x4
MOV dword ptr [EAX],EBP
ADD EAX,0x10
DEC EDX
JNZ 0x0043086f
ADD EDI,0x4
CMP EDI,0xc
JL 0x0043083d
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x40]
FXCH ST5
FSTP dword ptr [ESI]
FLD dword ptr [ESP + 0x48]
FXCH ST4
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [ESP + 0x4c]
FXCH ST3
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [ESP + 0x50]
FXCH ST2
FSTP dword ptr [ESI + 0x10]
XOR EAX,EAX
MOV dword ptr [ESI + 0x3c],EBX
FSTP dword ptr [ESI + 0x14]
FXCH ST3
FSTP dword ptr [ESI + 0x18]
FXCH
FSTP dword ptr [ESI + 0x20]
MOV dword ptr [ESI + 0xc],EAX
MOV dword ptr [ESI + 0x1c],EAX
FSTP dword ptr [ESI + 0x24]
MOV dword ptr [ESI + 0x2c],EAX
MOV EAX,dword ptr [ESP + 0x70]
FSTP dword ptr [ESI + 0x28]
FLD dword ptr [EAX + 0x34]
FLD dword ptr [EAX + 0x30]
MOV EDX,dword ptr [EAX + 0x38]
FLD ST1
MOV dword ptr [ESP + 0x70],EDX
FLD ST2
FLD dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x70]
FXCH ST4
FST dword ptr [ESP + 0x6c]
FXCH ST3
FMUL dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x6c]
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FADDP
FXCH ST3
FMUL dword ptr [ESP + 0x28]
FADDP ST3,ST0
FXCH
FMUL dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x70]
FXCH ST3
FCHS
FSTP dword ptr [ESI + 0x30]
FXCH ST3
FMUL dword ptr [ESP + 0x4c]
FLD dword ptr [ESP + 0x6c]
FXCH
FADDP ST4,ST0
FXCH ST4
FMUL dword ptr [ESP + 0x40]
FXCH ST2
FMUL dword ptr [ESP + 0x50]
FXCH
FMUL dword ptr [ESP + 0x2c]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x30]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FADDP ST2,ST0
FCHS
FXCH
FCHS
FXCH
FSTP dword ptr [ESI + 0x34]
POP EBX
POP EBP
FSTP dword ptr [ESI + 0x38]
POP EDI
POP ESI
ADD ESP,0x58
RET
