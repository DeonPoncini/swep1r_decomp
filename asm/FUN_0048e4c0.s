; FUN_0048e4c0
PUSH EBP
MOV EBP,ESP
SUB ESP,0x18
PUSH EDI
MOV ECX,0x5000
XOR EAX,EAX
MOV EDI,0xb6b0e8
STOSD.REP ES:EDI
CALL 0x0048a3c0
MOV EAX,dword ptr [EBP + 0x8]
TEST EAX,EAX
JBE 0x0048e5e9
MOV ECX,dword ptr [EBP + 0xc]
PUSH ESI
PUSH EBX
MOV dword ptr [EBP + 0x8],EAX
LEA ESI,[ECX + 0x8]
OR EDI,0xffffffff
MOV EAX,dword ptr [ESI]
XOR EDX,EDX
TEST EAX,EAX
JBE 0x0048e558
XOR ECX,ECX
MOV EAX,0xb6b0ec
MOV EBX,dword ptr [ESI + 0x8]
FLD dword ptr [EBX + ECX*0x1]
FSTP dword ptr [EBP + 0xc]
FLDCW word ptr [0x00ec8c84]
FLD dword ptr [EBP + 0xc]
FRNDINT
FSTP dword ptr [EBP + -0x4]
FLDCW word ptr [0x00ec8c80]
FLD dword ptr [EBP + -0x4]
FSTP dword ptr [EAX + -0x4]
MOV EBX,dword ptr [ESI + 0x8]
FLD dword ptr [EBX + ECX*0x1 + 0x4]
FSTP dword ptr [EBP + 0xc]
FLDCW word ptr [0x00ec8c84]
FLD dword ptr [EBP + 0xc]
FRNDINT
FSTP dword ptr [EBP + -0x8]
FLDCW word ptr [0x00ec8c80]
FLD dword ptr [EBP + -0x8]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0xc],EDI
MOV EBX,dword ptr [ESI]
INC EDX
ADD ECX,0xc
ADD EAX,0x20
CMP EDX,EBX
JC 0x0048e502
MOV EAX,[0x00ecc430]
DEC EAX
JZ 0x0048e5c7
DEC EAX
JNZ 0x0048e5d7
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [EAX]
MOV dword ptr [EBP + -0xc],ECX
FLDCW word ptr [0x00ec8c84]
FLD dword ptr [EBP + -0xc]
FRNDINT
FSTP dword ptr [EBP + -0x10]
FLDCW word ptr [0x00ec8c80]
FLD dword ptr [EBP + -0x10]
SHL EDX,0x5
FSTP dword ptr [EDX + 0xb6b0e8]
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EBP + -0x14],ECX
FLDCW word ptr [0x00ec8c84]
FLD dword ptr [EBP + -0x14]
FRNDINT
FSTP dword ptr [EBP + -0x18]
FLDCW word ptr [0x00ec8c80]
FLD dword ptr [EBP + -0x18]
FSTP dword ptr [EDX + 0xb6b0ec]
MOV dword ptr [EDX + 0xb6b0f8],EDI
MOV EDX,dword ptr [ESI]
INC EDX
PUSH EDX
PUSH 0xb6b0e8
CALL 0x0048a3f0
JMP 0x0048e5d4
MOV EAX,dword ptr [ESI]
PUSH EAX
PUSH 0xb6b0e8
CALL 0x0048a420
ADD ESP,0x8
MOV EAX,dword ptr [EBP + 0x8]
ADD ESI,0x40
DEC EAX
MOV dword ptr [EBP + 0x8],EAX
JNZ 0x0048e4f3
POP EBX
POP ESI
POP EDI
MOV ESP,EBP
POP EBP
RET
