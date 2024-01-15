; FUN_0047a3a0
SUB ESP,0x38
PUSH ESI
MOV ESI,dword ptr [ESP + 0x40]
PUSH EDI
MOV dword ptr [ESP + 0x8],0x3f800000
MOV ECX,dword ptr [ESI + 0x64]
TEST CL,0x10
JZ 0x0047a438
FLD dword ptr [ESI + 0x1fc]
FCOMP dword ptr [0x004adc48]
FLD qword ptr [0x00e22a40]
MOV dword ptr [ESI + 0x24c],0x3e800000
FNSTSW AX
TEST AH,0x41
JNZ 0x0047a403
FMUL dword ptr [0x004add5c]
FSUBR dword ptr [ESI + 0x1fc]
FSTP dword ptr [ESI + 0x1fc]
FLD dword ptr [ESI + 0x1fc]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x0047a438
JMP 0x0047a428
FMUL dword ptr [0x004addf0]
FSUBR dword ptr [ESI + 0x1fc]
FSTP dword ptr [ESI + 0x1fc]
FLD dword ptr [ESI + 0x1fc]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047a438
AND ECX,0xffffffef
MOV dword ptr [ESI + 0x1fc],0x0
MOV dword ptr [ESI + 0x64],ECX
LEA EAX,[ESP + 0xc]
LEA ECX,[ESP + 0x28]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x4c]
LEA EDX,[ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH 0x1
PUSH 0x0
PUSH 0x45afc800
PUSH EAX
PUSH 0x536d6f6b
CALL 0x00450e70
ADD ESP,0x20
TEST EAX,EAX
JLE 0x0047a605
MOV ECX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [ESP + 0xc]
PUSH ECX
CALL 0x00480670
MOV EAX,dword ptr [EDI + 0x60]
ADD ESP,0x4
FSTP dword ptr [ESP + 0x44]
DEC EAX
JZ 0x0047a510
DEC EAX
JNZ 0x0047a605
FLD dword ptr [EDI + 0x68]
FCOMP dword ptr [0x004adc9c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047a605
FLD dword ptr [ESP + 0x44]
FCOMP dword ptr [0x004adcf0]
MOV dword ptr [ESP + 0x8],0xbf800000
FNSTSW AX
TEST AH,0x1
JZ 0x0047a510
CALL 0x004816b0
MOV dword ptr [ESP + 0x48],EAX
FILD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004add18]
FCOMP qword ptr [0x004addf8]
FNSTSW AX
TEST AH,0x1
JZ 0x0047a510
CALL 0x004816b0
MOV dword ptr [ESP + 0x48],EAX
FILD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004add18]
FMUL dword ptr [0x004ade00]
FSUB dword ptr [0x004add48]
CALL 0x0049ed20
CMP EAX,0x5
JLE 0x0047a508
XOR EAX,EAX
OR dword ptr [ESI + EAX*0x4 + 0x2a0],0x8
FLD dword ptr [0x004adcb0]
FSUB dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [0x004adc48]
FXCH ST2
FMUL dword ptr [0x004ade04]
FLD dword ptr [ESP + 0x2c]
FXCH
FMUL dword ptr [ESI + 0x74]
FXCH ST2
FCHS
FXCH ST3
FSTP dword ptr [ESP + 0x24]
FXCH
FSTP dword ptr [ESP + 0x44]
LEA EDX,[ESP + 0x1c]
FSTP dword ptr [ESP + 0x1c]
PUSH EDX
FSTP dword ptr [ESP + 0x24]
CALL 0x0042f9b0
FCOMP dword ptr [0x004adcbc]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x0047a56f
FLD dword ptr [0x004adc50]
JMP 0x0047a596
FLD dword ptr [ESI + 0x24]
FLD dword ptr [ESI + 0x20]
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESI + 0x28]
FXCH ST2
FMUL dword ptr [ESP + 0x20]
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
FADDP
FCHS
FMUL dword ptr [ESP + 0x44]
MOV EAX,dword ptr [ESI + 0x64]
TEST AL,0x10
JZ 0x0047a5ea
FCOM dword ptr [0x004adc48]
FLD ST0
FNSTSW AX
TEST AH,0x1
JZ 0x0047a5ae
FCHS
FLD dword ptr [ESI + 0x1fc]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x1fc]
FNSTSW AX
TEST AH,0x1
JZ 0x0047a5c9
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0047a603
FLD dword ptr [ESP + 0x8]
FMUL ST1
FSTP dword ptr [ESI + 0x1fc]
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x38
RET
FLD dword ptr [ESP + 0x8]
FMUL ST1
OR AL,0x10
MOV dword ptr [ESI + 0x64],EAX
FSTP dword ptr [ESI + 0x1fc]
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x38
RET
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x38
RET
