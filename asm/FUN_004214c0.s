; FUN_004214c0
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
MOV AL,byte ptr [ESI]
MOV EBP,EDI
TEST AL,AL
JZ 0x004214e3
PUSH EBX
CMP AL,0x5c
JZ 0x004214ee
MOV byte ptr [EDI],AL
INC EDI
INC ESI
MOV AL,byte ptr [ESI]
TEST AL,AL
JNZ 0x004214d4
POP EBX
MOV byte ptr [EDI],0x0
MOV EAX,EDI
POP EDI
SUB EAX,EBP
POP ESI
POP EBP
RET
MOV EAX,[0x004d1f9c]
MOV EBX,0x1
CMP EAX,EBX
JLE 0x0042150d
MOVSX EAX,byte ptr [ESI + 0x1]
PUSH 0x4
PUSH EAX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x0042151d
MOVSX ECX,byte ptr [ESI + 0x1]
MOV EDX,dword ptr [0x004d1d90]
MOV AL,byte ptr [EDX + ECX*0x2]
AND EAX,0x4
TEST EAX,EAX
JZ 0x0042153e
MOV EAX,EBX
XOR CL,CL
MOV DL,byte ptr [EAX + ESI*0x1]
SUB DL,0x30
SHL CL,0x3
OR CL,DL
INC EAX
CMP EAX,0x4
JL 0x00421525
MOV byte ptr [EDI],CL
INC EDI
ADD ESI,0x4
JMP 0x004214dc
MOVSX EAX,byte ptr [ESI + 0x1]
ADD EAX,-0x22
CMP EAX,0x56
JA 0x004214db
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0x4217b0]
JMP dword ptr [ECX*0x4 + 0x421778]
CMP dword ptr [0x004d1f9c],EBX
JLE 0x00421575
MOVSX EDX,byte ptr [ESI + 0x2]
PUSH 0x80
PUSH EDX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x00421587
MOVSX EAX,byte ptr [ESI + 0x2]
MOV ECX,dword ptr [0x004d1d90]
MOV AL,byte ptr [ECX + EAX*0x2]
AND EAX,0x80
TEST EAX,EAX
JZ 0x0042166c
CMP dword ptr [0x004d1f9c],EBX
JLE 0x004215ab
MOVSX EDX,byte ptr [ESI + 0x3]
PUSH 0x80
PUSH EDX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x004215bd
MOVSX EAX,byte ptr [ESI + 0x3]
MOV ECX,dword ptr [0x004d1d90]
MOV AL,byte ptr [ECX + EAX*0x2]
AND EAX,0x80
TEST EAX,EAX
JZ 0x0042166c
CMP dword ptr [0x004d1f9c],EBX
JLE 0x004215de
MOVSX EDX,byte ptr [ESI + 0x2]
PUSH 0x4
PUSH EDX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x004215ee
MOVSX EAX,byte ptr [ESI + 0x2]
MOV ECX,dword ptr [0x004d1d90]
MOV AL,byte ptr [ECX + EAX*0x2]
AND EAX,0x4
TEST EAX,EAX
JZ 0x004215fb
MOVSX EAX,byte ptr [ESI + 0x2]
SUB EAX,0x30
JMP 0x0042160b
MOVSX EDX,byte ptr [ESI + 0x2]
PUSH EDX
CALL 0x0049fe50
ADD ESP,0x4
SUB EAX,0x57
SHL AL,0x4
MOV BL,AL
MOV EAX,[0x004d1f9c]
CMP EAX,0x1
JLE 0x0042162b
MOVSX EAX,byte ptr [ESI + 0x3]
PUSH 0x4
PUSH EAX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x0042163b
MOVSX ECX,byte ptr [ESI + 0x3]
MOV EDX,dword ptr [0x004d1d90]
MOV AL,byte ptr [EDX + ECX*0x2]
AND EAX,0x4
TEST EAX,EAX
MOVSX EAX,byte ptr [ESI + 0x3]
JZ 0x00421653
SUB EAX,0x30
OR BL,AL
MOV byte ptr [EDI],BL
INC EDI
ADD ESI,0x4
JMP 0x004214dc
PUSH EAX
CALL 0x0049fe50
SUB EAX,0x57
ADD ESP,0x4
OR BL,AL
MOV byte ptr [EDI],BL
INC EDI
ADD ESI,0x4
JMP 0x004214dc
CMP dword ptr [0x004d1f9c],EBX
JLE 0x00421685
MOVSX ECX,byte ptr [ESI + 0x2]
PUSH 0x4
PUSH ECX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x00421694
MOVSX EDX,byte ptr [ESI + 0x2]
MOV EAX,[0x004d1d90]
MOV AL,byte ptr [EAX + EDX*0x2]
AND EAX,0x4
TEST EAX,EAX
JZ 0x004214db
CMP dword ptr [0x004d1f9c],EBX
JLE 0x004216b5
MOVSX ECX,byte ptr [ESI + 0x2]
PUSH 0x4
PUSH ECX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x004216c4
MOVSX EDX,byte ptr [ESI + 0x2]
MOV EAX,[0x004d1d90]
MOV AL,byte ptr [EAX + EDX*0x2]
AND EAX,0x4
TEST EAX,EAX
JZ 0x004216d8
MOV AL,byte ptr [ESI + 0x2]
SUB AL,0x30
MOV byte ptr [EDI],AL
INC EDI
ADD ESI,0x3
JMP 0x004214dc
MOVSX ECX,byte ptr [ESI + 0x2]
PUSH ECX
CALL 0x0049fe50
SUB AL,0x57
ADD ESP,0x4
MOV byte ptr [EDI],AL
INC EDI
ADD ESI,0x3
JMP 0x004214dc
MOV byte ptr [EDI],0x7
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x8
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0xc
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0xa
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0xd
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x9
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0xb
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x5c
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x3f
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x27
INC EDI
ADD ESI,0x2
JMP 0x004214dc
MOV byte ptr [EDI],0x22
INC EDI
ADD ESI,0x2
JMP 0x004214dc