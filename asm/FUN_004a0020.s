; FUN_004a0020
PUSH ECX
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x18]
PUSH ESI
IMUL EBP,dword ptr [ESP + 0x18]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x18]
TEST EBP,EBP
MOV dword ptr [ESP + 0x18],EDI
MOV dword ptr [ESP + 0x10],EBP
JNZ 0x004a0046
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EBX,dword ptr [ESP + 0x24]
TEST dword ptr [EBX + 0xc],0x10c
JZ 0x004a005c
MOV ESI,dword ptr [EBX + 0x18]
MOV dword ptr [ESP + 0x24],ESI
JMP 0x004a0068
MOV dword ptr [ESP + 0x24],0x1000
MOV ESI,dword ptr [ESP + 0x24]
TEST dword ptr [EBX + 0xc],0x10c
JZ 0x004a00ae
MOV EAX,dword ptr [EBX + 0x4]
TEST EAX,EAX
JZ 0x004a00ae
CMP EBP,EAX
JNC 0x004a007e
MOV EAX,EBP
MOV ESI,dword ptr [EBX]
MOV ECX,EAX
MOV EDX,ECX
SUB EBP,EAX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EDX
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV ESI,dword ptr [EBX + 0x4]
MOV EDX,dword ptr [EBX]
MOV ECX,dword ptr [ESP + 0x18]
SUB ESI,EAX
ADD EDX,EAX
ADD ECX,EAX
MOV dword ptr [EBX + 0x4],ESI
MOV dword ptr [EBX],EDX
MOV dword ptr [ESP + 0x18],ECX
MOV EDI,ECX
JMP 0x004a00fe
CMP EBP,ESI
JC 0x004a00e1
TEST ESI,ESI
MOV EAX,EBP
JZ 0x004a00c0
XOR EDX,EDX
DIV ESI
MOV EAX,EBP
SUB EAX,EDX
PUSH EAX
MOV EAX,dword ptr [EBX + 0x10]
PUSH EDI
PUSH EAX
CALL 0x004a41e0
ADD ESP,0xc
TEST EAX,EAX
JZ 0x004a0114
CMP EAX,-0x1
JZ 0x004a012f
SUB EBP,EAX
ADD EDI,EAX
MOV dword ptr [ESP + 0x18],EDI
JMP 0x004a0102
PUSH EBX
CALL 0x004a40f0
ADD ESP,0x4
CMP EAX,-0x1
JZ 0x004a014a
MOV byte ptr [EDI],AL
MOV ECX,dword ptr [EBX + 0x18]
INC EDI
DEC EBP
MOV dword ptr [ESP + 0x18],EDI
MOV dword ptr [ESP + 0x24],ECX
MOV ESI,dword ptr [ESP + 0x24]
TEST EBP,EBP
JNZ 0x004a0068
MOV EAX,dword ptr [ESP + 0x20]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EDX,dword ptr [EBX + 0xc]
MOV EAX,dword ptr [ESP + 0x10]
OR EDX,0x10
SUB EAX,EBP
MOV dword ptr [EBX + 0xc],EDX
XOR EDX,EDX
DIV dword ptr [ESP + 0x1c]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EDX,dword ptr [EBX + 0xc]
MOV EAX,dword ptr [ESP + 0x10]
OR EDX,0x20
SUB EAX,EBP
MOV dword ptr [EBX + 0xc],EDX
XOR EDX,EDX
DIV dword ptr [ESP + 0x1c]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EAX,dword ptr [ESP + 0x10]
XOR EDX,EDX
SUB EAX,EBP
DIV dword ptr [ESP + 0x1c]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
