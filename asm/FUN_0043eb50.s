; FUN_0043eb50
PUSH ECX
MOV EAX,[0x00e295d0]
PUSH EBX
PUSH ESI
MOV ESI,EAX
SHL ESI,0x3
SUB ESI,EAX
PUSH EDI
SHL ESI,0x3
MOVSX EDI,byte ptr [ESI + 0xe2a6c0]
SHL EDI,0x4
MOVSX EAX,byte ptr [EDI + 0x4c1cbb]
LEA ECX,[EAX*0x8 + 0x0]
SUB ECX,EAX
MOVSX EDX,byte ptr [ECX*0x8 + 0xe2b220]
SHL EDX,0x4
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0xe35aa8]
MOV EDX,dword ptr [EDX + 0x4c1cbc]
IMUL EDX,ECX
MOV dword ptr [ESP + 0xc],EDX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ac9d8]
CALL 0x0049ed20
MOV ECX,dword ptr [EDI + 0x4c1cbc]
MOV EBX,0x1
SUB EBX,EAX
XOR EAX,EAX
MOV AL,byte ptr [ESI + 0xe2a6c1]
MOV dword ptr [0x00e9935c],EBX
IMUL ECX,EAX
MOV dword ptr [ESP + 0xc],ECX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ac9d8]
CALL 0x0049ed20
MOV EDX,dword ptr [0x00e35a98]
MOV ECX,0x1
SUB ECX,EAX
ADD EBX,EDX
XOR EAX,EAX
CMP ECX,EBX
SETG AL
POP EDI
POP ESI
MOV dword ptr [0x00e99220],ECX
MOV [0x00e99400],AX
POP EBX
POP ECX
RET
