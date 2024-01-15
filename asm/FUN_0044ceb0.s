; FUN_0044ceb0
MOV EAX,[0x004c3c04]
SUB ESP,0x8
TEST EAX,EAX
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
JZ 0x0044cece
MOV EAX,[0x004c3c0c]
TEST EAX,EAX
JZ 0x0044cece
CALL 0x0044bc20
MOV ESI,dword ptr [ESP + 0x1c]
MOV EAX,[0x00e3752c]
MOV dword ptr [ESI + 0x34],EAX
MOV ECX,dword ptr [0x00e37520]
MOV dword ptr [ESI + 0x38],ECX
MOV EAX,[0x004c3c04]
TEST EAX,EAX
JZ 0x0044cf0a
MOV ECX,dword ptr [0x0050c6f4]
MOV dword ptr [0x0050c6f8],0x0
LEA ECX,[ECX + ECX*0x2]
SHL ECX,0x4
ADD ECX,0xe375c0
JMP 0x0044cf0e
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESI + 0x14]
TEST EDI,EDI
JZ 0x0044d1cf
MOV EDX,dword ptr [0x0050c6b0]
MOV EAX,dword ptr [EDX + 0x74]
MOV EDX,dword ptr [EDX + 0x78]
ADD EDI,EAX
LEA EBX,[EAX + EAX*0x8]
LEA EAX,[EAX + EBX*0x8]
LEA EBX,[EDI + -0x1]
MOV dword ptr [EDX + 0x90],EBX
LEA EAX,[EDX + EAX*0x4]
MOV EDX,dword ptr [0x0050c6b0]
LEA EBP,[EAX + 0xfffffedc]
CMP EBP,dword ptr [EDX + 0x78]
MOV dword ptr [ESP + 0x14],EBP
JNZ 0x0044cf56
MOV dword ptr [EBP + 0x94],EAX
JMP 0x0044cf5c
MOV dword ptr [EBP + 0x98],EAX
MOV EDX,dword ptr [0x0050c6b0]
MOV EDX,dword ptr [EDX + 0x74]
CMP EDX,EDI
JGE 0x0044d051
MOV EBP,0x1
MOV dword ptr [EAX + 0x80],EDX
MOV dword ptr [EAX + 0x88],0xffffffff
MOV ESI,dword ptr [0x004c3c18]
CMP EDX,EBX
MOV dword ptr [EAX],ESI
MOV ESI,dword ptr [0x004c3c1c]
MOV dword ptr [EAX + 0x4],ESI
MOV ESI,dword ptr [0x0050c6b0]
MOV ESI,dword ptr [ESI + 0x78]
MOV dword ptr [EAX + 0x8c],ESI
JGE 0x0044cfb6
LEA ESI,[EAX + 0x124]
MOV dword ptr [EAX + 0x98],ESI
XOR ESI,ESI
JMP 0x0044cfbe
XOR ESI,ESI
MOV dword ptr [EAX + 0x98],ESI
MOV dword ptr [EAX + 0x94],ESI
MOV dword ptr [EAX + 0x90],ESI
MOV dword ptr [EAX + 0x84],EBP
MOV ESI,dword ptr [ECX]
MOV dword ptr [EAX + 0xc0],ESI
MOV ESI,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0xc4],ESI
MOV ESI,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0xc8],ESI
MOV ESI,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0xcc],ESI
MOV ESI,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0xd0],ESI
MOV ESI,dword ptr [ECX + 0x14]
MOV dword ptr [EAX + 0xd4],ESI
MOV ESI,dword ptr [ECX + 0x18]
MOV dword ptr [EAX + 0xd8],ESI
MOV ESI,dword ptr [ECX + 0x1c]
MOV dword ptr [EAX + 0xdc],ESI
MOV ESI,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0xe0],ESI
MOV ESI,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0xe4],ESI
MOV ESI,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0xe8],ESI
MOV ESI,dword ptr [ECX + 0x2c]
MOV dword ptr [EAX + 0xec],ESI
ADD EAX,0x124
INC EDX
CMP EDX,EDI
JL 0x0044cf72
MOV EBP,dword ptr [ESP + 0x14]
MOV ESI,dword ptr [ESP + 0x1c]
MOV EAX,[0x0050c6b0]
MOV dword ptr [EAX + 0x74],EDI
MOV ECX,dword ptr [ESI + 0x14]
XOR EAX,EAX
TEST ECX,ECX
MOV dword ptr [ESP + 0x14],EAX
JLE 0x0044d1cf
ADD EBP,0x1ac
MOV dword ptr [ESP + 0x10],EBP
MOV ECX,dword ptr [ESI + 0x18]
MOV EDI,dword ptr [ECX + EAX*0x4]
MOV EBP,dword ptr [EDI + 0x30]
TEST EBP,EBP
JZ 0x0044d1ad
MOV EAX,[0x00e996dc]
MOV EDX,dword ptr [EDI]
AND EAX,0x2000
PUSH EDX
PUSH EAX
XOR EBX,EBX
CALL 0x00433680
MOV ECX,dword ptr [EDI]
ADD ESP,0x8
TEST ECX,ECX
JZ 0x0044d0b7
MOV EAX,dword ptr [ECX]
TEST AL,0x8
JNZ 0x0044d0b7
AND AL,0x40
NEG AL
SBB EAX,EAX
AND EAX,0x7ff
INC EAX
MOV EBX,EAX
TEST byte ptr [0x00e996dc],0x10
JNZ 0x0044d0f8
TEST ECX,ECX
JZ 0x0044d0f8
MOV ECX,dword ptr [ECX + 0x8]
TEST ECX,ECX
JZ 0x0044d0f8
MOV EAX,dword ptr [ECX + 0x1c]
TEST EAX,EAX
JZ 0x0044d0f8
MOV AL,byte ptr [EAX + 0x3]
MOV ECX,dword ptr [ECX + 0x38]
MOV DL,AL
AND AL,0xf0
AND DL,0xf
MOVZX DX,DL
MOVZX AX,AL
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00432190
MOV ESI,dword ptr [ESP + 0x28]
ADD ESP,0xc
JMP 0x0044d106
PUSH 0x0
PUSH 0x0
PUSH 0x0
CALL 0x00432190
ADD ESP,0xc
PUSH 0x3
PUSH 0x4c3c14
PUSH EBP
CALL 0x0049f000
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x0044d128
MOV EAX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [EBP + 0x40]
MOV dword ptr [EAX],EDX
JMP 0x0044d1ad
PUSH EBP
CALL 0x00409230
LEA ECX,[EAX + EAX*0x8]
ADD ESP,0x4
LEA EDX,[EAX + ECX*0x4]
MOV ECX,dword ptr [0x00e37bf0]
PUSH EBX
PUSH EDI
MOV ECX,dword ptr [ECX + 0x4]
MOV dword ptr [ECX + EDX*0x4 + 0x44],0x3
LEA ESI,[ECX + EDX*0x4]
MOV EDX,dword ptr [ESP + 0x18]
PUSH ESI
PUSH EBP
MOV dword ptr [EDX],EAX
MOV dword ptr [ESI + 0x40],EAX
XOR EAX,EAX
MOV byte ptr [ESI],0x61
MOV byte ptr [ESI + 0x1],0x65
MOV byte ptr [ESI + 0x2],0x73
MOV word ptr [ESI + 0x84],AX
MOV word ptr [ESI + 0x86],AX
CALL 0x00432d30
MOV EAX,dword ptr [EDI + 0x30]
ADD ESP,0x10
MOV dword ptr [ESI + 0xa],EAX
MOV dword ptr [EDI + 0x30],ESI
LEA ECX,[EDI + 0x14]
ADD EDI,0x8
PUSH ECX
PUSH EDI
CALL 0x0042f950
FMUL dword ptr [0x004acc94]
ADD ESP,0x8
PUSH ESI
FSTP dword ptr [ESI + 0x80]
CALL 0x00409290
MOV ESI,dword ptr [ESP + 0x20]
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESI + 0x14]
INC EAX
ADD EDX,0x124
CMP EAX,ECX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x10],EDX
JL 0x0044d074
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
