; FUN_004a3b00
PUSH ECX
MOV EAX,[0x00dfab70]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [0x004ac14c]
PUSH EDI
XOR EDI,EDI
CMP EAX,EDI
JNZ 0x004a3b3c
LEA EAX,[ESP + 0x12]
PUSH EAX
PUSH 0x1
PUSH 0x4afad4
PUSH 0x1
CALL dword ptr [0x004ac134]
TEST EAX,EAX
JZ 0x004a3c0c
MOV EAX,0x1
MOV [0x00dfab70],EAX
CMP EAX,0x2
JNZ 0x004a3b6b
MOV EAX,dword ptr [ESP + 0x2c]
CMP EAX,EDI
JNZ 0x004a3b4e
MOV EAX,[0x00dfab38]
MOV EDX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x20]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x20]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x20]
PUSH EDX
PUSH ECX
PUSH EAX
CALL ESI
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
CMP EAX,0x1
JNZ 0x004a3c06
MOV EBX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x2c],EDI
CMP EBX,EDI
JNZ 0x004a3b86
MOV EBX,dword ptr [0x00dfab48]
MOV EAX,dword ptr [ESP + 0x30]
MOV EBP,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EDI
NEG EAX
SBB EAX,EAX
PUSH EDI
AND EAX,0x8
PUSH EBP
INC EAX
PUSH EDX
PUSH EAX
PUSH EBX
CALL dword ptr [0x004ac174]
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004a3bf7
PUSH ESI
PUSH 0x2
CALL 0x004a8cc0
MOV EDI,EAX
ADD ESP,0x8
TEST EDI,EDI
JZ 0x004a3bf7
MOV ECX,dword ptr [ESP + 0x1c]
PUSH ESI
PUSH EDI
PUSH EBP
PUSH ECX
PUSH 0x1
PUSH EBX
CALL dword ptr [0x004ac174]
TEST EAX,EAX
JZ 0x004a3bf7
MOV EDX,dword ptr [ESP + 0x24]
PUSH EDX
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EAX
CALL dword ptr [0x004ac134]
PUSH EDI
MOV ESI,EAX
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
MOV ESI,dword ptr [ESP + 0x2c]
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
LEA ECX,[ESP + 0x12]
PUSH ECX
PUSH 0x1
PUSH 0x4afad0
PUSH 0x1
PUSH EDI
CALL ESI
TEST EAX,EAX
JZ 0x004a3c30
MOV EAX,0x2
MOV [0x00dfab70],EAX
JMP 0x004a3b3c
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
POP ECX
RET
