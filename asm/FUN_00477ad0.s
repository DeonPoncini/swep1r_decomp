; FUN_00477ad0
PUSH ECX
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
MOV EBP,0x400
PUSH EDI
FLD dword ptr [ESI + 0xa4]
FADD ST0,ST0
FLD dword ptr [ESI + 0x94]
FXCH
FADD dword ptr [ESI + 0x94]
FXCH
FMUL dword ptr [0x004add20]
FXCH
FMUL dword ptr [0x004adc5c]
FXCH
FSTP dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x64]
MOV EDI,dword ptr [ESP + 0x24]
FSTP dword ptr [ESP + 0x18]
TEST EBP,EAX
JNZ 0x00477b25
FLD dword ptr [EDI + 0x8]
FSUB dword ptr [ESI + 0x200]
FSTP dword ptr [EDI + 0x8]
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EAX
PUSH ECX
LEA EAX,[ESI + 0x194]
PUSH EDX
LEA ECX,[ESI + 0x20]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x30]
LEA EDX,[ESI + 0x30]
PUSH ECX
PUSH EDX
PUSH EAX
PUSH ESI
CALL 0x004764e0
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0x24
TEST EBP,EAX
JNZ 0x00477c19
FLD dword ptr [ESI + 0x200]
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [EDI + 0x8]
TEST dword ptr [ESI + 0x64],EBP
JNZ 0x00477c19
MOV AL,byte ptr [ESI + 0x60]
MOV ECX,dword ptr [ESI + 0x200]
LEA EBX,[ESI + 0x200]
MOV dword ptr [ESP + 0x24],ECX
TEST AL,0x80
MOV dword ptr [ESP + 0x18],0x43960000
JNZ 0x00477b99
MOV dword ptr [ESP + 0x18],0x428c0000
MOV EDX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESI + 0x74]
MOV ECX,dword ptr [ESI + 0x1f0]
PUSH EDX
MOV EDX,dword ptr [ESI + 0x1ec]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH EBX
CALL 0x0044af50
FLD dword ptr [EBX]
FSUB dword ptr [ESP + 0x38]
ADD ESP,0x14
FMUL dword ptr [0x004adcc0]
FSUBR dword ptr [EDI + 0x8]
FSTP dword ptr [EDI + 0x8]
TEST dword ptr [ESI + 0x64],EBP
JNZ 0x00477c19
FLD dword ptr [ESI + 0x208]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x40
JNZ 0x00477c19
FLD dword ptr [ESI + 0x208]
FCOMP dword ptr [0x004adc48]
FLD dword ptr [ESI + 0x208]
FMUL dword ptr [0x004add34]
FLD dword ptr [ESI + 0x208]
FNSTSW AX
TEST AH,0x1
JZ 0x00477c0a
FCHS
FXCH
FSUB dword ptr [EDI + 0x8]
FMUL ST1
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [EDI + 0x8]
FSTP ST0
MOV EAX,dword ptr [EDI + 0x8]
POP EDI
MOV dword ptr [ESI + 0x204],EAX
POP ESI
POP EBP
POP EBX
POP ECX
RET
