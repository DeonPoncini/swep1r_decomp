; FUN_00442550
MOV ECX,dword ptr [ESP + 0x14]
SUB ESP,0x30
FLD dword ptr [ECX + 0x14]
FLD dword ptr [ECX + 0x10]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x40]
PUSH EDI
XOR EDI,EDI
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ECX + 0xc]
FXCH ST2
FMUL dword ptr [ESI + 0x8]
FXCH ST2
FMUL dword ptr [ESI]
FXCH ST2
FADDP
FXCH
FADDP
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044259f
MOV EAX,[0x0050c5cc]
TEST EAX,EAX
JZ 0x0044270c
MOV EDI,0x1
JMP 0x004425ac
MOV EAX,[0x004c1774]
TEST EAX,EAX
JZ 0x0044270c
LEA EAX,[ESP + 0x10]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00442470
FST dword ptr [ESP + 0x60]
FCOMP dword ptr [0x004aca50]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JNZ 0x0044270c
FLD dword ptr [ESP + 0x54]
FCOMP dword ptr [0x00e98258]
FNSTSW AX
TEST AH,0x1
JZ 0x0044270c
MOV EAX,dword ptr [ESP + 0x4c]
MOV ECX,dword ptr [ESP + 0x50]
MOV EDX,dword ptr [ESP + 0x48]
LEA EBX,[ESP + 0x34]
FLD dword ptr [EAX]
FLD dword ptr [ECX]
FLD dword ptr [EDX]
FXCH ST2
FSUB dword ptr [EDX]
FLD dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [EDX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EDX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x20]
FXCH ST2
FSUB dword ptr [EDX + 0x8]
FXCH ST3
FSUB dword ptr [EAX]
FLD dword ptr [ECX + 0x4]
FXCH ST4
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ECX + 0x8]
FXCH
FSTP dword ptr [ESP + 0x28]
FXCH ST3
FSUB dword ptr [EAX + 0x4]
FXCH ST3
FSUB dword ptr [EAX + 0x8]
FXCH ST4
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX + 0x4]
FXCH ST2
FSUB dword ptr [ECX + 0x8]
FXCH ST3
FSTP dword ptr [ESP + 0x2c]
FXCH ST3
FSTP dword ptr [ESP + 0x30]
LEA EBP,[ESP + 0x28]
PUSH EBX
FXCH ST2
FSTP dword ptr [ESP + 0x38]
LEA EBX,[ESP + 0x20]
PUSH EBP
PUSH EBX
PUSH ECX
FXCH
FSTP dword ptr [ESP + 0x48]
PUSH EAX
LEA ECX,[ESP + 0x24]
FSTP dword ptr [ESP + 0x50]
PUSH EDX
PUSH ECX
CALL 0x00441040
ADD ESP,0x1c
TEST EAX,EAX
JZ 0x0044270c
MOV EDX,dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [0x00e98258],EDX
MOV EDX,dword ptr [ESP + 0x18]
MOV [0x00e98e60],EAX
MOV EAX,[0x00e98284]
MOV dword ptr [0x00e98250],0x1
TEST EDI,EDI
MOV dword ptr [0x00e98e64],ECX
MOV dword ptr [0x00e98e68],EDX
MOV [0x00e98254],EAX
JZ 0x004426f3
FLD dword ptr [ESI]
FCHS
FSTP dword ptr [0x00e98290]
FLD dword ptr [ESI + 0x4]
FCHS
FSTP dword ptr [0x00e98294]
FLD dword ptr [ESI + 0x8]
FCHS
FSTP dword ptr [0x00e98298]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x30
RET
MOV ECX,dword ptr [ESI]
MOV dword ptr [0x00e98290],ECX
MOV EDX,dword ptr [ESI + 0x4]
MOV dword ptr [0x00e98294],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV [0x00e98298],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x30
RET
