; FUN_00479e10
SUB ESP,0xc0
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0xd0]
PUSH EDI
MOV EDI,dword ptr [ESP + 0xd8]
FILD dword ptr [ESI + 0x1998]
FLD dword ptr [EDI]
FLD dword ptr [EDI + 0x4]
FXCH ST2
FSUB dword ptr [0x004adcd8]
FLD dword ptr [EDI + 0x8]
FXCH
FMUL dword ptr [0x004adcdc]
FXCH ST2
FSTP dword ptr [ESP + 0x20]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FCOMP qword ptr [0x004adc90]
FSTP dword ptr [ESP + 0x28]
FNSTSW AX
TEST AH,0x1
JNZ 0x00479ef7
MOV ECX,dword ptr [ESI + 0x60]
TEST CL,0x20
JNZ 0x00479ef7
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x4000000
JNZ 0x00479ef7
MOV EDX,dword ptr [ESI + 0xec]
AND ECX,0xf
OR EAX,0x20000000
CMP CL,0x2
MOV dword ptr [ESI + 0x140],EDX
MOV dword ptr [ESI + 0x64],EAX
JNZ 0x00479eb9
LEA EAX,[ESP + 0x50]
PUSH 0x0
LEA ECX,[ESI + 0xac]
PUSH EAX
PUSH ECX
CALL 0x0044eeb0
MOV EDX,dword ptr [ESP + 0x94]
ADD ESP,0xc
MOV dword ptr [EDI + 0x8],EDX
MOV EAX,dword ptr [ESP + 0xe0]
MOV dword ptr [ESP + 0x10],0x40000000
MOV dword ptr [EAX],0x0
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX + 0x8],0x3f800000
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xf
CMP AL,0x2
JNZ 0x0047a1e4
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x2
MOV dword ptr [ESI + 0x64],EAX
JMP 0x0047a1e4
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x400000
JZ 0x00479f4c
TEST EAX,0x800000
JZ 0x00479f4c
FLD dword ptr [EDI + 0x8]
MOV EBX,dword ptr [ESP + 0xe0]
MOV ECX,dword ptr [ESI + 0x160]
FSUB dword ptr [ESI + 0x188]
MOV dword ptr [EBX],ECX
MOV EDX,dword ptr [ESI + 0x164]
MOV dword ptr [EBX + 0x4],EDX
MOV EAX,dword ptr [ESI + 0x168]
MOV dword ptr [EBX + 0x8],EAX
MOV ECX,dword ptr [ESI + 0xec]
MOV EAX,dword ptr [ESI + 0x64]
MOV dword ptr [ESI + 0x140],ECX
FSTP dword ptr [ESP + 0x10]
OR EAX,0x20000000
JMP 0x00479f78
MOV EBX,dword ptr [ESP + 0xe0]
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x004772f0
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0xc
FSTP dword ptr [ESP + 0x10]
TEST EAX,0x800000
JZ 0x00479f73
OR EAX,0x400000
JMP 0x00479f78
AND EAX,0xffbfffff
TEST AH,0x4
MOV dword ptr [ESI + 0x64],EAX
JZ 0x00479fa2
FLD dword ptr [EBX + 0x8]
FCOMP dword ptr [0x004adc7c]
FNSTSW AX
TEST AH,0x1
JZ 0x00479fa2
PUSH EBX
MOV dword ptr [EBX + 0x8],0x3d4ccccd
CALL 0x0042f9b0
FSTP ST0
ADD ESP,0x4
MOV EDX,dword ptr [EBX]
MOV EBP,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x160],EDX
MOV EAX,dword ptr [EBX + 0x4]
MOV dword ptr [ESI + 0x164],EAX
MOV ECX,dword ptr [EBX + 0x8]
MOV dword ptr [ESI + 0x168],ECX
MOV ECX,dword ptr [ESI + 0x60]
TEST CH,0x50
JNZ 0x0047a022
FLD dword ptr [ESI + 0x18c]
FCOMP dword ptr [0x004adcbc]
FNSTSW AX
TEST AH,0x41
JZ 0x00479ff5
FLD dword ptr [ESI + 0x18c]
FCHS
FCOMP dword ptr [0x004adcbc]
FNSTSW AX
TEST AH,0x41
JZ 0x00479ff5
TEST CH,0x20
JNZ 0x0047a022
MOV EAX,dword ptr [ESI + 0x64]
MOV ECX,dword ptr [ESP + 0xdc]
TEST AH,0x4
LEA EDX,[ESP + 0x2c]
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
PUSH EBX
PUSH EBP
PUSH ECX
PUSH EDI
PUSH ESI
JZ 0x0047a01a
CALL 0x00479550
JMP 0x0047a01f
CALL 0x004791d0
ADD ESP,0x1c
TEST dword ptr [ESI + 0x60],0x4000000
JNZ 0x0047a036
PUSH EBP
PUSH EDI
PUSH ESI
CALL 0x004774f0
ADD ESP,0xc
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x0047a053
MOV dword ptr [ESP + 0x10],0x40000000
MOV EBP,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x60]
MOV EDX,EAX
AND EDX,0xf
CMP DL,0x2
JNZ 0x0047a0d3
TEST AL,0x20
JNZ 0x0047a0d3
FILD dword ptr [ESI + 0x1998]
FSUB dword ptr [0x004adcd8]
FMUL dword ptr [0x004adcdc]
FCOM qword ptr [0x004adde0]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047a0d1
FCOMP qword ptr [0x004adc90]
FNSTSW AX
TEST AH,0x41
JZ 0x0047a0d3
LEA EAX,[ESP + 0x90]
PUSH 0x0
LEA ECX,[ESI + 0xac]
PUSH EAX
PUSH ECX
CALL 0x0044eeb0
FILD dword ptr [ESI + 0x1998]
FLD dword ptr [ESP + 0xd4]
FSUB dword ptr [EDI + 0x8]
FXCH
FSUB dword ptr [0x004adcd8]
ADD ESP,0xc
FMUL dword ptr [0x004adcdc]
FMULP
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [EDI + 0x8]
JMP 0x0047a0d3
FSTP ST0
TEST dword ptr [ESI + 0x64],0x800000
JNZ 0x0047a191
TEST byte ptr [ESI + 0x60],0x20
JZ 0x0047a177
MOV EDX,dword ptr [EDI]
MOV EAX,dword ptr [EDI + 0x4]
MOV ECX,dword ptr [EDI + 0x8]
MOV dword ptr [ESP + 0x14],EDX
MOV EDX,dword ptr [ESP + 0xdc]
MOV dword ptr [ESP + 0x18],EAX
PUSH EDX
PUSH EDI
PUSH ESI
MOV dword ptr [ESP + 0x28],ECX
CALL 0x00477940
FLD dword ptr [EDI]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FXCH ST2
FSUB dword ptr [ESP + 0x20]
FXCH
FSUB dword ptr [ESP + 0x24]
FXCH ST2
FSUB dword ptr [ESP + 0x28]
FLD dword ptr [ESI + 0x154]
FLD dword ptr [ESI + 0x158]
FLD dword ptr [ESI + 0x15c]
FXCH ST2
FADD ST0,ST4
FXCH ST5
FSTP dword ptr [ESP + 0x24]
ADD ESP,0xc
LEA EAX,[ESP + 0x14]
FADD dword ptr [ESP + 0x18]
FXCH ST2
FSTP dword ptr [ESP + 0x1c]
PUSH EBX
PUSH EAX
FADD dword ptr [ESP + 0x24]
FXCH ST3
FSTP dword ptr [ESP + 0x1c]
PUSH ESI
FSTP dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x28]
FSTP ST0
CALL 0x00479920
ADD ESP,0xc
JMP 0x0047a191
MOV EDX,dword ptr [ESI + 0x13c]
LEA ECX,[ESP + 0x44]
PUSH ECX
LEA EAX,[ESP + 0x24]
PUSH EDX
PUSH EAX
PUSH EDI
CALL 0x0044abc0
ADD ESP,0x10
FILD dword ptr [ESI + 0x1998]
FSUB dword ptr [0x004adc84]
FMUL dword ptr [0x004adc88]
FCOMP qword ptr [0x004adc90]
FNSTSW AX
TEST AH,0x1
JZ 0x0047a1cd
MOV ECX,dword ptr [ESP + 0xe4]
PUSH EBX
PUSH EBP
MOV EDX,dword ptr [ECX + 0x8]
PUSH EDX
PUSH EDI
PUSH ESI
CALL 0x00476740
FSTP dword ptr [ESP + 0x24]
ADD ESP,0x14
JMP 0x0047a1e4
LEA EAX,[ESI + 0x12c8]
MOV ECX,0x4
MOV dword ptr [EAX],0xc7c35000
ADD EAX,0x40
DEC ECX
JNZ 0x0047a1d8
MOV EAX,dword ptr [ESP + 0x10]
POP EDI
FLD dword ptr [ESP + 0xc]
MOV dword ptr [ESI + 0x184],EAX
POP ESI
POP EBP
POP EBX
ADD ESP,0xc0
RET
