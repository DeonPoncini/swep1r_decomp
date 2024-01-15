; FUN_00493b80
SUB ESP,0xc
PUSH EBX
MOV EBX,dword ptr [ESP + 0x1c]
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x20]
PUSH EDI
MOV EAX,dword ptr [ESI + 0x14]
MOV [0x00df7f80],EAX
MOV ECX,dword ptr [EBX + 0x14]
MOV dword ptr [0x00df7f7c],ECX
MOV EAX,dword ptr [ESI + 0x18]
XOR ECX,ECX
CMP EAX,ECX
JZ 0x00493d87
MOV [0x00df7f78],EAX
MOV EAX,dword ptr [ESI]
XOR EDI,EDI
CMP EAX,ECX
MOV dword ptr [ESP + 0x14],EDI
JBE 0x00493d87
MOV dword ptr [ESP + 0x24],ECX
MOV EDX,dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [EDX + EDI*0x4]
MOV EAX,dword ptr [EAX + EDI*0x4]
MOV dword ptr [ESP + 0x18],EDX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00df7f80]
SHL EDX,0x4
FLD dword ptr [EAX + EDX*0x1]
MOV EAX,[0x00df7f78]
FADD dword ptr [EAX + ECX*0x1]
FCOM dword ptr [0x004af968]
FNSTSW AX
TEST AH,0x1
JNZ 0x00493c11
FCOM dword ptr [0x004af96c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493c19
FSTP ST0
FLD dword ptr [0x004af96c]
JMP 0x00493c19
FSTP ST0
FLD dword ptr [0x004af968]
MOV EAX,[0x00df7f7c]
SHL EDI,0x3
FSTP dword ptr [EAX + ECX*0x1]
MOV EAX,dword ptr [ESI + 0x10]
MOV EBP,EDI
ADD EBP,dword ptr [EBX + 0x10]
MOV EBX,dword ptr [ESP + 0x10]
MOV EBX,dword ptr [EAX + EBX*0x8]
MOV dword ptr [EBP],EBX
MOV EBX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
MOV dword ptr [EBP + 0x4],EAX
MOV EAX,[0x00df7f80]
FLD dword ptr [EAX + EDX*0x1 + 0x4]
MOV EAX,[0x00df7f78]
FADD dword ptr [EAX + ECX*0x1 + 0x4]
FCOM dword ptr [0x004af968]
FNSTSW AX
TEST AH,0x1
JNZ 0x00493c77
FCOM dword ptr [0x004af96c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493c7f
FSTP ST0
FLD dword ptr [0x004af96c]
JMP 0x00493c7f
FSTP ST0
FLD dword ptr [0x004af968]
MOV EAX,[0x00df7f7c]
MOV EBP,dword ptr [ESP + 0x24]
FSTP dword ptr [EAX + ECX*0x1 + 0x4]
MOV EAX,dword ptr [ESP + 0x18]
MOV EBX,dword ptr [ESI + 0xc]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EBX + EAX*0x4]
MOV EBX,dword ptr [ESP + 0x28]
MOV EBX,dword ptr [EBX + 0xc]
ADD EBX,EBP
MOV EBP,dword ptr [EAX]
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EAX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EBX + 0x8],EAX
MOV EAX,[0x00df7f80]
FLD dword ptr [EAX + EDX*0x1 + 0x8]
MOV EAX,[0x00df7f78]
FADD dword ptr [EAX + ECX*0x1 + 0x8]
FCOM dword ptr [0x004af968]
FNSTSW AX
TEST AH,0x1
JNZ 0x00493ce8
FCOM dword ptr [0x004af96c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493cf0
FSTP ST0
FLD dword ptr [0x004af96c]
JMP 0x00493cf0
FSTP ST0
FLD dword ptr [0x004af968]
MOV EAX,[0x00df7f7c]
MOV EBX,dword ptr [ESP + 0x28]
MOV EBP,dword ptr [ESP + 0x2c]
FSTP dword ptr [EAX + ECX*0x1 + 0x8]
MOV EAX,dword ptr [EBX + 0x10]
FLD dword ptr [EBP]
FADD dword ptr [EAX + EDI*0x1]
ADD EAX,EDI
FSTP dword ptr [EAX]
MOV EAX,dword ptr [EBX + 0x10]
FLD dword ptr [EDI + EAX*0x1 + 0x4]
FADD dword ptr [EBP + 0x4]
LEA EDI,[EDI + EAX*0x1 + 0x4]
FSTP dword ptr [EDI]
MOV EAX,[0x00df7f80]
FLD dword ptr [EAX + EDX*0x1 + 0xc]
MOV EDX,dword ptr [0x00df7f78]
FADD dword ptr [EDX + ECX*0x1 + 0xc]
FCOM dword ptr [0x004af968]
FNSTSW AX
TEST AH,0x1
JNZ 0x00493d55
FCOM dword ptr [0x004af96c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00493d5d
FSTP ST0
FLD dword ptr [0x004af96c]
JMP 0x00493d5d
FSTP ST0
FLD dword ptr [0x004af968]
MOV EAX,[0x00df7f7c]
MOV EDI,dword ptr [ESP + 0x14]
MOV EBP,dword ptr [ESP + 0x24]
INC EDI
FSTP dword ptr [EAX + ECX*0x1 + 0xc]
MOV EAX,dword ptr [ESI]
ADD EBP,0xc
ADD ECX,0x10
CMP EDI,EAX
MOV dword ptr [ESP + 0x14],EDI
MOV dword ptr [ESP + 0x24],EBP
JC 0x00493bc6
MOV ECX,dword ptr [0x00df7f2c]
CMP dword ptr [ECX],0x1
JNZ 0x00493dbb
MOV EDI,dword ptr [ESP + 0x20]
PUSH ESI
PUSH EDI
CALL 0x0049c810
ADD ESP,0x8
MOV dword ptr [EBX],EAX
TEST EAX,EAX
JBE 0x00493ddb
PUSH EBX
PUSH ESI
PUSH EDI
CALL 0x0049c9f0
ADD ESP,0xc
MOV dword ptr [EBX],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
MOV EDX,dword ptr [ESI]
MOV EAX,[0x00df7f7c]
MOV ECX,dword ptr [EBX + 0x10]
PUSH EDX
MOV EDX,dword ptr [EBX + 0xc]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x28]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0049b7d0
ADD ESP,0x14
MOV dword ptr [EBX],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
