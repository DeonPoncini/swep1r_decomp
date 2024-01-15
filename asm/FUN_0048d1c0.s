; FUN_0048d1c0
SUB ESP,0x24
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x44]
MOV ECX,0x20
OR EBP,0xffffffff
OR ESI,0xffffffff
MOV EAX,dword ptr [EDI + 0x8]
MOV EDX,dword ptr [EDI + 0xc]
SUB ECX,EAX
OR EBX,0xffffffff
SHR EBP,CL
MOV ECX,0x20
SUB ECX,EDX
SHR ESI,CL
MOV ECX,0x20
MOV dword ptr [ESP + 0x18],EBP
MOV dword ptr [ESP + 0x1c],ESI
MOV ESI,dword ptr [EDI + 0x10]
SUB ECX,ESI
SHR EBX,CL
MOV dword ptr [ESP + 0x20],EBX
MOV EBX,dword ptr [EDI + 0x2c]
TEST EBX,EBX
MOV dword ptr [ESP + 0x44],EBX
JZ 0x0048d247
MOV ECX,0x20
SUB ECX,EBX
OR EBX,0xffffffff
SHR EBX,CL
MOV ECX,dword ptr [EDI + 0x34]
MOV dword ptr [ESP + 0x24],EBX
MOV EBX,0xff
SAR EBX,CL
MOV ECX,EBX
AND ECX,0xfffffffe
CMP ECX,0x2
JLE 0x0048d23b
SAR EBX,0x1
MOV dword ptr [ESP + 0x14],EBX
JMP 0x0048d243
MOV dword ptr [ESP + 0x14],0x1
MOV EBX,dword ptr [ESP + 0x44]
MOV ECX,dword ptr [ESP + 0x3c]
SUB EAX,dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,dword ptr [ECX + 0xc]
SUB EDX,EAX
MOV dword ptr [ESP + 0x2c],EDX
MOV EDX,dword ptr [ECX + 0x10]
SUB ESI,EDX
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],ESI
JZ 0x0048d26f
SUB EBX,dword ptr [ECX + 0x2c]
MOV dword ptr [ESP + 0x30],EBX
MOV EAX,dword ptr [ESP + 0x48]
TEST EAX,EAX
JLE 0x0048d435
MOV EBX,dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x48],EAX
JMP 0x0048d289
MOV EBP,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [EDI + 0x4]
ADD EAX,-0x8
CMP EAX,0x18
JA 0x0048d2d7
XOR EDX,EDX
MOV DL,byte ptr [EAX + 0x48d454]
JMP dword ptr [EDX*0x4 + 0x48d440]
MOV EAX,dword ptr [ESP + 0x40]
XOR EBX,EBX
MOV BL,byte ptr [EAX]
JMP 0x0048d2f2
MOV ECX,dword ptr [ESP + 0x40]
XOR EBX,EBX
MOV BX,word ptr [ECX]
JMP 0x0048d2f2
MOV EAX,dword ptr [ESP + 0x40]
XOR EBX,EBX
XOR EDX,EDX
MOV BL,byte ptr [EAX + 0x1]
MOV DL,byte ptr [EAX + 0x2]
MOV BH,byte ptr [EAX]
SHL EBX,0x8
OR EBX,EDX
JMP 0x0048d2f2
MOV EAX,dword ptr [ESP + 0x40]
MOV EBX,dword ptr [EAX]
JMP 0x0048d2f2
MOV ECX,dword ptr [0x00ecc420]
PUSH 0x108
PUSH 0x4d1940
PUSH 0x4d18e8
CALL dword ptr [ECX + 0x18]
ADD ESP,0xc
MOV ECX,dword ptr [EDI + 0x14]
MOV ESI,EBX
SHR ESI,CL
MOV ECX,dword ptr [EDI + 0x18]
MOV EAX,EBX
SHR EAX,CL
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,EBX
AND ESI,EBP
MOV EBP,dword ptr [ESP + 0x20]
AND EAX,ECX
MOV ECX,dword ptr [EDI + 0x1c]
SHR EDX,CL
AND EDX,EBP
MOV EBP,dword ptr [EDI + 0x2c]
TEST EBP,EBP
JZ 0x0048d329
MOV ECX,dword ptr [EDI + 0x30]
SHR EBX,CL
AND EBX,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x44],EBX
MOV EBX,dword ptr [ESP + 0x28]
TEST EBX,EBX
MOV ECX,EBX
JLE 0x0048d337
SHR ESI,CL
JMP 0x0048d33b
NEG ECX
SHL ESI,CL
MOV ECX,dword ptr [ESP + 0x2c]
TEST ECX,ECX
JLE 0x0048d347
SHR EAX,CL
JMP 0x0048d34b
NEG ECX
SHL EAX,CL
MOV ECX,dword ptr [ESP + 0x10]
TEST EBX,EBX
JLE 0x0048d357
SHR EDX,CL
JMP 0x0048d35b
NEG ECX
SHL EDX,CL
MOV EBX,dword ptr [ESP + 0x3c]
MOV ECX,dword ptr [EBX + 0x18]
SHL EAX,CL
MOV ECX,dword ptr [EBX + 0x1c]
SHL EDX,CL
MOV ECX,dword ptr [EBX + 0x14]
SHL ESI,CL
OR EAX,EDX
OR EAX,ESI
TEST EBP,EBP
MOV EBX,EAX
JZ 0x0048d3b9
MOV EAX,dword ptr [ESP + 0x4c]
TEST EAX,EAX
JZ 0x0048d392
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x44]
CMP EAX,EDX
JNC 0x0048d3b9
MOV EBX,dword ptr [ESP + 0x50]
JMP 0x0048d3b9
MOV ECX,dword ptr [ESP + 0x30]
TEST ECX,ECX
JLE 0x0048d3a2
MOV EAX,dword ptr [ESP + 0x44]
SHR EAX,CL
JMP 0x0048d3aa
MOV EAX,dword ptr [ESP + 0x44]
NEG ECX
SHL EAX,CL
MOV ECX,dword ptr [ESP + 0x3c]
MOV dword ptr [ESP + 0x44],EAX
MOV ECX,dword ptr [ECX + 0x30]
SHL EAX,CL
OR EBX,EAX
MOV ESI,dword ptr [ESP + 0x3c]
MOV EAX,dword ptr [ESI + 0x4]
ADD EAX,-0x8
CMP EAX,0x18
JA 0x0048d406
XOR EDX,EDX
MOV DL,byte ptr [EAX + 0x48d484]
JMP dword ptr [EDX*0x4 + 0x48d470]
MOV EAX,dword ptr [ESP + 0x38]
MOV byte ptr [EAX],BL
JMP 0x0048d406
MOV ECX,dword ptr [ESP + 0x38]
MOV word ptr [ECX],BX
JMP 0x0048d406
MOV EDX,dword ptr [ESP + 0x38]
MOV dword ptr [EDX],EBX
JMP 0x0048d406
MOV EAX,dword ptr [ESP + 0x38]
MOV ECX,EBX
MOV EDX,EBX
SHR ECX,0x10
SHR EDX,0x8
MOV byte ptr [EAX],CL
MOV byte ptr [EAX + 0x1],DL
MOV byte ptr [EAX + 0x2],BL
MOV EAX,dword ptr [EDI + 0x4]
MOV EBP,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESI + 0x4]
MOV EDX,dword ptr [ESP + 0x38]
SHR EAX,0x3
ADD EBP,EAX
MOV EAX,dword ptr [ESP + 0x48]
SHR ECX,0x3
ADD EDX,ECX
DEC EAX
MOV dword ptr [ESP + 0x40],EBP
MOV dword ptr [ESP + 0x38],EDX
MOV dword ptr [ESP + 0x48],EAX
JNZ 0x0048d285
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
