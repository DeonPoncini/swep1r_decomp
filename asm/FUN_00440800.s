; FUN_00440800
MOV ECX,dword ptr [0x00e295d0]
SUB ESP,0x48
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
PUSH EBX
SHL EAX,0x3
PUSH EBP
PUSH ESI
MOVSX ECX,byte ptr [EAX + 0xe2a6c0]
LEA EDX,[EAX + 0xe2a6c0]
MOV ESI,dword ptr [0x00e99220]
SHL ECX,0x4
PUSH EDI
MOV EDI,dword ptr [0x00e9935c]
MOVSX EBP,byte ptr [ECX + 0x4c1cbb]
MOV ECX,dword ptr [0x00e35a98]
MOV BL,byte ptr [EBP + 0xe35aa8]
SUB ECX,ESI
ADD ECX,EDI
MOV dword ptr [0x00e35a98],ECX
MOV ECX,dword ptr [ESP + 0x5c]
CMP dword ptr [ECX + 0x38],0x1
JNZ 0x00440867
MOV ESI,dword ptr [ECX + 0x34]
MOV byte ptr [ESI + ESI*0x2 + 0xe2985e],BL
SUB ESI,0x4
LEA EBX,[EBP*0x8 + 0x0]
MOV ECX,0xe
SUB EBX,EBP
MOV ESI,EDX
LEA EDI,[ESP + 0x20]
SHL EBX,0x3
MOVSD.REP ES:EDI,ESI
LEA ESI,[EBX + 0xe2b220]
MOV ECX,0xe
MOV EDI,EDX
MOV dword ptr [ESP + 0x10],ESI
MOVSD.REP ES:EDI,ESI
MOV EDI,dword ptr [ESP + 0x10]
LEA EDX,[EAX + 0xe2a6c4]
MOV ECX,0xe
LEA ESI,[ESP + 0x20]
LEA EAX,[ESP + 0x14]
PUSH EDX
MOVSD.REP ES:EDI,ESI
PUSH EAX
CALL 0x0042f7d0
MOV EAX,[0x00e295d0]
ADD ESP,0x8
MOV ECX,EAX
LEA ESI,[EBX + 0xe2b224]
SHL ECX,0x3
SUB ECX,EAX
PUSH ESI
LEA EDX,[ECX*0x8 + 0xe2a6c4]
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ESI
CALL 0x0042f7d0
MOV EDX,dword ptr [ESP + 0x18]
MOV CL,byte ptr [EBX + 0xe2b221]
MOV byte ptr [EBP + 0xe35aa8],CL
ADD ESP,0x8
MOVSX EAX,byte ptr [EDX]
MOV EDX,dword ptr [0x00e295d0]
ADD EBP,0x8e
SHL EAX,0x4
ADD EDX,0x62
PUSH EBP
MOV CL,byte ptr [EAX + 0x4c1cb9]
PUSH EDX
MOV byte ptr [EBP + 0xe35a13],CL
CALL 0x0045cf30
ADD ESP,0x8
MOV dword ptr [0x0050c474],0x1
CALL 0x0044e560
MOV ECX,dword ptr [0x00e295d0]
XOR EDX,EDX
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
SHL EAX,0x3
MOVSX ECX,byte ptr [EAX + 0xe2a6c0]
MOV DL,byte ptr [EAX + 0xe2a6c1]
SHL ECX,0x4
PUSH EDX
MOV EDX,dword ptr [ESP + 0x60]
MOVSX EAX,byte ptr [ECX + 0x4c1cb9]
MOVSX ECX,byte ptr [ECX + 0x4c1cbb]
PUSH EAX
PUSH ECX
MOVSX EAX,byte ptr [EDX + 0x73]
PUSH EAX
CALL 0x0045cf60
ADD ESP,0x10
CALL 0x0043eb50
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x48
RET
