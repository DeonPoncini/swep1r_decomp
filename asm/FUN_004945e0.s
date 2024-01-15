; FUN_004945e0
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [ESP + 0x8]
SUB ESP,0x4c
ADD EAX,0x8
ADD ECX,0x24
LEA EDX,[ESP]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x60]
PUSH EAX
PUSH ECX
PUSH EDX
MOV ESI,dword ptr [EDI + 0x4]
CALL 0x00493200
MOV EBX,dword ptr [EDI + 0x38]
ADD ESP,0xc
CMP EBX,0x2
JZ 0x0049496b
CALL 0x0048dc40
MOV EDI,EAX
XOR EBP,EBP
CMP EDI,EBP
JZ 0x0049496b
FLD dword ptr [ESI + 0xac]
FSUB dword ptr [ESI + 0x58]
FLD dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [0x00df9ae8]
MOV EAX,dword ptr [ESI + 0xb0]
FLD dword ptr [ESP + 0x14]
MOV [0x00df9aec],EAX
FLD dword ptr [ESI + 0xb4]
FSUB dword ptr [ESI + 0x5c]
FLD dword ptr [ESP + 0x18]
FXCH ST3
FADD dword ptr [0x00df9ae8]
FXCH ST2
FADD dword ptr [0x00df9aec]
FXCH ST3
FADD ST0,ST1
FXCH ST2
FSTP dword ptr [0x00df9ae8]
FXCH ST2
FSTP dword ptr [0x00df9aec]
FLD dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [0x00df9af0]
FLD dword ptr [ESI + 0x58]
FADD dword ptr [ESI + 0xac]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FSTP dword ptr [0x00df9af4]
MOV ECX,dword ptr [ESI + 0xb0]
FXCH ST3
FADD dword ptr [0x00df9af4]
MOV dword ptr [0x00df9af8],ECX
FLD dword ptr [ESI + 0xb4]
FSUB dword ptr [ESI + 0x5c]
FXCH ST2
FADD dword ptr [0x00df9af8]
FXCH
FSTP dword ptr [0x00df9af4]
FLD dword ptr [ESP + 0x14]
FXCH ST2
FSTP dword ptr [0x00df9afc]
FXCH ST3
FADD dword ptr [0x00df9afc]
FXCH ST3
FSTP dword ptr [0x00df9af8]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x10]
FXCH ST4
FSTP dword ptr [0x00df9afc]
FLD dword ptr [ESI + 0x58]
FADD dword ptr [ESI + 0xac]
FLD dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [0x00df9b00]
MOV EDX,dword ptr [ESI + 0xb0]
MOV dword ptr [0x00df9b04],EDX
FLD dword ptr [ESI + 0xb4]
FADD dword ptr [ESI + 0x5c]
FSTP dword ptr [0x00df9b08]
FXCH
FADD dword ptr [0x00df9b08]
FXCH ST3
FADD dword ptr [0x00df9b00]
FXCH ST2
FADD dword ptr [0x00df9b04]
FLD dword ptr [ESP + 0x18]
FXCH ST3
FSTP dword ptr [0x00df9b00]
FSTP dword ptr [0x00df9b04]
FXCH ST2
FSTP dword ptr [0x00df9b08]
FLD dword ptr [ESI + 0xac]
FSUB dword ptr [ESI + 0x58]
FSTP dword ptr [0x00df9b0c]
MOV EAX,dword ptr [ESI + 0xb0]
FXCH ST2
FADD dword ptr [0x00df9b0c]
MOV [0x00df9b10],EAX
FLD dword ptr [ESI + 0xb4]
FADD dword ptr [ESI + 0x5c]
FXCH ST2
FADD dword ptr [0x00df9b10]
FXCH
FSTP dword ptr [0x00df9b0c]
FXCH
FSTP dword ptr [0x00df9b14]
FXCH
FADD dword ptr [0x00df9b14]
FXCH
FSTP dword ptr [0x00df9b10]
FSTP dword ptr [0x00df9b14]
MOV ECX,dword ptr [ESI + 0x70]
MOV dword ptr [ESP + 0x3c],ECX
MOV EDX,dword ptr [ESI + 0x74]
MOV dword ptr [ESP + 0x40],EDX
MOV EAX,dword ptr [ESI + 0x78]
MOV dword ptr [ESP + 0x44],EAX
MOV dword ptr [ESP + 0x48],0xdf9ae8
MOV ECX,dword ptr [ESI + 0xa8]
MOV dword ptr [ESP + 0x50],EBP
MOV dword ptr [ESP + 0x4c],ECX
MOV dword ptr [ESP + 0x54],EBP
MOV dword ptr [ESP + 0x28],0xdf9728
MOV EDX,dword ptr [EDI + 0x10]
MOV dword ptr [ESP + 0x38],EDX
MOV EAX,dword ptr [EDI + 0x14]
MOV dword ptr [ESP + 0x2c],EAX
MOV EAX,[0x00ecc424]
MOV ECX,dword ptr [EDI + 0x18]
XOR EDX,EDX
CMP EAX,EBP
MOV dword ptr [ESP + 0x30],ECX
SETGE DL
DEC EDX
AND EAX,EDX
CMP EBX,EBP
FSTP ST0
MOV dword ptr [EDI + 0x4],EAX
JZ 0x00494848
LEA ECX,[ESI + 0x84]
LEA EDX,[ESP + 0x1c]
PUSH ECX
LEA ECX,[ESP + 0x40]
PUSH EDX
MOV EDX,dword ptr [ESI + 0x68]
PUSH ECX
PUSH EAX
MOV EAX,[0x00df7f2c]
PUSH EDX
MOV ECX,dword ptr [EAX + 0x48]
PUSH ECX
CALL 0x004910a0
ADD ESP,0x18
JMP 0x00494866
LEA EDX,[ESI + 0x84]
LEA ECX,[ESP + 0x1c]
PUSH EDX
LEA EDX,[ESP + 0x40]
PUSH ECX
PUSH EDX
PUSH EAX
MOV EAX,dword ptr [ESI + 0x68]
PUSH EAX
CALL 0x00491ac0
ADD ESP,0x14
MOV EDX,dword ptr [ESP + 0x1c]
CMP EDX,0x3
JC 0x0049496b
XOR ECX,ECX
CMP EDX,EBP
JBE 0x004948aa
XOR EAX,EAX
MOV EBP,dword ptr [EDI + 0x18]
MOV EBX,EAX
LEA EDX,[ESI + 0x8c]
ADD EBX,EBP
INC ECX
ADD EAX,0x10
MOV EBP,dword ptr [EDX]
MOV dword ptr [EBX],EBP
MOV EBP,dword ptr [EDX + 0x4]
MOV dword ptr [EBX + 0x4],EBP
MOV EBP,dword ptr [EDX + 0x8]
MOV dword ptr [EBX + 0x8],EBP
MOV EDX,dword ptr [EDX + 0xc]
MOV dword ptr [EBX + 0xc],EDX
MOV EDX,dword ptr [ESP + 0x1c]
CMP ECX,EDX
JC 0x0049487b
MOV EAX,dword ptr [ESP + 0x28]
MOV ECX,dword ptr [ESP + 0x38]
PUSH EDX
MOV EDX,dword ptr [0x00df7f2c]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x50]
LEA EAX,[EDI + 0x24]
LEA ECX,[ESI + 0x8c]
MOV EDX,EAX
ADD ESP,0xc
MOV EBX,dword ptr [ECX]
MOV dword ptr [EDX],EBX
MOV EBX,dword ptr [ECX + 0x4]
MOV dword ptr [EDX + 0x4],EBX
MOV EBX,dword ptr [ECX + 0x8]
MOV dword ptr [EDX + 0x8],EBX
MOV ECX,dword ptr [ECX + 0xc]
MOV dword ptr [EDX + 0xc],ECX
MOV CL,byte ptr [0x00ecc438]
TEST CL,0x2
JZ 0x00494926
MOV EDX,dword ptr [0x00df7f2c]
FLD dword ptr [EDX + 0x5c]
FADD dword ptr [EAX]
FSTP dword ptr [EAX]
MOV EAX,[0x00df7f2c]
FLD dword ptr [EAX + 0x60]
FADD dword ptr [EDI + 0x28]
FSTP dword ptr [EDI + 0x28]
MOV ECX,dword ptr [0x00df7f2c]
FLD dword ptr [ECX + 0x64]
FADD dword ptr [EDI + 0x2c]
FSTP dword ptr [EDI + 0x2c]
MOV EDX,dword ptr [0x00df7f2c]
FLD dword ptr [EDX + 0x68]
FADD dword ptr [EDI + 0x30]
FSTP dword ptr [EDI + 0x30]
MOV EAX,dword ptr [ESP + 0x60]
MOV ECX,dword ptr [EAX + 0x28]
MOV dword ptr [EDI + 0x20],ECX
MOV EDX,dword ptr [ESI + 0x64]
OR EDX,0x2e
MOV dword ptr [EDI],EDX
MOV EAX,dword ptr [ESI + 0x7c]
MOV dword ptr [EDI + 0x1c],EAX
MOV ESI,dword ptr [ESI + 0x6c]
MOV EAX,[0x00ecc424]
CMP EAX,ESI
JL 0x0049494c
MOV EAX,ESI
MOV dword ptr [EDI + 0x4],EAX
MOV ECX,dword ptr [ESP + 0x1c]
PUSH 0x7
PUSH ECX
CALL 0x0048dea0
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x4c
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
ADD ESP,0x4c
RET
