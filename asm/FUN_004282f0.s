; FUN_004282f0
MOV AX,word ptr [ESP + 0x4]
CMP AX,0x190
JGE 0x0042836a
MOV ECX,dword ptr [0x004b91b8]
MOVSX EAX,AX
CMP EAX,ECX
JL 0x00428311
LEA ECX,[EAX + 0x1]
MOV dword ptr [0x004b91b8],ECX
SHL EAX,0x5
XOR ECX,ECX
MOV EDX,0x3f800000
MOV word ptr [EAX + 0xe9ba60],CX
MOV word ptr [EAX + 0xe9ba62],CX
MOV dword ptr [EAX + 0xe9ba68],EDX
MOV dword ptr [EAX + 0xe9ba6c],EDX
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [EAX + 0xe9ba70],ECX
OR CL,0xff
MOV dword ptr [EAX + 0xe9ba74],0x1
MOV byte ptr [EAX + 0xe9ba78],CL
MOV byte ptr [EAX + 0xe9ba79],CL
MOV byte ptr [EAX + 0xe9ba7a],CL
MOV byte ptr [EAX + 0xe9ba7b],CL
MOV dword ptr [EAX + 0xe9ba7c],EDX
RET
