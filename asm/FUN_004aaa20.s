; FUN_004aaa20
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV EAX,dword ptr [ESI + 0xc]
MOV EBP,dword ptr [ESI + 0x10]
TEST AL,0x82
JZ 0x004aab58
TEST AL,0x40
JNZ 0x004aab58
XOR EBX,EBX
TEST AL,0x1
JZ 0x004aaa59
TEST AL,0x10
MOV dword ptr [ESI + 0x4],EBX
JZ 0x004aab58
MOV ECX,dword ptr [ESI + 0x8]
AND AL,0xfe
MOV dword ptr [ESI],ECX
MOV dword ptr [ESI + 0xc],EAX
MOV EAX,dword ptr [ESI + 0xc]
MOV dword ptr [ESI + 0x4],EBX
AND AL,0xef
MOV dword ptr [ESP + 0x18],EBX
OR AL,0x2
TEST EAX,0x10c
MOV dword ptr [ESI + 0xc],EAX
JNZ 0x004aaa97
CMP ESI,0x4d4618
JZ 0x004aaa81
CMP ESI,0x4d4638
JNZ 0x004aaa8e
PUSH EBP
CALL 0x004a6a70
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004aaa97
PUSH ESI
CALL 0x004a6a10
ADD ESP,0x4
TEST dword ptr [ESI + 0xc],0x108
JZ 0x004aab19
MOV EAX,dword ptr [ESI + 0x8]
MOV EDI,dword ptr [ESI]
MOV ECX,dword ptr [ESI + 0x18]
SUB EDI,EAX
LEA EDX,[EAX + 0x2]
SUB ECX,0x2
CMP EDI,EBX
MOV dword ptr [ESI],EDX
MOV dword ptr [ESI + 0x4],ECX
JLE 0x004aaad4
PUSH EDI
PUSH EAX
PUSH EBP
CALL 0x004a4490
MOV EDX,dword ptr [ESI + 0x8]
MOV EBX,dword ptr [ESP + 0x20]
ADD ESP,0xc
MOV dword ptr [ESP + 0x18],EAX
MOV word ptr [EDX],BX
JMP 0x004aab36
CMP EBP,-0x1
JZ 0x004aaaf2
MOV EDX,EBP
MOV EAX,EBP
SAR EDX,0x5
AND EAX,0x1f
MOV ECX,dword ptr [EDX*0x4 + 0xecd500]
LEA EAX,[EAX + EAX*0x8]
LEA EAX,[ECX + EAX*0x4]
JMP 0x004aaaf7
MOV EAX,0x4d43a0
TEST byte ptr [EAX + 0x4],0x20
JZ 0x004aab09
PUSH 0x2
PUSH EBX
PUSH EBP
CALL 0x004a3ff0
ADD ESP,0xc
MOV EDX,dword ptr [ESI + 0x8]
MOV EBX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x18]
MOV word ptr [EDX],BX
JMP 0x004aab36
MOV EBX,dword ptr [ESP + 0x14]
MOV EDI,0x2
LEA EAX,[ESP + 0x14]
PUSH EDI
PUSH EAX
PUSH EBP
MOV word ptr [ESP + 0x20],BX
CALL 0x004a4490
ADD ESP,0xc
CMP EAX,EDI
JZ 0x004aab4c
MOV EAX,dword ptr [ESI + 0xc]
OR AL,0x20
MOV dword ptr [ESI + 0xc],EAX
MOV EAX,0xffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,EBX
AND EAX,0xffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
OR AL,0x20
POP EDI
MOV dword ptr [ESI + 0xc],EAX
POP ESI
POP EBP
MOV EAX,0xffff
POP EBX
RET
