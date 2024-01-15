; FUN_00482690
SUB ESP,0x1c
MOV ECX,dword ptr [ESP + 0x20]
XOR EAX,EAX
MOV dword ptr [ESP],EAX
MOV EDX,dword ptr [ECX + 0x14]
TEST EDX,EDX
JLE 0x004827a7
PUSH EDI
PUSH ESI
PUSH EBP
MOV EBP,dword ptr [ESP + 0x38]
PUSH EBX
MOV ECX,dword ptr [ECX + 0x18]
MOV EDI,dword ptr [ECX + EAX*0x4]
MOV EAX,dword ptr [ESP + 0x38]
TEST EAX,EAX
JZ 0x00482764
MOV ESI,dword ptr [EDI + 0x34]
XOR EBX,EBX
CMP word ptr [EDI + 0x3a],BX
JLE 0x0048278b
MOVSX EDX,word ptr [ESI]
MOV dword ptr [ESP + 0x3c],EDX
MOV EDX,dword ptr [ESP + 0x34]
FILD dword ptr [ESP + 0x3c]
PUSH EDX
FSTP dword ptr [ESP + 0x24]
MOVSX EAX,word ptr [ESI + 0x2]
MOV dword ptr [ESP + 0x40],EAX
LEA EAX,[ESP + 0x24]
FILD dword ptr [ESP + 0x40]
PUSH EAX
FSTP dword ptr [ESP + 0x2c]
MOVSX ECX,word ptr [ESI + 0x4]
MOV dword ptr [ESP + 0x44],ECX
LEA ECX,[ESP + 0x1c]
FILD dword ptr [ESP + 0x44]
PUSH ECX
FSTP dword ptr [ESP + 0x34]
CALL 0x00430a00
MOV EDX,dword ptr [ESP + 0x4c]
ADD ESP,0xc
LEA EAX,[ESP + 0x14]
PUSH EDX
PUSH EAX
CALL 0x0042f910
FCOM dword ptr [EBP]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x00482750
MOV EAX,dword ptr [ESP + 0x44]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x18]
MOV dword ptr [EAX],ECX
MOV ECX,dword ptr [ESP + 0x1c]
MOV dword ptr [EAX + 0x4],EDX
MOV dword ptr [EAX + 0x8],ECX
FSTP dword ptr [EBP]
JMP 0x00482752
FSTP ST0
MOVSX EDX,word ptr [EDI + 0x3a]
ADD ESI,0x10
INC EBX
CMP EBX,EDX
JL 0x004826d1
JMP 0x0048278b
MOV EAX,dword ptr [ESP + 0x48]
MOV ECX,dword ptr [ESP + 0x44]
MOV EDX,dword ptr [ESP + 0x40]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH EBP
PUSH EAX
PUSH EDI
CALL 0x0044c9d0
ADD ESP,0x4
PUSH EAX
CALL 0x00482320
ADD ESP,0x18
MOV ECX,dword ptr [ESP + 0x30]
MOV EAX,dword ptr [ESP + 0x10]
INC EAX
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x10],EAX
CMP EAX,EDX
JL 0x004826b0
POP EBX
POP EBP
POP ESI
POP EDI
ADD ESP,0x1c
RET
