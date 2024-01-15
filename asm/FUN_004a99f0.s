; FUN_004a99f0
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
CMP EBX,-0x1
PUSH ESI
JZ 0x004a9a6d
MOV ESI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0xc]
TEST AL,0x1
JNZ 0x004a9a0e
TEST AL,0x80
JZ 0x004a9a6d
TEST AL,0x2
JNZ 0x004a9a6d
MOV EAX,dword ptr [ESI + 0x8]
TEST EAX,EAX
JNZ 0x004a9a1e
PUSH ESI
CALL 0x004a6a10
ADD ESP,0x4
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [ESI + 0x8]
CMP EAX,ECX
JNZ 0x004a9a31
MOV ECX,dword ptr [ESI + 0x4]
TEST ECX,ECX
JNZ 0x004a9a6d
INC EAX
MOV dword ptr [ESI],EAX
TEST byte ptr [ESI + 0xc],0x40
JZ 0x004a9a4b
MOV EDX,dword ptr [ESI]
DEC EDX
MOV EAX,EDX
MOV dword ptr [ESI],EDX
CMP byte ptr [EAX],BL
JZ 0x004a9a52
INC EAX
MOV dword ptr [ESI],EAX
OR EAX,0xffffffff
POP ESI
POP EBX
RET
MOV EAX,dword ptr [ESI]
DEC EAX
MOV dword ptr [ESI],EAX
MOV byte ptr [EAX],BL
MOV EAX,dword ptr [ESI + 0xc]
MOV EDX,dword ptr [ESI + 0x4]
AND AL,0xef
INC EDX
OR AL,0x1
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI + 0xc],EAX
MOV EAX,EBX
AND EAX,0xff
POP ESI
POP EBX
RET
POP ESI
OR EAX,0xffffffff
POP EBX
RET
