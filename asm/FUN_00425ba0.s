; FUN_00425ba0
SUB ESP,0x50
FLD dword ptr [ESP + 0x5c]
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x68]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x64]
LEA EBX,[ESI + 0x1]
MOV ECX,dword ptr [EDI + 0x11c]
FCOMP dword ptr [ECX + EBX*0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00425c08
MOV EAX,dword ptr [EDI + 0x120]
SHL EBX,0x4
SHL ESI,0x4
MOV ECX,dword ptr [EBX + EAX*0x1]
MOV EAX,dword ptr [ESP + 0x60]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0x14]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0x18]
MOV dword ptr [EAX + 0x8],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0x1c]
MOV dword ptr [EAX + 0xc],ECX
POP EDI
POP ESI
POP EBX
ADD ESP,0x50
RET
FLD dword ptr [ESP + 0x68]
FCOMP dword ptr [ECX + ESI*0x4]
FNSTSW AX
TEST AH,0x41
JZ 0x00425c56
MOV EDX,dword ptr [EDI + 0x120]
MOV EAX,dword ptr [ESP + 0x60]
SHL ESI,0x4
MOV ECX,dword ptr [EDX + ESI*0x1]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0x4]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0x8]
MOV dword ptr [EAX + 0x8],ECX
MOV EDX,dword ptr [EDI + 0x120]
MOV ECX,dword ptr [EDX + ESI*0x1 + 0xc]
MOV dword ptr [EAX + 0xc],ECX
POP EDI
POP ESI
POP EBX
ADD ESP,0x50
RET
MOV EDX,dword ptr [ESP + 0x68]
PUSH ESI
PUSH EDX
PUSH EDI
CALL 0x00425980
MOV EDI,dword ptr [EDI + 0x120]
ADD ESP,0xc
SHL ESI,0x4
FSTP dword ptr [ESP + 0x68]
MOV ECX,dword ptr [ESI + EDI*0x1]
LEA EAX,[ESI + EDI*0x1]
MOV dword ptr [ESP + 0xc],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0x10],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x14],ECX
MOV EDX,dword ptr [EAX + 0xc]
SHL EBX,0x4
MOV dword ptr [ESP + 0x18],EDX
FLD dword ptr [EBX + EDI*0x1]
FSTP dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x20],ECX
MOV EDX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x24],EDX
MOV EAX,dword ptr [EAX + 0x1c]
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP + 0x3c]
PUSH ECX
PUSH EDX
MOV dword ptr [ESP + 0x30],EAX
CALL 0x00481620
ADD ESP,0x8
LEA EAX,[ESP + 0x1c]
LEA ECX,[ESP + 0x2c]
PUSH EAX
PUSH ECX
CALL 0x00481620
MOV EAX,dword ptr [ESP + 0x70]
ADD ESP,0x8
LEA EDX,[ESP + 0x4c]
LEA ECX,[ESP + 0x2c]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x44]
PUSH ECX
PUSH EDX
CALL 0x004813a0
MOV ECX,dword ptr [ESP + 0x70]
ADD ESP,0x10
LEA EAX,[ESP + 0x4c]
PUSH EAX
PUSH ECX
CALL 0x00481520
ADD ESP,0x8
POP EDI
POP ESI
POP EBX
ADD ESP,0x50
RET
