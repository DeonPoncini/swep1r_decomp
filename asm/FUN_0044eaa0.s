; FUN_0044eaa0
CMP word ptr [ESP + 0x8],0x1
MOV ECX,dword ptr [ESP + 0xc]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
JNZ 0x0044eb73
MOV EAX,dword ptr [ECX + 0x20]
MOV EBP,dword ptr [ESP + 0x14]
TEST EAX,EAX
MOV dword ptr [ECX + 0x24],0x0
JNZ 0x0044eb3b
MOV BX,word ptr [EBP]
TEST BX,BX
JNZ 0x0044ead4
MOV EDX,dword ptr [ECX + 0x1c]
JMP 0x0044ead7
MOV EDX,dword ptr [ECX + 0x14]
MOV EAX,EDX
SHL EAX,0x3
SUB EAX,EDX
MOV EDX,dword ptr [EBP + 0xc]
LEA EAX,[EAX + EAX*0x2]
LEA ESI,[EDX + EAX*0x4]
MOV AX,word ptr [EDX + EAX*0x4]
TEST AX,AX
JNZ 0x0044eb03
OR EDX,0xffffffff
MOV dword ptr [ECX + 0x20],0x1
MOV dword ptr [ECX + 0x8],0x3f800000
JMP 0x0044eb3f
MOVSX EDI,AX
MOV EAX,dword ptr [ECX + 0x28]
CMP EAX,EDI
JGE 0x0044eb13
MOV DX,word ptr [ECX + 0x28]
JMP 0x0044eb16
CDQ
IDIV EDI
MOVSX EAX,DX
TEST BX,BX
MOVSX EDX,word ptr [ESI + EAX*0x2 + 0x4]
MOV ESI,dword ptr [ECX + 0x2c]
JNZ 0x0044eb32
SAR ESI,0x1
SHL EAX,0x2
OR ESI,EAX
MOV dword ptr [ECX + 0x2c],ESI
JMP 0x0044eb3f
SAR ESI,0x1
OR ESI,EAX
MOV dword ptr [ECX + 0x2c],ESI
JMP 0x0044eb3f
MOV EDX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ECX + 0x20]
TEST EAX,EAX
JNZ 0x0044ec30
MOV EAX,dword ptr [ECX + 0x14]
MOV dword ptr [ECX + 0x10],EAX
CMP word ptr [EBP],0x0
JNZ 0x0044eb6b
MOV EAX,dword ptr [ECX + 0x18]
MOV dword ptr [ECX + 0x14],EAX
MOV EAX,dword ptr [ECX + 0x1c]
MOV dword ptr [ECX + 0x18],EAX
MOV dword ptr [ECX + 0x1c],EDX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV dword ptr [ECX + 0x14],EDX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ECX + 0x24]
MOV EBP,dword ptr [ESP + 0x14]
XOR EBX,EBX
CMP EAX,EBX
MOV dword ptr [ECX + 0x20],EBX
JNZ 0x0044ec09
MOV EDI,dword ptr [ECX + 0x10]
LEA EAX,[EDI*0x8 + 0x0]
SUB EAX,EDI
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [EBP + 0xc]
LEA ESI,[EAX + EDX*0x4]
MOV AX,word ptr [EAX + EDX*0x4 + 0x2]
CMP AX,BX
JNZ 0x0044ebb5
OR EDX,0xffffffff
MOV dword ptr [ECX + 0x24],0x1
MOV dword ptr [ECX + 0x8],EBX
JMP 0x0044ec0d
MOVSX EBX,AX
MOV EAX,dword ptr [ECX + 0x28]
CMP EAX,EBX
JGE 0x0044ebc6
MOVSX EDX,word ptr [ESI + EAX*0x2 + 0x8]
JMP 0x0044ebce
CDQ
IDIV EBX
MOVSX EDX,word ptr [ESI + EDX*0x2 + 0x8]
CMP word ptr [EBP],0x0
JNZ 0x0044ebe2
MOV EAX,dword ptr [ECX + 0x2c]
AND EAX,0x3
SHL EAX,0x1
MOV dword ptr [ECX + 0x2c],EAX
JMP 0x0044ebe9
MOV dword ptr [ECX + 0x2c],0x0
MOV ESI,dword ptr [EBP + 0xc]
MOV EAX,EDX
SHL EAX,0x3
SUB EAX,EDX
LEA EAX,[EAX + EAX*0x2]
MOVSX EAX,word ptr [ESI + EAX*0x4 + 0x4]
CMP EDI,EAX
JZ 0x0044ec0d
MOV EAX,dword ptr [ECX + 0x2c]
OR AL,0x1
MOV dword ptr [ECX + 0x2c],EAX
JMP 0x0044ec0d
MOV EDX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ECX + 0x24]
TEST EAX,EAX
JNZ 0x0044ec30
CMP word ptr [EBP],0x0
JNZ 0x0044ec27
MOV EAX,dword ptr [ECX + 0x18]
MOV dword ptr [ECX + 0x1c],EAX
MOV EAX,dword ptr [ECX + 0x14]
MOV dword ptr [ECX + 0x18],EAX
MOV EAX,dword ptr [ECX + 0x10]
MOV dword ptr [ECX + 0x10],EDX
MOV dword ptr [ECX + 0x14],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
