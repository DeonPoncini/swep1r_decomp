; FUN_004aa0d0
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x84
PUSH EBX
PUSH EBP
MOV EBP,0x1
PUSH ESI
CMP EAX,EBP
PUSH EDI
JNZ 0x004aa1d0
MOV EBX,dword ptr [ESP + 0xa0]
MOV EBP,dword ptr [ESP + 0x9c]
PUSH 0x0
LEA EAX,[ESP + 0x18]
PUSH 0x80
PUSH EAX
PUSH EBX
PUSH EBP
LEA EDI,[ESP + 0x28]
MOV dword ptr [ESP + 0x24],0x0
CALL 0x004aaca0
MOV ESI,EAX
ADD ESP,0x14
TEST ESI,ESI
JNZ 0x004aa16a
CALL dword ptr [0x004ac0c0]
CMP EAX,0x7a
JNZ 0x004aa180
PUSH ESI
PUSH ESI
PUSH ESI
PUSH EBX
PUSH EBP
CALL 0x004aaca0
MOV ESI,EAX
ADD ESP,0x14
TEST ESI,ESI
JZ 0x004aa180
PUSH ESI
CALL 0x0049f270
MOV EDI,EAX
ADD ESP,0x4
TEST EDI,EDI
JZ 0x004aa180
PUSH 0x0
PUSH ESI
PUSH EDI
PUSH EBX
PUSH EBP
MOV dword ptr [ESP + 0x24],0x1
CALL 0x004aaca0
MOV ESI,EAX
ADD ESP,0x14
TEST ESI,ESI
JZ 0x004aa180
PUSH ESI
CALL 0x0049f270
MOV ECX,dword ptr [ESP + 0xa8]
ADD ESP,0x4
TEST EAX,EAX
MOV dword ptr [ECX],EAX
JNZ 0x004aa1a3
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x004aa26e
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x84
RET
PUSH ESI
PUSH EDI
PUSH EAX
CALL 0x0049f340
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
TEST EAX,EAX
JZ 0x004aa261
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x84
RET
TEST EAX,EAX
JNZ 0x004aa26e
MOV EDX,dword ptr [ESP + 0xa0]
PUSH EAX
MOV EAX,dword ptr [ESP + 0xa0]
PUSH 0x4
PUSH 0xdfb008
PUSH EDX
PUSH EAX
CALL 0x004aab70
ADD ESP,0x14
TEST EAX,EAX
JZ 0x004aa26e
MOV EDI,dword ptr [ESP + 0xa4]
MOV ESI,0xdfb008
MOV byte ptr [EDI],0x0
MOV EAX,[0x004d1f9c]
MOV BL,byte ptr [ESI]
CMP EAX,EBP
MOV byte ptr [ESP + 0x10],BL
JLE 0x004aa231
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0x4
AND ECX,0xff
PUSH ECX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x004aa246
MOV EDX,dword ptr [ESP + 0x10]
MOV EAX,[0x004d1d90]
AND EDX,0xff
MOV AL,byte ptr [EAX + EDX*0x2]
AND EAX,0x4
TEST EAX,EAX
JZ 0x004aa261
MOV AL,byte ptr [EDI]
MOV CL,0xa
IMUL CL
ADD AL,BL
ADD ESI,0x2
SUB AL,0x30
CMP ESI,0xdfb010
MOV byte ptr [EDI],AL
JL 0x004aa20b
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x84
RET
POP EDI
POP ESI
POP EBP
OR EAX,0xffffffff
POP EBX
ADD ESP,0x84
RET