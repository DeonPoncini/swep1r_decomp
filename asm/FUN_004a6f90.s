; FUN_004a6f90
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
PUSH ESI
SUB ECX,EAX
MOV EDX,0x3
MOV ESI,dword ptr [EAX]
MOV dword ptr [EAX + ECX*0x1],ESI
ADD EAX,0x4
DEC EDX
JNZ 0x004a6fa0
POP ESI
RET
