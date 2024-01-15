; FUN_00487550
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX]
ADD EAX,-0x3
CMP EAX,0xfe
JA 0x004875ab
XOR EDX,EDX
MOV DL,byte ptr [EAX + 0x4875c4]
JMP dword ptr [EDX*0x4 + 0x4875b0]
MOV dword ptr [0x00510258],0x1
MOV EAX,0x8
RET
MOV EAX,0x1
RET
MOV EAX,dword ptr [ECX + 0x8]
MOV ECX,dword ptr [ESP + 0x8]
MOV dword ptr [ECX],EAX
MOV EAX,0x2
RET
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX],EDX
MOV EAX,dword ptr [ECX + 0x4]
DEC EAX
NEG EAX
SBB EAX,EAX
AND AL,0xfa
ADD EAX,0x5
RET
OR EAX,0xffffffff
RET
