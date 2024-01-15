; FUN_00481100
MOV ECX,dword ptr [ESP + 0xc]
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
XOR EBX,EBX
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x30],EBX
MOV dword ptr [ESI + 0x34],EBX
MOV dword ptr [ESI + 0x38],EBX
MOV dword ptr [ESI + 0x3c],0x3f800000
FLD dword ptr [ECX]
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FADD dword ptr [EAX]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EDI
FSTP dword ptr [ESI + 0x30]
FMUL dword ptr [ECX + 0x4]
FADD dword ptr [EAX + 0x4]
FSTP dword ptr [ESI + 0x34]
FMUL dword ptr [ECX + 0x8]
FADD dword ptr [EAX + 0x8]
FSTP dword ptr [ESI + 0x38]
FLD dword ptr [EDX + 0x4]
FLD dword ptr [ECX]
FMUL dword ptr [EDX]
FLD dword ptr [ECX + 0x8]
FXCH ST2
FMUL dword ptr [ECX + 0x4]
FXCH ST2
FMUL dword ptr [EDX + 0x8]
FXCH ST2
FADDP
FXCH
FADDP
FCOM dword ptr [0x004adfd0]
FNSTSW AX
TEST AH,0x1
JZ 0x004811b9
FCOMP dword ptr [0x004adfd4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004811bb
FLD dword ptr [ECX]
FMUL dword ptr [0x004adfcc]
LEA EDI,[ESI + 0x10]
FSTP dword ptr [EDI]
FLD dword ptr [ECX + 0x4]
FMUL dword ptr [0x004adfcc]
FSTP dword ptr [ESI + 0x14]
FLD dword ptr [ECX + 0x8]
FMUL dword ptr [0x004adfcc]
FSTP dword ptr [ESI + 0x18]
MOV EAX,dword ptr [EDX]
MOV dword ptr [ESI],EAX
MOV ECX,dword ptr [EDX + 0x4]
MOV dword ptr [ESI + 0x4],ECX
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ESI + 0x8],EDX
JMP 0x004811ec
FSTP ST0
FLD dword ptr [ECX]
FMUL dword ptr [0x004adfcc]
LEA EDI,[ESI + 0x10]
FSTP dword ptr [EDI]
FLD dword ptr [ECX + 0x4]
FMUL dword ptr [0x004adfcc]
FSTP dword ptr [ESI + 0x14]
FLD dword ptr [ECX + 0x8]
FMUL dword ptr [0x004adfcc]
MOV dword ptr [ESI],EBX
MOV dword ptr [ESI + 0x4],EBX
MOV dword ptr [ESI + 0x8],0x3f800000
FSTP dword ptr [ESI + 0x18]
LEA EBX,[ESI + 0x20]
PUSH EDI
PUSH ESI
PUSH EBX
CALL 0x0042f9f0
ADD ESP,0xc
PUSH EBX
PUSH EDI
PUSH ESI
CALL 0x0042f9f0
ADD ESP,0xc
PUSH ESI
CALL 0x0042f9b0
ADD ESP,0x4
FSTP ST0
PUSH EBX
CALL 0x0042f9b0
ADD ESP,0x4
FSTP ST0
POP EDI
POP ESI
POP EBX
RET
