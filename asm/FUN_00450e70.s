; FUN_00450e70
SUB ESP,0x1c
MOV ECX,dword ptr [0x004bfec0]
PUSH EDI
XOR EDX,EDX
MOV dword ptr [ESP + 0xc],ECX
MOV EDI,dword ptr [ECX]
MOV dword ptr [ESP + 0x4],EDX
TEST EDI,EDI
MOV dword ptr [ESP + 0x10],EDI
JZ 0x00451015
PUSH ESI
PUSH EBP
PUSH EBX
MOV EBX,dword ptr [ESP + 0x44]
MOV EAX,dword ptr [ESP + 0x30]
MOV ESI,dword ptr [EDI]
CMP ESI,EAX
JZ 0x00450eae
CMP EAX,0x416c6c21
JNZ 0x00450ffc
TEST byte ptr [EDI + 0x4],0x1
JZ 0x00450ffc
MOV EAX,dword ptr [EDI + 0x8]
MOV EBP,dword ptr [EDI + 0x10]
TEST EAX,EAX
MOV dword ptr [ESP + 0x14],0x0
JLE 0x00450ffc
MOV AX,word ptr [EBP + 0x6]
AND EAX,0x100
TEST AX,AX
JNZ 0x00450fdf
CMP EBP,dword ptr [ESP + 0x3c]
JZ 0x00450fdf
FLD dword ptr [EBP + 0x54]
MOV EAX,dword ptr [ESP + 0x34]
FLD dword ptr [EBP + 0x50]
FSUB dword ptr [EAX]
FXCH
FSUB dword ptr [EAX + 0x4]
FLD dword ptr [EBP + 0x58]
FSUB dword ptr [EAX + 0x8]
FXCH
FLD ST2
FXCH
FST dword ptr [ESP + 0x24]
FXCH
FMUL ST3
FXCH ST2
FSTP dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x28]
FXCH
FADDP ST2,ST0
FADDP
FCOM dword ptr [ESP + 0x38]
FNSTSW AX
TEST AH,0x1
JZ 0x00450fdb
XOR ESI,ESI
TEST EDX,EDX
JLE 0x00450f4f
MOV ECX,EBX
FCOM dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00450f4f
INC ESI
ADD ECX,0x4
CMP ESI,EDX
JL 0x00450f3e
MOV ECX,dword ptr [ESP + 0x40]
CMP ESI,ECX
JGE 0x00450fdb
CMP EDX,ECX
JGE 0x00450f68
MOV ECX,EDX
INC EDX
MOV dword ptr [ESP + 0x10],EDX
JMP 0x00450f69
DEC ECX
CMP ECX,ESI
JLE 0x00450fb4
MOV EAX,dword ptr [ESP + 0x48]
MOV EDI,dword ptr [ESP + 0x4c]
LEA EDX,[ECX + ECX*0x2]
SUB EDI,EBX
LEA EAX,[EAX + EDX*0x4]
LEA EDX,[EBX + ECX*0x4]
SUB ECX,ESI
MOV EBX,dword ptr [EDI + EDX*0x1 + -0x4]
ADD EAX,-0xc
MOV dword ptr [EDI + EDX*0x1],EBX
MOV EBX,dword ptr [EDX + -0x4]
MOV dword ptr [EDX],EBX
MOV EBX,dword ptr [EAX]
MOV dword ptr [EAX + 0xc],EBX
MOV EBX,dword ptr [EAX + 0x4]
MOV dword ptr [EAX + 0x10],EBX
MOV EBX,dword ptr [EAX + 0x8]
MOV dword ptr [EAX + 0x14],EBX
ADD EDX,-0x4
DEC ECX
JNZ 0x00450f82
MOV EBX,dword ptr [ESP + 0x44]
MOV EDI,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x4c]
LEA EAX,[ESI + ESI*0x2]
FSTP dword ptr [EBX + ESI*0x4]
MOV dword ptr [ECX + ESI*0x4],EBP
MOV ECX,dword ptr [ESP + 0x48]
FSTP dword ptr [ECX + EAX*0x4]
LEA EAX,[ECX + EAX*0x4]
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [EAX + 0x4],ECX
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [EAX + 0x8],ECX
JMP 0x00450fdf
FSTP ST0
FSTP ST0
MOV EAX,dword ptr [EDI + 0xc]
MOV ECX,dword ptr [EDI + 0x8]
ADD EBP,EAX
MOV EAX,dword ptr [ESP + 0x14]
INC EAX
CMP EAX,ECX
MOV dword ptr [ESP + 0x14],EAX
JL 0x00450ece
MOV ECX,dword ptr [ESP + 0x18]
MOV EDI,dword ptr [ECX + 0x4]
ADD ECX,0x4
TEST EDI,EDI
MOV dword ptr [ESP + 0x18],ECX
MOV dword ptr [ESP + 0x1c],EDI
JNZ 0x00450e99
POP EBX
POP EBP
POP ESI
MOV EAX,EDX
POP EDI
ADD ESP,0x1c
RET
