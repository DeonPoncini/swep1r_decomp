; FUN_004a02f0
SUB ESP,0x20
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x30]
PUSH ESI
PUSH EDI
CALL 0x004a3cc0
MOV EDX,EAX
MOV ECX,0x8
XOR EAX,EAX
LEA EDI,[ESP + 0x10]
MOV dword ptr [ESP + 0x38],EDX
STOSD.REP ES:EDI
MOV AL,byte ptr [EBP]
MOV BL,0x1
MOV ECX,EAX
AND ECX,0xff
MOV ESI,ECX
AND ECX,0x7
SHR ESI,0x3
SHL BL,CL
MOV CL,byte ptr [ESP + ESI*0x1 + 0x10]
LEA ESI,[ESP + ESI*0x1 + 0x10]
OR CL,BL
INC EBP
TEST AL,AL
MOV byte ptr [ESI],CL
JNZ 0x004a0313
MOV ESI,dword ptr [ESP + 0x34]
TEST ESI,ESI
JNZ 0x004a0346
MOV ESI,dword ptr [EDX + 0x18]
MOV DL,byte ptr [ESI]
MOV EAX,0x1
MOV EDI,EDX
AND EDI,0xff
MOV ECX,EDI
AND ECX,0x7
SHL EAX,CL
SHR EDI,0x3
MOV CL,byte ptr [ESP + EDI*0x1 + 0x10]
TEST CL,AL
JZ 0x004a038d
TEST DL,DL
JZ 0x004a038d
MOV DL,byte ptr [ESI + 0x1]
INC ESI
MOV EAX,EDX
MOV EBX,0x1
AND EAX,0xff
MOV ECX,EAX
AND ECX,0x7
SHL EBX,CL
SHR EAX,0x3
MOV AL,byte ptr [ESP + EAX*0x1 + 0x10]
TEST AL,BL
JNZ 0x004a0367
MOV AL,byte ptr [ESI]
MOV EDI,ESI
TEST AL,AL
JZ 0x004a03bf
AND EAX,0xff
MOV EDX,0x1
MOV ECX,EAX
AND ECX,0x7
SHL EDX,CL
SHR EAX,0x3
MOV AL,byte ptr [ESP + EAX*0x1 + 0x10]
TEST AL,DL
JNZ 0x004a03bb
MOV AL,byte ptr [ESI + 0x1]
INC ESI
TEST AL,AL
JNZ 0x004a0395
JMP 0x004a03bf
MOV byte ptr [ESI],0x0
INC ESI
MOV ECX,dword ptr [ESP + 0x38]
MOV EAX,EDI
SUB EAX,ESI
NEG EAX
SBB EAX,EAX
MOV dword ptr [ECX + 0x18],ESI
AND EAX,EDI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET