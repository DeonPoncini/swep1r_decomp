; FUN_0045a7f0
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JZ 0x0045a827
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ECX*0x4 + 0x50c908]
TEST EDX,EAX
JNZ 0x0045a81d
PUSH ESI
MOV ESI,dword ptr [ECX*0x4 + 0x50c918]
OR ESI,EAX
MOV dword ptr [ECX*0x4 + 0x50c918],ESI
POP ESI
OR EAX,EDX
MOV dword ptr [ECX*0x4 + 0x50c908],EAX
RET
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
NOT ECX
AND dword ptr [EAX*0x4 + 0x50c908],ECX
RET
