; FUN_004a34c0
PUSH ECX
MOV ECX,dword ptr [0x004d4228]
PUSH EBX
MOV EBX,dword ptr [ESP + 0xc]
PUSH EBP
PUSH ESI
PUSH EDI
MOV dword ptr [ESP + 0x10],ECX
MOV EAX,dword ptr [ECX + 0x10]
CMP EAX,-0x1
JZ 0x004a3564
MOV EDI,dword ptr [ECX + 0x8]
LEA EBP,[ECX + 0x2018]
MOV ESI,EDI
SUB ESI,ECX
SUB ESI,0x18
SAR ESI,0x3
SHL ESI,0xc
ADD ESI,EAX
CMP EDI,EBP
JNC 0x004a3529
MOV EAX,dword ptr [EDI]
CMP EAX,EBX
JL 0x004a351c
CMP dword ptr [EDI + 0x4],EBX
JBE 0x004a351c
PUSH EBX
PUSH EAX
PUSH ESI
CALL 0x004a3700
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004a3578
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0x4],EBX
ADD EDI,0x8
ADD ESI,0x1000
CMP EDI,EBP
JC 0x004a34fb
MOV EBP,dword ptr [ECX + 0x8]
MOV EDI,dword ptr [ECX + 0x10]
LEA ESI,[ECX + 0x18]
CMP ESI,EBP
JNC 0x004a3564
MOV EAX,dword ptr [ESI]
CMP EAX,EBX
JL 0x004a3557
CMP dword ptr [ESI + 0x4],EBX
JBE 0x004a3557
PUSH EBX
PUSH EAX
PUSH EDI
CALL 0x004a3700
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004a3591
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x4],EBX
ADD ESI,0x8
ADD EDI,0x1000
CMP ESI,EBP
JC 0x004a3536
MOV ECX,dword ptr [ECX]
MOV EAX,[0x004d4228]
CMP ECX,EAX
MOV dword ptr [ESP + 0x10],ECX
JZ 0x004a35aa
JMP 0x004a34d3
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [0x004d4228],ECX
MOV EDX,dword ptr [EDI]
SUB EDX,EBX
MOV dword ptr [EDI],EDX
MOV dword ptr [ECX + 0x8],EDI
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [0x004d4228],ECX
MOV EDX,dword ptr [ESI]
SUB EDX,EBX
MOV dword ptr [ESI],EDX
MOV dword ptr [ECX + 0x8],ESI
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV EBP,0x4d2208
OR ECX,0xffffffff
CMP dword ptr [EBP + 0x10],ECX
JZ 0x004a35be
MOV EAX,dword ptr [EBP + 0xc]
TEST EAX,EAX
JNZ 0x004a35cf
MOV EBP,dword ptr [EBP]
CMP EBP,0x4d2208
JZ 0x004a36ad
JMP 0x004a35b2
MOV EAX,dword ptr [EBP + 0xc]
MOV ESI,dword ptr [EBP + 0x10]
MOV EDI,EAX
MOV dword ptr [ESP + 0x18],EAX
SUB EDI,EBP
MOV EDX,dword ptr [EAX]
SUB EDI,0x18
SAR EDI,0x3
SHL EDI,0xc
ADD EDI,ESI
XOR ESI,ESI
CMP EDX,ECX
JNZ 0x004a3600
CMP ESI,0x10
JGE 0x004a3600
MOV EDX,dword ptr [EAX + 0x8]
ADD EAX,0x8
INC ESI
CMP EDX,ECX
JZ 0x004a35f0
MOV EAX,ESI
PUSH 0x4
SHL EAX,0xc
PUSH 0x1000
PUSH EAX
PUSH EDI
MOV dword ptr [ESP + 0x20],EAX
CALL dword ptr [0x004ac0dc]
CMP EAX,EDI
JNZ 0x004a36eb
MOV EDX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x10]
XOR ECX,ECX
TEST ESI,ESI
MOV ECX,EDX
JLE 0x004a3662
LEA EAX,[EDI + 0x4]
LEA EDX,[EAX + 0x4]
MOV dword ptr [EAX],0xf0
MOV dword ptr [EAX + -0x4],EDX
MOV byte ptr [EAX + 0xf4],0xff
MOV dword ptr [ECX],0xf0
MOV dword ptr [ECX + 0x4],0xf1
ADD EAX,0x1000
ADD ECX,0x8
DEC ESI
JNZ 0x004a3633
MOV EDX,dword ptr [ESP + 0x18]
LEA EAX,[EBP + 0x2018]
MOV dword ptr [0x004d4228],EBP
CMP ECX,EAX
JNC 0x004a3680
CMP dword ptr [ECX],-0x1
JZ 0x004a367e
ADD ECX,0x8
CMP ECX,EAX
JC 0x004a3672
CMP ECX,EAX
SBB EAX,EAX
AND EAX,ECX
MOV dword ptr [EBP + 0xc],EAX
MOV byte ptr [EDI + 0x8],BL
MOV dword ptr [EBP + 0x8],EDX
MOV ECX,dword ptr [EDX]
SUB ECX,EBX
MOV dword ptr [EDX],ECX
MOV EAX,dword ptr [EDI + 0x4]
SUB EAX,EBX
LEA ECX,[EDI + EBX*0x1 + 0x8]
MOV dword ptr [EDI + 0x4],EAX
MOV dword ptr [EDI],ECX
LEA EAX,[EDI + 0x100]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
CALL 0x004a3160
TEST EAX,EAX
JZ 0x004a36eb
MOV ECX,dword ptr [EAX + 0x10]
MOV byte ptr [ECX + 0x8],BL
LEA EDX,[ECX + EBX*0x1 + 0x8]
MOV [0x004d4228],EAX
MOV dword ptr [ECX],EDX
MOV EDX,0xf0
SUB EDX,EBX
AND EBX,0xff
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EAX + 0x18]
SUB EDX,EBX
MOV dword ptr [EAX + 0x18],EDX
LEA EAX,[ECX + 0x100]
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
POP ECX
RET
