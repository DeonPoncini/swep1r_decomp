; FUN_004a5650
MOV EAX,dword ptr [ESP + 0x4]
ADD EAX,0xfffffc5c
CMP EAX,0x12
JA 0x004a5685
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0x4a569c]
JMP dword ptr [ECX*0x4 + 0x4a5688]
MOV EAX,0x411
RET
MOV EAX,0x804
RET
MOV EAX,0x412
RET
MOV EAX,0x404
RET
XOR EAX,EAX
RET
