; FUN_00430730
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x18]
OR ECX,0xffffffff
XOR EBX,EBX
MOV EDX,ESI
SUB EDI,ESI
MOV dword ptr [ESP + 0x1c],EDX
MOV dword ptr [ESP + 0x18],EDI
MOV EAX,dword ptr [EDI + EDX*0x1]
MOV EBP,dword ptr [EDX]
TEST ECX,ECX
FLD dword ptr [ESI + EAX*0x4]
MOV dword ptr [ESI + EAX*0x4],EBP
JL 0x0043078d
LEA EAX,[EBX + -0x1]
CMP ECX,EAX
JG 0x0043079c
MOV EBP,dword ptr [ESP + 0x14]
LEA EDX,[ECX + EBX*0x4]
SUB EAX,ECX
LEA EDI,[ESI + ECX*0x4]
LEA EDX,[EBP + EDX*0x4]
INC EAX
FLD dword ptr [EDI]
FMUL dword ptr [EDX]
ADD EDX,0x4
ADD EDI,0x4
DEC EAX
FSUBP
JNZ 0x00430774
MOV EDX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x18]
JMP 0x0043079c
FCOM dword ptr [0x004ac678]
FNSTSW AX
TEST AH,0x40
JNZ 0x0043079c
MOV ECX,EBX
FSTP dword ptr [EDX]
INC EBX
ADD EDX,0x4
CMP EBX,0x3
MOV dword ptr [ESP + 0x1c],EDX
JL 0x0043074d
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,0x8
MOV ECX,0x3
LEA EBP,[EAX + 0x28]
FLD dword ptr [ESI + EDX*0x1]
CMP ECX,0x3
JGE 0x004307e8
MOV EDI,dword ptr [ESP + 0x14]
LEA EAX,[ECX + EDX*0x1]
LEA EBX,[ESI + EDX*0x1 + 0x4]
LEA EDI,[EDI + EAX*0x4]
MOV EAX,0x3
SUB EAX,ECX
FLD dword ptr [EDI]
FMUL dword ptr [EBX]
ADD EDI,0x4
ADD EBX,0x4
DEC EAX
FSUBP
JNZ 0x004307d9
FDIV dword ptr [EBP]
DEC ECX
SUB EBP,0x14
SUB EDX,0x4
LEA EAX,[ECX + -0x1]
TEST EAX,EAX
FSTP dword ptr [ESI + EDX*0x1 + 0x4]
JGE 0x004307bc
POP EDI
POP ESI
POP EBP
POP EBX
RET
