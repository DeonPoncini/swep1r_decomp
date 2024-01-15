; FUN_004a22b0
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ECX + 0x4]
DEC EAX
MOV dword ptr [ECX + 0x4],EAX
JS 0x004a22d1
MOV EDX,dword ptr [ECX]
MOV EAX,dword ptr [ESP + 0x4]
MOV byte ptr [EDX],AL
MOV EDX,dword ptr [ECX]
AND EAX,0xff
INC EDX
MOV dword ptr [ECX],EDX
JMP 0x004a22df
MOV EAX,dword ptr [ESP + 0x4]
PUSH ECX
PUSH EAX
CALL 0x004a17f0
ADD ESP,0x8
CMP EAX,-0x1
JNZ 0x004a22eb
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [ECX],EAX
RET
MOV EAX,dword ptr [ESP + 0xc]
INC dword ptr [EAX]
RET
