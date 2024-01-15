; FUN_004130e0
MOV EAX,dword ptr [ESP + 0xc]
TEST EAX,EAX
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,EAX
JZ 0x00413108
MOV EDX,dword ptr [ESP + 0x4]
SHL ECX,0x3
SUB ECX,EAX
LEA EAX,[EDX + ECX*0x8 + 0x60]
MOV ECX,dword ptr [EDX + ECX*0x8 + 0x60]
OR ECX,0x20000
MOV dword ptr [EAX],ECX
RET
MOV EDX,dword ptr [ESP + 0x4]
SHL ECX,0x3
SUB ECX,EAX
LEA EAX,[EDX + ECX*0x8 + 0x60]
MOV ECX,dword ptr [EDX + ECX*0x8 + 0x60]
AND ECX,0xfffdffff
MOV dword ptr [EAX],ECX
RET
