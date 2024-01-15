; FUN_00486970
PUSH EBP
MOV EBP,ESP
MOV ECX,dword ptr [EBP + 0x8]
PUSH ESI
MOV ESI,dword ptr [EBP + 0x10]
PUSH EDI
MOV EDI,dword ptr [EBP + 0xc]
MOV EAX,ESI
SUB EAX,EDI
LEA ECX,[ECX + ECX*0x2]
INC EAX
CDQ
SHL ECX,0x3
SUB EAX,EDX
MOV EDX,dword ptr [ECX + 0x50f0a8]
OR EDX,0x1
SAR EAX,0x1
MOV dword ptr [ECX + 0x50f0a8],EDX
ADD EAX,EDI
MOV dword ptr [ECX + 0x50f0ac],EDI
MOV dword ptr [ECX + 0x50f0b0],ESI
SUB ESI,EAX
MOV dword ptr [ECX + 0x50f0b4],EAX
MOV dword ptr [EBP + 0x10],ESI
FILD dword ptr [EBP + 0x10]
FLD dword ptr [0x004ae2c8]
FDIV ST0,ST1
FSTP dword ptr [ECX + 0x50f0bc]
FLD dword ptr [EBP + 0x14]
FCOMP dword ptr [0x004ae2d0]
FNSTSW AX
TEST AH,0x40
JNZ 0x004869fe
FLD dword ptr [EBP + 0x14]
FMUL ST1
LEA EAX,[EBP + 0x14]
MOV dword ptr [EBP + 0x10],EAX
FSTP dword ptr [EBP + 0xc]
FSTP ST0
FLD dword ptr [EBP + 0xc]
MOV EAX,dword ptr [EBP + 0x10]
FRNDINT
FISTP dword ptr [EAX]
MOV EDX,dword ptr [EBP + 0x14]
MOV dword ptr [ECX + 0x50f0b8],EDX
POP EDI
POP ESI
POP EBP
RET
POP EDI
MOV dword ptr [ECX + 0x50f0b8],0x0
FSTP ST0
POP ESI
POP EBP
RET
