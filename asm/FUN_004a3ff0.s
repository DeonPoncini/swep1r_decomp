; FUN_004a3ff0
MOV EAX,[0x00ecd600]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
CMP ESI,EAX
JNC 0x004a4046
MOV EAX,ESI
MOV ECX,ESI
AND EAX,0x1f
SAR ECX,0x5
LEA EDX,[EAX + EAX*0x8]
MOV EAX,dword ptr [ECX*0x4 + 0xecd500]
TEST byte ptr [EAX + EDX*0x4 + 0x4],0x1
JZ 0x004a4046
PUSH ESI
CALL 0x004a4a30
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x14]
ADD ESP,0x4
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x004a4070
ADD ESP,0xc
MOV EDI,EAX
PUSH ESI
CALL 0x004a4aa0
ADD ESP,0x4
MOV EAX,EDI
POP EDI
POP ESI
RET
CALL 0x004a3dc0
MOV dword ptr [EAX],0x9
CALL 0x004a3dd0
MOV dword ptr [EAX],0x0
POP EDI
OR EAX,0xffffffff
POP ESI
RET
