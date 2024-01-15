; FUN_00425a60
SUB ESP,0x18
FLD dword ptr [ESP + 0x24]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x2c]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [EDI + 0x11c]
FCOMP dword ptr [ECX + ESI*0x4 + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00425abb
MOV ECX,dword ptr [EDI + 0x120]
LEA EAX,[ESI + ESI*0x2 + 0x3]
MOV EDX,dword ptr [ECX + EAX*0x4]
MOV ECX,dword ptr [ESP + 0x24]
LEA EAX,[ESI + ESI*0x2]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EDI + 0x120]
SHL EAX,0x2
MOV EDX,dword ptr [EDX + EAX*0x1 + 0x10]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EDI + 0x120]
MOV EAX,dword ptr [EDX + EAX*0x1 + 0x14]
MOV dword ptr [ECX + 0x8],EAX
POP EDI
POP ESI
ADD ESP,0x18
RET
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [ECX + ESI*0x4]
FNSTSW AX
TEST AH,0x41
JZ 0x00425afe
MOV ECX,dword ptr [EDI + 0x120]
LEA EAX,[ESI + ESI*0x2]
SHL EAX,0x2
MOV EDX,dword ptr [ECX + EAX*0x1]
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EDI + 0x120]
MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EDI + 0x120]
MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
MOV dword ptr [ECX + 0x8],EAX
POP EDI
POP ESI
ADD ESP,0x18
RET
MOV ECX,dword ptr [ESP + 0x2c]
PUSH ESI
PUSH ECX
PUSH EDI
CALL 0x00425980
MOV EDI,dword ptr [EDI + 0x120]
LEA EDX,[ESI + ESI*0x2]
FLD dword ptr [0x004ac450]
FXCH
FSTP dword ptr [ESP + 0x38]
LEA EAX,[EDI + EDX*0x4]
LEA ECX,[ESI + ESI*0x2 + 0x3]
FSUB dword ptr [ESP + 0x38]
MOV EDX,dword ptr [EAX]
ADD ESP,0xc
FLD dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0xc],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x10],EDX
MOV EDX,dword ptr [EAX + 0x10]
FLD dword ptr [EDI + ECX*0x4]
FLD dword ptr [ESP + 0x2c]
FXCH ST2
MOV EAX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x18],EDX
FMUL dword ptr [ESP + 0x18]
FXCH ST2
MOV dword ptr [ESP + 0x1c],EAX
FMUL dword ptr [ESP + 0x1c]
FXCH
FMUL dword ptr [ESP + 0x2c]
FXCH ST2
MOV EAX,dword ptr [ESP + 0x24]
LEA ESI,[ESP + 0x8]
PUSH ESI
PUSH ECX
FSTP dword ptr [EAX + 0x4]
FSTP dword ptr [EAX + 0x8]
FSTP dword ptr [EAX]
FSTP dword ptr [ESP]
PUSH EAX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
POP EDI
POP ESI
ADD ESP,0x18
RET
