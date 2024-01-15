; FUN_0048f700
SUB ESP,0x1c
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x0048dba0
MOV ESI,EAX
TEST ESI,ESI
JZ 0x0048fa9a
MOV EDI,dword ptr [ESP + 0x30]
MOV ECX,dword ptr [0x00df7efc]
MOV EAX,dword ptr [EDI + 0xc]
CMP ECX,EAX
JGE 0x0048f729
MOV EAX,ECX
MOV dword ptr [ESI + 0x4],EAX
MOV EAX,dword ptr [ESI + 0x10]
MOV [0x00ecc49c],EAX
MOV ECX,dword ptr [ESI + 0x14]
MOV dword ptr [0x00ecc490],ECX
MOV EDX,dword ptr [ESI + 0x18]
MOV dword ptr [0x00ecc494],EDX
MOV EAX,dword ptr [EDI + 0x10]
MOV [0x00ecc4a0],EAX
MOV ECX,dword ptr [EDI + 0x14]
MOV EAX,[0x00df7f2c]
MOV dword ptr [0x00ecc4a4],ECX
MOV EDX,dword ptr [EDI + 0x18]
MOV dword ptr [0x00ecc4a8],EDX
MOV ECX,dword ptr [EAX + 0x4]
MOV EDX,dword ptr [ECX + 0x4]
CMP dword ptr [EDX + 0x24],0x8
JZ 0x0048f78d
MOV EDX,dword ptr [EAX + 0x48]
LEA ECX,[EDI + 0x24]
PUSH ECX
PUSH 0xecc480
PUSH 0xecc4a0
PUSH EDX
CALL 0x00493b80
ADD ESP,0x10
JMP 0x0048f7ab
MOV ECX,dword ptr [ESI + 0x4]
MOV EDX,dword ptr [EDI + 0x8]
LEA EAX,[EDI + 0x24]
PUSH EAX
PUSH 0xecc480
PUSH 0xecc4a0
PUSH ECX
PUSH EDX
CALL 0x00491ac0
ADD ESP,0x14
MOV EAX,[0x00ecc480]
MOV EBP,0x3
CMP EAX,EBP
JC 0x0048fa9a
LEA EBX,[ESI + 0x24]
LEA EAX,[EDI + 0x2c]
MOV ECX,EBX
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],EDX
MOV EAX,dword ptr [EAX + 0xc]
MOV dword ptr [ECX + 0xc],EAX
MOV EAX,dword ptr [ESI + 0x4]
SUB EAX,0x2
JNZ 0x0048f88c
MOV EAX,dword ptr [ESP + 0x34]
TEST EAX,EAX
JZ 0x0048f831
FLD dword ptr [EDI + 0x3c]
FCHS
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [EDI + 0x40]
MOV EAX,[0x00df7f2c]
LEA ECX,[ESP + 0x1c]
FCHS
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [EDI + 0x44]
FCHS
FSTP dword ptr [ESP + 0x18]
MOV EDX,dword ptr [EAX + 0x870]
PUSH ECX
MOV ECX,dword ptr [0x00df7ce8]
PUSH EDX
MOV EDX,dword ptr [ECX + 0x4c]
LEA ECX,[ESP + 0x18]
PUSH EDX
MOV EDX,dword ptr [EAX + 0x6c]
PUSH ECX
PUSH EDI
PUSH EDX
JMP 0x0048f855
MOV EDX,dword ptr [0x00df7ce8]
LEA EAX,[ESP + 0x1c]
PUSH EAX
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [EAX + 0x870]
PUSH ECX
MOV ECX,dword ptr [EDX + 0x4c]
LEA EDX,[EDI + 0x3c]
PUSH ECX
MOV ECX,dword ptr [EAX + 0x6c]
PUSH EDX
PUSH EDI
PUSH ECX
ADD EAX,0x70
PUSH 0xdeb6e8
PUSH EAX
CALL 0x00490750
FLD dword ptr [ESP + 0x3c]
FADD dword ptr [EBX]
ADD ESP,0x20
FSTP dword ptr [EBX]
FLD dword ptr [ESP + 0x20]
FADD dword ptr [ESI + 0x28]
FSTP dword ptr [ESI + 0x28]
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESI + 0x2c]
FSTP dword ptr [ESI + 0x2c]
FLD dword ptr [ESP + 0x28]
FADD dword ptr [ESI + 0x30]
FSTP dword ptr [ESI + 0x30]
MOV EDX,dword ptr [0x00ecc480]
MOV EAX,[0x00ecc48c]
MOV ECX,dword ptr [0x00ecc49c]
PUSH EDX
MOV EDX,dword ptr [0x00df7f2c]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x50]
MOV AL,[0x00ecc438]
ADD ESP,0xc
TEST AL,0x2
JZ 0x0048f8ed
MOV EAX,[0x00df7f2c]
FLD dword ptr [EAX + 0x5c]
FADD dword ptr [EBX]
FSTP dword ptr [EBX]
MOV ECX,dword ptr [0x00df7f2c]
FLD dword ptr [ECX + 0x60]
FADD dword ptr [ESI + 0x28]
FSTP dword ptr [ESI + 0x28]
MOV EDX,dword ptr [0x00df7f2c]
FLD dword ptr [EDX + 0x64]
FADD dword ptr [ESI + 0x2c]
FSTP dword ptr [ESI + 0x2c]
MOV EAX,[0x00df7f2c]
FLD dword ptr [EAX + 0x68]
FADD dword ptr [ESI + 0x30]
FSTP dword ptr [ESI + 0x30]
MOV EBX,dword ptr [ESP + 0x38]
CMP dword ptr [EBX + 0xc],0x3f800000
JZ 0x0048f938
FLD dword ptr [ESI + 0x30]
FMUL dword ptr [EBX + 0xc]
XOR ECX,ECX
FMUL dword ptr [0x004af7a8]
FSTP dword ptr [ESI + 0x30]
MOV EAX,[0x00ecc480]
TEST EAX,EAX
JBE 0x0048f938
XOR EDX,EDX
MOV EAX,dword ptr [ESI + 0x18]
INC ECX
FLD dword ptr [EDX + EAX*0x1 + 0xc]
FMUL dword ptr [EBX + 0xc]
LEA EAX,[EDX + EAX*0x1 + 0xc]
ADD EDX,0x10
FMUL dword ptr [0x004af7a8]
FSTP dword ptr [EAX]
CMP ECX,dword ptr [0x00ecc480]
JC 0x0048f916
MOV EAX,dword ptr [ESI + 0x4]
MOV ECX,dword ptr [EDI + 0x20]
CMP EAX,EBP
MOV dword ptr [ESI + 0x20],ECX
MOV EDX,EBP
JL 0x0048f94c
MOV EDX,0x7
MOV EAX,dword ptr [EDI + 0x4]
OR EDX,0x4
MOV dword ptr [ESI],EAX
MOV ECX,dword ptr [0x00df7f18]
OR ECX,EAX
MOV dword ptr [ESI],ECX
MOV EAX,dword ptr [EDI + 0x4]
TEST AH,0x4
JZ 0x0048f99b
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [EAX + 0x48]
MOV EAX,dword ptr [ECX + 0x4]
XOR ECX,ECX
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,[0x00ecc480]
TEST EAX,EAX
JBE 0x0048f99b
XOR EAX,EAX
MOV EBP,dword ptr [ESI + 0x10]
INC ECX
FLD dword ptr [ESP + 0x30]
FSTP dword ptr [EAX + EBP*0x1 + 0x8]
MOV EBP,dword ptr [0x00ecc480]
ADD EAX,0xc
CMP ECX,EBP
JC 0x0048f982
CMP dword ptr [EBX + 0xc],0x3f800000
JZ 0x0048f9aa
MOV EAX,dword ptr [ESI]
OR AL,0x2
MOV dword ptr [ESI],EAX
MOV ECX,dword ptr [EDI + 0x1c]
MOV EAX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESI + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x40]
MOV dword ptr [ESI + 0x38],EAX
MOV dword ptr [ESI + 0x3c],ECX
MOV EBX,dword ptr [0x00df7f2c]
MOV EAX,dword ptr [EBX + 0x4]
MOV ECX,dword ptr [EAX + 0x4]
CMP dword ptr [ECX + 0x24],0x8
JNZ 0x0048fa70
MOV EAX,[0x00ecc480]
XOR EBP,EBP
TEST EAX,EAX
JBE 0x0048fa9a
XOR ESI,ESI
JMP 0x0048f9ed
MOV EBX,dword ptr [0x00df7f2c]
MOV EDI,dword ptr [0x00ecc49c]
DEC EAX
CMP EBP,EAX
PUSH -0x1
PUSH 0x0
JNC 0x0048fa29
FLD dword ptr [EDI + ESI*0x1 + 0x10]
CALL 0x0049ed20
FLD dword ptr [EDI + ESI*0x1 + 0xc]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [EDI + ESI*0x1 + 0x4]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [EDI + ESI*0x1]
PUSH EAX
CALL 0x0049ed20
MOV EDX,dword ptr [EBX + 0x4]
PUSH EAX
PUSH EDX
JMP 0x0048fa51
FLD dword ptr [EDI + 0x4]
CALL 0x0049ed20
FLD dword ptr [EDI]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [EDI + ESI*0x1 + 0x4]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [EDI + ESI*0x1]
PUSH EAX
CALL 0x0049ed20
PUSH EAX
MOV EAX,dword ptr [EBX + 0x4]
PUSH EAX
CALL 0x00490e10
MOV EAX,[0x00ecc480]
ADD ESP,0x1c
INC EBP
ADD ESI,0xc
CMP EBP,EAX
JC 0x0048f9e7
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
MOV EDI,dword ptr [0x00ecc470]
MOV ECX,dword ptr [0x00ecc480]
INC EDI
PUSH EDX
PUSH ECX
MOV dword ptr [0x00ecc470],EDI
CALL 0x0048de10
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
ADD ESP,0x1c
RET
