; FUN_004321b0
MOV EAX,[0x0050c9fc]
SUB ESP,0x14
MOV ECX,dword ptr [ESP + 0x38]
PUSH EBX
PUSH EBP
XOR EBP,EBP
PUSH ESI
CMP EAX,EBP
PUSH EDI
JZ 0x004321d5
CMP EAX,ECX
JNZ 0x004321d5
MOV EAX,[0x0050ca04]
MOV dword ptr [ESP + 0x48],EAX
JMP 0x004321f4
MOV EAX,[0x0050ca00]
CMP EAX,EBP
JZ 0x00432572
CMP EAX,ECX
JNZ 0x00432572
MOV ECX,dword ptr [0x0050ca08]
MOV dword ptr [ESP + 0x48],ECX
CALL 0x0048dba0
MOV EDI,EAX
MOV EAX,dword ptr [ESP + 0x40]
MOV ESI,0x1
CMP EAX,ESI
JNZ 0x00432217
MOV EDX,dword ptr [0x00e996a4]
PUSH EDX
CALL 0x004320b0
ADD ESP,0x4
MOV EAX,dword ptr [EDI + 0x18]
MOV dword ptr [EDI],0x2e
MOV dword ptr [EDI + 0x4],ESI
MOV ECX,dword ptr [0x00e996a4]
MOV dword ptr [EDI + 0x1c],ECX
MOV dword ptr [EDI + 0x20],EBP
MOV dword ptr [EDI + 0x34],EBP
MOV dword ptr [EDI + 0x38],EBP
MOV dword ptr [EDI + 0x3c],EBP
MOV EDX,dword ptr [0x00df7f2c]
MOV ESI,dword ptr [EDI + 0x10]
MOV EBX,dword ptr [EDI + 0x14]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [EDX + 0x48]
FLD dword ptr [EAX + 0x4]
CMP dword ptr [ESP + 0x44],0x1
JNZ 0x0043225d
FSTP ST0
FLD dword ptr [0x004ac6e0]
MOVSX EAX,word ptr [ESP + 0x2c]
MOVSX ECX,word ptr [ESP + 0x34]
MOVSX EBP,word ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x2c],EAX
ADD EAX,ECX
SAR EAX,0x1
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x20],0x0
MOVSX EAX,word ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x28],EAX
MOV dword ptr [ESP + 0x44],ECX
LEA EDX,[EBP + EAX*0x1]
MOV EAX,dword ptr [EDI + 0x1c]
SAR EDX,0x1
MOV EAX,dword ptr [EAX + 0x80]
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [ESP + 0x1c],EAX
MOV EAX,dword ptr [EDI + 0x1c]
FILD qword ptr [ESP + 0x1c]
MOV EAX,dword ptr [EAX + 0x84]
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x1c],EAX
FDIVR dword ptr [ESP + 0x38]
FSTP dword ptr [ESP + 0x34]
FILD qword ptr [ESP + 0x1c]
FDIVR dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004ac6e4]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ac6e4]
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x48]
FCOMP qword ptr [0x004ac6e8]
FNSTSW AX
TEST AH,0x1
JZ 0x00432363
MOV EDX,dword ptr [ESP + 0x28]
MOV ECX,EBP
FLD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004ac6f0]
SUB ECX,EDX
MOV dword ptr [EDI + 0x8],0x3
MOV dword ptr [ESP + 0x28],ECX
FILD dword ptr [ESP + 0x28]
FMUL ST1
CALL 0x0049ed20
FILD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x34]
MOVSX EDX,AX
FMUL ST2
FLD ST3
SUB EBP,EDX
MOV dword ptr [ESP + 0x34],EBP
FILD dword ptr [ESP + 0x34]
FXCH ST3
FSTP ST4
FLD ST3
FXCH ST3
FSTP dword ptr [ESI + 0x18]
FXCH ST2
FSTP dword ptr [ESI + 0x1c]
FXCH
FSTP dword ptr [ESI + 0x20]
MOV dword ptr [EBX + 0x14],0x0
FSTP dword ptr [EBX + 0x10]
JMP 0x004324e7
FLD dword ptr [ESP + 0x48]
FCOMP qword ptr [0x004ac6f8]
FLD dword ptr [ESP + 0x48]
FNSTSW AX
TEST AH,0x1
JZ 0x00432416
MOV EDX,dword ptr [ESP + 0x2c]
MOV dword ptr [EDI + 0x8],0x4
FADD ST0,ST0
SUB ECX,EDX
MOV dword ptr [ESP + 0x48],ECX
FSUB dword ptr [0x004ac6e4]
FILD dword ptr [ESP + 0x48]
FILD dword ptr [ESP + 0x28]
FILD dword ptr [ESP + 0x2c]
FLD ST4
FLD ST2
FSTP dword ptr [ESI + 0x18]
FXCH
FXCH ST2
FXCH
FLD ST2
FXCH ST5
FSTP dword ptr [ESP + 0x28]
FXCH ST3
FMUL dword ptr [ESP + 0x28]
FXCH ST4
FSTP dword ptr [ESI + 0x1c]
FXCH ST2
FSTP dword ptr [ESI + 0x20]
FXCH
FSTP dword ptr [ESI + 0x24]
FXCH
CALL 0x0049ed20
FLD dword ptr [ESP + 0x30]
MOV ECX,dword ptr [ESP + 0x2c]
FMUL dword ptr [ESP + 0x28]
MOVSX EAX,AX
FLD ST2
ADD EAX,ECX
MOV dword ptr [ESP + 0x2c],EAX
FILD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FSTP dword ptr [ESI + 0x28]
FXCH ST2
FSTP dword ptr [ESI + 0x2c]
FXCH
FSTP dword ptr [EBX + 0x10]
MOV dword ptr [EBX + 0x14],0x0
FSTP dword ptr [EBX + 0x18]
FSTP dword ptr [EBX + 0x1c]
JMP 0x004324e7
FMUL dword ptr [0x004ac6f0]
FILD dword ptr [ESP + 0x28]
MOVSX ECX,DX
FXCH
FSUB dword ptr [0x004ac704]
SUB EBP,ECX
MOV dword ptr [EDI + 0x8],0x5
MOV dword ptr [ESP + 0x40],EBP
FILD dword ptr [ESP + 0x40]
FILD dword ptr [ESP + 0x2c]
FILD dword ptr [ESP + 0x44]
FXCH ST4
FST dword ptr [ESP + 0x2c]
FSTP dword ptr [ESI + 0x18]
FLD ST4
FXCH
FST dword ptr [ESI + 0x1c]
FLD dword ptr [ESP + 0x2c]
FXCH ST2
FSTP dword ptr [ESI + 0x20]
FLD ST5
FXCH ST2
FSTP dword ptr [ESI + 0x24]
FLD ST4
FXCH ST4
FMULP ST3
FXCH ST3
FSTP dword ptr [ESI + 0x28]
FSTP dword ptr [ESI + 0x2c]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x48]
FSUB dword ptr [0x004ac708]
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [ESP + 0x38]
FXCH
FMUL qword ptr [0x004ac710]
FLD dword ptr [ESP + 0x34]
FXCH
MOVSX EDX,AX
FMULP ST2
FLD ST4
ADD EDX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x2c],EDX
FILD dword ptr [ESP + 0x2c]
FSTP dword ptr [ESI + 0x30]
FLD dword ptr [ESP + 0x34]
FXCH ST5
FSTP dword ptr [ESI + 0x34]
FLD dword ptr [ESP + 0x34]
FXCH
FSTP dword ptr [ESI + 0x38]
FXCH ST4
FSTP dword ptr [EBX + 0x10]
FXCH ST3
FSTP dword ptr [EBX + 0x18]
FLD dword ptr [ESP + 0x30]
FLD dword ptr [ESP + 0x30]
FXCH ST2
FSUBP ST4,ST0
MOV dword ptr [EBX + 0x14],0x0
FSTP dword ptr [EBX + 0x1c]
FSTP dword ptr [EBX + 0x24]
FXCH
FSTP dword ptr [EBX + 0x20]
MOVSX EAX,word ptr [ESP + 0x10]
FILD dword ptr [ESP + 0x14]
FLD ST2
MOV dword ptr [ESP + 0x34],EAX
MOV EDX,dword ptr [ESP + 0x18]
FILD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x3c]
FXCH ST3
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x34]
FXCH
FSTP dword ptr [ESI + 0x4]
FXCH
FSTP dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESP + 0x34]
MOV EBP,0xe37530
FSTP dword ptr [ESI + 0xc]
FXCH
FSTP dword ptr [ESI + 0x10]
FXCH
FSTP dword ptr [ESI + 0x14]
XOR EAX,EAX
MOV dword ptr [ESI],ECX
FSTP dword ptr [EBX + 0x4]
MOV dword ptr [EBX],EAX
MOV dword ptr [EBX + 0x8],EAX
MOV dword ptr [EBX + 0xc],EAX
SUB EBP,EDX
MOV ESI,0x4
MOV ECX,dword ptr [EDI + 0x8]
XOR EAX,EAX
TEST ECX,ECX
JBE 0x0043255e
MOV ECX,EDX
MOV EBX,dword ptr [EBP + EDX*0x1]
INC EAX
MOV dword ptr [ECX],EBX
MOV EBX,dword ptr [EDI + 0x8]
ADD ECX,0x10
CMP EAX,EBX
JC 0x0043254d
ADD EDX,0x4
DEC ESI
JNZ 0x00432542
MOV EDX,dword ptr [EDI + 0x8]
PUSH 0x7
PUSH EDX
CALL 0x0048de10
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
