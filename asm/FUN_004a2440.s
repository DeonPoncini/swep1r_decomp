; FUN_004a2440
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOVSX EAX,byte ptr [ESI]
PUSH EAX
CALL 0x0049fe50
ADD ESP,0x4
CMP EAX,0x65
JZ 0x004a2483
MOV EAX,[0x004d1f9c]
INC ESI
CMP EAX,0x1
JLE 0x004a2471
MOVSX ECX,byte ptr [ESI]
PUSH 0x4
PUSH ECX
CALL 0x0049f440
ADD ESP,0x8
JMP 0x004a247f
MOVSX EDX,byte ptr [ESI]
MOV EAX,[0x004d1d90]
MOV AL,byte ptr [EAX + EDX*0x2]
AND EAX,0x4
TEST EAX,EAX
JNZ 0x004a2456
MOV CL,byte ptr [0x004d1fa0]
MOV AL,byte ptr [ESI]
MOV byte ptr [ESI],CL
INC ESI
MOV CL,byte ptr [ESI]
MOV byte ptr [ESI],AL
MOV DL,byte ptr [ESI]
INC ESI
TEST DL,DL
MOV AL,CL
JNZ 0x004a248e
POP ESI
RET
