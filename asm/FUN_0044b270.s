; FUN_0044b270
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0xc0
TEST EAX,EAX
PUSH ESI
PUSH EDI
JZ 0x0044b324
MOV ESI,dword ptr [EAX]
MOV EDI,dword ptr [EAX + 0x4]
TEST ESI,ESI
JZ 0x0044b324
LEA EAX,[ESP + 0x48]
PUSH EAX
PUSH ESI
CALL 0x004316a0
ADD ESP,0x8
LEA ECX,[ESP + 0x48]
LEA EDX,[ESP + 0x8]
PUSH ECX
PUSH EDX
CALL 0x0044bb10
MOV EAX,dword ptr [ESP + 0xd8]
ADD ESP,0x8
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
TEST EDI,EDI
JNZ 0x0044b2e1
LEA EDX,[ESP + 0x8]
PUSH EDX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc0
RET
LEA EAX,[ESP + 0x88]
PUSH EAX
PUSH EDI
CALL 0x004316a0
FLD dword ptr [ESP + 0xc4]
ADD ESP,0x8
LEA ECX,[ESP + 0x18]
FCHS
PUSH ECX
PUSH ECX
LEA EDX,[ESP + 0x40]
LEA EAX,[ESP + 0x40]
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
LEA ECX,[ESP + 0x8]
PUSH ECX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc0
RET
