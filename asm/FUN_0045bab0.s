; FUN_0045bab0
MOV EDX,dword ptr [ESP + 0x4]
PUSH EBX
OR EAX,0xffffffff
MOV ECX,dword ptr [EDX + 0x64]
PUSH ESI
TEST ECX,ECX
PUSH EDI
JZ 0x0045baf1
MOVSX EDI,byte ptr [EDX + 0x72]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x0045bae6
MOVSX ESI,byte ptr [EDX + 0x5d]
LEA ESI,[ESI + ESI*0x2]
MOV BL,byte ptr [ESI*0x4 + 0x4bfef2]
CMP byte ptr [ECX + EDX*0x1 + 0x73],BL
JNZ 0x0045bae1
MOV EAX,ECX
INC ECX
CMP ECX,EDI
JL 0x0045bad9
CMP EAX,-0x1
JNZ 0x0045bb51
XOR EAX,EAX
POP EDI
POP ESI
POP EBX
RET
MOVSX EDI,byte ptr [EDX + 0x72]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x0045bb29
MOVSX ESI,byte ptr [EDX + 0x5d]
LEA ESI,[ESI + ESI*0x2]
MOV BL,byte ptr [ESI*0x4 + 0x4bfef2]
MOV ESI,0xe29bc4
CMP byte ptr [ECX + EDX*0x1 + 0x73],BL
JNZ 0x0045bb1e
CMP dword ptr [ESI],0x41414949
JNZ 0x0045bb1e
MOV EAX,ECX
INC ECX
ADD ESI,0x88
CMP ECX,EDI
JL 0x0045bb0e
CMP EAX,-0x1
JNZ 0x0045bb51
XOR ECX,ECX
MOV EDX,0xe29bc4
CMP ECX,EDI
JGE 0x0045bb51
CMP dword ptr [EDX],0x41414949
JNZ 0x0045bb45
MOV EAX,ECX
JMP 0x0045bb4c
INC ECX
ADD EDX,0x88
CMP EAX,-0x1
JZ 0x0045bb35
POP EDI
POP ESI
POP EBX
RET
