; FUN_00444300
FLD dword ptr [0x00e98258]
FCOMP dword ptr [0x00e98e6c]
SUB ESP,0x7c
FNSTSW AX
TEST AH,0x1
JZ 0x00444734
FLD dword ptr [0x00e98290]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x98]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x88]
FSTP dword ptr [EDI]
MOV EAX,[0x00e98294]
LEA EDX,[ESP + 0xc]
MOV dword ptr [EDI + 0x4],EAX
MOV ECX,dword ptr [0x00e98298]
MOV dword ptr [EDI + 0x8],ECX
PUSH EBX
FLD dword ptr [ESI]
FSUB dword ptr [0x00e98e60]
PUSH EDX
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESI + 0x4]
FSUB dword ptr [0x00e98e64]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [0x00e98e68]
FSTP dword ptr [ESP + 0x1c]
CALL 0x0042f9b0
MOV EBX,dword ptr [ESP + 0x98]
ADD ESP,0x4
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x64]
PUSH EBX
PUSH EAX
PUSH ECX
FSTP ST0
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x64]
LEA EAX,[ESP + 0x34]
PUSH EBX
PUSH EDX
PUSH EAX
CALL 0x0042f9f0
ADD ESP,0xc
LEA ECX,[ESP + 0x34]
PUSH ECX
CALL 0x0042f8c0
FCOM dword ptr [0x004aca64]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x00444490
FSTP ST0
FLD dword ptr [EBX + 0x4]
FLD dword ptr [EBX]
FMUL dword ptr [ESP + 0x10]
FLD dword ptr [EBX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FADDP
FXCH
PUSH EDI
FADDP
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x00444417
MOV EDX,dword ptr [0x00e98258]
PUSH EDX
CALL 0x00480670
FSUBR dword ptr [ESP + 0xa0]
ADD ESP,0x4
LEA EAX,[ESP + 0x14]
PUSH ECX
FCHS
FSTP dword ptr [ESP]
PUSH EAX
JMP 0x00444440
FLD dword ptr [ESP + 0xa0]
MOV ECX,dword ptr [0x00e98258]
FCHS
FSTP dword ptr [ESP + 0x10]
PUSH ECX
CALL 0x00480670
FSUBR dword ptr [ESP + 0x14]
ADD ESP,0x4
LEA EDX,[ESP + 0x14]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
CALL 0x0042fa50
FLD dword ptr [ESI]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FXCH ST2
FADD dword ptr [ESP + 0x1c]
FXCH
FADD dword ptr [ESI + 0x4]
FXCH ST2
FADD dword ptr [ESI + 0x8]
FXCH
FSTP dword ptr [ESI]
FXCH
FSTP dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESP + 0xb0]
ADD ESP,0xc
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [EDI]
FCHS
FSTP dword ptr [EAX]
FLD dword ptr [EDI + 0x4]
FCHS
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [EDI + 0x8]
FCHS
FSTP dword ptr [EAX + 0x8]
JMP 0x004446f9
FLD dword ptr [0x004aca80]
FDIV ST0,ST1
LEA EAX,[ESP + 0x34]
PUSH EAX
PUSH ECX
LEA ECX,[ESP + 0x3c]
FSTP dword ptr [ESP]
PUSH ECX
FSTP ST0
CALL 0x0042fa50
FLD dword ptr [ESP + 0xa4]
FMUL dword ptr [ESP + 0xa4]
ADD ESP,0xc
LEA EDX,[ESP + 0x34]
FSUBR dword ptr [0x00e98e6c]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x00480670
FSTP dword ptr [ESP]
LEA EAX,[ESP + 0x78]
PUSH EAX
CALL 0x0042fa50
MOV ECX,dword ptr [ESP + 0xa4]
ADD ESP,0xc
LEA EDX,[ESP + 0x70]
LEA EAX,[ESP + 0x40]
PUSH EBX
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042fa80
FLD dword ptr [ESP + 0xac]
FMUL dword ptr [ESP + 0xac]
ADD ESP,0x10
LEA ECX,[ESP + 0x34]
FSUBR dword ptr [0x00e98e6c]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x00480670
FSTP dword ptr [ESP]
LEA EDX,[ESP + 0x84]
PUSH EDX
CALL 0x0042fa50
MOV EAX,dword ptr [ESP + 0xa8]
ADD ESP,0xc
LEA ECX,[ESP + 0x7c]
LEA EDX,[ESP + 0x1c]
PUSH EBX
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042fa80
ADD ESP,0x10
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x40]
LEA EDX,[ESP + 0x58]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x1c]
LEA EDX,[ESP + 0x4c]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f9f0
FLD dword ptr [ESP + 0x58]
FMUL dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x5c]
FMUL dword ptr [ESP + 0x68]
ADD ESP,0xc
FADDP
FLD dword ptr [ESP + 0x54]
FMUL dword ptr [ESP + 0x60]
FADDP
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x00444617
MOV EAX,[0x00e98258]
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH EAX
CALL 0x00480670
FSUBR dword ptr [ESP + 0x98]
ADD ESP,0x4
LEA EDX,[ESP + 0x14]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
CALL 0x0042fa50
FLD dword ptr [ESI]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FXCH ST2
FADD dword ptr [ESP + 0x1c]
FXCH
FADD dword ptr [ESI + 0x4]
FXCH ST2
FADD dword ptr [ESI + 0x8]
FXCH
FSTP dword ptr [ESI]
FXCH
FSTP dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESP + 0xb0]
ADD ESP,0xc
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [EDI]
FCHS
FSTP dword ptr [EAX]
FLD dword ptr [EDI + 0x4]
FCHS
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [EDI + 0x8]
FCHS
FSTP dword ptr [EAX + 0x8]
JMP 0x004446f9
FLD dword ptr [EBX + 0x4]
FLD dword ptr [EBX + 0x8]
FMUL dword ptr [EDI + 0x8]
FLD dword ptr [EDI]
FXCH ST2
FMUL dword ptr [EDI + 0x4]
FXCH ST2
FMUL dword ptr [EBX]
FXCH ST2
FADDP
FXCH
FADDP
FCOMP dword ptr [0x004aca50]
FLD dword ptr [ESI]
FNSTSW AX
TEST AH,0x41
JNZ 0x00444652
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FXCH ST2
FADD dword ptr [ESP + 0x1c]
JMP 0x00444660
FLD dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x48]
FXCH ST2
FADD dword ptr [ESP + 0x40]
FXCH
FADD dword ptr [ESI + 0x4]
FXCH ST2
FADD dword ptr [ESI + 0x8]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x24]
FXCH ST4
FSTP dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0xa4]
FXCH ST4
FSTP dword ptr [ESP + 0x2c]
FXCH
FSTP dword ptr [ESP + 0x30]
PUSH EAX
FSTP dword ptr [EAX]
FXCH
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
CALL 0x0042f9b0
FLD dword ptr [0x00e98e64]
FLD dword ptr [0x00e98e68]
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x30]
FXCH ST4
FSTP ST0
FXCH ST2
FMUL dword ptr [EDI + 0x4]
FLD dword ptr [EDI]
FXCH ST2
FMUL dword ptr [EDI + 0x8]
ADD ESP,0x4
FADDP
FXCH ST2
FMUL dword ptr [EDI + 0x8]
FLD dword ptr [EDI]
FXCH ST2
FMUL dword ptr [0x00e98e60]
PUSH EDI
PUSH ECX
FADDP ST3,ST0
FXCH ST3
FMUL dword ptr [EDI + 0x4]
FADDP ST3,ST0
FMUL dword ptr [ESP + 0x30]
FADDP ST2,ST0
FXCH
FSUBP
FSTP dword ptr [ESP]
PUSH ESI
PUSH ESI
CALL 0x0042fa80
ADD ESP,0x10
FLD dword ptr [0x00e98e60]
MOV EAX,dword ptr [ESP + 0xa8]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e98e64]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e98e68]
MOV dword ptr [EAX + 0x8],EDX
MOV EAX,[0x00e98254]
TEST EAX,EAX
JZ 0x00444728
MOV [0x0050c5d0],EAX
POP EBX
POP ESI
MOV EAX,0x1
POP EDI
ADD ESP,0x7c
RET
XOR EAX,EAX
ADD ESP,0x7c
RET
