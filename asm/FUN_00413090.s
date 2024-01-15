; FUN_00413090
MOV ECX,dword ptr [ESP + 0x4]
TEST ECX,ECX
JZ 0x004130d7
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JL 0x004130d7
CMP EAX,0x14
JGE 0x004130d7
MOV EDX,EAX
SHL EDX,0x3
SUB EDX,EAX
LEA EAX,[ECX + EDX*0x8]
MOV CL,byte ptr [ESP + 0xc]
MOV DL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x94],CL
MOV CL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0x95],DL
MOV DL,byte ptr [ESP + 0x18]
MOV byte ptr [EAX + 0x96],CL
MOV byte ptr [EAX + 0x97],DL
RET
