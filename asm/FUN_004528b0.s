; FUN_004528b0
SUB ESP,0x58
PUSH EBX
MOV EBX,dword ptr [ESP + 0x60]
PUSH ESI
PUSH EDI
MOV ESI,dword ptr [EBX + 0xf4]
TEST ESI,ESI
JZ 0x00452a92
MOV EDI,dword ptr [ESI + 0x60]
MOV EAX,dword ptr [EBX + 0x7c]
AND EDI,0x6000000
MOV dword ptr [EBX + 0x2b0],0x42c80000
NEG EDI
SBB EDI,EDI
NEG EDI
CMP EAX,0x5
JNZ 0x004528f3
MOV dword ptr [EBX + 0x2b0],0x42f00000
LEA EAX,[ESI + 0x20]
LEA ECX,[ESP + 0x24]
PUSH EAX
PUSH ECX
CALL 0x0044bb10
FLD dword ptr [ESI + 0x250]
FADD dword ptr [ESP + 0x64]
MOV EAX,dword ptr [EBX + 0x7c]
ADD ESP,0x8
CMP EAX,0x5
FSTP dword ptr [ESP + 0x5c]
FLD dword ptr [ESI + 0xa8]
FSUB dword ptr [0x004ace6c]
FMUL dword ptr [0x004acdc8]
FSTP dword ptr [ESP + 0x68]
JZ 0x0045295a
MOV EDX,dword ptr [ESI + 0x1e70]
FLD dword ptr [ESP + 0x68]
MOV EAX,dword ptr [EDX + 0x18]
FMUL dword ptr [0x004ace70]
CMP dword ptr [EAX],0xe
FSTP dword ptr [ESP + 0x68]
JNZ 0x0045295a
FLD dword ptr [ESP + 0x68]
FMUL dword ptr [0x004ace74]
FSTP dword ptr [ESP + 0x68]
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x18]
CMP dword ptr [EDX],0xe
JNZ 0x00452986
MOV ECX,dword ptr [ESP + 0x68]
LEA EAX,[ESP + 0x44]
PUSH EAX
LEA EDX,[ESP + 0x58]
PUSH ECX
LEA EAX,[ESP + 0x5c]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
JMP 0x0045299d
FLD dword ptr [ESI + 0x48]
FMUL dword ptr [ESP + 0x68]
TEST EDI,EDI
JNZ 0x0045299b
FADD dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x5c]
JMP 0x0045299d
FSTP ST0
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x18]
CMP dword ptr [EDX],0xa
JNZ 0x004529c7
LEA EAX,[ESP + 0x34]
LEA ECX,[ESP + 0x54]
PUSH EAX
PUSH 0x40400000
LEA EDX,[ESP + 0x5c]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
ADD ESP,0x10
TEST dword ptr [ESI + 0x64],0x18000
JZ 0x00452a04
LEA EAX,[ESP + 0xc]
LEA ECX,[ESI + 0x490]
PUSH EAX
PUSH ECX
CALL 0x00430b80
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0x8
LEA EDX,[ESP + 0x24]
LEA ECX,[ESP + 0x24]
PUSH EDX
PUSH 0x0
PUSH 0x3f800000
PUSH 0x0
PUSH EAX
PUSH ECX
CALL 0x00431390
ADD ESP,0x18
LEA EDX,[ESP + 0x24]
LEA EDI,[EBX + 0x20]
PUSH EDX
PUSH EDI
CALL 0x0044bb10
ADD ESP,0x8
LEA EAX,[ESP + 0x24]
LEA ECX,[EBX + 0x108]
PUSH EAX
PUSH ECX
CALL 0x0044bb10
MOV EAX,dword ptr [ESI + 0x60]
ADD ESP,0x8
LEA EDX,[ESP + 0x34]
TEST EAX,0x100000
PUSH EDX
JZ 0x00452a79
LEA EAX,[ESP + 0x58]
PUSH 0xbf800000
LEA ECX,[EBX + 0x138]
PUSH EAX
PUSH ECX
CALL 0x0042fa80
ADD ESP,0x10
LEA EAX,[EBX + 0x30]
PUSH EAX
PUSH 0xbf800000
PUSH EAX
CALL 0x0042fa50
ADD ESP,0xc
PUSH EDI
PUSH 0xbf800000
PUSH EDI
CALL 0x0042fa50
ADD ESP,0xc
POP EDI
POP ESI
POP EBX
ADD ESP,0x58
RET
LEA EAX,[ESP + 0x58]
PUSH 0x3f800000
ADD EBX,0x138
PUSH EAX
PUSH EBX
CALL 0x0042fa80
ADD ESP,0x10
POP EDI
POP ESI
POP EBX
ADD ESP,0x58
RET
