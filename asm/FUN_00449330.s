; FUN_00449330
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
FLD dword ptr [EDI]
FSTP dword ptr [ESI]
FLD dword ptr [EDI + 0x4]
FMUL dword ptr [0x004acaa0]
FSTP dword ptr [ESI + 0x4]
MOV EAX,dword ptr [EDI + 0xc]
PUSH EAX
CALL 0x00480670
FMUL dword ptr [0x004acaa4]
FSUBR dword ptr [0x004acaa8]
FSTP dword ptr [ESI + 0x8]
FLD dword ptr [EDI + 0x10]
FSUB dword ptr [0x004acaac]
FMUL dword ptr [0x004acab0]
FSTP dword ptr [ESI + 0xc]
FLD dword ptr [EDI + 0x14]
FMUL dword ptr [0x004acab4]
FSTP dword ptr [ESP]
CALL 0x00480670
FDIVR dword ptr [0x004acab8]
ADD ESP,0x4
MOV ECX,ESI
MOV EDX,0x7
FSUB dword ptr [0x004acabc]
FSTP dword ptr [ESI + 0x10]
FLD dword ptr [EDI + 0x24]
FMUL dword ptr [0x004acac0]
FSTP dword ptr [ESI + 0x14]
FLD dword ptr [EDI + 0x2c]
FSTP dword ptr [ESI + 0x18]
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac4]
FNSTSW AX
TEST AH,0x1
JZ 0x004493c5
MOV dword ptr [ECX],0x3d4ccccd
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x41
JNZ 0x004493da
MOV dword ptr [ECX],0x3f800000
ADD ECX,0x4
DEC EDX
JNZ 0x004493b0
POP EDI
POP ESI
RET
