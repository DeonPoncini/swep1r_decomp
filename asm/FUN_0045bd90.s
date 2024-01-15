; FUN_0045bd90
MOV EAX,dword ptr [ESP + 0x4]
MOV DL,0x1
XOR ECX,ECX
MOV byte ptr [EAX + 0x6c],DL
MOV byte ptr [EAX + 0x70],DL
MOV DL,0x2
MOV dword ptr [EAX + 0x64],ECX
MOV dword ptr [EAX + 0x68],0xffffffff
MOV byte ptr [EAX + 0x6d],CL
MOV byte ptr [EAX + 0x6e],CL
MOV byte ptr [EAX + 0x6f],CL
MOV byte ptr [EAX + 0x72],0xc
MOV byte ptr [EAX + 0x8f],0x3
MOV byte ptr [EAX + 0x90],DL
MOV byte ptr [EAX + 0x91],DL
MOV byte ptr [ECX + EAX*0x1 + 0x73],CL
INC ECX
CMP ECX,0x17
JL 0x0045bdca
RET
