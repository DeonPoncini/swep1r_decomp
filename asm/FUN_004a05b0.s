; FUN_004a05b0
SUB ESP,0x14
MOV ECX,dword ptr [ESP + 0x1c]
PUSH EBX
PUSH EBP
PUSH ESI
MOV DL,0x80
XOR ESI,ESI
TEST DL,CL
PUSH EDI
MOV dword ptr [ESP + 0x18],0xc
MOV dword ptr [ESP + 0x1c],ESI
JZ 0x004a05da
MOV dword ptr [ESP + 0x20],ESI
MOV byte ptr [ESP + 0x13],0x10
JMP 0x004a05e7
MOV dword ptr [ESP + 0x20],0x1
MOV byte ptr [ESP + 0x13],0x0
TEST CH,0x80
JNZ 0x004a0601
TEST CH,0x40
JNZ 0x004a05fd
CMP dword ptr [0x00dfab74],0x8000
JZ 0x004a0601
OR byte ptr [ESP + 0x13],DL
MOV EAX,ECX
AND EAX,0x3
SUB EAX,ESI
JZ 0x004a0628
DEC EAX
JZ 0x004a061e
DEC EAX
JNZ 0x004a08e4
MOV dword ptr [ESP + 0x14],0xc0000000
JMP 0x004a0630
MOV dword ptr [ESP + 0x14],0x40000000
JMP 0x004a0630
MOV dword ptr [ESP + 0x14],0x80000000
MOV EAX,dword ptr [ESP + 0x30]
ADD EAX,-0x10
CMP EAX,0x30
JA 0x004a08e4
XOR EBX,EBX
MOV BL,byte ptr [EAX + 0x4a0918]
JMP dword ptr [EBX*0x4 + 0x4a0904]
XOR EBX,EBX
JMP 0x004a0666
MOV EBX,0x1
JMP 0x004a0666
MOV EBX,0x2
JMP 0x004a0666
MOV EBX,0x3
MOV EAX,ECX
AND EAX,0x700
CMP EAX,0x100
JG 0x004a0686
JZ 0x004a067f
CMP EAX,ESI
JZ 0x004a06b6
JMP 0x004a08e4
MOV EBP,0x4
JMP 0x004a06db
CMP EAX,0x300
JG 0x004a06a2
JZ 0x004a069b
CMP EAX,0x200
JZ 0x004a06d6
JMP 0x004a08e4
MOV EBP,0x2
JMP 0x004a06db
CMP EAX,0x500
JG 0x004a06bd
JZ 0x004a06cf
CMP EAX,0x400
JNZ 0x004a08e4
MOV EBP,0x3
JMP 0x004a06db
CMP EAX,0x600
JZ 0x004a06d6
CMP EAX,0x700
JNZ 0x004a08e4
MOV EBP,0x1
JMP 0x004a06db
MOV EBP,0x5
TEST CH,0x1
MOV EDI,0x80
JZ 0x004a06fc
MOV ESI,dword ptr [0x00dfaa74]
MOV EAX,dword ptr [ESP + 0x34]
NOT ESI
AND EAX,ESI
TEST DL,AL
JNZ 0x004a06fc
MOV EDI,0x1
TEST CL,0x40
JZ 0x004a0714
MOV EAX,dword ptr [ESP + 0x14]
OR EDI,0x4000000
OR EAX,0x10000
MOV dword ptr [ESP + 0x14],EAX
TEST CH,0x10
JZ 0x004a071f
OR EDI,0x100
TEST CL,0x20
JZ 0x004a072c
OR EDI,0x8000000
JMP 0x004a0737
TEST CL,0x10
JZ 0x004a0737
OR EDI,0x10000000
CALL 0x004a4720
MOV ESI,EAX
CMP ESI,-0x1
JNZ 0x004a0763
CALL 0x004a3dc0
MOV dword ptr [EAX],0x18
CALL 0x004a3dd0
MOV dword ptr [EAX],0x0
OR EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x28]
PUSH 0x0
PUSH EDI
LEA ECX,[ESP + 0x20]
PUSH EBP
PUSH ECX
PUSH EBX
PUSH EDX
PUSH EAX
CALL dword ptr [0x004ac1b0]
MOV EDI,EAX
CMP EDI,-0x1
JZ 0x004a0796
PUSH EDI
CALL dword ptr [0x004ac1ac]
TEST EAX,EAX
JNZ 0x004a07b9
PUSH EDI
CALL dword ptr [0x004ac094]
CALL dword ptr [0x004ac0c0]
PUSH EAX
CALL 0x004a3d40
ADD ESP,0x4
PUSH ESI
CALL 0x004a4aa0
ADD ESP,0x4
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
CMP EAX,0x2
JNZ 0x004a07c6
MOV AL,byte ptr [ESP + 0x13]
OR AL,0x40
JMP 0x004a07d1
CMP EAX,0x3
JNZ 0x004a07d5
MOV AL,byte ptr [ESP + 0x13]
OR AL,0x8
MOV byte ptr [ESP + 0x13],AL
PUSH EDI
PUSH ESI
CALL 0x004a4890
MOV BL,byte ptr [ESP + 0x1b]
MOV EAX,ESI
MOV ECX,ESI
OR BL,0x1
AND EAX,0x1f
MOV byte ptr [ESP + 0x1b],BL
SAR ECX,0x5
LEA EDI,[EAX + EAX*0x8]
MOV AL,byte ptr [ESP + 0x1b]
MOV EDX,dword ptr [ECX*0x4 + 0xecd500]
LEA EBX,[ECX*0x4 + 0xecd500]
MOV CL,AL
ADD ESP,0x8
SHL EDI,0x2
AND CL,0x48
MOV byte ptr [EDI + EDX*0x1 + 0x4],AL
MOV byte ptr [ESP + 0x28],CL
JNZ 0x004a08b3
TEST AL,0x80
JZ 0x004a08b3
TEST byte ptr [ESP + 0x2c],0x2
JZ 0x004a08b3
PUSH 0x2
PUSH -0x1
PUSH ESI
CALL 0x004a4070
MOV EBP,EAX
ADD ESP,0xc
CMP EBP,-0x1
JNZ 0x004a0855
CALL 0x004a3dd0
CMP dword ptr [EAX],0x83
JZ 0x004a08b3
JMP 0x004a0896
LEA EAX,[ESP + 0x30]
PUSH 0x1
PUSH EAX
PUSH ESI
MOV byte ptr [ESP + 0x3c],0x0
CALL 0x004a4260
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004a0884
CMP byte ptr [ESP + 0x30],0x1a
JNZ 0x004a0884
PUSH EBP
PUSH ESI
CALL 0x004a4ad0
ADD ESP,0x8
CMP EAX,-0x1
JZ 0x004a0896
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x004a4070
ADD ESP,0xc
CMP EAX,-0x1
JNZ 0x004a08b3
PUSH ESI
CALL 0x004a03e0
ADD ESP,0x4
PUSH ESI
CALL 0x004a4aa0
ADD ESP,0x4
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
MOV AL,byte ptr [ESP + 0x28]
TEST AL,AL
JNZ 0x004a08d1
TEST byte ptr [ESP + 0x2c],0x8
JZ 0x004a08d1
MOV ECX,dword ptr [EBX]
LEA EAX,[EDI + ECX*0x1 + 0x4]
MOV CL,byte ptr [EDI + ECX*0x1 + 0x4]
OR CL,0x20
MOV byte ptr [EAX],CL
PUSH ESI
CALL 0x004a4aa0
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
CALL 0x004a3dc0
MOV dword ptr [EAX],0x16
CALL 0x004a3dd0
MOV dword ptr [EAX],ESI
POP EDI
POP ESI
POP EBP
OR EAX,0xffffffff
POP EBX
ADD ESP,0x14
RET
