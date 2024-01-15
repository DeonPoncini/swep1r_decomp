; FUN_00477c30
SUB ESP,0x11c
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x12c]
PUSH EDI
FILD dword ptr [ESI + 0x1998]
FLD dword ptr [ESI + 0x20]
FXCH
FSUB dword ptr [0x004adcd8]
LEA EDI,[ESI + 0x20]
LEA EBX,[ESI + 0x30]
FLD dword ptr [ESI + 0x24]
FXCH
FMUL dword ptr [0x004adcdc]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [EBX]
FXCH ST2
FCOMP qword ptr [0x004adc90]
FLD dword ptr [ESI + 0x34]
FLD dword ptr [ESI + 0x38]
FXCH ST5
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESI + 0x40]
FXCH ST4
FSTP dword ptr [ESP + 0x28]
LEA EBP,[ESI + 0x40]
FLD dword ptr [ESI + 0x44]
FXCH ST2
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [ESI + 0x48]
FXCH ST3
FSTP dword ptr [ESP + 0x34]
FNSTSW AX
FSTP dword ptr [ESP + 0x38]
FXCH ST3
FSTP dword ptr [ESP + 0x3c]
FXCH
FSTP dword ptr [ESP + 0x44]
FXCH
FSTP dword ptr [ESP + 0x48]
TEST AH,0x1
FSTP dword ptr [ESP + 0x4c]
JNZ 0x00477da8
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x00477da8
TEST dword ptr [ESI + 0x64],0x4000000
JNZ 0x00477da8
MOV EAX,dword ptr [ESP + 0x138]
LEA EDX,[ESP + 0x14]
PUSH EDX
MOV ECX,dword ptr [EAX]
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ECX
CALL 0x0042f380
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FMUL dword ptr [ESP + 0x34]
ADD ESP,0xc
FSUBP
FSTP dword ptr [EDI]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FMUL dword ptr [ESP + 0x28]
FADDP
FSTP dword ptr [ESI + 0x24]
FLD dword ptr [ESP + 0x10]
FXCH
FMUL dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x10]
FXCH ST6
FMUL dword ptr [ESP + 0x38]
FSUBP
FSTP dword ptr [EBX]
FLD dword ptr [ESP + 0x14]
FXCH ST4
FMUL dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x2c]
FXCH ST4
FMUL dword ptr [ESP + 0x38]
FADDP
FSTP dword ptr [ESI + 0x34]
FXCH
FMUL dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x3c]
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FSUBP
FXCH ST4
FMUL dword ptr [ESP + 0x44]
FXCH ST2
FSTP dword ptr [ESI + 0x28]
FXCH ST3
FSTP dword ptr [EBP]
FXCH
FMUL dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x4c]
FXCH ST3
FSTP dword ptr [ESI + 0x38]
FADDP
FXCH
FSTP dword ptr [ESI + 0x48]
FSTP dword ptr [ESI + 0x44]
JMP 0x00478381
FLD dword ptr [ESP + 0x34]
FCHS
FLD dword ptr [ESP + 0x38]
FXCH
FST dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x38]
FXCH
FMUL dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x38]
FADDP
PUSH ECX
MOV dword ptr [ESP + 0x20],ECX
FSTP dword ptr [ESP]
CALL 0x00480670
FCOM dword ptr [0x004adcbc]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x00477e1b
FSTP ST0
FLD dword ptr [ESP + 0x44]
FCHS
FLD dword ptr [ESP + 0x48]
FXCH
FST dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x48]
FXCH
FMUL dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x48]
PUSH ECX
FADDP
MOV dword ptr [ESP + 0x20],EDX
FSTP dword ptr [ESP]
CALL 0x00480670
ADD ESP,0x4
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x1c]
FDIV ST0,ST2
FXCH
MOV EAX,dword ptr [ESP + 0x3c]
MOV EBP,dword ptr [ESP + 0x138]
MOV ECX,dword ptr [ESP + 0x38]
MOV EDX,dword ptr [ESP + 0x34]
MOV EBP,dword ptr [EBP + 0x8]
PUSH EAX
PUSH ECX
PUSH EDX
LEA EAX,[ESP + 0xf8]
PUSH EBP
PUSH EAX
FDIV ST0,ST2
FXCH
FSTP dword ptr [ESP + 0x30]
FSTP dword ptr [ESP + 0x2c]
FSTP ST0
CALL 0x00431150
MOV EBP,dword ptr [ESP + 0x14c]
ADD ESP,0x14
LEA EDX,[ESP + 0x20]
LEA EAX,[ESP + 0xa8]
MOV ECX,dword ptr [EBP + 0x4]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f380
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x2c]
FXCH ST2
FMUL dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x24]
FLD dword ptr [0x004adc50]
FXCH ST4
FSTP dword ptr [ESP + 0xb0]
FXCH ST4
FMUL dword ptr [ESP + 0xb0]
FLD dword ptr [ESP + 0x24]
FXCH ST2
FMUL ST3
FXCH
FADDP ST3,ST0
FXCH ST4
FMUL dword ptr [ESP + 0x28]
FXCH ST4
FADD dword ptr [ESP + 0xb0]
FXCH ST3
FSUB dword ptr [ESP + 0x2c]
FXCH ST4
FXCH ST4
FMULP ST4
FXCH ST2
FSTP dword ptr [ESP + 0x84]
FXCH
FMUL dword ptr [ESP + 0xb4]
FXCH ST2
FSTP dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0xb4]
FXCH ST2
FCHS
FST dword ptr [ESP + 0x78]
FXCH ST2
FST dword ptr [ESP + 0x88]
FXCH ST2
FCHS
FXCH ST2
FCHS
FXCH ST2
FSTP dword ptr [ESP + 0x90]
ADD ESP,0xc
FXCH
FSTP dword ptr [ESP + 0x88]
FLD dword ptr [ESP + 0xec]
FLD dword ptr [ESP + 0xf0]
FLD dword ptr [ESP + 0xec]
FLD dword ptr [ESP + 0xf0]
FLD dword ptr [ESP + 0xec]
FLD dword ptr [ESP + 0xf0]
FXCH ST5
FMUL ST6
FLD dword ptr [ESP + 0xf4]
FXCH ST5
FMUL dword ptr [ESP + 0x68]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x84]
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0xf4]
FXCH ST4
FSTP dword ptr [ESP + 0xac]
FXCH
FMUL dword ptr [ESP + 0x78]
FLD dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FXCH ST4
FMUL dword ptr [ESP + 0x7c]
FXCH ST3
FMUL dword ptr [ESP + 0x88]
FXCH ST3
FADDP ST4,ST0
FXCH
FMUL dword ptr [ESP + 0xf4]
FXCH ST2
FADDP
FXCH
FADDP ST2,ST0
FSTP dword ptr [ESP + 0xb0]
FSTP dword ptr [ESP + 0xb4]
FLD dword ptr [ESP + 0xfc]
FLD dword ptr [ESP + 0x100]
FLD dword ptr [ESP + 0xfc]
FLD dword ptr [ESP + 0x100]
FLD dword ptr [ESP + 0xfc]
FLD dword ptr [ESP + 0x100]
FXCH ST5
FMUL ST6
FLD dword ptr [ESP + 0x104]
FXCH ST5
FMUL dword ptr [ESP + 0x68]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x84]
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x104]
FXCH ST4
FSTP dword ptr [ESP + 0xbc]
FLD dword ptr [ESP + 0x10c]
FXCH ST2
FMUL dword ptr [ESP + 0x78]
FADDP
FLD dword ptr [ESP + 0x110]
FXCH ST4
FMUL dword ptr [ESP + 0x88]
FADDP
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FLD dword ptr [ESP + 0x20]
FXCH ST3
FSTP dword ptr [ESP + 0xc0]
FLD dword ptr [ESP + 0x10c]
FXCH ST5
FMUL dword ptr [ESP + 0x7c]
FADDP
FLD dword ptr [ESP + 0x110]
FXCH ST3
FMUL dword ptr [ESP + 0x104]
MOV ECX,dword ptr [EBP]
LEA EDX,[ESP + 0x14]
LEA EAX,[ESP + 0x10]
PUSH EDX
FADDP
FXCH
FMUL ST5
FLD dword ptr [ESP + 0x118]
FXCH ST2
FSTP dword ptr [ESP + 0xc8]
FLD dword ptr [ESP + 0x110]
FXCH ST4
FMUL dword ptr [ESP + 0x6c]
PUSH EAX
PUSH ECX
FADDP
FLD dword ptr [ESP + 0x11c]
FXCH ST2
FMUL dword ptr [ESP + 0x90]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x120]
FXCH ST5
FSTP dword ptr [ESP + 0xd8]
FXCH ST2
FMUL dword ptr [ESP + 0x84]
FLD dword ptr [ESP + 0x2c]
FXCH
FADDP ST3,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x78]
FXCH
FMUL dword ptr [ESP + 0x88]
FXCH ST4
FMUL dword ptr [ESP + 0x94]
FXCH ST4
FADDP
FXCH ST2
FMUL dword ptr [ESP + 0x120]
FXCH ST3
FADDP
FXCH ST2
FADDP
FXCH
FSTP dword ptr [ESP + 0xdc]
FSTP dword ptr [ESP + 0xe0]
FSTP ST0
CALL 0x0042f380
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FMUL dword ptr [ESP + 0xb8]
FLD dword ptr [ESP + 0x20]
FXCH ST5
FMUL dword ptr [ESP + 0xbc]
ADD ESP,0xc
FSUBP
FSTP dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0xb0]
FXCH ST2
FMUL dword ptr [ESP + 0xac]
FADDP ST2,ST0
FMUL dword ptr [ESP + 0xbc]
FXCH
FSTP dword ptr [ESP + 0x68]
FXCH ST3
FMUL dword ptr [ESP + 0xc0]
FXCH ST2
FMUL dword ptr [ESP + 0xc0]
FXCH ST2
FSUBP ST3,ST0
FMUL dword ptr [ESP + 0xbc]
FXCH ST2
FSTP dword ptr [ESP + 0x74]
FXCH
FADDP
FSTP dword ptr [ESP + 0x78]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0xcc]
FLD dword ptr [ESP + 0x24]
FXCH ST3
FMUL dword ptr [ESP + 0xd0]
FLD dword ptr [ESP + 0x28]
FXCH
FSUBP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0xd0]
FLD dword ptr [ESP + 0x2c]
FXCH ST2
FSTP dword ptr [ESP + 0x84]
FXCH
FMUL dword ptr [ESP + 0x84]
FLD dword ptr [ESP + 0x24]
FXCH ST5
FMUL dword ptr [ESP + 0xcc]
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x24]
FXCH ST4
FMUL dword ptr [ESP + 0x74]
FADDP ST2,ST0
FXCH ST5
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x2c]
FXCH ST5
FADDP ST2,ST0
FXCH ST5
FMUL dword ptr [ESP + 0x78]
FLD dword ptr [ESP + 0x28]
FXCH ST2
FSTP dword ptr [EDI]
FLD dword ptr [ESP + 0x34]
FXCH
FADDP ST6,ST0
FLD dword ptr [ESP + 0x38]
FXCH ST5
FMUL ST3
FADDP ST6,ST0
FXCH ST3
FMUL dword ptr [ESP + 0xb4]
FLD dword ptr [ESP + 0x2c]
FXCH ST6
FSTP dword ptr [ESI + 0x24]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FMUL dword ptr [ESP + 0xc4]
FADDP
FLD dword ptr [ESP + 0x38]
FXCH ST6
FMUL dword ptr [ESP + 0xd4]
FADDP
FXCH ST3
FMUL dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x3c]
FXCH ST4
FSTP dword ptr [ESI + 0x28]
FLD dword ptr [ESP + 0x34]
FXCH ST5
FMUL dword ptr [ESP + 0x74]
FADDP
FLD dword ptr [ESP + 0x38]
FXCH ST4
FMUL dword ptr [ESP + 0x84]
FADDP
FXCH
FMUL dword ptr [ESP + 0x68]
FLD dword ptr [ESP + 0x3c]
FXCH ST2
FSTP dword ptr [EBX]
FLD dword ptr [ESP + 0x44]
FXCH ST6
FMUL dword ptr [ESP + 0x78]
LEA EBP,[ESI + 0x40]
FADDP
FLD dword ptr [ESP + 0x48]
FXCH ST2
FMUL ST3
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0xb4]
FLD dword ptr [ESP + 0x3c]
FXCH ST5
FSTP dword ptr [ESI + 0x34]
FLD dword ptr [ESP + 0x44]
FXCH ST4
FMUL dword ptr [ESP + 0xc4]
FADDP
FLD dword ptr [ESP + 0x48]
FXCH ST5
FMUL dword ptr [ESP + 0xd4]
FADDP
FXCH ST5
FMUL dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x4c]
FXCH ST6
FSTP dword ptr [ESI + 0x38]
FXCH
FMUL dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x4c]
FXCH
FADDP ST2,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x68]
FXCH ST4
FMUL dword ptr [ESP + 0x78]
FXCH ST5
FMUL dword ptr [ESP + 0x84]
FXCH ST5
FADDP ST4,ST0
FXCH ST2
FMUL ST1
FXCH ST4
FADDP ST2,ST0
FXCH ST3
FADDP ST2,ST0
FSTP dword ptr [EBP]
FSTP dword ptr [ESI + 0x44]
FSTP ST0
FLD dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x44]
FMUL dword ptr [ESP + 0xb4]
FLD dword ptr [ESP + 0x4c]
FXCH ST2
FMUL dword ptr [ESP + 0xc4]
FXCH ST2
FMUL dword ptr [ESP + 0xd4]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x48]
MOV EAX,dword ptr [ESI + 0x1e6c]
DEC EAX
MOV dword ptr [ESI + 0x1e6c],EAX
JNS 0x004783bb
PUSH EDI
CALL 0x0042f9b0
ADD ESP,0x4
FSTP ST0
PUSH EBX
CALL 0x0042f9b0
ADD ESP,0x4
FSTP ST0
PUSH EBP
CALL 0x0042f9b0
FSTP ST0
ADD ESP,0x4
MOV dword ptr [ESI + 0x1e6c],0x8
MOV EAX,dword ptr [ESP + 0x134]
POP EDI
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESI + 0x50],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x54],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x58],EAX
POP ESI
POP EBP
POP EBX
ADD ESP,0x11c
RET
