; FUN_004a2e70
MOV ECX,dword ptr [ESP + 0x8]
PUSH EBX
PUSH EBP
PUSH ESI
MOV AL,byte ptr [ECX]
XOR EDX,EDX
XOR EBP,EBP
PUSH EDI
MOV EDI,dword ptr [0x00dfaf20]
CMP AL,0x61
JZ 0x004a2ea5
CMP AL,0x72
JZ 0x004a2e9e
CMP AL,0x77
JZ 0x004a2e97
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,0x301
JMP 0x004a2eaa
XOR EAX,EAX
OR EDI,0x1
JMP 0x004a2ead
MOV EAX,0x109
OR EDI,0x2
INC ECX
MOV ESI,0x1
MOV dword ptr [ESP + 0x18],ECX
MOV CL,byte ptr [ECX]
TEST CL,CL
JZ 0x004a2f71
TEST ESI,ESI
JZ 0x004a2f71
MOVSX ECX,CL
ADD ECX,-0x2b
CMP ECX,0x49
JA 0x004a2f5c
XOR EBX,EBX
MOV BL,byte ptr [ECX + 0x4a2ff4]
JMP dword ptr [EBX*0x4 + 0x4a2fcc]
TEST AL,0x2
JNZ 0x004a2f5c
AND AL,0xfe
AND EDI,0xfffffffc
OR AL,0x2
OR EDI,0x80
JMP 0x004a2f5e
TEST AH,0xc0
JNZ 0x004a2f5c
OR AH,0x80
JMP 0x004a2f5e
TEST AH,0xc0
JNZ 0x004a2f5c
OR AH,0x40
JMP 0x004a2f5e
TEST EDX,EDX
JNZ 0x004a2f5c
MOV EDX,0x1
OR EDI,0x4000
JMP 0x004a2f5e
TEST EDX,EDX
JNZ 0x004a2f5c
MOV EDX,0x1
AND EDI,0xffffbfff
JMP 0x004a2f5e
TEST EBP,EBP
JNZ 0x004a2f5c
MOV EBP,0x1
OR AL,0x20
JMP 0x004a2f5e
TEST EBP,EBP
JNZ 0x004a2f5c
MOV EBP,0x1
OR AL,0x10
JMP 0x004a2f5e
TEST AH,0x10
JNZ 0x004a2f5c
OR AH,0x10
JMP 0x004a2f5e
TEST AL,0x40
JNZ 0x004a2f5c
OR AL,0x40
JMP 0x004a2f5e
XOR ESI,ESI
MOV ECX,dword ptr [ESP + 0x18]
INC ECX
MOV dword ptr [ESP + 0x18],ECX
MOV CL,byte ptr [ECX]
TEST CL,CL
JNZ 0x004a2ec1
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x14]
PUSH 0x1a4
PUSH ECX
PUSH EAX
PUSH EDX
CALL 0x004a05b0
MOV ECX,EAX
ADD ESP,0x10
TEST ECX,ECX
JGE 0x004a2f96
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,[0x00dfaeb8]
INC EAX
MOV [0x00dfaeb8],EAX
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [EAX + 0xc],EDI
POP EDI
POP ESI
POP EBP
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX],0x0
MOV dword ptr [EAX + 0x8],0x0
MOV dword ptr [EAX + 0x1c],0x0
MOV dword ptr [EAX + 0x10],ECX
POP EBX
RET