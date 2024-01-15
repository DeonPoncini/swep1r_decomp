; FUN_0042d990
SUB ESP,0x18
FILD dword ptr [0x00ec85e8]
FILD dword ptr [0x00ec86c4]
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
FMUL qword ptr [0x004ac628]
FXCH
FMUL qword ptr [0x004ac630]
FXCH
FST dword ptr [ESP + 0x14]
FCOMP qword ptr [0x004ac638]
FSTP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d9d0
MOV dword ptr [ESP + 0x14],0x3f800000
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004ac638]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d9e9
MOV dword ptr [ESP + 0x10],0x3f800000
MOV EAX,dword ptr [ESP + 0x2c]
MOV EBX,dword ptr [ESP + 0x34]
MOV ESI,dword ptr [ESP + 0x30]
MOV EDI,dword ptr [ESP + 0x38]
MOV ECX,dword ptr [ESP + 0x3c]
MOV EDX,dword ptr [ESP + 0x40]
MOV BP,word ptr [0x0050c0a8]
SUB EAX,EBX
SUB ESI,EDI
LEA EDI,[ECX + EAX*0x1]
MOV CX,word ptr [0x0050c0a0]
CMP CX,BP
LEA EBX,[EDX + ESI*0x1]
JLE 0x0042dab0
FLD dword ptr [ESP + 0x14]
MOVSX EAX,AX
MOV dword ptr [ESP + 0x2c],EAX
FILD dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x1c]
FST dword ptr [ESP + 0x2c]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
MOVSX ECX,SI
MOV dword ptr [ESP + 0x34],ECX
MOV [0x0050c0a0],AX
FILD dword ptr [ESP + 0x34]
FSTP dword ptr [ESP + 0x20]
FMUL dword ptr [ESP + 0x20]
FST dword ptr [ESP + 0x34]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x14]
MOVSX EDX,DI
MOV dword ptr [ESP + 0x30],EDX
MOV [0x0050c09c],AX
FILD dword ptr [ESP + 0x30]
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
FST dword ptr [ESP + 0x30]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
MOVSX ECX,BX
MOV dword ptr [ESP + 0x38],ECX
MOV [0x0050c0a8],AX
FILD dword ptr [ESP + 0x38]
FXCH
FMUL ST1
FST dword ptr [ESP + 0x38]
JMP 0x0042dba9
FLD dword ptr [ESP + 0x14]
MOVSX EDX,AX
MOV dword ptr [ESP + 0x2c],EDX
FILD dword ptr [ESP + 0x2c]
MOVSX EAX,CX
FSTP dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x1c]
MOV dword ptr [ESP + 0x2c],EAX
FILD dword ptr [ESP + 0x2c]
FXCH
FST dword ptr [ESP + 0x2c]
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0042daf0
FLD dword ptr [ESP + 0x2c]
CALL 0x0049ed20
MOV [0x0050c0a0],AX
FLD dword ptr [ESP + 0x10]
MOVSX ECX,SI
MOVSX EDX,word ptr [0x0050c09c]
MOV dword ptr [ESP + 0x34],ECX
FILD dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x34],EDX
FSTP dword ptr [ESP + 0x20]
FMUL dword ptr [ESP + 0x20]
FILD dword ptr [ESP + 0x34]
FXCH
FST dword ptr [ESP + 0x34]
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0042db34
FLD dword ptr [ESP + 0x34]
CALL 0x0049ed20
MOV [0x0050c09c],AX
FLD dword ptr [ESP + 0x14]
MOVSX EAX,DI
MOV dword ptr [ESP + 0x30],EAX
FILD dword ptr [ESP + 0x30]
MOVSX ECX,BP
FSTP dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x30],ECX
FILD dword ptr [ESP + 0x30]
FXCH
FST dword ptr [ESP + 0x30]
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0042db74
FLD dword ptr [ESP + 0x30]
CALL 0x0049ed20
MOV [0x0050c0a8],AX
FLD dword ptr [ESP + 0x10]
MOVSX EAX,word ptr [0x0050c0a4]
MOVSX EDX,BX
MOV dword ptr [ESP + 0x38],EDX
FILD dword ptr [ESP + 0x38]
FXCH
FMUL ST1
MOV dword ptr [ESP + 0x38],EAX
FILD dword ptr [ESP + 0x38]
FXCH
FST dword ptr [ESP + 0x38]
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0042dbb4
FLD dword ptr [ESP + 0x38]
CALL 0x0049ed20
MOV [0x0050c0a4],AX
MOVSX EAX,word ptr [ESP + 0x44]
MOVSX ECX,word ptr [ESP + 0x48]
MOVSX EDX,word ptr [ESP + 0x3c]
MOVSX ESI,word ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x44],EAX
ADD EDX,EAX
FILD dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x44],ECX
ADD ESI,ECX
FILD dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x44],EDX
MOV dword ptr [ESP + 0x48],ESI
FILD dword ptr [ESP + 0x44]
FILD dword ptr [ESP + 0x48]
FXCH ST3
FMUL dword ptr [0x004ac644]
FXCH
FMUL dword ptr [0x004ac644]
FXCH ST2
FMUL dword ptr [0x004ac648]
FXCH ST3
FMUL dword ptr [0x004ac648]
FXCH
FSTP dword ptr [ESP + 0x18]
MOV AL,[0x0050c0ac]
FXCH
FSTP dword ptr [ESP + 0x3c]
FXCH
FSTP dword ptr [ESP + 0x40]
TEST AL,AL
FSTP dword ptr [ESP + 0x48]
JZ 0x0042dc81
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac64c]
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ac64c]
FLD ST1
FMUL dword ptr [ESP + 0x1c]
FXCH
FSTP dword ptr [ESP + 0x10]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x14],EAX
CALL 0x0049ed20
FMUL dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x34],EAX
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
FMUL ST1
MOV dword ptr [ESP + 0x2c],EAX
CALL 0x0049ed20
FSTP ST0
JMP 0x0042dcb3
FSTP ST0
FLD dword ptr [ESP + 0x2c]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x14],EAX
CALL 0x0049ed20
FLD dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x34],EAX
CALL 0x0049ed20
FLD dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x2c],EAX
CALL 0x0049ed20
MOV EBP,EAX
MOV AL,[0x0050c0b0]
TEST AL,AL
JZ 0x0042dd8a
MOVSX EBX,word ptr [ESP + 0x14]
CMP EBX,dword ptr [0x00e99758]
JG 0x0042dde2
MOVSX EAX,word ptr [ESP + 0x34]
CMP EAX,dword ptr [0x00e9975c]
JG 0x0042dde2
MOVSX ESI,word ptr [ESP + 0x2c]
MOV ECX,dword ptr [0x00e99750]
CMP ESI,ECX
JL 0x0042dde2
MOV EDX,dword ptr [0x00e99754]
MOVSX EDI,BP
CMP EDI,EDX
JL 0x0042dde2
CMP EBX,ECX
JGE 0x0042dd28
SUB ECX,EBX
MOV EBX,dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x44],ECX
ADD EBX,ECX
FILD dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x14],EBX
FADD dword ptr [ESP + 0x18]
FSTP dword ptr [ESP + 0x18]
CMP EAX,EDX
JGE 0x0042dd48
SUB EDX,EAX
MOV EAX,dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x44],EDX
ADD EAX,EDX
FILD dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x34],EAX
FADD dword ptr [ESP + 0x40]
FSTP dword ptr [ESP + 0x40]
MOV EAX,[0x00e99758]
CMP ESI,EAX
JLE 0x0042dd6d
SUB ESI,EAX
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x44],ESI
SUB EAX,ESI
FILD dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x2c],EAX
FSUBR dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x3c]
MOV EAX,[0x00e9975c]
CMP EDI,EAX
JLE 0x0042dd8a
SUB EDI,EAX
MOV dword ptr [ESP + 0x44],EDI
SUB EBP,EDI
FILD dword ptr [ESP + 0x44]
FSUBR dword ptr [ESP + 0x48]
FSTP dword ptr [ESP + 0x48]
CMP dword ptr [0x0050c0c8],0xbf
JNZ 0x0042ddb6
FLD dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x3c]
MOV ECX,dword ptr [ESP + 0x48]
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x40],ECX
FSTP dword ptr [ESP + 0x48]
MOV EDX,dword ptr [ESP + 0x48]
MOV EAX,dword ptr [ESP + 0x3c]
MOV ECX,dword ptr [ESP + 0x40]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x34]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x40]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x24]
PUSH EBP
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x004329c0
ADD ESP,0x20
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
