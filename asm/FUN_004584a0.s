; FUN_004584a0
SUB ESP,0x8
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
PUSH EDI
MOV dword ptr [ESP + 0x10],0x82
MOV EDI,0xa1
CMP word ptr [ESP + 0x10],DI
JG 0x004584e3
MOV EAX,dword ptr [ESI + 0xc8]
MOV ECX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH ECX
CALL 0x004282f0
MOV EDX,dword ptr [ESP + 0x18]
ADD ESP,0x8
INC EDX
MOV dword ptr [ESP + 0x10],EDX
CMP word ptr [ESP + 0x10],DI
JLE 0x004584bf
MOV EAX,dword ptr [ESP + 0x20]
XOR EBX,EBX
CMP EAX,EBX
JZ 0x004586b1
MOV dword ptr [ESP + 0x1c],EBX
MOV EBP,0x4
CMP dword ptr [ESP + 0x1c],EBP
JGE 0x004586b1
MOV EDI,0x7
MOV dword ptr [ESP + 0x20],EBX
CMP dword ptr [ESP + 0x20],EDI
JGE 0x0045869e
MOV EAX,dword ptr [ESP + 0x1c]
MOV CX,word ptr [EAX*0x2 + 0xe35a8a]
MOV dword ptr [ESP + 0x14],ECX
MOV EDX,dword ptr [ESP + 0x20]
SHL EDX,0x1
MOV dword ptr [ESP + 0x10],EDX
MOV EAX,dword ptr [ESP + 0x14]
MOV CL,byte ptr [ESP + 0x10]
SAR AX,CL
MOV dword ptr [ESP + 0x14],EAX
MOV CL,byte ptr [ESP + 0x14]
AND ECX,0x3
MOV dword ptr [ESP + 0x14],ECX
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,EAX
SHL EDX,0x3
SUB EDX,EAX
MOV EAX,dword ptr [ESP + 0x20]
LEA ECX,[EDX + EAX*0x1 + 0x63]
MOV EDX,dword ptr [ESI + 0xc0]
MOV dword ptr [ESP + 0x10],ECX
PUSH EDX
MOV EAX,dword ptr [ESP + 0x14]
PUSH EAX
CALL 0x004282f0
MOV ECX,dword ptr [ESP + 0x18]
ADD ESP,0x8
PUSH 0x8000
PUSH ECX
CALL 0x004287e0
MOV EAX,dword ptr [ESP + 0x24]
ADD ESP,0x8
CMP EAX,0x3
JA 0x004585d5
JMP dword ptr [EAX*0x4 + 0x4586bc]
PUSH -0x2
PUSH -0x1
PUSH -0x1
PUSH 0x32
JMP 0x004585c8
MOV EAX,dword ptr [ESP + 0x10]
PUSH -0x2
PUSH 0x3e
PUSH -0x1
PUSH 0x44
PUSH EAX
JMP 0x004585cd
MOV ECX,dword ptr [ESP + 0x10]
PUSH -0x2
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH ECX
JMP 0x004585cd
PUSH -0x2
PUSH 0x20
PUSH 0x59
PUSH -0x63
MOV EDX,dword ptr [ESP + 0x20]
PUSH EDX
CALL 0x00428740
ADD ESP,0x14
MOV AL,byte ptr [ESP + 0x20]
MOV CL,byte ptr [ESP + 0x1c]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x00458601
MOV EDX,dword ptr [ESP + 0x10]
PUSH -0x2
PUSH -0x80
PUSH -0x80
PUSH -0x80
PUSH EDX
CALL 0x00428740
ADD ESP,0x14
CMP byte ptr [ESI + 0x6c],BL
JZ 0x00458647
MOVSX EAX,word ptr [ESP + 0x14]
CMP EAX,0x3
JA 0x00458647
JMP dword ptr [EAX*0x4 + 0x4586cc]
MOV EAX,dword ptr [ESI + 0xbc]
MOV ECX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH ECX
JMP 0x0045863f
MOV EDX,dword ptr [ESI + 0xb8]
MOV EAX,dword ptr [ESP + 0x10]
PUSH EDX
PUSH EAX
JMP 0x0045863f
MOV ECX,dword ptr [ESI + 0xb4]
MOV EDX,dword ptr [ESP + 0x10]
PUSH ECX
PUSH EDX
CALL 0x004282f0
ADD ESP,0x8
MOV ECX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0xc4]
ADD ECX,0x1c
PUSH EAX
PUSH ECX
CALL 0x004282f0
MOV EDX,dword ptr [ESP + 0x18]
ADD ESP,0x8
ADD EDX,0x1c
PUSH 0x8000
PUSH EDX
CALL 0x004287e0
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x8
ADD EAX,0x1c
PUSH -0x2
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH EAX
CALL 0x00428740
MOV ECX,dword ptr [ESP + 0x34]
ADD ESP,0x14
INC ECX
MOV dword ptr [ESP + 0x20],ECX
CMP dword ptr [ESP + 0x20],EDI
JL 0x00458517
MOV EDX,dword ptr [ESP + 0x1c]
INC EDX
MOV dword ptr [ESP + 0x1c],EDX
CMP dword ptr [ESP + 0x1c],EBP
JL 0x00458509
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET