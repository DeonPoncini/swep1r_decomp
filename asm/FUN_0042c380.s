; FUN_0042c380
MOV ECX,dword ptr [ESP + 0x4]
TEST ECX,ECX
JL 0x0042c3df
CMP ECX,0x2
JGE 0x0042c3df
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JL 0x0042c3df
CMP EAX,0x8
JGE 0x0042c3df
FLD dword ptr [ESP + 0x14]
MOV DL,byte ptr [ESP + 0x18]
LEA EAX,[EAX + ECX*0x8]
MOV ECX,dword ptr [ESP + 0xc]
FSTP dword ptr [EAX*0x4 + 0xe99780]
FLD dword ptr [ESP + 0x10]
MOV dword ptr [EAX*0x4 + 0x4b94e0],ECX
MOV CL,byte ptr [ESP + 0x1c]
FSTP dword ptr [EAX*0x4 + 0xe9a440]
MOV byte ptr [EAX + EAX*0x2 + 0xe9a6a0],DL
MOV DL,byte ptr [ESP + 0x20]
MOV byte ptr [EAX + EAX*0x2 + 0xe9a6a1],CL
MOV byte ptr [EAX + EAX*0x2 + 0xe9a6a2],DL
RET
