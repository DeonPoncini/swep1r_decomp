; FUN_004138b0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x004138e9
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV byte ptr [EAX + 0x4c4],CL
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x4c5],DL
MOV DL,byte ptr [ESP + 0x14]
PUSH EAX
MOV byte ptr [EAX + 0x4c6],CL
MOV byte ptr [EAX + 0x4c7],DL
CALL 0x00418bc0
ADD ESP,0x4
RET
