; FUN_00476390
SUB ESP,0x18
PUSH EBX
MOV EBX,dword ptr [ESP + 0x2c]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x24]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x30]
MOV dword ptr [EBX],0x0
MOV dword ptr [EBX + 0x8],0x0
FLD dword ptr [EDI + 0x4]
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [EDI + 0x8]
FMUL dword ptr [ESI + 0x8]
PUSH ECX
FADDP
FLD dword ptr [ESI]
FMUL dword ptr [EDI]
FADDP
FSTP dword ptr [ESP]
CALL 0x0042f540
FSUB dword ptr [0x004adc40]
ADD ESP,0x4
LEA EAX,[ESP + 0xc]
PUSH ESI
PUSH EDI
FSTP dword ptr [EBX + 0x4]
PUSH EAX
CALL 0x0042f9f0
MOV EDI,dword ptr [ESP + 0x38]
ADD ESP,0xc
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP + 0x18]
PUSH ECX
PUSH EDI
PUSH EDX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EAX,[ESP + 0xc]
PUSH EAX
CALL 0x0042f8c0
FCOM dword ptr [0x004adc44]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x00476497
FLD dword ptr [EDI + 0x4]
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [EDI]
FLD dword ptr [EDI + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH ST2
FADDP
FXCH
PUSH ECX
FADDP
FDIV ST0,ST1
FSTP dword ptr [ESP]
FSTP ST0
CALL 0x0042f540
FLD dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESI + 0x8]
FXCH ST2
FMUL dword ptr [ESI]
FXCH ST2
FADDP
FXCH ST2
FSTP dword ptr [ESP + 0x38]
ADD ESP,0x4
FADDP
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x00476489
FLD dword ptr [ESP + 0x34]
FCHS
FSTP dword ptr [EBX + 0x8]
POP EDI
POP ESI
POP EBX
ADD ESP,0x18
RET
MOV ECX,dword ptr [ESP + 0x34]
MOV dword ptr [EBX + 0x8],ECX
POP EDI
POP ESI
POP EBX
ADD ESP,0x18
RET
POP EDI
POP ESI
FSTP ST0
POP EBX
ADD ESP,0x18
RET