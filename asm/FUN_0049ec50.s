; FUN_0049ec50
PUSH EBP
MOV EBP,ESP
PUSH EDI
PUSH ESI
PUSH EBX
MOV ESI,dword ptr [EBP + 0xc]
MOV EDI,dword ptr [EBP + 0x8]
LEA EAX,[0xdfab30]
CMP dword ptr [EAX + 0x8],0x0
JNZ 0x0049eca3
MOV AL,0xff
MOV EAX,EAX
OR AL,AL
JZ 0x0049ec9e
MOV AL,byte ptr [ESI]
INC ESI
MOV AH,byte ptr [EDI]
INC EDI
CMP AH,AL
JZ 0x0049ec6c
SUB AL,0x41
CMP AL,0x1a
SBB CL,CL
AND CL,0x20
ADD AL,CL
ADD AL,0x41
XCHG AL,AH
SUB AL,0x41
CMP AL,0x1a
SBB CL,CL
AND CL,0x20
ADD AL,CL
ADD AL,0x41
CMP AL,AH
JZ 0x0049ec6c
SBB AL,AL
SBB AL,0xff
MOVSX EAX,AL
JMP 0x0049ed1b
INC.LOCK dword ptr [0x00ecd60c]
CMP dword ptr [0x00ecd608],0x0
JG 0x0049ecb7
PUSH 0x0
JMP 0x0049eccc
DEC.LOCK dword ptr [0x00ecd60c]
PUSH 0x13
CALL 0x004a1670
MOV dword ptr [ESP],0x1
MOV EAX,0xff
XOR EBX,EBX
NOP
OR AL,AL
JZ 0x0049ecff
MOV AL,byte ptr [ESI]
INC ESI
MOV BL,byte ptr [EDI]
INC EDI
CMP AL,BL
JZ 0x0049ecd4
PUSH EAX
PUSH EBX
CALL 0x0049fee0
MOV EBX,EAX
ADD ESP,0x4
CALL 0x0049fee0
ADD ESP,0x4
CMP BL,AL
JZ 0x0049ecd4
SBB EAX,EAX
SBB EAX,-0x1
MOV EBX,EAX
POP EAX
OR EAX,EAX
JNZ 0x0049ed0f
DEC.LOCK dword ptr [0x00ecd60c]
JMP 0x0049ed19
PUSH 0x13
CALL 0x004a16f0
ADD ESP,0x4
MOV EAX,EBX
POP EBX
POP ESI
POP EDI
LEAVE
RET