; FUN_0049f4e0
PUSH EBP
MOV EBP,ESP
PUSH EDI
PUSH ESI
MOV ESI,dword ptr [EBP + 0xc]
MOV ECX,dword ptr [EBP + 0x10]
MOV EDI,dword ptr [EBP + 0x8]
MOV EAX,ECX
MOV EDX,ECX
ADD EAX,ESI
CMP EDI,ESI
JBE 0x0049f500
CMP EDI,EAX
JC 0x0049f678
TEST EDI,0x3
JNZ 0x0049f51c
SHR ECX,0x2
AND EDX,0x3
CMP ECX,0x8
JC 0x0049f53c
MOVSD.REP ES:EDI,ESI
JMP dword ptr [EDX*0x4 + 0x49f628]
MOV EAX,EDI
MOV EDX,0x3
SUB ECX,0x4
JC 0x0049f534
AND EAX,0x3
ADD ECX,EAX
JMP dword ptr [EAX*0x4 + 0x49f540]
JMP dword ptr [ECX*0x4 + 0x49f638]
JMP dword ptr [ECX*0x4 + 0x49f5bc]
AND EDX,ECX
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
MOV AL,byte ptr [ESI + 0x1]
MOV byte ptr [EDI + 0x1],AL
MOV AL,byte ptr [ESI + 0x2]
SHR ECX,0x2
MOV byte ptr [EDI + 0x2],AL
ADD ESI,0x3
ADD EDI,0x3
CMP ECX,0x8
JC 0x0049f53c
MOVSD.REP ES:EDI,ESI
JMP dword ptr [EDX*0x4 + 0x49f628]
AND EDX,ECX
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
MOV AL,byte ptr [ESI + 0x1]
SHR ECX,0x2
MOV byte ptr [EDI + 0x1],AL
ADD ESI,0x2
ADD EDI,0x2
CMP ECX,0x8
JC 0x0049f53c
MOVSD.REP ES:EDI,ESI
JMP dword ptr [EDX*0x4 + 0x49f628]
AND EDX,ECX
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
INC ESI
SHR ECX,0x2
INC EDI
CMP ECX,0x8
JC 0x0049f53c
MOVSD.REP ES:EDI,ESI
JMP dword ptr [EDX*0x4 + 0x49f628]
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
LEA EAX,[ECX*0x4 + 0x0]
ADD ESI,EAX
ADD EDI,EAX
JMP dword ptr [EDX*0x4 + 0x49f628]
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
MOV AL,byte ptr [ESI + 0x1]
MOV byte ptr [EDI + 0x1],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI]
MOV byte ptr [EDI],AL
MOV AL,byte ptr [ESI + 0x1]
MOV byte ptr [EDI + 0x1],AL
MOV AL,byte ptr [ESI + 0x2]
MOV byte ptr [EDI + 0x2],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
LEA ESI,[ECX + ESI*0x1 + -0x4]
LEA EDI,[ECX + EDI*0x1 + -0x4]
TEST EDI,0x3
JNZ 0x0049f6ac
SHR ECX,0x2
AND EDX,0x3
CMP ECX,0x8
JC 0x0049f6a0
STD
MOVSD.REP ES:EDI,ESI
CLD
JMP dword ptr [EDX*0x4 + 0x49f7c0]
NEG ECX
JMP dword ptr [ECX*0x4 + 0x49f770]
MOV EAX,EDI
MOV EDX,0x3
CMP ECX,0x4
JC 0x0049f6c4
AND EAX,0x3
SUB ECX,EAX
JMP dword ptr [EAX*0x4 + 0x49f6c8]
JMP dword ptr [ECX*0x4 + 0x49f7c0]
MOV AL,byte ptr [ESI + 0x3]
AND EDX,ECX
MOV byte ptr [EDI + 0x3],AL
DEC ESI
SHR ECX,0x2
DEC EDI
CMP ECX,0x8
JC 0x0049f6a0
STD
MOVSD.REP ES:EDI,ESI
CLD
JMP dword ptr [EDX*0x4 + 0x49f7c0]
MOV AL,byte ptr [ESI + 0x3]
AND EDX,ECX
MOV byte ptr [EDI + 0x3],AL
MOV AL,byte ptr [ESI + 0x2]
SHR ECX,0x2
MOV byte ptr [EDI + 0x2],AL
SUB ESI,0x2
SUB EDI,0x2
CMP ECX,0x8
JC 0x0049f6a0
STD
MOVSD.REP ES:EDI,ESI
CLD
JMP dword ptr [EDX*0x4 + 0x49f7c0]
MOV AL,byte ptr [ESI + 0x3]
AND EDX,ECX
MOV byte ptr [EDI + 0x3],AL
MOV AL,byte ptr [ESI + 0x2]
MOV byte ptr [EDI + 0x2],AL
MOV AL,byte ptr [ESI + 0x1]
SHR ECX,0x2
MOV byte ptr [EDI + 0x1],AL
SUB ESI,0x3
SUB EDI,0x3
CMP ECX,0x8
JC 0x0049f6a0
STD
MOVSD.REP ES:EDI,ESI
CLD
JMP dword ptr [EDX*0x4 + 0x49f7c0]
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
LEA EAX,[ECX*0x4 + 0x0]
ADD ESI,EAX
ADD EDI,EAX
JMP dword ptr [EDX*0x4 + 0x49f7c0]
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI + 0x3]
MOV byte ptr [EDI + 0x3],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI + 0x3]
MOV byte ptr [EDI + 0x3],AL
MOV AL,byte ptr [ESI + 0x2]
MOV byte ptr [EDI + 0x2],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
MOV AL,byte ptr [ESI + 0x3]
MOV byte ptr [EDI + 0x3],AL
MOV AL,byte ptr [ESI + 0x2]
MOV byte ptr [EDI + 0x2],AL
MOV AL,byte ptr [ESI + 0x1]
MOV byte ptr [EDI + 0x1],AL
MOV EAX,dword ptr [EBP + 0x8]
POP ESI
POP EDI
LEAVE
RET
