; FUN_0041d930
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
MOV EAX,dword ptr [ESI + 0x1e70]
MOV EDI,dword ptr [EAX]
MOV AL,byte ptr [ESI + 0x60]
TEST AL,0x80
JZ 0x0041d9a8
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x4000000
JNZ 0x0041d9a8
TEST EAX,0x40000
JNZ 0x0041d95f
PUSH ESI
CALL 0x0041d8d0
ADD ESP,0x4
MOV EAX,EDI
SHL EAX,0x6
SHL EDI,0x4
MOV ECX,dword ptr [EAX + 0xec76d0]
MOV dword ptr [ESI + 0x50],ECX
MOV EDX,dword ptr [EAX + 0xec76d4]
MOV ECX,0xc60ca000
MOV dword ptr [ESI + 0x54],EDX
MOV dword ptr [EAX + 0xec76d8],ECX
MOV dword ptr [ESI + 0x58],ECX
XOR EAX,EAX
MOV dword ptr [EDI + 0xea05c0],0x29a
MOV dword ptr [EDI + 0xea05c4],EAX
MOV dword ptr [EDI + 0xea05c8],EAX
MOV dword ptr [EDI + 0xea05cc],EAX
POP EDI
POP ESI
RET
MOV ECX,EDI
LEA EAX,[ESI + 0x20]
SHL ECX,0x6
ADD ECX,0xec76a0
PUSH EAX
PUSH ECX
CALL 0x0044bb10
MOV EDX,dword ptr [ESI + 0x1a0]
ADD ESP,0x8
MOV dword ptr [EDI*0x4 + 0xec7640],EDX
MOV EAX,dword ptr [ESI + 0xe0]
MOV dword ptr [EDI*0x4 + 0xea0360],EAX
MOV ECX,dword ptr [ESI + 0xe8]
MOV dword ptr [EDI*0x4 + 0xea0420],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x78]
MOV dword ptr [EDI*0x4 + 0xea0480],EAX
POP EDI
POP ESI
RET
