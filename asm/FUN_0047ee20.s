; FUN_0047ee20
SUB ESP,0x3c
FLD dword ptr [0x004adf4c]
FDIV dword ptr [ESP + 0x44]
PUSH EBX
MOV EBX,dword ptr [ESP + 0x44]
PUSH EBP
PUSH ESI
LEA EAX,[ESP + 0x18]
PUSH EBX
PUSH EAX
FSTP dword ptr [ESP + 0x18]
CALL 0x0047e880
MOV ESI,EAX
MOV EAX,dword ptr [EBX + 0x4]
XOR EBP,EBP
ADD ESP,0x8
CMP EAX,EBP
MOV dword ptr [ESP + 0x4c],EBP
JLE 0x0047f04b
PUSH EDI
MOV dword ptr [ESP + 0x10],EBP
CALL 0x004270c0
MOV ECX,dword ptr [ESP + 0x50]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x10],ECX
MOV dword ptr [ESI + 0x2c],EBP
MOV EDX,dword ptr [EBX + 0xc]
XOR EDI,EDI
MOV dword ptr [ESP + 0x18],EDI
CMP word ptr [EAX + EDX*0x1],BP
JLE 0x0047f02b
MOV EDX,dword ptr [ESI + 0x2c]
AND EDX,0xfffffffe
CMP EDI,EBP
MOV dword ptr [ESI + 0x2c],EDX
MOV EAX,EDX
JZ 0x0047ee98
OR AL,0x1
MOV dword ptr [ESI + 0x2c],EAX
MOV ECX,dword ptr [ESI + 0x10]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA ECX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
LEA EDX,[EDI + ECX*0x2]
MOVSX ECX,word ptr [EAX + EDX*0x2 + 0x4]
MOV dword ptr [ESI + 0x14],ECX
CMP word ptr [EBX],0x1
JNZ 0x0047eeef
MOV dword ptr [ESI + 0x8],EBP
MOV ECX,dword ptr [ESP + 0x5c]
MOV EDX,dword ptr [ESP + 0x58]
MOV EAX,dword ptr [ESP + 0x54]
PUSH ECX
PUSH EDX
PUSH EAX
PUSH ESI
CALL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESI + 0x8]
ADD ESP,0x10
FST dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004adf4c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047eebc
JMP 0x0047f00a
MOV EDX,dword ptr [EBX + 0xc]
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
LEA ECX,[EAX + EAX*0x2]
CMP word ptr [EDX + ECX*0x4],0x0
JLE 0x0047f008
MOV EDX,dword ptr [ESI + 0x2c]
AND EDX,0xfffffffd
TEST EBP,EBP
MOV dword ptr [ESI + 0x2c],EDX
MOV EAX,EDX
JZ 0x0047ef1d
OR AL,0x2
MOV dword ptr [ESI + 0x2c],EAX
MOV ECX,dword ptr [ESI + 0x14]
MOV EDX,dword ptr [EBX + 0xc]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EAX,[EAX + EAX*0x2]
LEA ECX,[EBP + EAX*0x2]
MOVSX EAX,word ptr [EDX + ECX*0x2 + 0x4]
MOV ECX,dword ptr [ESI + 0x10]
MOV dword ptr [ESI + 0x18],EAX
CMP EAX,ECX
JZ 0x0047efeb
LEA ECX,[EAX*0x8 + 0x0]
XOR EDI,EDI
SUB ECX,EAX
LEA EAX,[ECX + ECX*0x2]
MOV ECX,dword ptr [EBX + 0xc]
CMP word ptr [ECX + EAX*0x4],DI
JLE 0x0047efe7
MOV EDX,dword ptr [ESI + 0x2c]
AND EDX,0xfffffffb
TEST EDI,EDI
MOV dword ptr [ESI + 0x2c],EDX
MOV EAX,EDX
JZ 0x0047ef73
OR AL,0x4
MOV dword ptr [ESI + 0x2c],EAX
MOV ECX,dword ptr [ESI + 0x18]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
MOV ECX,dword ptr [EBX + 0xc]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EDI + EDX*0x2]
MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x4]
MOV ECX,dword ptr [ESI + 0x14]
MOV dword ptr [ESI + 0x1c],EAX
CMP EAX,ECX
JZ 0x0047efca
MOV dword ptr [ESI + 0x8],0x0
MOV EDX,dword ptr [ESP + 0x5c]
MOV EAX,dword ptr [ESP + 0x58]
MOV ECX,dword ptr [ESP + 0x54]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH ESI
CALL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESI + 0x8]
ADD ESP,0x10
FST dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004adf4c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047ef9c
MOV ECX,dword ptr [ESI + 0x18]
INC EDI
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX ECX,word ptr [EAX + EDX*0x4]
CMP EDI,ECX
JL 0x0047ef5f
MOV EDI,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESI + 0x14]
INC EBP
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX ECX,word ptr [EAX + EDX*0x4]
CMP EBP,ECX
JL 0x0047ef09
XOR EBP,EBP
MOV ECX,dword ptr [ESI + 0x10]
INC EDI
MOV EAX,ECX
MOV dword ptr [ESP + 0x18],EDI
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX ECX,word ptr [EAX + EDX*0x4]
CMP EDI,ECX
JL 0x0047ee84
MOV EAX,dword ptr [ESP + 0x50]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EBX + 0x4]
INC EAX
ADD EDX,0x54
CMP EAX,ECX
MOV dword ptr [ESP + 0x50],EAX
MOV dword ptr [ESP + 0x10],EDX
JL 0x0047ee5e
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x3c
RET
