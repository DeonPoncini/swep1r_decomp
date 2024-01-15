; FUN_0042ddf0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0x8]
CMP EAX,dword ptr [ECX + 0x4]
JGE 0x0042de0e
MOV EAX,dword ptr [ECX + EAX*0x4 + 0x8]
PUSH 0x1
PUSH 0x1
PUSH EAX
CALL 0x00432190
ADD ESP,0xc
RET
