; FUN_004a17f0
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV EAX,dword ptr [ESI + 0xc]
MOV EBP,dword ptr [ESI + 0x10]
TEST AL,0x82
JZ 0x004a1913
TEST AL,0x40
JNZ 0x004a1913
XOR EBX,EBX
TEST AL,0x1
JZ 0x004a1829
TEST AL,0x10
MOV dword ptr [ESI + 0x4],EBX
JZ 0x004a1913
MOV ECX,dword ptr [ESI + 0x8]
AND AL,0xfe
MOV dword ptr [ESI],ECX
MOV dword ptr [ESI + 0xc],EAX
MOV EAX,dword ptr [ESI + 0xc]
MOV dword ptr [ESI + 0x4],EBX
AND AL,0xef
OR AL,0x2
TEST EAX,0x10c
MOV dword ptr [ESI + 0xc],EAX
JNZ 0x004a1863
CMP ESI,0x4d4618
JZ 0x004a184d
CMP ESI,0x4d4638
JNZ 0x004a185a
PUSH EBP
CALL 0x004a6a70
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004a1863
PUSH ESI
CALL 0x004a6a10
ADD ESP,0x4
TEST dword ptr [ESI + 0xc],0x108
JZ 0x004a18db
MOV EAX,dword ptr [ESI + 0x8]
MOV EDI,dword ptr [ESI]
MOV ECX,dword ptr [ESI + 0x18]
SUB EDI,EAX
LEA EDX,[EAX + 0x1]
DEC ECX
CMP EDI,EBX
MOV dword ptr [ESI],EDX
MOV dword ptr [ESI + 0x4],ECX
JLE 0x004a189b
PUSH EDI
PUSH EAX
PUSH EBP
CALL 0x004a4490
MOV EDX,dword ptr [ESI + 0x8]
MOV EBX,EAX
MOV AL,byte ptr [ESP + 0x20]
ADD ESP,0xc
MOV byte ptr [EDX],AL
JMP 0x004a18f1
CMP EBP,-0x1
JZ 0x004a18b9
MOV EDX,EBP
MOV EAX,EBP
SAR EDX,0x5
AND EAX,0x1f
MOV ECX,dword ptr [EDX*0x4 + 0xecd500]
LEA EAX,[EAX + EAX*0x8]
LEA EAX,[ECX + EAX*0x4]
JMP 0x004a18be
MOV EAX,0x4d43a0
TEST byte ptr [EAX + 0x4],0x20
JZ 0x004a18d0
PUSH 0x2
PUSH EBX
PUSH EBP
CALL 0x004a3ff0
ADD ESP,0xc
MOV EDX,dword ptr [ESI + 0x8]
MOV AL,byte ptr [ESP + 0x14]
MOV byte ptr [EDX],AL
JMP 0x004a18f1
MOV EDI,0x1
LEA ECX,[ESP + 0x14]
PUSH EDI
PUSH ECX
PUSH EBP
CALL 0x004a4490
ADD ESP,0xc
MOV EBX,EAX
CMP EBX,EDI
JZ 0x004a1905
MOV EAX,dword ptr [ESI + 0xc]
OR AL,0x20
MOV dword ptr [ESI + 0xc],EAX
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x14]
AND EAX,0xff
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
OR EAX,0xffffffff
POP EBX
RET
