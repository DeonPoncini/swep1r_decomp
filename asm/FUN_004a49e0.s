; FUN_004a49e0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [0x00ecd600]
CMP EAX,ECX
JNC 0x004a4a0f
MOV ECX,EAX
AND EAX,0x1f
SAR ECX,0x5
LEA EDX,[EAX + EAX*0x8]
MOV EAX,dword ptr [ECX*0x4 + 0xecd500]
MOV CL,byte ptr [EAX + EDX*0x4 + 0x4]
LEA EAX,[EAX + EDX*0x4]
TEST CL,0x1
JZ 0x004a4a0f
MOV EAX,dword ptr [EAX]
RET
CALL 0x004a3dc0
MOV dword ptr [EAX],0x9
CALL 0x004a3dd0
MOV dword ptr [EAX],0x0
OR EAX,0xffffffff
RET
