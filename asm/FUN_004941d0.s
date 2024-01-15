; FUN_004941d0
SUB ESP,0x20
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x0048dba0
MOV ESI,EAX
TEST ESI,ESI
JZ 0x0049431f
MOV EDI,dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x1c],0xdf7fe0
MOV EAX,dword ptr [ESI + 0x10]
MOV dword ptr [ESP + 0x2c],EAX
MOV ECX,dword ptr [ESI + 0x14]
MOV EAX,dword ptr [EDI + 0x10]
MOV dword ptr [ESP + 0x20],ECX
MOV ECX,dword ptr [ESP + 0x40]
MOV EDX,dword ptr [ESI + 0x18]
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ECX],EAX
MOV EDX,dword ptr [EDI + 0x14]
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,dword ptr [EDI + 0x18]
MOV dword ptr [ECX + 0x8],EAX
MOV EDX,dword ptr [EDI + 0xc]
MOV EAX,[0x00ecc424]
CMP EAX,EDX
MOV EBP,EAX
JL 0x0049422c
MOV EBP,EDX
MOV EBX,dword ptr [ESP + 0x34]
MOV EBX,dword ptr [EBX + 0x34]
CMP EBP,EBX
JGE 0x0049423f
CMP EAX,EDX
JL 0x00494241
MOV EAX,EDX
JMP 0x00494241
MOV EAX,EBX
LEA EDX,[EDI + 0x24]
MOV dword ptr [ESI + 0x4],EAX
PUSH EDX
LEA EDX,[ESP + 0x14]
PUSH EDX
PUSH ECX
MOV ECX,dword ptr [0x00df7f2c]
PUSH EAX
MOV EAX,dword ptr [EDI + 0x8]
MOV EDX,dword ptr [ECX + 0x48]
PUSH EAX
PUSH EDX
CALL 0x004910a0
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0x18
CMP EAX,0x3
JC 0x0049431f
MOV ECX,dword ptr [ESP + 0x2c]
MOV EDX,dword ptr [0x00df7f2c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x50]
LEA EAX,[ESI + 0x24]
LEA ECX,[EDI + 0x2c]
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
JZ 0x004942eb
MOV EDX,dword ptr [0x00df7f2c]
FLD dword ptr [EDX + 0x5c]
FADD dword ptr [EAX]
FSTP dword ptr [EAX]
MOV EAX,[0x00df7f2c]
FLD dword ptr [EAX + 0x60]
FADD dword ptr [ESI + 0x28]
FSTP dword ptr [ESI + 0x28]
MOV ECX,dword ptr [0x00df7f2c]
FLD dword ptr [ECX + 0x64]
FADD dword ptr [ESI + 0x2c]
FSTP dword ptr [ESI + 0x2c]
MOV EDX,dword ptr [0x00df7f2c]
FLD dword ptr [EDX + 0x68]
FADD dword ptr [ESI + 0x30]
FSTP dword ptr [ESI + 0x30]
MOV ECX,dword ptr [ESI + 0x4]
MOV EAX,0x3
CMP ECX,EAX
JL 0x004942fc
MOV EAX,0x7
MOV ECX,dword ptr [ESP + 0x34]
PUSH EAX
MOV EDX,dword ptr [ECX + 0x28]
MOV dword ptr [ESI + 0x20],EDX
MOV ECX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI],ECX
MOV EDX,dword ptr [EDI + 0x1c]
MOV dword ptr [ESI + 0x1c],EDX
MOV EAX,dword ptr [ESP + 0x14]
PUSH EAX
CALL 0x0048de10
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
