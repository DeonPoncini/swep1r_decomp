; FUN_0047f470
SUB ESP,0x38
XOR EAX,EAX
PUSH EBX
MOV EBX,dword ptr [ESP + 0x40]
PUSH EBP
XOR EBP,EBP
MOV ECX,dword ptr [EBX + 0x8]
PUSH ESI
CMP ECX,EBP
PUSH EDI
JLE 0x0047f4a8
MOV ECX,dword ptr [ESP + 0x54]
MOV EDX,0xe22a60
MOV word ptr [ECX],0xffff
MOV dword ptr [EDX],0xbf800000
MOV ESI,dword ptr [EBX + 0x8]
INC EAX
ADD ECX,0x2
ADD EDX,0x8
CMP EAX,ESI
JL 0x0047f48f
LEA EAX,[ESP + 0x18]
PUSH EBX
PUSH EAX
MOV dword ptr [ESP + 0x54],EBP
CALL 0x0047e880
MOV ESI,EAX
MOV EAX,dword ptr [EBX + 0x4]
ADD ESP,0x8
CMP EAX,EBP
MOV dword ptr [ESP + 0x14],EBP
JLE 0x0047f6a9
CALL 0x004270c0
MOV ECX,dword ptr [ESI]
PUSH 0x0
PUSH EBP
PUSH ECX
CALL 0x0044e5e0
ADD ESP,0xc
CMP EAX,-0x1
MOV dword ptr [ESI + 0x10],EAX
JZ 0x0047f699
MOV ECX,dword ptr [ESI + 0x10]
XOR EDI,EDI
MOV dword ptr [ESI + 0x2c],EDI
MOV dword ptr [ESP + 0x10],EDI
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
CMP word ptr [EAX + EDX*0x4],DI
JLE 0x0047f67c
MOV EBP,dword ptr [ESI + 0x2c]
AND EBP,0xfffffffe
TEST EDI,EDI
MOV dword ptr [ESI + 0x2c],EBP
MOV EAX,EBP
JZ 0x0047f523
OR AL,0x1
MOV dword ptr [ESI + 0x2c],EAX
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
LEA ECX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
LEA EDX,[EDI + ECX*0x2]
MOVSX ECX,word ptr [EAX + EDX*0x2 + 0x4]
MOV dword ptr [ESI + 0x14],ECX
CMP word ptr [EBX],0x1
JNZ 0x0047f560
MOV EDX,dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESP + 0x50]
LEA ECX,[ESP + 0x4c]
PUSH ECX
PUSH EDX
PUSH EAX
PUSH ESI
CALL 0x0047f450
ADD ESP,0x10
JMP 0x0047f655
MOV EDX,dword ptr [EBX + 0xc]
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
XOR EBP,EBP
LEA ECX,[EAX + EAX*0x2]
CMP word ptr [EDX + ECX*0x4],BP
JLE 0x0047f655
MOV EDX,dword ptr [ESI + 0x2c]
AND EDX,0xfffffffd
TEST EBP,EBP
MOV dword ptr [ESI + 0x2c],EDX
MOV EAX,EDX
JZ 0x0047f58f
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
JZ 0x0047f638
LEA ECX,[EAX*0x8 + 0x0]
XOR EDI,EDI
SUB ECX,EAX
LEA EAX,[ECX + ECX*0x2]
MOV ECX,dword ptr [EBX + 0xc]
CMP word ptr [ECX + EAX*0x4],DI
JLE 0x0047f634
MOV EDX,dword ptr [ESI + 0x2c]
AND EDX,0xfffffffb
TEST EDI,EDI
MOV dword ptr [ESI + 0x2c],EDX
MOV EAX,EDX
JZ 0x0047f5e1
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
JZ 0x0047f61b
MOV EAX,dword ptr [ESP + 0x54]
MOV ECX,dword ptr [ESP + 0x50]
LEA EDX,[ESP + 0x4c]
PUSH EDX
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x0047f450
ADD ESP,0x10
MOV ECX,dword ptr [ESI + 0x18]
INC EDI
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX ECX,word ptr [EAX + EDX*0x4]
CMP EDI,ECX
JL 0x0047f5cd
MOV EDI,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESI + 0x14]
INC EBP
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX ECX,word ptr [EAX + EDX*0x4]
CMP EBP,ECX
JL 0x0047f57b
MOV ECX,dword ptr [ESI + 0x10]
INC EDI
MOV dword ptr [ESP + 0x10],EDI
LEA EAX,[ECX*0x8 + 0x0]
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBX + 0xc]
MOVSX EDX,word ptr [EAX + EDX*0x4]
CMP EDI,EDX
JL 0x0047f50f
MOV EBP,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESI + 0x10]
MOV ECX,dword ptr [ESI]
INC EAX
PUSH EAX
PUSH EBP
PUSH ECX
CALL 0x0044e5e0
ADD ESP,0xc
CMP EAX,-0x1
MOV dword ptr [ESI + 0x10],EAX
JNZ 0x0047f4ea
MOV EAX,dword ptr [EBX + 0x4]
INC EBP
CMP EBP,EAX
MOV dword ptr [ESP + 0x14],EBP
JL 0x0047f4cb
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x38
RET
