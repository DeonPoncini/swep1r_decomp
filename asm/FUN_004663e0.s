; FUN_004663e0
SUB ESP,0x1ec
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x00445b40
MOV EBX,dword ptr [ESP + 0x200]
MOV [0x00e27240],EAX
MOV EAX,dword ptr [EBX + 0x1bc]
PUSH EAX
PUSH 0x54657374
CALL 0x00447300
ADD ESP,0x8
PUSH 0x54657374
CALL 0x00450db0
ADD ESP,0x4
CALL 0x00445b40
MOV ECX,dword ptr [0x00e27240]
MOV EDI,0xe28860
SUB EAX,ECX
MOV ECX,0x14
MOV [0x00e27240],EAX
XOR EAX,EAX
STOSD.REP ES:EDI
XOR ESI,ESI
MOV byte ptr [EAX + 0xe27840],0x0
ADD EAX,0x4
CMP EAX,0x50
JL 0x0046643e
MOV ECX,dword ptr [EBX + 0x1bc]
MOV dword ptr [ESP + 0x18],ESI
CMP ECX,ESI
JLE 0x004664a9
MOV EDX,dword ptr [ESP + 0x204]
LEA EDI,[EDX + 0x18]
XOR EAX,EAX
TEST ECX,ECX
JLE 0x00466497
MOV EDX,dword ptr [ESP + 0x204]
ADD EDX,0x18
CMP ESI,EAX
JZ 0x0046648c
MOV EBX,dword ptr [EDI]
MOV EBP,dword ptr [EDX]
MOV EBX,dword ptr [EBX]
CMP EBX,dword ptr [EBP]
JNZ 0x0046648c
MOV dword ptr [ESP + 0x18],0x1
INC EAX
ADD EDX,0x88
CMP EAX,ECX
JL 0x00466475
INC ESI
ADD EDI,0x88
CMP ESI,ECX
JL 0x00466465
MOV EBX,dword ptr [ESP + 0x200]
MOV EAX,dword ptr [ESP + 0x18]
XOR EBP,EBP
MOV [0x0050ca1c],EAX
MOV EAX,dword ptr [EBX + 0x1bc]
TEST EAX,EAX
MOV dword ptr [ESP + 0x14],EBP
JLE 0x004666b8
MOV ECX,dword ptr [ESP + 0x204]
MOV dword ptr [ESP + 0x10],0xe28860
LEA EBX,[ESP + 0x10c]
LEA ESI,[ECX + 0x18]
CALL 0x00445b40
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX],EAX
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [EAX + 0x14]
PUSH ECX
CALL 0x00421360
MOV DL,byte ptr [EAX + 0x2]
ADD ESP,0x4
MOV byte ptr [EBP*0x4 + 0xe27840],DL
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [EAX + 0x14]
PUSH ECX
CALL 0x00421360
MOV DL,byte ptr [EAX + 0x3]
ADD ESP,0x4
MOV byte ptr [EBP*0x4 + 0xe27841],DL
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [EAX + 0x14]
PUSH ECX
CALL 0x00421360
MOV DL,byte ptr [EAX + 0x4]
MOV ECX,dword ptr [0x0050ca18]
MOV byte ptr [EBP*0x4 + 0xe27842],DL
MOV byte ptr [EBP*0x4 + 0xe27843],0x0
MOV EAX,dword ptr [ESI + -0x14]
ADD ESP,0x4
CMP EAX,0x4c6f636c
MOV EDI,0x3
JNZ 0x0046655a
XOR EAX,EAX
CMP ECX,0x1
SETG AL
INC EAX
MOV EDI,EAX
MOV EDX,dword ptr [ESP + 0x200]
TEST byte ptr [EDX + 0x8],0x20
JZ 0x00466570
MOV EDI,0x1
XOR EAX,EAX
JMP 0x0046657b
XOR EAX,EAX
CMP ECX,EAX
JNZ 0x0046657b
MOV EDI,0x3
CMP EDI,0x2
JZ 0x004665fa
CMP EDI,0x1
JZ 0x004665fa
CMP EDI,0x3
JNZ 0x004665bd
LEA EDI,[ESP + EBP*0x4 + 0x1c]
MOV dword ptr [ESP + EBP*0x4 + 0xbc],EAX
MOV dword ptr [EBX],EAX
MOV dword ptr [EDI],EAX
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [EAX + 0xc]
PUSH ECX
CALL 0x00448780
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0046667c
MOV EDX,dword ptr [EAX]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [EDI],EDX
MOV dword ptr [EBX],EAX
JMP 0x0046667c
CMP EDI,0x4
JNZ 0x0046667c
MOV ECX,dword ptr [ESI]
LEA EDI,[ESP + EBP*0x4 + 0x1c]
MOV dword ptr [ESP + EBP*0x4 + 0xbc],EAX
MOV dword ptr [EBX],EAX
MOV EDX,dword ptr [ECX + 0x10]
MOV dword ptr [EDI],EAX
PUSH EDX
CALL 0x00448780
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0046667c
MOV EAX,dword ptr [EAX]
MOV dword ptr [EBX],0x0
MOV dword ptr [EDI],EAX
JMP 0x0046667c
MOV ECX,dword ptr [ESI]
MOV dword ptr [ESP + EBP*0x4 + 0x1c],EAX
MOV dword ptr [EBX],EAX
MOV EDX,dword ptr [ECX + 0x4]
PUSH EDX
CALL 0x00448780
MOV EBP,EAX
MOV EAX,dword ptr [ESP + 0x18]
ADD ESP,0x4
TEST EBP,EBP
MOV dword ptr [ESP + EAX*0x4 + 0xbc],EBP
JNZ 0x00466633
MOV ECX,dword ptr [ESP + 0x200]
MOV dword ptr [ECX + 0x1bc],EAX
MOV [0x0050ca2c],EAX
JMP 0x00466678
CMP EDI,0x1
JNZ 0x00466678
MOV EDX,dword ptr [ESI]
MOV EAX,dword ptr [EDX + 0x8]
TEST EAX,EAX
JL 0x00466678
PUSH EAX
CALL 0x00448780
MOV ECX,dword ptr [ESP + 0x18]
ADD ESP,0x4
TEST EAX,EAX
MOV dword ptr [ESP + ECX*0x4 + 0x15c],EAX
JNZ 0x0046666e
MOV EAX,dword ptr [ESP + 0x200]
MOV dword ptr [EAX + 0x1bc],ECX
MOV dword ptr [0x0050ca2c],ECX
JMP 0x00466678
PUSH EAX
PUSH EBP
CALL 0x00448c70
ADD ESP,0x8
MOV EBP,dword ptr [ESP + 0x14]
CALL 0x00445b40
MOV ECX,EAX
MOV EAX,dword ptr [ESP + 0x10]
ADD ESI,0x88
ADD EBX,0x4
MOV EDX,dword ptr [EAX]
ADD EAX,0x4
SUB ECX,EDX
MOV EDX,dword ptr [ESP + 0x200]
MOV dword ptr [EAX + -0x4],ECX
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [EDX + 0x1bc]
INC EBP
CMP EBP,EAX
MOV dword ptr [ESP + 0x14],EBP
JL 0x004664df
MOV EBX,dword ptr [ESP + 0x200]
MOV EDX,dword ptr [EBX + 0x1bc]
TEST EDX,EDX
JLE 0x004666d4
MOV ECX,EDX
OR EAX,0xffffffff
LEA EDI,[ESP + 0x6c]
STOSD.REP ES:EDI
XOR EDI,EDI
TEST EDX,EDX
JLE 0x0046672c
MOV ESI,dword ptr [EBX + 0x1bc]
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,ESI
FILD dword ptr [ESP + 0x10]
SUB EAX,EDI
MOV dword ptr [ESP + 0x10],EAX
FMUL dword ptr [0x004ad240]
FIMUL dword ptr [ESP + 0x10]
CALL 0x0049ed20
OR EDX,0xffffffff
TEST EAX,EAX
JL 0x00466723
LEA ECX,[ESP + 0x6c]
SUB ECX,0x4
MOV EBP,dword ptr [ECX + 0x4]
ADD ECX,0x4
INC EDX
CMP EBP,-0x1
JNZ 0x0046671f
DEC EAX
TEST EAX,EAX
JGE 0x00466712
MOV dword ptr [ESP + EDX*0x4 + 0x6c],EDI
INC EDI
CMP EDI,ESI
JL 0x004666da
MOV EDI,dword ptr [EBX + 0x1bc]
MOV ESI,0x1
TEST EDI,EDI
JLE 0x00466772
MOV EDX,dword ptr [ESP + 0x204]
LEA ECX,[ESP + 0x1ac]
LEA EAX,[EDX + 0x4]
MOV EDX,EDI
TEST byte ptr [EAX + 0x4],0x20
JNZ 0x00466761
CMP dword ptr [EAX],0x4c6f636c
JZ 0x00466761
MOV dword ptr [ECX],ESI
INC ESI
JMP 0x00466767
MOV dword ptr [ECX],0xffffffff
ADD EAX,0x88
ADD ECX,0x4
DEC EDX
JNZ 0x0046674e
XOR ESI,ESI
TEST EDI,EDI
JLE 0x004667d1
LEA EDI,[ESP + 0x6c]
MOV EAX,dword ptr [EDI]
MOV ECX,dword ptr [ESP + 0x18]
PUSH ECX
MOV EDX,dword ptr [ESP + EAX*0x4 + 0x110]
MOV ECX,dword ptr [ESP + EAX*0x4 + 0x20]
PUSH EDX
MOV EDX,dword ptr [ESP + EAX*0x4 + 0x164]
PUSH ECX
MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc8]
PUSH EDX
MOV EDX,dword ptr [ESP + EAX*0x4 + 0x1bc]
PUSH ECX
MOV ECX,EAX
SHL ECX,0x4
PUSH EDX
MOV EDX,dword ptr [ESP + 0x21c]
ADD ECX,EAX
LEA EAX,[EDX + ECX*0x8]
PUSH EAX
PUSH EBX
CALL 0x00465980
MOV EAX,dword ptr [EBX + 0x1bc]
ADD ESP,0x20
INC ESI
ADD EDI,0x4
CMP ESI,EAX
JL 0x0046677c
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1ec
RET