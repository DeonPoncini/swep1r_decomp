; FUN_004a9c40
MOV EAX,dword ptr [ESP + 0x8]
SUB ESP,0xc
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x24]
XOR EBP,EBP
PUSH EDI
CMP EAX,EBP
MOV EDI,0x404e
MOV dword ptr [ESI],EBP
MOV dword ptr [ESI + 0x4],EBP
MOV dword ptr [ESI + 0x8],EBP
JBE 0x004a9cd2
MOV EBX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x28],EAX
MOV EAX,ESI
PUSH ESI
MOV ECX,dword ptr [EAX]
MOV dword ptr [ESP + 0x14],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x18],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x1c],EAX
CALL 0x004a9be0
ADD ESP,0x4
PUSH ESI
CALL 0x004a9be0
ADD ESP,0x4
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH ESI
CALL 0x004a9b70
ADD ESP,0x8
PUSH ESI
CALL 0x004a9be0
MOVSX EDX,byte ptr [EBX]
ADD ESP,0x4
LEA EAX,[ESP + 0x10]
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0x14],EBP
PUSH EAX
PUSH ESI
MOV dword ptr [ESP + 0x20],EBP
CALL 0x004a9b70
MOV EAX,dword ptr [ESP + 0x30]
ADD ESP,0x8
INC EBX
DEC EAX
MOV dword ptr [ESP + 0x28],EAX
JNZ 0x004a9c6a
CMP dword ptr [ESI + 0x8],EBP
JNZ 0x004a9d03
MOV EAX,dword ptr [ESI + 0x4]
ADD EDI,0xfff0
MOV ECX,EAX
SHR ECX,0x10
MOV dword ptr [ESI + 0x8],ECX
MOV ECX,dword ptr [ESI]
MOV EDX,ECX
SHR EDX,0x10
SHL EAX,0x10
OR EDX,EAX
MOV EAX,dword ptr [ESI + 0x8]
SHL ECX,0x10
CMP EAX,EBP
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI],ECX
JZ 0x004a9cd7
MOV EAX,dword ptr [ESI + 0x8]
MOV EBX,0x8000
TEST EBX,EAX
JNZ 0x004a9d25
PUSH ESI
CALL 0x004a9be0
MOV EAX,dword ptr [ESI + 0x8]
ADD ESP,0x4
ADD EDI,0xffff
TEST EBX,EAX
JZ 0x004a9d0f
MOV word ptr [ESI + 0xa],DI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
