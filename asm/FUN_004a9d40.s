; FUN_004a9d40
SUB ESP,0x20
MOV ECX,dword ptr [ESP + 0x2c]
MOV AL,0xcc
MOV byte ptr [ESP + 0x4],AL
MOV byte ptr [ESP + 0x5],AL
MOV byte ptr [ESP + 0x6],AL
MOV byte ptr [ESP + 0x7],AL
MOV byte ptr [ESP + 0x8],AL
MOV byte ptr [ESP + 0x9],AL
MOV byte ptr [ESP + 0xa],AL
MOV byte ptr [ESP + 0xb],AL
MOV byte ptr [ESP + 0xc],AL
MOV byte ptr [ESP + 0xd],AL
MOV EAX,ECX
PUSH EBX
AND EAX,0x8000
PUSH EBP
AND ECX,0x7fff
PUSH ESI
TEST AX,AX
PUSH EDI
MOV byte ptr [ESP + 0x1e],0xfb
MOV byte ptr [ESP + 0x1f],0x3f
MOV dword ptr [ESP + 0x10],0x1
JZ 0x004a9da3
MOV EDI,dword ptr [ESP + 0x48]
MOV byte ptr [EDI + 0x2],0x2d
JMP 0x004a9dad
MOV EDX,dword ptr [ESP + 0x48]
MOV EDI,EDX
MOV byte ptr [EDX + 0x2],0x20
MOV EDX,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x34]
TEST CX,CX
JNZ 0x004a9dca
TEST EDX,EDX
JNZ 0x004a9dca
TEST EBX,EBX
JNZ 0x004a9dca
MOV word ptr [EDI],BX
JMP 0x004a9f4f
CMP CX,0x7fff
JNZ 0x004a9ead
CMP EDX,0x80000000
MOV word ptr [EDI],0x1
JNZ 0x004a9de6
TEST EBX,EBX
JZ 0x004a9e1c
TEST EDX,0x40000000
JNZ 0x004a9e1c
MOV ECX,dword ptr [0x004b04dc]
LEA EAX,[EDI + 0x4]
MOV dword ptr [EDI + 0x4],ECX
MOV DX,word ptr [0x004b04e0]
MOV word ptr [EAX + 0x4],DX
MOV CL,byte ptr [0x004b04e2]
MOV byte ptr [EDI + 0x3],0x6
MOV byte ptr [EAX + 0x6],CL
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
TEST AX,AX
JZ 0x004a9e51
CMP EDX,0xc0000000
JNZ 0x004a9e51
TEST EBX,EBX
JNZ 0x004a9e51
MOV EAX,[0x004b04d4]
LEA EDX,[EDI + 0x4]
MOV dword ptr [EDI + 0x4],EAX
MOV CX,word ptr [0x004b04d8]
MOV byte ptr [EDI + 0x3],0x5
XOR EAX,EAX
MOV word ptr [EDX + 0x4],CX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EDX,0x80000000
JNZ 0x004a9e81
TEST EBX,EBX
JNZ 0x004a9e81
MOV EAX,[0x004b04cc]
LEA EDX,[EDI + 0x4]
MOV dword ptr [EDI + 0x4],EAX
MOV CX,word ptr [0x004b04d0]
MOV byte ptr [EDI + 0x3],0x5
XOR EAX,EAX
MOV word ptr [EDX + 0x4],CX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,[0x004b04c4]
LEA EDX,[EDI + 0x4]
MOV dword ptr [EDI + 0x4],EAX
MOV CX,word ptr [0x004b04c8]
MOV word ptr [EDX + 0x4],CX
MOV AL,[0x004b04ca]
MOV byte ptr [EDI + 0x3],0x6
MOV byte ptr [EDX + 0x6],AL
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,EDX
MOV ESI,ECX
SHR EAX,0x18
AND ESI,0xffff
AND EAX,0xffff
SHR ESI,0x8
MOV word ptr [ESP + 0x2a],CX
MOV dword ptr [ESP + 0x26],EDX
LEA EAX,[ESI + EAX*0x2]
MOV dword ptr [ESP + 0x22],EBX
PUSH 0x1
LEA EDX,[ESP + 0x24]
LEA ESI,[EAX + EAX*0x8]
XOR EBX,EBX
MOV word ptr [ESP + 0x24],BX
LEA ESI,[EAX + ESI*0x2]
LEA ESI,[EAX + ESI*0x4]
MOV EAX,ECX
AND EAX,0xffff
MOV EBP,EAX
SHL EBP,0x4
ADD EBP,EAX
LEA EAX,[EAX + EBP*0x8]
LEA EAX,[EAX + EAX*0x8]
SHL EAX,0x4
LEA ESI,[ESI + EAX*0x1 + 0xecbced0c]
SAR ESI,0x10
MOVSX ECX,SI
NEG ECX
PUSH ECX
PUSH EDX
CALL 0x004aa650
ADD ESP,0xc
CMP word ptr [ESP + 0x2a],0x3fff
JC 0x004a9f34
LEA EAX,[ESP + 0x14]
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
INC ESI
CALL 0x004aa390
ADD ESP,0x8
MOV AL,byte ptr [ESP + 0x44]
MOV word ptr [EDI],SI
TEST AL,0x1
JZ 0x004a9f6c
MOV EBP,dword ptr [ESP + 0x40]
MOVSX EDX,SI
ADD EBP,EDX
CMP EBP,EBX
JG 0x004a9f70
MOV word ptr [EDI],BX
MOV byte ptr [EDI + 0x2],0x20
MOV byte ptr [EDI + 0x3],0x1
MOV byte ptr [EDI + 0x4],0x30
MOV byte ptr [EDI + 0x5],0x0
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EBP,dword ptr [ESP + 0x40]
CMP EBP,0x15
JLE 0x004a9f7a
MOV EBP,0x15
MOV ESI,dword ptr [ESP + 0x2a]
MOV word ptr [ESP + 0x2a],BX
AND ESI,0xffff
MOV EBX,0x8
SUB ESI,0x3ffe
LEA EAX,[ESP + 0x20]
PUSH EAX
CALL 0x004a9be0
ADD ESP,0x4
DEC EBX
JNZ 0x004a9f94
TEST ESI,ESI
JGE 0x004a9fc2
NEG ESI
AND ESI,0xff
JLE 0x004a9fc2
LEA ECX,[ESP + 0x20]
PUSH ECX
CALL 0x004a9c10
ADD ESP,0x4
DEC ESI
JNZ 0x004a9fb2
LEA ESI,[EDI + 0x4]
LEA EDI,[EBP + 0x1]
TEST EDI,EDI
MOV EBX,ESI
JLE 0x004aa031
MOV EDX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x34],EDX
LEA EDX,[ESP + 0x20]
MOV dword ptr [ESP + 0x38],EAX
PUSH EDX
MOV dword ptr [ESP + 0x40],ECX
CALL 0x004a9be0
ADD ESP,0x4
LEA EAX,[ESP + 0x20]
PUSH EAX
CALL 0x004a9be0
ADD ESP,0x4
LEA ECX,[ESP + 0x34]
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH EDX
CALL 0x004a9b70
ADD ESP,0x8
LEA EAX,[ESP + 0x20]
PUSH EAX
CALL 0x004a9be0
MOV CL,byte ptr [ESP + 0x2f]
ADD ESP,0x4
ADD CL,0x30
MOV byte ptr [ESP + 0x2b],0x0
MOV byte ptr [EBX],CL
INC EBX
DEC EDI
JNZ 0x004a9fce
MOV AL,byte ptr [EBX + -0x1]
DEC EBX
DEC EBX
CMP AL,0x35
JL 0x004aa06b
CMP EBX,ESI
JC 0x004aa04f
CMP byte ptr [EBX],0x39
JNZ 0x004aa04b
MOV byte ptr [EBX],0x30
DEC EBX
CMP EBX,ESI
JNC 0x004aa03e
CMP EBX,ESI
JNC 0x004aa05f
MOV EAX,dword ptr [ESP + 0x48]
INC EBX
INC word ptr [EAX]
MOV CL,byte ptr [EBX]
INC CL
MOV byte ptr [EBX],CL
JMP 0x004aa0a6
MOV CL,byte ptr [EBX]
MOV EAX,dword ptr [ESP + 0x48]
INC CL
MOV byte ptr [EBX],CL
JMP 0x004aa0a6
CMP EBX,ESI
JC 0x004aa07d
CMP byte ptr [EBX],0x30
JNZ 0x004aa079
DEC EBX
CMP EBX,ESI
JNC 0x004aa06f
CMP EBX,ESI
JNC 0x004aa0a2
MOV EAX,dword ptr [ESP + 0x48]
MOV byte ptr [ESI],0x30
MOV word ptr [EAX],0x0
MOV byte ptr [EAX + 0x2],0x20
MOV byte ptr [EAX + 0x3],0x1
MOV byte ptr [EAX + 0x5],0x0
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,dword ptr [ESP + 0x48]
SUB BL,AL
POP EDI
SUB BL,0x3
POP ESI
MOVSX EDX,BL
MOV byte ptr [EAX + 0x3],BL
POP EBP
MOV byte ptr [EAX + EDX*0x1 + 0x4],0x0
MOV EAX,dword ptr [ESP + 0x4]
POP EBX
ADD ESP,0x20
RET
