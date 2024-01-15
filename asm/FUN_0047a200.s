; FUN_0047a200
SUB ESP,0x64
PUSH ESI
MOV ESI,dword ptr [ESP + 0x6c]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x74]
FILD dword ptr [ESI + 0x1998]
FLD dword ptr [EDI]
FLD dword ptr [0x004adc48]
FXCH ST2
FSUB dword ptr [0x004adcd8]
FLD dword ptr [EDI + 0x4]
FXCH
FMUL dword ptr [0x004adcdc]
FLD dword ptr [EDI + 0x8]
FXCH
FCOMP qword ptr [0x004adc90]
FXCH ST2
FSTP dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESI + 0x64]
FSTP dword ptr [ESP + 0x18]
AND AH,0xfd
FSTP dword ptr [ESP + 0x1c]
MOV dword ptr [ESI + 0x64],EAX
MOV ECX,EAX
FSTP dword ptr [ESP + 0x70]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047a2d3
MOV EAX,dword ptr [ESI + 0x60]
TEST AL,0x20
JNZ 0x0047a2d3
TEST ECX,0x4000000
JNZ 0x0047a2d3
AND EAX,0xf
CMP AL,0x2
JZ 0x0047a27c
MOV dword ptr [EDI + 0x8],0x0
JMP 0x0047a299
LEA EAX,[ESP + 0x2c]
PUSH 0x0
LEA ECX,[ESI + 0xac]
PUSH EAX
PUSH ECX
CALL 0x0044eeb0
MOV EDX,dword ptr [ESP + 0x70]
ADD ESP,0xc
MOV dword ptr [EDI + 0x8],EDX
MOV EAX,dword ptr [ESP + 0x7c]
FLD dword ptr [0x004adc9c]
MOV dword ptr [EAX],0x0
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX + 0x8],0x3f800000
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xf
CMP AL,0x2
JNZ 0x0047a397
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x2
MOV dword ptr [ESI + 0x64],EAX
POP EDI
POP ESI
ADD ESP,0x64
RET
TEST byte ptr [ESI + 0x60],0x20
JZ 0x0047a376
MOV ECX,dword ptr [EDI]
MOV EDX,dword ptr [EDI + 0x4]
MOV EAX,dword ptr [EDI + 0x8]
MOV dword ptr [ESP + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x78]
MOV dword ptr [ESP + 0xc],EDX
PUSH ECX
PUSH EDI
PUSH ESI
MOV dword ptr [ESP + 0x1c],EAX
CALL 0x00477940
FLD dword ptr [EDI]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0x8]
FXCH ST2
FSUB dword ptr [ESP + 0x14]
FXCH
FSUB dword ptr [ESP + 0x18]
FXCH ST2
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [ESI + 0x154]
FLD dword ptr [ESI + 0x158]
FLD dword ptr [ESI + 0x15c]
FXCH ST2
FADD ST0,ST4
FXCH ST5
FSTP dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x88]
ADD ESP,0xc
FADD dword ptr [ESP + 0xc]
FXCH ST2
FSTP dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x8]
PUSH EAX
FADD dword ptr [ESP + 0x14]
FXCH ST3
FSTP dword ptr [ESP + 0xc]
PUSH EDX
PUSH ESI
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x1c]
FSTP ST0
CALL 0x00479920
FLD dword ptr [ESP + 0x7c]
ADD ESP,0xc
POP EDI
POP ESI
ADD ESP,0x64
RET
MOV EDX,dword ptr [ESI + 0x13c]
LEA ECX,[ESP + 0x20]
PUSH ECX
LEA EAX,[ESP + 0x18]
PUSH EDX
PUSH EAX
PUSH EDI
CALL 0x0044abc0
FLD dword ptr [ESP + 0x80]
ADD ESP,0x10
POP EDI
POP ESI
ADD ESP,0x64
RET
