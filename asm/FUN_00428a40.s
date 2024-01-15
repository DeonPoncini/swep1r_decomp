; FUN_00428a40
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [0x004b91c4]
MOV ECX,EAX
SHL ECX,0x5
SUB ECX,EAX
LEA EAX,[EDX + ECX*0x4]
MOV ECX,dword ptr [ESP + 0x8]
OR dword ptr [EAX],ECX
RET
