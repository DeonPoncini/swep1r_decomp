; FUN_0045cf60
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x10
MOV dword ptr [0x00e29bcc],0xe35a60
LEA ECX,[EAX + EAX*0x2]
PUSH EBP
PUSH ESI
PUSH EDI
LEA EDX,[EAX + ECX*0x4]
LEA EAX,[EAX + EAX*0x2]
MOV EDI,0xe29bdc
LEA EAX,[EAX + EAX*0x4]
LEA ECX,[EDX*0x4 + 0x4c2700]
MOV dword ptr [0x00e29bd8],ECX
MOV ECX,0xf
LEA EBP,[EAX*0x4 + 0x4c2bb0]
XOR EAX,EAX
MOV ESI,EBP
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [0x004d5e00]
MOV DL,byte ptr [EAX + 0xe35aa1]
MOV byte ptr [ESP + EAX*0x1 + 0xc],DL
MOV DL,byte ptr [EAX + 0xe35aa8]
TEST ECX,ECX
MOV byte ptr [ESP + EAX*0x1 + 0x14],DL
JZ 0x0045cfcc
MOV byte ptr [ESP + EAX*0x1 + 0xc],0x0
MOV byte ptr [ESP + EAX*0x1 + 0x14],0xff
INC EAX
CMP EAX,0x7
JL 0x0045cfaa
LEA EAX,[ESP + 0x14]
LEA ECX,[ESP + 0xc]
PUSH EAX
PUSH ECX
PUSH EBP
PUSH 0xe29bdc
CALL 0x00449d00
ADD ESP,0x10
PUSH EBP
PUSH 0xe2aee0
CALL 0x00449330
ADD ESP,0x8
PUSH 0xe29bdc
PUSH 0xe2aec0
CALL 0x00449330
XOR EDX,EDX
MOV ECX,0x7
MOV ESI,0xe2aec0
MOV EDI,0xe2af40
MOV dword ptr [0x00e2a6b0],EDX
ADD ESP,0x8
MOVSD.REP ES:EDI,ESI
MOV ESI,dword ptr [ESP + 0x24]
MOV dword ptr [0x00e2a6b4],EDX
MOV dword ptr [0x00e2a6b8],EDX
CMP ESI,-0x1
MOV word ptr [0x00e2a6bc],DX
JZ 0x0045d0a1
MOV AL,byte ptr [ESP + 0x28]
MOV CL,byte ptr [ESP + 0x2c]
MOV byte ptr [ESP + ESI*0x1 + 0xc],AL
LEA EDX,[ESP + 0x14]
LEA EAX,[ESP + 0xc]
PUSH EDX
PUSH EAX
PUSH EBP
PUSH 0xe29bdc
MOV byte ptr [ESP + ESI*0x1 + 0x24],CL
CALL 0x00449d00
ADD ESP,0x10
PUSH 0xe29bdc
PUSH 0xe2af40
CALL 0x00449330
MOV ECX,dword ptr [0x00e29bcc]
ADD ESP,0x8
XOR EAX,EAX
MOV DL,byte ptr [EAX + ECX*0x1 + 0x41]
MOV byte ptr [ESP + EAX*0x1 + 0xc],DL
MOV DL,byte ptr [EAX + ECX*0x1 + 0x48]
MOV byte ptr [ESP + EAX*0x1 + 0x14],DL
INC EAX
CMP EAX,0x7
JL 0x0045d081
MOV word ptr [ESI*0x2 + 0xe2a6b0],0x1
POP EDI
POP ESI
POP EBP
ADD ESP,0x10
RET
