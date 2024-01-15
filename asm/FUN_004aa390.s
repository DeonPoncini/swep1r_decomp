; FUN_004aa390
SUB ESP,0x24
MOV EDX,dword ptr [ESP + 0x28]
PUSH EBX
PUSH EBP
PUSH ESI
MOV AX,word ptr [EDX + 0xa]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x3c]
XOR EBP,EBP
MOV dword ptr [ESP + 0x20],EBP
MOV dword ptr [ESP + 0x28],EBP
MOV CX,word ptr [EDI + 0xa]
MOV dword ptr [ESP + 0x2c],EBP
MOV ESI,ECX
AND ECX,0x7fff
XOR ESI,EAX
AND EAX,0x7fff
AND ESI,0x8000
CMP AX,0x7fff
LEA EBX,[ECX + EAX*0x1]
MOV dword ptr [ESP + 0x30],EBP
MOV dword ptr [ESP + 0x18],ESI
MOV dword ptr [ESP + 0x10],EBX
JNC 0x004aa627
CMP CX,0x7fff
JNC 0x004aa627
CMP BX,0xbffd
JA 0x004aa627
CMP BX,0x3fbf
JA 0x004aa410
MOV dword ptr [EDX + 0x8],EBP
MOV dword ptr [EDX + 0x4],EBP
MOV dword ptr [EDX],EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
CMP AX,BP
JNZ 0x004aa439
MOV EAX,dword ptr [EDX + 0x8]
INC EBX
TEST EAX,0x7fffffff
MOV dword ptr [ESP + 0x10],EBX
JNZ 0x004aa439
CMP dword ptr [EDX + 0x4],EBP
JNZ 0x004aa439
CMP dword ptr [EDX],EBP
JNZ 0x004aa439
MOV word ptr [EDX + 0xa],BP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
CMP CX,BP
JNZ 0x004aa466
MOV EAX,dword ptr [EDI + 0x8]
INC EBX
TEST EAX,0x7fffffff
MOV dword ptr [ESP + 0x10],EBX
JNZ 0x004aa466
CMP dword ptr [EDI + 0x4],EBP
JNZ 0x004aa466
CMP dword ptr [EDI],EBP
JNZ 0x004aa466
MOV dword ptr [EDX + 0x8],EBP
MOV dword ptr [EDX + 0x4],EBP
MOV dword ptr [EDX],EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
LEA EAX,[ESP + 0x2c]
MOV dword ptr [ESP + 0x1c],EBP
MOV dword ptr [ESP + 0x14],EAX
MOV EBP,0x5
MOV ECX,dword ptr [ESP + 0x1c]
TEST EBP,EBP
LEA EAX,[ECX + ECX*0x1]
JLE 0x004aa4d9
MOV ECX,dword ptr [ESP + 0x14]
ADD EDI,0x8
LEA ESI,[EAX + EDX*0x1]
MOV dword ptr [ESP + 0x24],EBP
LEA EBX,[ECX + -0x4]
XOR EDX,EDX
XOR EAX,EAX
MOV DX,word ptr [EDI]
MOV AX,word ptr [ESI]
IMUL EDX,EAX
MOV ECX,dword ptr [EBX]
PUSH EBX
PUSH EDX
PUSH ECX
CALL 0x004a9b40
ADD ESP,0xc
TEST EAX,EAX
JZ 0x004aa4b8
MOV EAX,dword ptr [ESP + 0x14]
INC word ptr [EAX]
MOV EAX,dword ptr [ESP + 0x24]
ADD ESI,0x2
SUB EDI,0x2
DEC EAX
MOV dword ptr [ESP + 0x24],EAX
JNZ 0x004aa493
MOV EDI,dword ptr [ESP + 0x3c]
MOV EDX,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x1c]
ADD ECX,0x2
INC EAX
DEC EBP
MOV dword ptr [ESP + 0x14],ECX
TEST EBP,EBP
MOV dword ptr [ESP + 0x1c],EAX
JG 0x004aa477
ADD EBX,0xc002
MOV EBP,0x80000000
TEST BX,BX
MOV dword ptr [ESP + 0x10],EBX
JLE 0x004aa535
TEST dword ptr [ESP + 0x30],EBP
JNZ 0x004aa535
LEA EDX,[ESP + 0x28]
PUSH EDX
CALL 0x004a9be0
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x3c]
MOV ESI,dword ptr [ESP + 0x1c]
ADD EAX,0xffff
ADD ESP,0x4
MOV dword ptr [ESP + 0x10],EAX
TEST AX,AX
MOV EBX,EAX
JG 0x004aa506
XOR ECX,ECX
CMP BX,CX
JG 0x004aa58a
ADD EBX,0xffff
CMP BX,CX
JGE 0x004aa57b
MOVSX EAX,BX
NEG EAX
ADD EBX,EAX
MOV ESI,EAX
MOV dword ptr [ESP + 0x10],EBX
TEST byte ptr [ESP + 0x28],0x1
JZ 0x004aa55f
INC dword ptr [ESP + 0x20]
LEA EAX,[ESP + 0x28]
PUSH EAX
CALL 0x004a9c10
ADD ESP,0x4
DEC ESI
JNZ 0x004aa554
MOV EDX,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x10]
MOV ESI,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x20]
XOR ECX,ECX
CMP EAX,ECX
JZ 0x004aa58a
OR byte ptr [ESP + 0x28],0x1
MOV EDI,0x8000
CMP word ptr [ESP + 0x28],DI
JA 0x004aa5a6
MOV EAX,dword ptr [ESP + 0x28]
AND EAX,0x1ffff
CMP EAX,0x18000
JNZ 0x004aa5df
OR EAX,0xffffffff
CMP dword ptr [ESP + 0x2a],EAX
JNZ 0x004aa5db
CMP dword ptr [ESP + 0x2e],EAX
MOV dword ptr [ESP + 0x2a],ECX
JNZ 0x004aa5d5
CMP word ptr [ESP + 0x32],0xffff
MOV dword ptr [ESP + 0x2e],ECX
JNZ 0x004aa5ce
MOV word ptr [ESP + 0x32],DI
INC EBX
JMP 0x004aa5df
INC word ptr [ESP + 0x32]
JMP 0x004aa5df
INC dword ptr [ESP + 0x2e]
JMP 0x004aa5df
INC dword ptr [ESP + 0x2a]
CMP BX,0x7fff
JC 0x004aa603
NEG SI
SBB ESI,ESI
MOV dword ptr [EDX + 0x4],ECX
AND ESI,EBP
MOV dword ptr [EDX],ECX
ADD ESI,0x7fff8000
MOV dword ptr [EDX + 0x8],ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
MOV CX,word ptr [ESP + 0x2a]
MOV EAX,dword ptr [ESP + 0x2c]
MOV word ptr [EDX],CX
MOV ECX,dword ptr [ESP + 0x30]
OR EBX,ESI
MOV dword ptr [EDX + 0x2],EAX
MOV dword ptr [EDX + 0x6],ECX
MOV word ptr [EDX + 0xa],BX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
NEG SI
SBB ESI,ESI
POP EDI
AND ESI,0x80000000
MOV dword ptr [EDX + 0x4],EBP
ADD ESI,0x7fff8000
MOV dword ptr [EDX],EBP
MOV dword ptr [EDX + 0x8],ESI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
