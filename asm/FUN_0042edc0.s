; FUN_0042edc0
MOV AL,[0x004bfa0f]
MOV CL,byte ptr [0x004bfa0e]
PUSH ESI
PUSH EDI
PUSH EAX
MOV EAX,[0x004bfa0c]
MOV DL,AH
PUSH ECX
PUSH EDX
PUSH EAX
PUSH 0x0
PUSH 0x0
CALL 0x0044e290
MOV AL,byte ptr [ESP + 0x24]
ADD ESP,0x18
CMP AL,0x5f
MOV dword ptr [0x00e99764],0x1
JNZ 0x0042edf8
MOV AL,0x20
MOV ESI,dword ptr [0x0050c0c4]
CMP AL,0x61
JL 0x0042ee0e
CMP AL,0x7a
JG 0x0042ee0e
CMP byte ptr [ESI + 0x5b],0x61
JNC 0x0042ee0e
ADD AL,0xe0
MOV EDI,dword ptr [ESI + 0x5c]
TEST EDI,EDI
JZ 0x0042ee94
XOR ECX,ECX
MOV CL,byte ptr [ESI + 0x5a]
MOVSX EAX,AL
CMP EAX,ECX
JL 0x0042ee94
XOR EDX,EDX
MOV DL,byte ptr [ESI + 0x5b]
CMP EAX,EDX
JG 0x0042ee94
SUB EAX,ECX
SHL EAX,0x4
ADD EAX,EDI
CMP word ptr [EAX + 0x8],-0x1
JZ 0x0042ee94
MOVSX EDX,word ptr [EAX + 0x6]
MOVSX ECX,byte ptr [EAX]
MOV dword ptr [0x00e99740],EDX
MOVSX EDX,word ptr [EAX + 0x4]
MOV dword ptr [0x00e99708],EDX
MOVSX EDX,word ptr [EAX + 0xc]
MOV dword ptr [0x00e9970c],EDX
MOVSX EDX,word ptr [EAX + 0xe]
MOV dword ptr [0x00e99704],EDX
MOVSX EDX,word ptr [EAX + 0x8]
MOV dword ptr [0x00e99700],EDX
MOVSX EDX,word ptr [EAX + 0xa]
MOV dword ptr [0x00e996fc],EDX
MOV EDX,dword ptr [ESI]
TEST EDX,EDX
JNZ 0x0042ee88
MOVSX EAX,byte ptr [EAX + 0x1]
MOV [0x00e99760],EAX
JMP 0x0042ee99
MOV dword ptr [0x00e99760],0x0
JMP 0x0042ee99
MOV ECX,0xfffffffe
TEST ECX,ECX
JL 0x0042eea7
PUSH ECX
PUSH ESI
CALL 0x0042ddf0
ADD ESP,0x8
POP EDI
POP ESI
RET