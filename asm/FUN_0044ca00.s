; FUN_0044ca00
SUB ESP,0x1c
MOV EAX,[0x004c3c04]
PUSH EBX
PUSH EBP
XOR EBP,EBP
PUSH ESI
CMP EAX,EBP
PUSH EDI
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x24],0x0
MOV dword ptr [ESP + 0x10],EBP
JZ 0x0044ca33
CMP dword ptr [0x004c3c0c],EBP
JZ 0x0044ca33
CALL 0x0044bc20
MOV EDI,dword ptr [ESP + 0x30]
MOV EAX,[0x00e3752c]
MOV dword ptr [EDI + 0x34],EAX
MOV ECX,dword ptr [0x00e37520]
MOV dword ptr [EDI + 0x38],ECX
MOV EAX,[0x004c3b98]
CMP EAX,EBP
JZ 0x0044ca65
LEA EDX,[EDI + 0x1c]
PUSH 0x1
PUSH EDX
CALL 0x0044c510
ADD ESP,0x8
MOV dword ptr [ESP + 0x14],EAX
JMP 0x0044ca6d
MOV dword ptr [ESP + 0x14],0x2
CMP word ptr [ESP + 0x14],BP
JZ 0x0044ce9b
CMP dword ptr [0x004c3c04],EBP
JZ 0x0044ca9a
MOV ECX,dword ptr [0x0050c6f4]
MOV dword ptr [0x0050c6f8],EBP
LEA ECX,[ECX + ECX*0x2]
SHL ECX,0x4
ADD ECX,0xe375c0
JMP 0x0044ca9e
MOV ECX,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [0x0050c6b0]
MOV EBX,dword ptr [EDI + 0x14]
MOV EAX,dword ptr [EDX + 0x74]
MOV EDX,dword ptr [EDX + 0x78]
MOV ESI,EAX
LEA EDI,[EAX + EAX*0x8]
ADD ESI,EBX
LEA EAX,[EAX + EDI*0x8]
LEA EDI,[ESI + -0x1]
MOV dword ptr [EDX + 0x90],EDI
LEA EAX,[EDX + EAX*0x4]
MOV EDX,dword ptr [0x0050c6b0]
LEA EBX,[EAX + 0xfffffedc]
CMP EBX,dword ptr [EDX + 0x78]
MOV dword ptr [ESP + 0x28],EBX
JNZ 0x0044cae0
MOV dword ptr [EBX + 0x94],EAX
JMP 0x0044cae6
MOV dword ptr [EBX + 0x98],EAX
MOV EDX,dword ptr [0x0050c6b0]
MOV EDX,dword ptr [EDX + 0x74]
CMP EDX,ESI
JGE 0x0044cbd8
MOV dword ptr [EAX + 0x80],EDX
MOV dword ptr [EAX + 0x88],0xffffffff
MOV EBX,dword ptr [0x004c3c18]
CMP EDX,EDI
MOV dword ptr [EAX],EBX
MOV EBX,dword ptr [0x004c3c1c]
MOV dword ptr [EAX + 0x4],EBX
MOV EBX,dword ptr [0x0050c6b0]
MOV EBX,dword ptr [EBX + 0x78]
MOV dword ptr [EAX + 0x8c],EBX
JGE 0x0044cb39
LEA EBX,[EAX + 0x124]
MOV dword ptr [EAX + 0x98],EBX
JMP 0x0044cb3f
MOV dword ptr [EAX + 0x98],EBP
MOV dword ptr [EAX + 0x94],EBP
MOV dword ptr [EAX + 0x90],EBP
MOV dword ptr [EAX + 0xf0],EBP
MOV dword ptr [EAX + 0x84],0x1
MOV EBX,dword ptr [ECX]
MOV dword ptr [EAX + 0xc0],EBX
MOV EBX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0xc4],EBX
MOV EBX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0xc8],EBX
MOV EBX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xcc],EBX
MOV EBX,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0xd0],EBX
MOV EBX,dword ptr [ECX + 0x14]
MOV dword ptr [EAX + 0xd4],EBX
MOV EBX,dword ptr [ECX + 0x18]
MOV dword ptr [EAX + 0xd8],EBX
MOV EBX,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX + 0xdc],EBX
MOV EBX,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0xe0],EBX
MOV EBX,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0xe4],EBX
MOV EBX,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0xe8],EBX
MOV EBX,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0xec],EBX
ADD EAX,0x124
INC EDX
CMP EDX,ESI
JL 0x0044caf7
MOV EBX,dword ptr [ESP + 0x28]
MOV EAX,[0x0050c6b0]
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [EAX + 0x74],ESI
MOV EDX,dword ptr [ECX + 0x14]
XOR EAX,EAX
CMP EDX,EBP
MOV dword ptr [ESP + 0x28],EAX
JLE 0x0044ce9b
ADD EBX,0x1ac
MOV dword ptr [ESP + 0x18],EBX
MOV ECX,dword ptr [ECX + 0x18]
CMP word ptr [ESP + 0x14],0x2
MOV EDI,dword ptr [ECX + EAX*0x4]
JZ 0x0044cc23
LEA EDX,[EDI + 0x8]
PUSH EBP
PUSH EDX
CALL 0x0044c510
ADD ESP,0x8
TEST AX,AX
JZ 0x0044ce79
MOV ECX,dword ptr [0x00e996dc]
MOV EAX,dword ptr [EDI]
MOV EBP,dword ptr [EDI + 0x30]
AND ECX,0x2000
PUSH EAX
PUSH ECX
MOV dword ptr [ESP + 0x24],EBP
CALL 0x00433680
MOV EAX,dword ptr [EDI]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0044cc64
MOV ECX,dword ptr [EAX]
TEST CL,0x8
JNZ 0x0044cc64
TEST CL,0x40
MOV ECX,dword ptr [ESP + 0x10]
JZ 0x0044cc5d
OR CH,0x8
JMP 0x0044cc60
OR ECX,0x1
MOV dword ptr [ESP + 0x10],ECX
TEST byte ptr [0x00e996dc],0x10
JNZ 0x0044cd07
TEST EAX,EAX
JZ 0x0044cd07
MOV ECX,dword ptr [EAX + 0x8]
TEST ECX,ECX
JZ 0x0044cd07
MOVSX EDX,word ptr [EAX + 0x4]
MOVSX ESI,word ptr [ECX + 0x4]
MOVSX EBX,word ptr [EAX + 0x6]
MOVSX EBP,word ptr [ECX + 0x6]
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ESP + 0x20],ESI
FILD dword ptr [ESP + 0x24]
FILD dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x24],EBX
MOV dword ptr [ESP + 0x20],EBP
FILD dword ptr [ESP + 0x24]
FILD dword ptr [ESP + 0x20]
FXCH ST2
FDIVP ST3,ST0
FXCH
MOV EDX,dword ptr [ECX + 0x1c]
TEST EDX,EDX
FDIVP
FXCH
FSTP dword ptr [ESP + 0x20]
FSTP dword ptr [ESP + 0x24]
JZ 0x0044cce7
MOV AL,byte ptr [EDX + 0x3]
MOV ECX,dword ptr [ECX + 0x38]
MOV DL,AL
AND DL,0xf
AND AL,0xf0
MOVZX DX,DL
MOVZX AX,AL
PUSH EDX
PUSH EAX
PUSH ECX
JMP 0x0044ccf5
PUSH 0x0
PUSH 0x0
PUSH EAX
CALL 0x00409040
ADD ESP,0x4
PUSH EAX
CALL 0x00432190
MOV EBP,dword ptr [ESP + 0x28]
MOV EBX,dword ptr [ESP + 0x24]
ADD ESP,0xc
JMP 0x0044cd1d
PUSH 0x0
PUSH 0x0
PUSH EDI
CALL 0x00409040
ADD ESP,0x4
PUSH EAX
CALL 0x00432190
ADD ESP,0xc
PUSH 0x3
PUSH 0x4c3c14
PUSH EBP
CALL 0x0049f000
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x0044cd4f
MOV EDX,dword ptr [EBP + 0x40]
MOV dword ptr [EBX + 0x68],EAX
MOV dword ptr [EBX],EDX
MOV EAX,[0x0050c0cc]
TEST EAX,EAX
JZ 0x0044cd4b
PUSH EBP
CALL 0x00432580
ADD ESP,0x4
MOV ESI,EBP
JMP 0x0044cdc1
PUSH EBP
CALL 0x00409230
LEA ECX,[EAX + EAX*0x8]
ADD ESP,0x4
LEA EDX,[EAX + ECX*0x4]
MOV ECX,dword ptr [0x00e37bf0]
MOV ECX,dword ptr [ECX + 0x4]
MOV dword ptr [ECX + EDX*0x4 + 0x44],0x3
MOV dword ptr [EBX],EAX
MOV dword ptr [ECX + EDX*0x4 + 0x40],EAX
LEA ESI,[ECX + EDX*0x4]
MOV EDX,dword ptr [ESP + 0x10]
PUSH EDX
PUSH EDI
PUSH ESI
PUSH EBP
MOV byte ptr [ESI],0x61
MOV byte ptr [ESI + 0x1],0x65
MOV byte ptr [ESI + 0x2],0x73
CALL 0x00432d30
MOV EAX,dword ptr [EDI + 0x30]
ADD ESP,0x10
LEA ECX,[EDI + 0x14]
LEA EDX,[EDI + 0x8]
PUSH ECX
MOV dword ptr [ESI + 0xa],EAX
PUSH EDX
MOV dword ptr [EDI + 0x30],ESI
CALL 0x0042f950
FMUL dword ptr [0x004acc94]
ADD ESP,0x8
PUSH ESI
FSTP dword ptr [ESI + 0x80]
CALL 0x00409290
ADD ESP,0x4
FLD dword ptr [0x004acc98]
FLD dword ptr [0x004acc98]
FSUB dword ptr [ESP + 0x20]
FXCH
FSUB dword ptr [ESP + 0x24]
FXCH
INC word ptr [ESI + 0x84]
INC word ptr [ESI + 0x86]
FSTP dword ptr [ESI + 0x8c]
FSTP dword ptr [ESI + 0x90]
MOV EAX,[0x0050c70c]
TEST EAX,EAX
JZ 0x0044ce05
MOV byte ptr [ESI + 0x89],0x1
JMP 0x0044ce0c
MOV byte ptr [ESI + 0x89],0x0
MOV EAX,[0x0050c530]
TEST EAX,EAX
JZ 0x0044ce1c
MOV byte ptr [ESI + 0x89],0x0
MOV dword ptr [0x0050c0cc],0x0
MOV AL,byte ptr [ESI + 0x88]
TEST AL,AL
JZ 0x0044ce3a
PUSH EDI
PUSH ESI
CALL 0x00432b80
ADD ESP,0x8
TEST EBP,EBP
JZ 0x0044ce77
MOV AX,word ptr [EDI + 0x3e]
TEST AX,AX
JZ 0x0044ce77
MOV EDI,dword ptr [EDI + 0x28]
TEST EDI,EDI
JZ 0x0044ce64
MOVSX EAX,AX
LEA ECX,[EBX + 0xffffff78]
PUSH EAX
PUSH ECX
PUSH EDI
CALL 0x0044c3b0
ADD ESP,0xc
JMP 0x0044ce77
MOVSX EDX,AX
LEA EAX,[EBX + 0xffffff78]
PUSH EDX
PUSH EAX
CALL 0x0044bfb0
ADD ESP,0x8
XOR EBP,EBP
MOV ECX,dword ptr [ESP + 0x30]
MOV EAX,dword ptr [ESP + 0x28]
INC EAX
ADD EBX,0x124
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x28],EAX
CMP EAX,EDX
MOV dword ptr [ESP + 0x18],EBX
JL 0x0044cbff
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x1c
RET
