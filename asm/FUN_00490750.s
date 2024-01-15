; FUN_00490750
MOV EAX,dword ptr [ESP + 0xc]
SUB ESP,0xc
XOR ECX,ECX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x30]
CMP EAX,ECX
MOV dword ptr [EBP],ECX
MOV dword ptr [EBP + 0x4],ECX
MOV dword ptr [EBP + 0x8],ECX
MOV dword ptr [EBP + 0xc],ECX
JBE 0x00490923
MOV ECX,dword ptr [ESP + 0x14]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x2c]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x20]
PUSH EBX
MOV dword ptr [ESP + 0x3c],ECX
MOV dword ptr [ESP + 0x28],EAX
MOV EDX,dword ptr [ESP + 0x3c]
MOV EBX,dword ptr [EDX]
MOV EAX,dword ptr [EBX + 0x8]
TEST EAX,EAX
JZ 0x00490903
MOV EAX,dword ptr [EBX + 0x4]
TEST EAX,EAX
JNZ 0x00490829
MOV EAX,ESI
LEA ECX,[ESP + 0x10]
PUSH ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ESP + 0x14],EDX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x18],ECX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x1c],EDX
CALL 0x00492440
MOV EAX,dword ptr [ESP + 0x34]
ADD ESP,0x4
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
FXCH
FSTP ST0
FCOM dword ptr [0x004af7d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00490901
FLD dword ptr [EBX + 0x18]
FMUL ST1
FADD dword ptr [EBP]
FSTP dword ptr [EBP]
FLD dword ptr [EBX + 0x1c]
FMUL ST1
FADD dword ptr [EBP + 0x4]
FSTP dword ptr [EBP + 0x4]
FLD dword ptr [EBX + 0x20]
FMUL ST1
FADD dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + 0x8]
JMP 0x00490901
CMP EAX,0x1
JNZ 0x00490903
MOV EAX,dword ptr [ESP + 0x2c]
FLD dword ptr [ESI]
MOV EAX,dword ptr [EAX + 0x14]
MOV ECX,dword ptr [EAX]
LEA ECX,[ECX + ECX*0x2]
FSUB dword ptr [EDI + ECX*0x4]
FSTP dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EAX]
FLD dword ptr [ESI + 0x4]
LEA EDX,[ECX + ECX*0x2]
FSUB dword ptr [EDI + EDX*0x4 + 0x4]
FSTP dword ptr [ESP + 0x14]
MOV ECX,dword ptr [EAX]
FLD dword ptr [ESI + 0x8]
LEA ECX,[ECX + ECX*0x2]
FSUB dword ptr [EDI + ECX*0x4 + 0x8]
MOV ECX,dword ptr [ESP + 0x30]
FSTP dword ptr [ESP + 0x18]
MOV EAX,dword ptr [EAX]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EDI + EDX*0x4]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x0048ec50
FST dword ptr [ESP + 0x30]
FCOMP dword ptr [EBX + 0x28]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JZ 0x00490903
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL 0x00492440
MOV EAX,dword ptr [ESP + 0x34]
ADD ESP,0x4
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH
FADDP
FXCH
FSTP ST0
FCOM dword ptr [0x004af7d0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00490901
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x38]
FLD dword ptr [EBX + 0x18]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EBP]
FSTP dword ptr [EBP]
FLD dword ptr [EBX + 0x1c]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EBP + 0x4]
FSTP dword ptr [EBP + 0x4]
FLD dword ptr [EBX + 0x20]
FSUB ST0,ST1
FMUL ST2
FADD dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + 0x8]
FSTP ST0
FSTP ST0
MOV EDX,dword ptr [ESP + 0x3c]
MOV EAX,dword ptr [ESP + 0x28]
ADD EDX,0x4
ADD ESI,0xc
DEC EAX
MOV dword ptr [ESP + 0x3c],EDX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x00490789
POP EBX
POP ESI
POP EDI
POP EBP
ADD ESP,0xc
RET
