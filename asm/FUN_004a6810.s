; FUN_004a6810
PUSH ECX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
PUSH EDI
TEST byte ptr [ESI + 0xc],0x40
JNZ 0x004a690a
MOV EAX,dword ptr [ESI + 0x10]
CMP EAX,-0x1
JZ 0x004a6840
MOV ECX,EAX
SAR ECX,0x5
AND EAX,0x1f
LEA EDX,[EAX + EAX*0x8]
MOV EAX,dword ptr [ECX*0x4 + 0xecd500]
LEA EAX,[EAX + EDX*0x4]
JMP 0x004a6845
MOV EAX,0x4d43a0
TEST byte ptr [EAX + 0x4],0x80
JZ 0x004a690a
MOV EAX,dword ptr [ESI + 0x4]
MOV EDI,0x1
DEC EAX
MOV dword ptr [ESI + 0x4],EAX
JS 0x004a6868
MOV ECX,dword ptr [ESI]
XOR EAX,EAX
MOV AL,byte ptr [ECX]
INC ECX
MOV dword ptr [ESI],ECX
JMP 0x004a6871
PUSH ESI
CALL 0x004a40f0
ADD ESP,0x4
CMP EAX,-0x1
JNZ 0x004a687e
OR AX,0xffff
POP EDI
POP ESI
POP ECX
RET
MOV ECX,dword ptr [0x004d1d90]
MOV byte ptr [ESP + 0x8],AL
AND EAX,0xff
TEST byte ptr [ECX + EAX*0x2 + 0x1],0x80
JZ 0x004a68d6
MOV EAX,dword ptr [ESI + 0x4]
DEC EAX
MOV dword ptr [ESI + 0x4],EAX
JS 0x004a68a8
MOV ECX,dword ptr [ESI]
XOR EAX,EAX
MOV AL,byte ptr [ECX]
INC ECX
MOV dword ptr [ESI],ECX
JMP 0x004a68b1
PUSH ESI
CALL 0x004a40f0
ADD ESP,0x4
CMP EAX,-0x1
JNZ 0x004a68cd
MOVSX EDX,byte ptr [ESP + 0x8]
PUSH ESI
PUSH EDX
CALL 0x004a99c0
ADD ESP,0x8
OR AX,0xffff
POP EDI
POP ESI
POP ECX
RET
MOV byte ptr [ESP + 0x9],AL
MOV EDI,0x2
LEA EAX,[ESP + 0x8]
PUSH EDI
LEA ECX,[ESP + 0x14]
PUSH EAX
PUSH ECX
CALL 0x004a95d0
ADD ESP,0xc
CMP EAX,-0x1
JNZ 0x004a6901
CALL 0x004a3dc0
MOV dword ptr [EAX],0x2a
OR AX,0xffff
POP EDI
POP ESI
POP ECX
RET
MOV AX,word ptr [ESP + 0x10]
POP EDI
POP ESI
POP ECX
RET
MOV EAX,dword ptr [ESI + 0x4]
ADD EAX,-0x2
MOV dword ptr [ESI + 0x4],EAX
JS 0x004a6923
MOV ECX,dword ptr [ESI]
MOV AX,word ptr [ECX]
ADD ECX,0x2
MOV dword ptr [ESI],ECX
POP EDI
POP ESI
POP ECX
RET
PUSH ESI
CALL 0x004a98c0
ADD ESP,0x4
POP EDI
POP ESI
POP ECX
RET