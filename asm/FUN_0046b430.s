; FUN_0046b430
SUB ESP,0x60
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x6c]
LEA EAX,[ESP + 0x28]
PUSH EDI
LEA ECX,[ESP + 0x3c]
PUSH EAX
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH EDX
PUSH 0x4
PUSH ESI
LEA EAX,[ESI + 0x50]
PUSH 0x451c4000
PUSH EAX
PUSH 0x54657374
MOV dword ptr [ESP + 0x2c],0x3f800000
MOV dword ptr [ESI + 0x150],0x0
CALL 0x00450e70
MOV EDI,EAX
ADD ESP,0x20
TEST EDI,EDI
JLE 0x0046b598
LEA ECX,[ESP + 0x3c]
LEA EBX,[ESI + 0x30]
PUSH ECX
LEA EDX,[ESP + 0x14]
PUSH EBX
PUSH EDX
CALL 0x0042f9f0
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0xc
PUSH EAX
CALL 0x00480670
FLD dword ptr [0x004ad810]
FXCH
FSTP dword ptr [ESP + 0x74]
FSUB dword ptr [ESP + 0x74]
FLD dword ptr [ESI + 0x194]
FLD dword ptr [ESI + 0x19c]
FXCH ST2
FMUL dword ptr [0x004ad814]
FLD dword ptr [ESI + 0x198]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH
FST dword ptr [ESP + 0x74]
FMUL dword ptr [ESP + 0x74]
FXCH ST3
FMUL dword ptr [ESP + 0x1c]
FXCH ST3
FMUL dword ptr [0x004ad818]
FXCH ST3
FADDP
FXCH
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [0x004ad81c]
FXCH ST2
FADDP
ADD ESP,0x4
CMP EDI,0x1
FSTP dword ptr [ESP + 0x70]
JNZ 0x0046b547
MOV ECX,dword ptr [ESP + 0x2c]
TEST byte ptr [ECX + 0x60],0x20
JZ 0x0046b547
FLD dword ptr [ESI + 0x34]
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [EBX]
FLD dword ptr [ESI + 0x38]
FXCH ST2
FMUL dword ptr [ESP + 0x40]
FXCH ST2
FMUL dword ptr [ESP + 0x44]
FXCH ST2
FADDP
FXCH
FADDP
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b547
MOV dword ptr [ESP + 0xc],0xbf800000
FLD dword ptr [ESP + 0x70]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046b573
FLD dword ptr [ESP + 0xc]
FMUL ST1
FADD dword ptr [ESI + 0x1f0]
FSTP dword ptr [ESI + 0x1f0]
FSTP ST0
POP EDI
POP ESI
POP EBX
ADD ESP,0x60
RET
FLD dword ptr [ESP + 0x70]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x1
JZ 0x0046b596
FLD dword ptr [ESP + 0xc]
FMUL ST1
FSUBR dword ptr [ESI + 0x1f0]
FSTP dword ptr [ESI + 0x1f0]
FSTP ST0
POP EDI
POP ESI
POP EBX
ADD ESP,0x60
RET
