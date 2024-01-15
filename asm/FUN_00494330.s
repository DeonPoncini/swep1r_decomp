; FUN_00494330
MOV EAX,[0x00df7f2c]
SUB ESP,0x4c
ADD EAX,0x8
LEA EDX,[ESP]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x5c]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x5c]
PUSH EDI
LEA ECX,[EBP + 0x24]
PUSH EAX
MOV EDI,dword ptr [ESI + 0x4]
PUSH ECX
PUSH EDX
CALL 0x00493200
MOV EAX,dword ptr [ESI + 0x38]
MOV EBX,0x2
ADD ESP,0xc
CMP EAX,EBX
JZ 0x004945ca
MOV EAX,[0x00df7f2c]
PUSH EBP
ADD EAX,0x8
LEA ECX,[ESP + 0x30]
PUSH EAX
PUSH ECX
CALL 0x00492b70
MOV AL,[0x00ecc438]
ADD ESP,0xc
TEST BL,AL
JZ 0x004943b2
MOV EDX,dword ptr [0x00df7f2c]
ADD EDX,0x5c
MOV EAX,dword ptr [EDX]
MOV dword ptr [ESP + 0x1c],EAX
MOV ECX,dword ptr [EDX + 0x4]
MOV dword ptr [ESP + 0x20],ECX
MOV EAX,dword ptr [EDX + 0x8]
MOV dword ptr [ESP + 0x24],EAX
MOV ECX,dword ptr [EDX + 0xc]
MOV dword ptr [ESP + 0x28],ECX
JMP 0x004943d2
MOV dword ptr [ESP + 0x1c],0x0
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x24],0x0
MOV dword ptr [ESP + 0x28],0x0
MOV EDX,dword ptr [EDI + 0x40]
MOV EAX,dword ptr [EDI + 0x44]
MOV ECX,dword ptr [EDI + 0x48]
MOV dword ptr [ESP + 0x64],EDX
PUSH EAX
PUSH 0xdf8b20
LEA EDX,[ESP + 0x34]
PUSH ECX
PUSH EDX
CALL 0x00493270
MOV EAX,dword ptr [EDI + 0x44]
XOR EBX,EBX
ADD ESP,0x10
CMP EAX,EBX
MOV dword ptr [ESP + 0x60],EBX
JBE 0x004945bd
MOV EBP,0xdf8b24
CALL 0x0048dc40
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004945ca
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EDI + 0x58]
FLD dword ptr [EBP + 0x4]
FXCH
MOV EAX,dword ptr [EBP]
MOV ECX,dword ptr [0x00df7f2c]
MOV [0x00df8764],EAX
PUSH 0x4
FSTP dword ptr [0x00df8760]
PUSH 0xdf8760
FSUB dword ptr [EDI + 0x58]
FLD dword ptr [EBP + -0x4]
FLD dword ptr [EBP]
FLD dword ptr [EBP + 0x4]
FXCH ST3
FSTP dword ptr [0x00df8768]
FXCH
FADD dword ptr [EDI + 0x58]
FXCH
FSTP dword ptr [0x00df8770]
FLD dword ptr [EBP + -0x4]
FLD dword ptr [EBP]
FXCH ST2
FSTP dword ptr [0x00df876c]
FXCH ST2
FSUB dword ptr [EDI + 0x58]
FLD dword ptr [EBP + 0x4]
FLD dword ptr [EBP + -0x4]
FLD dword ptr [EBP]
FXCH ST3
FSTP dword ptr [0x00df8774]
FXCH ST4
FADD dword ptr [EDI + 0x58]
FXCH ST3
FSTP dword ptr [0x00df877c]
FLD dword ptr [EBP + 0x4]
FXCH ST3
FSTP dword ptr [0x00df8778]
FADD dword ptr [EDI + 0x58]
FSTP dword ptr [0x00df8780]
FXCH ST2
FSUB dword ptr [EDI + 0x58]
FXCH ST2
FSTP dword ptr [0x00df8788]
FXCH
FSTP dword ptr [0x00df8784]
FADD dword ptr [EDI + 0x58]
FSTP dword ptr [0x00df878c]
MOV EDX,dword ptr [ECX + 0x48]
PUSH EDX
CALL 0x00495d50
ADD ESP,0xc
CMP EAX,0x4
JNZ 0x004945a3
MOV ECX,dword ptr [0x00df7f2c]
PUSH EAX
MOV EAX,dword ptr [ESI + 0x10]
PUSH 0xdf8760
PUSH EAX
CALL dword ptr [ECX + 0x50]
MOV ECX,dword ptr [ESP + 0x28]
LEA EAX,[ESI + 0x24]
MOV EDX,EAX
MOV dword ptr [ESI],0x0
ADD ESP,0xc
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [ESP + 0x20]
PUSH 0x7
PUSH 0x4
MOV dword ptr [EDX + 0x4],ECX
MOV ECX,dword ptr [ESP + 0x2c]
MOV dword ptr [EDX + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [EDX + 0xc],ECX
MOV EDX,dword ptr [ESP + 0x6c]
MOV dword ptr [ESI + 0x4],EDX
MOV ECX,dword ptr [EDI + 0x5c]
MOV dword ptr [ESI + 0x1c],ECX
MOV EDX,dword ptr [EDI + 0x4c]
MOV ECX,dword ptr [ESP + 0x68]
MOV EDX,dword ptr [EDX + ECX*0x4]
MOV ECX,dword ptr [ESI + 0x14]
MOV dword ptr [ESI + 0x20],EDX
MOV dword ptr [ECX],0x0
MOV EDX,dword ptr [ESI + 0x14]
MOV ECX,0x3f800000
MOV dword ptr [EDX + 0x4],0x0
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0x8],ECX
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0xc],0x0
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0x10],ECX
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0x14],ECX
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0x18],0x0
MOV EDX,dword ptr [ESI + 0x14]
MOV dword ptr [EDX + 0x1c],ECX
MOV ECX,dword ptr [EDI + 0x50]
MOV EDX,dword ptr [EBX + ECX*0x1]
MOV dword ptr [EAX],EDX
MOV EAX,dword ptr [EDI + 0x50]
MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4]
MOV dword ptr [ESI + 0x28],ECX
MOV EDX,dword ptr [EDI + 0x50]
MOV EAX,dword ptr [EBX + EDX*0x1 + 0x8]
MOV dword ptr [ESI + 0x2c],EAX
MOV ECX,dword ptr [EDI + 0x50]
MOV EDX,dword ptr [EBX + ECX*0x1 + 0xc]
MOV dword ptr [ESI + 0x30],EDX
CALL 0x0048dea0
ADD ESP,0x8
MOV EAX,dword ptr [ESP + 0x60]
MOV ECX,dword ptr [EDI + 0x44]
INC EAX
ADD EBP,0xc
ADD EBX,0x10
CMP EAX,ECX
MOV dword ptr [ESP + 0x60],EAX
JC 0x00494409
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
