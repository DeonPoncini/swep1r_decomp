; FUN_00449d00
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH EBP
MOV EBP,dword ptr [ESP + 0x14]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV ECX,0xf
MOV EDI,EBX
MOVSD.REP ES:EDI,ESI
MOV EDI,dword ptr [ESP + 0x20]
XOR ESI,ESI
SUB EDI,EBP
LEA EAX,[ESI + EBP*0x1]
XOR ECX,ECX
MOV CL,byte ptr [EDI + EAX*0x1]
MOV dword ptr [ESP + 0x18],ECX
PUSH ECX
FILD dword ptr [ESP + 0x1c]
MOVSX EDX,byte ptr [EAX]
FMUL dword ptr [0x004acb88]
FSTP dword ptr [ESP]
PUSH EDX
PUSH ESI
PUSH EBX
CALL 0x004493f0
ADD ESP,0x10
INC ESI
CMP ESI,0x7
JL 0x00449d21
POP EDI
POP ESI
POP EBP
POP EBX
RET