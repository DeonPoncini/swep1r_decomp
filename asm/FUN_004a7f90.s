; FUN_004a7f90
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
XOR ESI,ESI
MOV SI,word ptr [0x00dfaeec]
TEST EBX,EBX
JNZ 0x004a7fa9
OR EAX,0xffffffff
POP ESI
POP EBX
RET
PUSH EDI
LEA EAX,[EBX + 0xc]
PUSH EBP
PUSH EAX
PUSH 0x15
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
LEA ECX,[EBX + 0x10]
MOV EDI,EAX
PUSH ECX
PUSH 0x14
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
LEA EDX,[EBX + 0x14]
OR EDI,EAX
PUSH EDX
PUSH 0x16
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
OR EDI,EAX
LEA EAX,[EBX + 0x18]
PUSH EAX
PUSH 0x17
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
LEA EBP,[EBX + 0x1c]
OR EDI,EAX
PUSH EBP
PUSH 0x18
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
MOV ECX,dword ptr [EBP]
ADD ESP,0x10
OR EDI,EAX
PUSH ECX
CALL 0x004a80e0
ADD ESP,0x4
LEA EDX,[EBX + 0x20]
PUSH EDX
PUSH 0x50
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
OR EDI,EAX
LEA EAX,[EBX + 0x24]
PUSH EAX
PUSH 0x51
PUSH ESI
PUSH 0x1
CALL 0x004aa0d0
ADD ESP,0x10
LEA ECX,[EBX + 0x28]
OR EDI,EAX
PUSH ECX
PUSH 0x1a
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
LEA EDX,[EBX + 0x29]
OR EDI,EAX
PUSH EDX
PUSH 0x19
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
OR EDI,EAX
LEA EAX,[EBX + 0x2a]
PUSH EAX
PUSH 0x54
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
LEA ECX,[EBX + 0x2b]
OR EDI,EAX
PUSH ECX
PUSH 0x55
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
LEA EDX,[EBX + 0x2c]
OR EDI,EAX
PUSH EDX
PUSH 0x56
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
OR EDI,EAX
LEA EAX,[EBX + 0x2d]
PUSH EAX
PUSH 0x57
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
LEA ECX,[EBX + 0x2e]
OR EDI,EAX
PUSH ECX
PUSH 0x52
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
ADD EBX,0x2f
OR EDI,EAX
PUSH EBX
PUSH 0x53
PUSH ESI
PUSH 0x0
CALL 0x004aa0d0
ADD ESP,0x10
OR EDI,EAX
MOV EAX,EDI
POP EBP
POP EDI
POP ESI
POP EBX
RET
