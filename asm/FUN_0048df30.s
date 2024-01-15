; FUN_0048df30
PUSH EBP
MOV EBP,ESP
SUB ESP,0x68
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [EAX + 0x48]
MOV EDX,dword ptr [ECX + 0x8]
MOV ECX,dword ptr [ECX + 0x4]
PUSH EDX
MOV EDX,dword ptr [EAX + 0x40]
MOV EAX,dword ptr [EAX + 0x38]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0048b260
ADD ESP,0x10
CALL 0x0049ea00
MOV EAX,dword ptr [EBP + 0x8]
MOV dword ptr [EBP + -0x28],0x0
TEST EAX,EAX
JBE 0x0048e48e
PUSH EDI
PUSH ESI
MOV ESI,dword ptr [EBP + 0xc]
PUSH EBX
MOV EAX,dword ptr [ESI]
MOV dword ptr [EBP + 0xc],0x13
MOV ECX,EAX
MOV dword ptr [EBP + -0x54],EAX
AND ECX,0x2
MOV dword ptr [EBP + -0x64],ECX
JZ 0x0048df90
MOV dword ptr [EBP + 0xc],0x213
TEST AL,0x4
JZ 0x0048df9d
MOV ECX,dword ptr [EBP + 0xc]
OR CH,0x8
MOV dword ptr [EBP + 0xc],ECX
TEST AL,0x8
JZ 0x0048dfaa
MOV ECX,dword ptr [EBP + 0xc]
OR CH,0x10
MOV dword ptr [EBP + 0xc],ECX
TEST AL,0x10
JNZ 0x0048dfb7
MOV ECX,dword ptr [EBP + 0xc]
OR CL,0x80
MOV dword ptr [EBP + 0xc],ECX
TEST AL,0x20
JZ 0x0048dfc4
MOV ECX,dword ptr [EBP + 0xc]
OR CH,0x20
MOV dword ptr [EBP + 0xc],ECX
TEST AH,0x3
JZ 0x0048dfd2
MOV EAX,dword ptr [EBP + 0xc]
OR AH,0x80
MOV dword ptr [EBP + 0xc],EAX
MOV EAX,dword ptr [ESI + 0x1c]
TEST EAX,EAX
MOV dword ptr [EBP + -0x68],EAX
JZ 0x0048e007
MOV ECX,dword ptr [EAX + 0x7c]
TEST ECX,ECX
JZ 0x0048dfec
MOV EDX,dword ptr [EBP + 0xc]
OR DH,0x4
MOV dword ptr [EBP + 0xc],EDX
MOV EDI,dword ptr [EAX + 0x90]
PUSH ECX
PUSH EDI
CALL 0x0048e5f0
MOV ECX,dword ptr [EDI + 0x80]
ADD ESP,0x8
MOV dword ptr [EBP + -0x58],ECX
JMP 0x0048e00e
MOV dword ptr [EBP + -0x58],0x0
MOV EDX,dword ptr [0x00df7f2c]
XOR EDI,EDI
XOR ECX,ECX
MOV dword ptr [EBP + -0x1c],EDI
MOV dword ptr [0x00a530d0],ECX
MOV EAX,dword ptr [EDX + 0x48]
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [0x005430c0],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x10]
MOV EBX,dword ptr [0x00ecc424]
MOV dword ptr [EBP + -0x4c],EAX
MOV dword ptr [0x005430c4],EDX
MOV EAX,dword ptr [ESI + 0x18]
MOV [0x00af30dc],EAX
MOV EAX,dword ptr [ESI + 0x4]
MOV EDX,ECX
CMP EAX,EBX
MOV dword ptr [EBP + -0x50],EDX
MOV dword ptr [EBP + -0x44],EAX
JL 0x0048e05c
MOV dword ptr [EBP + -0x44],EBX
MOV EAX,dword ptr [EBP + -0x4c]
XOR EBX,EBX
TEST EAX,EAX
MOV dword ptr [EBP + -0x48],EBX
JBE 0x0048e39e
MOV EAX,dword ptr [EBP + -0x54]
AND EAX,0x200
MOV dword ptr [EBP + -0x5c],EAX
XOR EAX,EAX
MOV dword ptr [EBP + -0x3c],EAX
MOV dword ptr [EBP + -0x38],EAX
MOV EDX,dword ptr [0x005430c4]
MOV EAX,dword ptr [EBP + -0x38]
MOV EDI,dword ptr [EBP + -0x3c]
ADD EDX,EAX
MOV EAX,[0x00af30dc]
SHL ECX,0x5
ADD EDI,EAX
MOV EAX,dword ptr [EDX]
ADD ECX,0xb6b0e8
MOV dword ptr [ECX],EAX
MOV EAX,dword ptr [EDX + 0x4]
MOV dword ptr [ECX + 0x4],EAX
FLD dword ptr [EDX + 0x8]
FCOMP dword ptr [0x004af768]
FNSTSW AX
TEST AH,0x40
JNZ 0x0048e0d3
FLD dword ptr [EDX + 0x8]
MOV EAX,0x7f000000
SUB EAX,dword ptr [EDX + 0x8]
MOV dword ptr [EBP + -0x40],EAX
FMUL dword ptr [EBP + -0x40]
FSUBR dword ptr [0x004af76c]
FMUL dword ptr [EBP + -0x40]
JMP 0x0048e0d9
FLD dword ptr [0x004af768]
FLD dword ptr [EDX + 0x8]
FCOMP dword ptr [0x005430c0]
FNSTSW AX
TEST AH,0x40
JZ 0x0048e0f2
MOV dword ptr [ECX + 0x8],0x0
JMP 0x0048e103
FLD ST0
FMUL dword ptr [0x005430c0]
FSUBR dword ptr [0x004af770]
FSTP dword ptr [ECX + 0x8]
MOV EAX,dword ptr [EBP + -0x5c]
FSTP dword ptr [ECX + 0xc]
TEST EAX,EAX
JZ 0x0048e17b
FLD dword ptr [EDX + 0x8]
FCOMP dword ptr [0x00ec8578]
FNSTSW AX
TEST AH,0x41
JZ 0x0048e126
MOV dword ptr [ECX + 0x14],0xffffffff
JMP 0x0048e17b
FLD dword ptr [EDX + 0x8]
FCOMP dword ptr [0x00ec857c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0048e13f
MOV dword ptr [ECX + 0x14],0xffffff
JMP 0x0048e17b
FLD dword ptr [EDX + 0x8]
FSUB dword ptr [0x00ec8578]
LEA EDX,[EBP + -0x2c]
MOV dword ptr [EBP + -0x40],EDX
FMUL dword ptr [0x00ec8574]
FSUBR dword ptr [0x004af770]
FMUL dword ptr [0x004af774]
FSTP dword ptr [EBP + -0x60]
FLD dword ptr [EBP + -0x60]
MOV EAX,dword ptr [EBP + -0x40]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + -0x2c]
SHL EAX,0x18
OR EAX,0xffffff
MOV dword ptr [ECX + 0x14],EAX
MOV EAX,dword ptr [EBP + -0x44]
TEST EAX,EAX
JLE 0x0048e1cd
CMP EAX,0x2
JLE 0x0048e1b7
CMP EAX,0x3
JNZ 0x0048e1cd
FLD dword ptr [ESI + 0x24]
FADD dword ptr [EDI]
CMP dword ptr [ESI + 0x30],0x3f800000
FSTP dword ptr [EBP + -0x10]
FLD dword ptr [ESI + 0x28]
FADD dword ptr [EDI + 0x4]
FSTP dword ptr [EBP + -0x14]
FLD dword ptr [ESI + 0x2c]
FADD dword ptr [EDI + 0x8]
FSTP dword ptr [EBP + -0x18]
FLD dword ptr [EDI + 0xc]
JZ 0x0048e1ea
FADD dword ptr [ESI + 0x30]
JMP 0x0048e1ea
MOV EDX,dword ptr [EDI]
MOV EAX,dword ptr [EDI + 0x4]
FLD dword ptr [EDI + 0xc]
MOV dword ptr [EBP + -0x10],EDX
MOV EDX,dword ptr [EDI + 0x8]
MOV dword ptr [EBP + -0x14],EAX
MOV dword ptr [EBP + -0x18],EDX
JMP 0x0048e1ea
MOV EAX,[0x00af30dc]
MOV dword ptr [EBP + -0x18],0x3f800000
MOV dword ptr [EBP + -0x14],0x3f800000
MOV dword ptr [EBP + -0x10],0x3f800000
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EBP + -0x10]
FCOMP dword ptr [0x004af770]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048e201
MOV dword ptr [EBP + -0x10],0x3f800000
FLD dword ptr [EBP + -0x14]
FCOMP dword ptr [0x004af770]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048e218
MOV dword ptr [EBP + -0x14],0x3f800000
FLD dword ptr [EBP + -0x18]
FCOMP dword ptr [0x004af770]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048e22f
MOV dword ptr [EBP + -0x18],0x3f800000
FCOM dword ptr [0x004af770]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048e244
FSTP ST0
FLD dword ptr [0x004af770]
MOV EAX,dword ptr [EBP + -0x64]
TEST EAX,EAX
JZ 0x0048e2df
FMUL dword ptr [0x004af774]
LEA EDX,[EBP + -0x4]
MOV dword ptr [EBP + -0x60],EDX
FSTP dword ptr [EBP + -0x40]
FLD dword ptr [EBP + -0x40]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
FLD dword ptr [EBP + -0x10]
FMUL dword ptr [0x004af774]
MOV EDX,dword ptr [EBP + -0x4]
LEA EAX,[EBP + -0x8]
MOV dword ptr [EBP + -0x60],EAX
FSTP dword ptr [EBP + -0x40]
FLD dword ptr [EBP + -0x40]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
FLD dword ptr [EBP + -0x14]
FMUL dword ptr [0x004af774]
MOV EDI,dword ptr [EBP + -0x8]
LEA EAX,[EBP + -0x20]
MOV dword ptr [EBP + -0x60],EAX
FSTP dword ptr [EBP + -0x40]
FLD dword ptr [EBP + -0x40]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [0x004af774]
MOV EBX,dword ptr [EBP + -0x20]
LEA EAX,[EBP + -0x30]
MOV dword ptr [EBP + -0x60],EAX
FSTP dword ptr [EBP + -0x40]
FLD dword ptr [EBP + -0x40]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
SHL EDX,0x8
MOV EAX,dword ptr [EBP + -0x30]
OR EDX,EDI
SHL EDX,0x8
OR EDX,EBX
MOV EBX,dword ptr [EBP + -0x48]
SHL EDX,0x8
OR EDX,EAX
MOV dword ptr [ECX + 0x10],EDX
JMP 0x0048e351
FSTP ST0
FLD dword ptr [EBP + -0x10]
FMUL dword ptr [0x004af774]
LEA EDX,[EBP + -0xc]
MOV dword ptr [EBP + -0x60],EDX
FSTP dword ptr [EBP + -0x48]
FLD dword ptr [EBP + -0x48]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
FLD dword ptr [EBP + -0x14]
FMUL dword ptr [0x004af774]
MOV EDX,dword ptr [EBP + -0xc]
LEA EAX,[EBP + -0x24]
MOV dword ptr [EBP + -0x60],EAX
FSTP dword ptr [EBP + -0x48]
FLD dword ptr [EBP + -0x48]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
FLD dword ptr [EBP + -0x18]
FMUL dword ptr [0x004af774]
MOV EDI,dword ptr [EBP + -0x24]
LEA EAX,[EBP + -0x34]
MOV dword ptr [EBP + -0x60],EAX
FSTP dword ptr [EBP + -0x48]
FLD dword ptr [EBP + -0x48]
MOV EAX,dword ptr [EBP + -0x60]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + -0x34]
OR EDX,0xffffff00
SHL EDX,0x8
OR EDX,EDI
SHL EDX,0x8
OR EDX,EAX
MOV dword ptr [ECX + 0x10],EDX
MOV EDX,dword ptr [ESI + 0x14]
MOV EDI,dword ptr [EBP + -0x38]
ADD EDI,0xc
FLD dword ptr [EDX + EBX*0x8]
FADD dword ptr [ESI + 0x38]
MOV EDX,dword ptr [EBP + -0x3c]
MOV dword ptr [EBP + -0x38],EDI
ADD EDX,0x10
FSTP dword ptr [ECX + 0x18]
MOV EAX,dword ptr [ESI + 0x14]
MOV dword ptr [EBP + -0x3c],EDX
FLD dword ptr [EAX + EBX*0x8 + 0x4]
FADD dword ptr [ESI + 0x3c]
MOV EAX,dword ptr [EBP + -0x4c]
FSTP dword ptr [ECX + 0x1c]
MOV ECX,dword ptr [0x00a530d0]
INC ECX
INC EBX
CMP EBX,EAX
MOV dword ptr [0x00a530d0],ECX
MOV dword ptr [EBP + -0x48],EBX
JC 0x0048e07f
MOV EDX,dword ptr [EBP + -0x50]
MOV EDI,dword ptr [EBP + -0x1c]
MOV EAX,dword ptr [ESI + 0x8]
CMP EAX,0x3
JBE 0x0048e492
LEA EDI,[EAX + -0x2]
XOR EDX,EDX
DEC EAX
CMP EDI,EDX
MOV dword ptr [EBP + -0x48],EDI
MOV dword ptr [EBP + -0x3c],0x1
MOV dword ptr [EBP + -0x4c],EAX
MOV dword ptr [EBP + -0x38],EDX
JLE 0x0048e420
MOV EBX,dword ptr [EBP + -0x1c]
ADD EDI,EBX
LEA EAX,[EBX*0x2 + 0xaf30ea]
MOV EBX,dword ptr [EBP + -0x48]
LEA EDI,[EDI + EBX*0x2]
MOV dword ptr [EBP + -0x1c],EDI
MOV EDI,dword ptr [EBP + -0x50]
MOV EBX,dword ptr [EBP + -0x4c]
ADD EDX,EDI
MOV word ptr [EAX + -0x2],DX
MOV EDX,dword ptr [EBP + -0x3c]
ADD EDX,EDI
MOV word ptr [EAX],DX
LEA EDX,[EBX + EDI*0x1]
MOV word ptr [EAX + 0x2],DX
MOV EDX,dword ptr [EBP + -0x38]
NOT EDX
ADD EAX,0x6
TEST DL,0x1
JZ 0x0048e40c
MOV EDI,dword ptr [EBP + -0x3c]
MOV EDX,EDI
INC EDI
MOV dword ptr [EBP + -0x3c],EDI
JMP 0x0048e412
MOV EDX,EBX
DEC EBX
MOV dword ptr [EBP + -0x4c],EBX
MOV EDI,dword ptr [EBP + -0x38]
MOV EBX,dword ptr [EBP + -0x48]
INC EDI
CMP EDI,EBX
MOV dword ptr [EBP + -0x38],EDI
JL 0x0048e3d9
MOV EDI,dword ptr [EBP + -0x1c]
MOV EAX,dword ptr [ESI + 0x48]
ADD ESI,0x40
MOV EBX,dword ptr [EBP + -0x28]
LEA EDX,[EDI + EAX*0x2]
INC EBX
MOV dword ptr [EBP + -0x28],EBX
LEA EAX,[EAX + EDX*0x1 + -0x6]
MOV EDX,dword ptr [0x0052e624]
CMP EAX,EDX
JNC 0x0048e461
MOV EAX,dword ptr [EBP + 0x8]
MOV EDX,EBX
CMP EDX,EAX
JNC 0x0048e461
MOV EAX,dword ptr [EBP + -0x68]
MOV EDX,dword ptr [ESI + 0x1c]
CMP EAX,EDX
JNZ 0x0048e461
MOV EDX,dword ptr [EBP + -0x54]
MOV EAX,dword ptr [ESI]
CMP EDX,EAX
JZ 0x0048e02d
MOV EAX,dword ptr [EBP + 0xc]
PUSH EDI
PUSH 0xaf30e8
PUSH ECX
MOV ECX,dword ptr [EBP + -0x58]
PUSH 0xb6b0e8
PUSH EAX
PUSH ECX
CALL 0x0048a350
MOV EDX,dword ptr [EBP + -0x28]
MOV EAX,dword ptr [EBP + 0x8]
ADD ESP,0x18
CMP EDX,EAX
JC 0x0048df73
POP EBX
POP ESI
POP EDI
MOV ESP,EBP
POP EBP
RET
MOV word ptr [EDI*0x2 + 0xaf30e8],DX
LEA EAX,[EDX + 0x1]
ADD EDX,0x2
MOV word ptr [EDI*0x2 + 0xaf30ea],AX
MOV word ptr [EDI*0x2 + 0xaf30ec],DX
ADD EDI,0x3
MOV dword ptr [EBP + -0x1c],EDI
JMP 0x0048e423
