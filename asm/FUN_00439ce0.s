; FUN_00439ce0
SUB ESP,0x168
PUSH EBX
MOV EBX,dword ptr [ESP + 0x170]
PUSH EBP
PUSH ESI
MOVSX ECX,byte ptr [EBX + 0x72]
MOV dword ptr [ESP + 0x10],ECX
MOV AL,byte ptr [EBX + 0x5e]
FILD dword ptr [ESP + 0x10]
PUSH EDI
MOV byte ptr [ESP + 0x1f],AL
MOV dword ptr [ESP + 0x20],0x4560ffd7
MOV dword ptr [ESP + 0x24],0x4560ffd7
FMUL dword ptr [0x004ac794]
FSUBR dword ptr [0x004ac904]
CALL 0x0049ed20
MOV [0x00e295c8],EAX
MOV AL,byte ptr [EBX + 0x6c]
MOV DL,byte ptr [EBX + 0x8f]
XOR EBP,EBP
TEST AL,AL
MOV byte ptr [ESP + 0x18],DL
JZ 0x00439d42
MOV byte ptr [ESP + 0x18],0x3
PUSH 0x4c0d74
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x14
PUSH 0xa0
CALL 0x00450560
MOV ECX,0x14
XOR EAX,EAX
LEA EDI,[ESP + 0x34]
ADD ESP,0xc
STOSD.REP ES:EDI
CMP dword ptr [0x004c4000],EBP
JZ 0x0043a598
MOV dword ptr [0x004c4000],EBP
MOV dword ptr [0x0050c1f4],0x40000000
MOVSX ECX,byte ptr [EBX + 0x5e]
XOR EAX,EAX
MOVSX EDX,byte ptr [ECX + 0x4bfee0]
CMP EDX,EBP
JLE 0x00439dc0
MOVSX ESI,byte ptr [EBX + 0x5d]
LEA EDI,[ECX*0x8 + 0x0]
SUB EDI,ECX
LEA ECX,[EDI*0x4 + 0x4c0018]
CMP ESI,dword ptr [ECX]
JZ 0x00439dbb
INC EAX
ADD ECX,0x4
CMP EAX,EDX
JL 0x00439dad
JMP 0x00439dc0
MOV [0x0050c228],AL
MOV ECX,0x14
XOR EAX,EAX
MOV EDI,0x50c180
MOV dword ptr [0x0050c114],0x0
MOV dword ptr [0x0050c53c],EBP
MOV dword ptr [ESP + 0x10],EBP
STOSD.REP ES:EDI
MOV AL,byte ptr [EBX + 0x72]
TEST AL,AL
JLE 0x00439e91
MOV EDX,0xe29bc0
MOV ECX,EBP
LEA EBP,[ECX*0x4 + 0x0]
TEST EDX,EDX
MOV dword ptr [ESP + EBP*0x1 + 0x28],EDX
JZ 0x00439e8e
FLD dword ptr [EDX + 0x74]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x41
JZ 0x00439e27
FLD dword ptr [EDX + 0x74]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x00439e2e
MOV dword ptr [EDX + 0x74],0x4560ffd7
MOV EAX,dword ptr [ESP + 0x18]
AND EAX,0xff
JLE 0x00439e6f
LEA ECX,[EDX + 0x60]
XOR EDI,EDI
MOV ESI,EAX
FLD dword ptr [EDI + ECX*0x1]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x41
JZ 0x00439e5f
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x00439e65
MOV dword ptr [ECX],0x4560ffd7
ADD ECX,0x4
DEC ESI
JNZ 0x00439e40
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EBP + 0x50c180],EDX
INC ECX
MOVSX EAX,byte ptr [EBX + 0x72]
ADD EDX,0x88
CMP ECX,EAX
MOV dword ptr [ESP + 0x10],ECX
JL 0x00439df4
JMP 0x00439e91
MOV byte ptr [EBX + 0x72],CL
MOV AL,byte ptr [EBX + 0x72]
MOV EDI,0x1
CMP AL,0x1
MOV dword ptr [ESP + 0x10],EDI
JLE 0x00439edf
MOV ESI,0x50c184
CMP ESI,0x50c180
JLE 0x00439ecf
MOV EAX,0x50c180
MOV EDX,dword ptr [ESI]
MOV ECX,dword ptr [EAX]
MOV BP,word ptr [EDX + 0x5c]
CMP BP,word ptr [ECX + 0x5c]
JGE 0x00439ec5
MOV dword ptr [ESI],ECX
MOV dword ptr [EAX],EDX
ADD EAX,0x4
DEC EDI
JNZ 0x00439eb3
MOV EDI,dword ptr [ESP + 0x10]
MOVSX ECX,byte ptr [EBX + 0x72]
INC EDI
ADD ESI,0x4
CMP EDI,ECX
MOV dword ptr [ESP + 0x10],EDI
JL 0x00439ea6
MOV AL,byte ptr [EBX + 0x70]
XOR EDX,EDX
MOV byte ptr [ESP + 0x1e],AL
MOVSX EAX,AL
TEST EAX,EAX
MOV dword ptr [ESP + 0x14],EAX
JLE 0x00439f45
MOV EBP,dword ptr [ESP + 0x18]
AND EBP,0xff
MOV ECX,dword ptr [ESP + EDX*0x4 + 0x28]
LEA EDI,[ESP + EDX*0x4 + 0x20]
MOV ESI,dword ptr [ECX + 0x60]
MOV dword ptr [EDI],ESI
MOV ESI,0x1
CMP EBP,ESI
JLE 0x00439f40
ADD ECX,0x64
FLD dword ptr [ECX]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JNZ 0x00439f3c
FLD dword ptr [EDI]
FCOMP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00439f34
MOV EAX,dword ptr [ECX]
MOV dword ptr [EDI],EAX
INC ESI
ADD ECX,0x4
CMP ESI,EBP
JL 0x00439f16
MOV EAX,dword ptr [ESP + 0x14]
INC EDX
CMP EDX,EAX
JL 0x00439efd
MOV AL,[0x0050c540]
MOV ECX,dword ptr [ESP + 0x2c]
MOV ESI,dword ptr [ESP + 0x28]
TEST AL,0x1
JNZ 0x00439ff4
MOV AL,[0x00e35a81]
TEST AL,AL
JNZ 0x00439ff4
MOV DL,byte ptr [ESP + 0x18]
CMP DL,0x3
JNZ 0x00439fa0
MOVSX EAX,byte ptr [EBX + 0x6e]
FLD dword ptr [ESI + 0x74]
MOVSX EDI,byte ptr [EBX + 0x5d]
LEA EAX,[EAX + EDI*0x2]
FCOMP dword ptr [EAX*0x4 + 0xe365f4]
FNSTSW AX
TEST AH,0x1
JZ 0x00439fa0
CMP byte ptr [ESP + 0x1e],0x1
JZ 0x00439fd3
FLD dword ptr [ESI + 0x74]
FCOMP dword ptr [ECX + 0x74]
FNSTSW AX
TEST AH,0x1
JNZ 0x00439fd3
MOVSX EAX,byte ptr [EBX + 0x6e]
FLD dword ptr [ESP + 0x20]
MOVSX ESI,byte ptr [EBX + 0x5d]
LEA EAX,[EAX + ESI*0x2]
FCOMP dword ptr [EAX*0x4 + 0xe366bc]
FNSTSW AX
TEST AH,0x1
JZ 0x00439ff8
CMP byte ptr [ESP + 0x1e],0x1
JZ 0x00439fd3
FLD dword ptr [ESP + 0x20]
FCOMP dword ptr [ESP + 0x24]
FNSTSW AX
TEST AH,0x1
JZ 0x00439ff8
OR byte ptr [0x0050c540],0x1
PUSH 0x2
PUSH EBX
MOV byte ptr [EBX + 0x6f],0x0
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x168
RET
MOV DL,byte ptr [ESP + 0x18]
CMP byte ptr [ESP + 0x1e],0x1
JLE 0x0043a098
TEST byte ptr [0x0050c540],0x2
JNZ 0x0043a098
MOV AL,[0x00e35ad1]
TEST AL,AL
JNZ 0x0043a098
CMP DL,0x3
JNZ 0x0043a04b
MOVSX EAX,byte ptr [EBX + 0x6e]
FLD dword ptr [ECX + 0x74]
MOVSX ESI,byte ptr [EBX + 0x5d]
LEA EAX,[EAX + ESI*0x2]
FCOMP dword ptr [EAX*0x4 + 0xe365f4]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a04b
FLD dword ptr [ECX + 0x74]
MOV ECX,dword ptr [ESP + 0x28]
FCOMP dword ptr [ECX + 0x74]
FNSTSW AX
TEST AH,0x1
JNZ 0x0043a077
MOVSX EAX,byte ptr [EBX + 0x6e]
FLD dword ptr [ESP + 0x24]
MOVSX ECX,byte ptr [EBX + 0x5d]
LEA EAX,[EAX + ECX*0x2]
FCOMP dword ptr [EAX*0x4 + 0xe366bc]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a098
FLD dword ptr [ESP + 0x24]
FCOMP dword ptr [ESP + 0x20]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a098
OR byte ptr [0x0050c540],0x2
PUSH 0x2
PUSH EBX
MOV byte ptr [EBX + 0x6f],0x1
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x168
RET
TEST byte ptr [0x0050c540],0x4
JNZ 0x0043a1a4
MOV EAX,dword ptr [ESP + 0x14]
XOR EBP,EBP
TEST EAX,EAX
JLE 0x0043a1a4
MOV ESI,0xe35a84
CMP DL,0x3
JNZ 0x0043a129
MOV ECX,dword ptr [ESP + EBP*0x4 + 0x28]
FLD dword ptr [ECX + 0x74]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a129
MOVSX EAX,byte ptr [EBX + 0x5d]
FLD dword ptr [ECX + 0x74]
MOVSX EDI,byte ptr [EBX + 0x6e]
LEA EDI,[EDI + EAX*0x2]
FCOMP dword ptr [EDI*0x4 + 0xe365f4]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a129
MOV ECX,dword ptr [ECX + 0x74]
XOR EAX,EAX
MOV dword ptr [EDI*0x4 + 0xe365f4],ECX
MOVSX ECX,byte ptr [EBX + 0x5d]
MOVSX EDI,byte ptr [EBX + 0x6e]
LEA EDI,[EDI + ECX*0x2]
MOV CL,byte ptr [EAX + ESI*0x1 + -0x24]
SHL EDI,0x5
MOV byte ptr [EDI + EAX*0x1 + 0xe36784],CL
INC EAX
CMP EAX,0x20
JL 0x0043a0f9
MOVSX EDI,byte ptr [EBX + 0x5d]
MOVSX ECX,byte ptr [EBX + 0x6e]
MOV AL,byte ptr [ESI]
MOV byte ptr [ECX + EDI*0x2 + 0xe37404],AL
FLD dword ptr [ESP + EBP*0x4 + 0x20]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a194
MOVSX EAX,byte ptr [EBX + 0x5d]
FLD dword ptr [ESP + EBP*0x4 + 0x20]
MOVSX ECX,byte ptr [EBX + 0x6e]
LEA ECX,[ECX + EAX*0x2]
FCOMP dword ptr [ECX*0x4 + 0xe366bc]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a194
MOV EAX,dword ptr [ESP + EBP*0x4 + 0x20]
MOV dword ptr [ECX*0x4 + 0xe366bc],EAX
XOR EAX,EAX
MOVSX ECX,byte ptr [EBX + 0x5d]
MOVSX EDI,byte ptr [EBX + 0x6e]
LEA EDI,[EDI + ECX*0x2]
MOV CL,byte ptr [EAX + ESI*0x1 + -0x24]
SHL EDI,0x5
MOV byte ptr [EDI + EAX*0x1 + 0xe36dc4],CL
INC EAX
CMP EAX,0x20
JL 0x0043a164
MOVSX EDI,byte ptr [EBX + 0x5d]
MOVSX ECX,byte ptr [EBX + 0x6e]
MOV AL,byte ptr [ESI]
MOV byte ptr [ECX + EDI*0x2 + 0xe37436],AL
MOVSX EAX,byte ptr [EBX + 0x70]
INC EBP
ADD ESI,0x50
CMP EBP,EAX
JL 0x0043a0b8
MOV ECX,dword ptr [ESP + 0x28]
OR byte ptr [0x0050c540],0x4
MOV CL,byte ptr [ECX + 0x5c]
MOV byte ptr [0x004c0230],0xff
MOV byte ptr [0x004c022c],CL
MOV DL,byte ptr [EBX + 0x70]
CMP DL,0x1
MOV AL,CL
JLE 0x0043a1dc
MOV EDX,dword ptr [ESP + 0x2c]
MOV DL,byte ptr [EDX + 0x5c]
CMP DL,CL
MOV byte ptr [0x004c0230],DL
JGE 0x0043a1dc
MOV AL,DL
CMP AL,0x3
JLE 0x0043a22d
MOVSX EAX,AL
SUB EAX,0x3
MOV dword ptr [ESP + 0x14],EAX
FILD dword ptr [ESP + 0x14]
FMUL qword ptr [0x004ac908]
FSTP dword ptr [0x0050c114]
MOVSX EDX,byte ptr [EBX + 0x72]
FLD dword ptr [0x0050c114]
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac794]
FSUBR dword ptr [0x004ac904]
FXCH
FCOMP
FNSTSW AX
TEST AH,0x1
JZ 0x0043a22b
FSTP dword ptr [0x0050c114]
JMP 0x0043a22d
FSTP ST0
CMP byte ptr [EBX + 0x70],0x1
JNZ 0x0043a58a
MOV AL,byte ptr [EBX + 0x6c]
TEST AL,AL
JZ 0x0043a58a
MOV AL,byte ptr [EBX + 0x72]
CMP AL,0x3
JLE 0x0043a58a
MOVSX EAX,AL
XOR EDI,EDI
DEC EAX
TEST EAX,EAX
JLE 0x0043a289
MOV ESI,0x50c184
MOV ECX,dword ptr [ESI]
MOV EDX,dword ptr [ESI + -0x4]
FLD dword ptr [ECX + 0x74]
FCOMP dword ptr [EDX + 0x74]
FNSTSW AX
TEST AH,0x40
JZ 0x0043a276
MOV DX,word ptr [EDX + 0x5c]
MOV word ptr [ECX + 0x5c],DX
MOVSX EAX,byte ptr [EBX + 0x72]
INC EDI
ADD ESI,0x4
DEC EAX
CMP EDI,EAX
JL 0x0043a25c
MOV CL,byte ptr [0x004c022c]
CMP CL,0x1
JNZ 0x0043a308
MOV AL,byte ptr [EBX + 0x6c]
TEST AL,AL
JZ 0x0043a308
TEST byte ptr [0x0050c540],0x8
JNZ 0x0043a308
MOV DL,byte ptr [EBX + 0x5d]
MOVSX EAX,DL
LEA ECX,[EAX + EAX*0x2]
MOVSX ECX,byte ptr [ECX*0x4 + 0x4bfef2]
CMP ECX,0x2
JNZ 0x0043a2bb
CMP DL,0x1
JZ 0x0043a2bb
XOR ECX,ECX
TEST ECX,ECX
JLE 0x0043a308
MOV EAX,0x1
SHL EAX,CL
MOV ECX,dword ptr [0x00e35a94]
TEST EAX,ECX
JNZ 0x0043a308
MOV EDI,dword ptr [0x00e364b0]
OR ECX,EAX
OR EDI,ECX
MOV dword ptr [0x00e35a94],ECX
MOV dword ptr [0x00e364b0],EDI
CALL 0x0044e560
OR byte ptr [0x0050c540],0x8
PUSH 0x11
PUSH EBX
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x168
RET
MOV DL,byte ptr [0x0050c228]
MOV AL,byte ptr [EBX + 0x5e]
PUSH EDX
PUSH EAX
CALL 0x00440a00
MOV CL,byte ptr [0x004c022c]
ADD ESP,0x8
CMP CL,AL
JG 0x0043a56c
MOV AL,byte ptr [EBX + 0x5e]
MOVSX ECX,AL
MOV byte ptr [ESP + 0x14],AL
MOVSX EAX,word ptr [ECX*0x2 + 0xe35a8a]
MOV CL,byte ptr [0x0050c228]
SHL CL,0x1
SAR EAX,CL
CDQ
XOR EAX,EDX
SUB EAX,EDX
AND EAX,0x3
XOR EAX,EDX
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x14]
SUB ESI,EDX
MOV DL,byte ptr [0x0050c228]
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x20],ESI
CALL 0x00440a20
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0043a479
MOVSX ECX,byte ptr [EBX + 0x91]
MOVSX EDX,byte ptr [0x004c022c]
LEA EAX,[EDX + ECX*0x4 + 0x44]
MOVSX ECX,word ptr [EBX + EAX*0x2]
MOV dword ptr [0x0050c53c],ECX
MOVSX EDX,byte ptr [EBX + 0x5e]
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
FMUL qword ptr [0x004ac910]
FSUBR qword ptr [0x004ac918]
FIMUL dword ptr [0x0050c53c]
CALL 0x0049ed20
MOV EDX,dword ptr [0x00e35a98]
MOV [0x0050c53c],EAX
ADD EDX,EAX
MOV dword ptr [0x00e35a98],EDX
MOV AL,byte ptr [EBX + 0x5e]
CMP AL,0x3
JGE 0x0043a46b
MOVSX ESI,AL
MOVSX EDI,byte ptr [0x0050c228]
MOVSX EAX,byte ptr [ESI + 0x4bfee0]
LEA EBP,[EAX + -0x1]
CMP EDI,EBP
JNZ 0x0043a422
MOV EAX,0x1
MOV ECX,ESI
SHL EAX,CL
TEST byte ptr [0x00e35a88],AL
JNZ 0x0043a420
MOV AL,[0x00e35a88]
MOV DL,0x1
MOV ECX,ESI
MOV byte ptr [ESP + 0x1f],0x3
SHL DL,CL
OR AL,DL
MOV [0x00e35a88],AL
MOVSX ESI,byte ptr [EBX + 0x5e]
MOV AL,byte ptr [ESI*0x4 + 0x4c006c]
MOV byte ptr [EBX + 0x5d],AL
JMP 0x0043a44d
CMP EDI,EBP
JGE 0x0043a44d
MOV AL,byte ptr [ESI + 0xe35a85]
LEA ECX,[EDI + 0x1]
MOV EDX,0x1
SHL EDX,CL
TEST AL,DL
JNZ 0x0043a44d
LEA ECX,[ESI*0x8 + 0x0]
SUB ECX,ESI
ADD ECX,EDI
MOV DL,byte ptr [ECX*0x4 + 0x4c001c]
MOV byte ptr [EBX + 0x5d],DL
MOVSX ECX,byte ptr [0x0050c228]
INC ECX
MOV AL,0x1
SHL AL,CL
MOV CL,byte ptr [ESI + 0xe35a85]
OR CL,AL
MOV byte ptr [ESI + 0xe35a85],CL
MOV ESI,dword ptr [ESP + 0x18]
PUSH 0xe29bc0
PUSH EBX
CALL 0x0043d720
ADD ESP,0x8
MOV AL,byte ptr [EBX + 0x5e]
MOVSX ECX,AL
MOVSX EDX,byte ptr [ECX + 0x4bfee0]
MOVSX ECX,byte ptr [0x0050c228]
DEC EDX
CMP ECX,EDX
JNZ 0x0043a49f
CMP AL,0x2
JNZ 0x0043a49f
PUSH EBX
CALL 0x00440c10
ADD ESP,0x4
MOV DL,byte ptr [0x004c022c]
MOV ECX,0x4
MOVSX EAX,DL
SUB ECX,EAX
MOVSX EAX,SI
CMP EAX,ECX
JGE 0x0043a56c
MOVSX EAX,byte ptr [0x0050c228]
MOVSX ESI,byte ptr [EBX + 0x5e]
SHL EAX,0x1
MOV EDI,0x1
MOV ECX,EAX
SHL EDI,CL
LEA ECX,[EAX + 0x1]
NOT EDI
AND word ptr [ESI*0x2 + 0xe35a8a],DI
MOV EDI,0x1
MOVSX ESI,byte ptr [EBX + 0x5e]
SHL EDI,CL
MOVSX CX,DL
MOV EDX,0x4
NOT EDI
AND word ptr [ESI*0x2 + 0xe35a8a],DI
SUB EDX,ECX
MOVSX ESI,byte ptr [EBX + 0x5e]
MOV ECX,EAX
MOV EAX,0x3fff
SHL EDX,CL
OR word ptr [ESI*0x2 + 0xe35a8a],DX
CMP word ptr [0x00e35a8a],AX
JNZ 0x0043a56c
CMP word ptr [0x00e35a8c],AX
JNZ 0x0043a56c
CMP word ptr [0x00e35a8e],AX
JNZ 0x0043a56c
MOV AL,[0x00e35a88]
TEST AL,0x8
JNZ 0x0043a54c
OR AL,0x8
MOV byte ptr [ESP + 0x1f],0x3
MOV [0x00e35a88],AL
MOV AL,[0x004c0078]
MOV byte ptr [EBX + 0x5d],AL
JMP 0x0043a56c
CMP word ptr [0x00e35a90],0xff
JNZ 0x0043a56c
TEST byte ptr [0x00e364a8],0x20
JNZ 0x0043a56c
MOV EAX,[0x00e364a8]
OR AL,0x20
MOV [0x00e364a8],EAX
XOR EAX,EAX
MOV CL,byte ptr [EAX + 0xe35a85]
MOV DL,byte ptr [EAX + 0xe364ac]
CMP DL,CL
JNC 0x0043a584
MOV byte ptr [EAX + 0xe364ac],CL
INC EAX
CMP EAX,0x4
JL 0x0043a56e
MOV CL,byte ptr [ESP + 0x1f]
MOV byte ptr [EBX + 0x5e],CL
CALL 0x0044e560
XOR EBP,EBP
FLD dword ptr [0x0050c1f4]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043a5e4
FLD dword ptr [0x0050c1f4]
FSUB dword ptr [0x00e22a50]
FST dword ptr [0x0050c1f4]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JZ 0x0043a5e4
PUSH EBP
PUSH 0x3f800000
PUSH 0x3e800000
PUSH 0x7
PUSH 0xb6
CALL 0x00426c80
ADD ESP,0x14
MOV AL,byte ptr [EBX + 0x72]
XOR EBP,EBP
TEST AL,AL
JLE 0x0043a98a
MOV ESI,0x50c180
MOV dword ptr [ESP + 0x14],0x1e
FILD dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x18],0x437f0000
FADD dword ptr [0x0050c114]
FSUB dword ptr [0x004ac830]
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac810]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a641
FLD dword ptr [ESP + 0x10]
FSUBR qword ptr [0x004ac920]
FMUL qword ptr [0x004ac928]
FSUBR qword ptr [0x004ac838]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac930]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043a66c
FLD dword ptr [ESP + 0x10]
FSUB qword ptr [0x004ac7c8]
FMUL qword ptr [0x004ac928]
FSUBR qword ptr [0x004ac838]
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x0043a685
MOV dword ptr [ESP + 0x18],0x0
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ac790]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043a69e
MOV dword ptr [ESP + 0x18],0x437f0000
MOV EDX,dword ptr [ESI]
MOV EAX,dword ptr [EDX + 0x18]
MOV ECX,dword ptr [EAX]
MOV EAX,dword ptr [ESP + 0x14]
CMP EAX,0x1e
MOV EDI,ECX
JLE 0x0043a6c9
MOV EAX,0x50c180
MOV EDX,EBP
MOV EBX,dword ptr [EAX]
MOV EBX,dword ptr [EBX + 0x18]
CMP ECX,dword ptr [EBX]
JNZ 0x0043a6c3
ADD EDI,0x17
ADD EAX,0x4
DEC EDX
JNZ 0x0043a6b7
PUSH 0x1
PUSH EDI
CALL 0x004285d0
FLD dword ptr [ESP + 0x18]
ADD ESP,0x8
CALL 0x0049ed20
PUSH EAX
PUSH 0x1e
PUSH EDI
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f000000
PUSH 0x3f000000
PUSH EDI
CALL 0x004286f0
FLD dword ptr [ESP + 0x24]
ADD ESP,0xc
CALL 0x0049ed20
MOV BL,AL
PUSH EBX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH EDI
CALL 0x00428740
FLD dword ptr [ESP + 0x24]
MOVSX ECX,byte ptr [0x004c022c]
FSUB dword ptr [0x004ac934]
ADD ESP,0x14
DEC ECX
CMP EBP,ECX
FSTP dword ptr [ESP + 0x10]
JZ 0x0043a82c
MOVSX EDX,byte ptr [0x004c0230]
DEC EDX
CMP EBP,EDX
JZ 0x0043a82c
MOV EAX,dword ptr [ESI]
MOVSX ECX,word ptr [EAX + 0x5c]
PUSH ECX
PUSH 0x4c0d6c
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x7c]
PUSH EAX
PUSH EDX
CALL 0x0049eb80
FLD dword ptr [ESP + 0x1c]
ADD ESP,0xc
CALL 0x0049ed20
MOV DI,AX
LEA EAX,[ESP + 0x78]
PUSH EAX
PUSH EBX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDI
PUSH 0x58
CALL 0x00450530
MOV ECX,dword ptr [ESI]
ADD ESP,0x1c
MOV EDX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EDX]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2718]
PUSH EAX
CALL 0x00421360
MOV ECX,dword ptr [ESI]
ADD ESP,0x4
MOV EDX,dword ptr [ECX + 0x18]
PUSH EAX
MOV EAX,dword ptr [EDX]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2714]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0d60
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x80]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [0x004ac85c]
ADD ESP,0x10
LEA EDX,[ESP + 0x78]
PUSH EDX
PUSH EBX
PUSH -0x1
PUSH -0x1
PUSH 0x32
CALL 0x0049ed20
PUSH EAX
PUSH 0x5c
CALL 0x00450530
MOV EAX,dword ptr [ESI]
ADD ESP,0x1c
MOV ECX,dword ptr [EAX + 0x74]
PUSH 0x1
PUSH EBX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ECX
PUSH EDI
PUSH 0x109
CALL 0x004505f0
ADD ESP,0x20
JMP 0x0043a968
MOV EDX,dword ptr [ESI]
MOVSX EAX,word ptr [EDX + 0x5c]
PUSH EAX
PUSH 0x4c0d6c
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x7c]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
FLD dword ptr [ESP + 0x1c]
ADD ESP,0xc
CALL 0x0049ed20
LEA EDX,[ESP + 0x78]
MOV DI,AX
PUSH EDX
PUSH EBX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH EDI
PUSH 0x58
CALL 0x00450530
MOV EAX,dword ptr [ESI]
ADD ESP,0x1c
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [ECX]
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[EAX + EDX*0x4]
MOV ECX,dword ptr [EAX*0x4 + 0x4c2718]
PUSH ECX
CALL 0x00421360
MOV EDX,dword ptr [ESI]
ADD ESP,0x4
PUSH EAX
MOV EAX,dword ptr [EDX + 0x18]
MOV EAX,dword ptr [EAX]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2714]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0d60
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x80]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [0x004ac85c]
ADD ESP,0x10
LEA EDX,[ESP + 0x78]
PUSH EDX
PUSH EBX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
CALL 0x0049ed20
PUSH EAX
PUSH 0x5c
CALL 0x00450530
MOV EAX,dword ptr [ESI]
ADD ESP,0x1c
MOV ECX,dword ptr [EAX + 0x74]
PUSH 0x1
PUSH EBX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
PUSH ECX
PUSH EDI
PUSH 0x109
CALL 0x004505f0
MOVSX EDX,byte ptr [0x004c022c]
ADD ESP,0x20
DEC EDX
CMP EBP,EDX
JNZ 0x0043a92b
PUSH 0xe35a60
LEA EAX,[ESP + 0x7c]
PUSH 0x4c0d58
PUSH EAX
JMP 0x0043a93a
PUSH 0xe35ab0
LEA ECX,[ESP + 0x7c]
PUSH 0x4c0d58
PUSH ECX
CALL 0x0049eb80
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [0x004ac938]
ADD ESP,0xc
LEA EDX,[ESP + 0x78]
PUSH EDX
PUSH EBX
PUSH 0x11
PUSH -0x42
PUSH -0x5d
CALL 0x0049ed20
PUSH EAX
PUSH 0x64
CALL 0x00450530
ADD ESP,0x1c
MOV EAX,dword ptr [ESP + 0x17c]
MOV EDX,dword ptr [ESP + 0x14]
INC EBP
ADD EDX,0x1e
MOVSX ECX,byte ptr [EAX + 0x72]
ADD ESI,0x4
CMP EBP,ECX
MOV dword ptr [ESP + 0x14],EDX
JL 0x0043a5fe
MOV ESI,dword ptr [ESP + 0x17c]
CMP byte ptr [ESI + 0x72],0x4
JLE 0x0043a9ab
PUSH 0x90
PUSH 0x1e
PUSH 0x122
CALL 0x0043fe90
ADD ESP,0xc
MOV EAX,[0x0050c53c]
XOR EDI,EDI
CMP EAX,EDI
JLE 0x0043aa01
PUSH EAX
PUSH 0x4c0d30
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x7c]
PUSH EAX
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP + 0x78]
PUSH EAX
PUSH 0xcd
PUSH 0x87
CALL 0x00450560
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0xc0e00000
PUSH 0x40e00000
PUSH EDI
CALL 0x00457140
ADD ESP,0x10
MOV AL,byte ptr [ESI + 0x70]
MOV dword ptr [ESP + 0x10],EDI
TEST AL,AL
JLE 0x0043ab8b
MOV ECX,dword ptr [0x004bfedc]
MOV EBX,0xe98e80
MOV EBP,0x1
CMP dword ptr [0x004d6b40],EDI
JNZ 0x0043aa30
CMP dword ptr [0x004d6b44],EDI
JZ 0x0043aaa7
PUSH EBP
CALL 0x00411480
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x54
CALL 0x00440550
MOV AL,byte ptr [ESI + 0x6c]
ADD ESP,0x4
TEST AL,AL
JZ 0x0043aa90
CMP byte ptr [0x004c022c],0x3
JG 0x0043aa89
CMP byte ptr [0x0050c228],0x6
JNZ 0x0043aa89
LEA ECX,[ESI + 0xcc]
MOV EAX,0x50c180
MOV EDX,dword ptr [EAX]
ADD EAX,0x4
INC ECX
CMP EAX,0x50c18c
MOV EDX,dword ptr [EDX + 0x18]
MOV DL,byte ptr [EDX]
MOV byte ptr [ECX + -0x1],DL
JL 0x0043aa6d
MOV ECX,0x10
JMP 0x0043aaa1
MOV ECX,0xc
JMP 0x0043aaa1
CALL 0x0041d6b0
MOV ECX,EAX
NEG ECX
SBB ECX,ECX
AND ECX,0xfffffff5
ADD ECX,0xc
MOV dword ptr [0x004bfedc],ECX
MOV dword ptr [0x00e295c4],EDI
MOV dword ptr [0x00e295c0],EDI
CMP byte ptr [ESI + 0x72],0x4
JLE 0x0043ab71
FLD dword ptr [EBX]
FCOMP qword ptr [0x004ac748]
FNSTSW AX
TEST AH,0x1
JNZ 0x0043aadb
FLD dword ptr [EBX]
FCOMP qword ptr [0x004ac880]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043ab3f
FLD dword ptr [EBX]
FMUL dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac848]
FSUBR dword ptr [0x0050c114]
FST dword ptr [0x0050c114]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043ab0c
MOV dword ptr [0x0050c114],0x0
MOVSX EAX,byte ptr [ESI + 0x72]
FLD dword ptr [0x0050c114]
MOV dword ptr [ESP + 0x14],EAX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac794]
FSUBR dword ptr [0x004ac904]
FXCH
FCOMP
FNSTSW AX
TEST AH,0x1
JZ 0x0043ab3d
FSTP dword ptr [0x0050c114]
JMP 0x0043ab3f
FSTP ST0
FLD dword ptr [0x0050c114]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x0043ab58
MOV dword ptr [0x00e295c0],EBP
FILD dword ptr [0x00e295c8]
FCOMP dword ptr [0x0050c114]
FNSTSW AX
TEST AH,0x1
JZ 0x0043ab71
MOV dword ptr [0x00e295c4],EBP
MOV EAX,dword ptr [ESP + 0x10]
ADD EBX,0x4
MOVSX EDX,byte ptr [ESI + 0x70]
INC EAX
CMP EAX,EDX
MOV dword ptr [ESP + 0x10],EAX
JL 0x0043aa20
JMP 0x0043ab91
MOV ECX,dword ptr [0x004bfedc]
CMP ECX,-0x1
JZ 0x0043aba7
MOV word ptr [0x0050c540],DI
MOV dword ptr [0x0050c944],0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x168
RET
