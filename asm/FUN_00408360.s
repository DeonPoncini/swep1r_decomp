; FUN_00408360
MOV EAX,[0x00ec86c4]
PUSH ESI
CMP EAX,0x200
JNZ 0x004083af
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,0x66666667
SHL ECX,0x9
IMUL ECX
MOV ECX,dword ptr [ESP + 0xc]
IMUL ECX,dword ptr [0x00ec85e8]
SAR EDX,0x8
MOV EAX,EDX
SHR EAX,0x1f
ADD EDX,EAX
MOV EAX,0x88888889
MOV ESI,EDX
IMUL ECX
ADD EDX,ECX
SAR EDX,0x8
MOV ECX,EDX
SHR ECX,0x1f
ADD EDX,ECX
PUSH EDX
PUSH ESI
CALL dword ptr [0x004ac1dc]
POP ESI
RET
MOV EDX,dword ptr [ESP + 0xc]
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDX
PUSH ESI
CALL dword ptr [0x004ac1dc]
POP ESI
RET
