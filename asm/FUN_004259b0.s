; FUN_004259b0
MOV ECX,dword ptr [ESP + 0x10]
PUSH EBX
FLD dword ptr [ESP + 0x10]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
PUSH EDI
LEA EDI,[ECX*0x4 + 0x4]
MOV EDX,dword ptr [ESI + 0x11c]
FCOMP dword ptr [EDX + EDI*0x1]
FNSTSW AX
TEST AH,0x41
JNZ 0x004259e9
MOV EAX,dword ptr [ESI + 0x120]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EAX + EDI*0x1]
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBX
RET
FLD dword ptr [ESP + 0x18]
LEA EBX,[ECX*0x4 + 0x0]
FCOMP dword ptr [EBX + EDX*0x1]
FNSTSW AX
TEST AH,0x41
JZ 0x00425a11
MOV EAX,dword ptr [ESI + 0x120]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EAX + EBX*0x1]
MOV dword ptr [EDX],ECX
POP EDI
POP ESI
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x18]
PUSH ECX
PUSH EAX
PUSH ESI
CALL 0x00425980
MOV ESI,dword ptr [ESI + 0x120]
MOV ECX,dword ptr [ESP + 0x1c]
FLD dword ptr [0x004ac450]
FLD dword ptr [EBX + ESI*0x1]
FXCH ST2
FSTP dword ptr [ESP + 0x24]
FSUB dword ptr [ESP + 0x24]
FLD dword ptr [ESI + EDI*0x1]
FXCH ST2
FSTP dword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [ESP + 0x24]
FXCH
FMUL dword ptr [ESP + 0x28]
ADD ESP,0xc
FADDP
POP EDI
POP ESI
POP EBX
FSTP dword ptr [ECX]
RET
