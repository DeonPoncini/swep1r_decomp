; FUN_004a70a0
SUB ESP,0x18
MOV ECX,dword ptr [ESP + 0x1c]
XOR EAX,EAX
PUSH EBX
PUSH EBP
MOV AX,word ptr [ECX + 0xa]
MOV EDX,dword ptr [ECX + 0x2]
MOV EBX,EAX
AND EAX,0x8000
MOV EBP,EAX
MOV EAX,dword ptr [ECX + 0x6]
MOV dword ptr [ESP + 0x8],EAX
XOR EAX,EAX
MOV AX,word ptr [ECX]
AND EBX,0x7fff
SUB EBX,0x3fff
PUSH ESI
SHL EAX,0x10
PUSH EDI
MOV EDI,dword ptr [ESP + 0x34]
CMP EBX,0xffffc001
MOV dword ptr [ESP + 0x14],EDX
MOV dword ptr [ESP + 0x18],EAX
JNZ 0x004a711a
LEA ECX,[ESP + 0x10]
XOR ESI,ESI
PUSH ECX
CALL 0x004a6fc0
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004a721f
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL 0x004a6fb0
ADD ESP,0x4
MOV EAX,0x2
JMP 0x004a7221
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
CALL 0x004a6f90
MOV EDX,dword ptr [EDI + 0x8]
ADD ESP,0x8
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH EAX
CALL 0x004a6ef0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x004a7142
INC EBX
MOV EAX,dword ptr [EDI + 0x4]
MOV ESI,dword ptr [EDI + 0x8]
MOV ECX,EAX
SUB ECX,ESI
CMP EBX,ECX
JGE 0x004a7169
LEA EDX,[ESP + 0x10]
PUSH EDX
CALL 0x004a6fb0
ADD ESP,0x4
XOR ESI,ESI
MOV EAX,0x2
JMP 0x004a7221
CMP EBX,EAX
JG 0x004a71bd
SUB EAX,EBX
LEA ECX,[ESP + 0x10]
MOV ESI,EAX
LEA EAX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
CALL 0x004a6f90
ADD ESP,0x8
LEA EDX,[ESP + 0x10]
PUSH ESI
PUSH EDX
CALL 0x004a6fe0
MOV EAX,dword ptr [EDI + 0x8]
ADD ESP,0x8
LEA ECX,[ESP + 0x10]
PUSH EAX
PUSH ECX
CALL 0x004a6ef0
MOV EDX,dword ptr [EDI + 0xc]
ADD ESP,0x8
INC EDX
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH EAX
CALL 0x004a6fe0
ADD ESP,0x8
XOR ESI,ESI
MOV EAX,0x2
JMP 0x004a7221
CMP EBX,dword ptr [EDI]
JL 0x004a71fb
LEA ECX,[ESP + 0x10]
PUSH ECX
CALL 0x004a6fb0
MOV EBX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EDI + 0xc]
ADD ESP,0x4
LEA EAX,[ESP + 0x10]
OR EBX,0x80000000
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x18],EBX
CALL 0x004a6fe0
MOV ESI,dword ptr [EDI + 0x14]
MOV EAX,dword ptr [EDI]
ADD ESP,0x8
ADD ESI,EAX
MOV EAX,0x1
JMP 0x004a7221
MOV ESI,dword ptr [EDI + 0x14]
MOV ECX,dword ptr [EDI + 0xc]
ADD ESI,EBX
MOV EBX,dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x10]
AND EBX,0x7fffffff
PUSH ECX
PUSH EDX
MOV dword ptr [ESP + 0x18],EBX
CALL 0x004a6fe0
ADD ESP,0x8
XOR EAX,EAX
MOV EDX,dword ptr [EDI + 0xc]
MOV ECX,0x1f
SUB ECX,EDX
MOV EDX,dword ptr [ESP + 0x10]
SHL ESI,CL
MOV EDI,dword ptr [EDI + 0x10]
NEG EBP
SBB EBP,EBP
AND EBP,0x80000000
OR ESI,EBP
OR ESI,EDX
CMP EDI,0x40
JNZ 0x004a725c
MOV ECX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [ECX + 0x4],ESI
MOV dword ptr [ECX],EDX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
CMP EDI,0x20
JNZ 0x004a7267
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [ECX],ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET