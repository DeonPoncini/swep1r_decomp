; FUN_00424e50
SUB ESP,0xc
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x1c]
PUSH EDI
MOV EDI,dword ptr [0x004ac20c]
PUSH 0x405
PUSH ESI
CALL EDI
MOV EBX,EAX
PUSH 0x407
PUSH ESI
MOV dword ptr [ESP + 0x18],EBX
CALL EDI
MOV ESI,dword ptr [0x004ac208]
XOR EBP,EBP
PUSH EBP
PUSH EBP
PUSH 0x14b
PUSH EBX
MOV EDI,EAX
CALL ESI
PUSH EBP
PUSH EBP
PUSH 0x14b
PUSH EDI
CALL ESI
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x14],EBP
MOV ECX,dword ptr [EAX + 0x10]
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[ECX + EDX*0x2]
MOV EDX,dword ptr [0x0050b5ac]
LEA ECX,[ECX + EAX*0x4]
MOV EAX,dword ptr [EDX + 0x4]
LEA EBX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EAX + ECX*0x4 + 0x2ac]
TEST EAX,EAX
JBE 0x00424f45
MOV dword ptr [ESP + 0x20],EBP
MOV ECX,dword ptr [EBX + 0x2b0]
MOV EDX,dword ptr [ESP + 0x20]
LEA EAX,[EDX + ECX*0x1 + 0xb4]
PUSH EAX
PUSH 0x4b2304
PUSH 0xecbc20
CALL 0x0049eb80
ADD ESP,0xc
PUSH 0xecbc20
PUSH 0x0
PUSH 0x143
PUSH EDI
CALL ESI
PUSH EBP
PUSH EAX
PUSH 0x151
PUSH EDI
MOV dword ptr [ESP + 0x28],EAX
CALL ESI
MOV ECX,dword ptr [ESP + 0x24]
CMP dword ptr [ECX + 0x18],EBP
JNZ 0x00424f2c
MOV EDX,dword ptr [ESP + 0x18]
PUSH 0x0
PUSH EDX
PUSH 0x14e
PUSH EDI
CALL ESI
MOV dword ptr [ESP + 0x14],0x1
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [EBX + 0x2ac]
INC EBP
ADD ECX,0x368
CMP EBP,EAX
MOV dword ptr [ESP + 0x20],ECX
JC 0x00424ecb
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JNZ 0x00424f59
PUSH 0x0
PUSH 0x0
PUSH 0x14e
PUSH EDI
CALL ESI
MOV EAX,dword ptr [ESP + 0x24]
MOV dword ptr [0x004eb51c],0x10
XOR EBP,EBP
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x20],EBP
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EDX,[EAX + EAX*0x2]
LEA EAX,[ECX + EDX*0x2]
MOV EDX,dword ptr [0x0050b5ac]
LEA ECX,[ECX + EAX*0x4]
MOV EAX,dword ptr [EDX + 0x4]
CMP dword ptr [EAX + ECX*0x4 + 0x2a4],EBP
JBE 0x0042505d
MOV ECX,dword ptr [EBX + 0x2a8]
MOV EDX,dword ptr [EBP + ECX*0x1 + 0x1c]
LEA EAX,[EBP + ECX*0x1]
PUSH EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV EDX,dword ptr [EAX + 0x4]
PUSH ECX
PUSH EDX
PUSH 0x4b7d98
PUSH 0xecbc20
CALL 0x0049eb80
MOV EAX,dword ptr [EBX + 0x2a8]
ADD ESP,0x14
CMP dword ptr [EBP + EAX*0x1 + 0x1c],0x10
JNZ 0x00425025
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0xecbc20
PUSH 0x0
PUSH 0x143
PUSH ECX
CALL ESI
MOV EDX,dword ptr [ESP + 0x20]
MOV EDI,EAX
MOV EAX,dword ptr [ESP + 0x10]
PUSH EDX
PUSH EDI
PUSH 0x151
PUSH EAX
CALL ESI
MOV ECX,dword ptr [EBX + 0x2a8]
MOV EDX,dword ptr [EBP + ECX*0x1 + 0x4]
LEA EAX,[EBP + ECX*0x1]
CMP EDX,dword ptr [0x004eb504]
JNZ 0x00425025
MOV EAX,dword ptr [EAX + 0x8]
MOV ECX,dword ptr [0x004eb508]
CMP EAX,ECX
JNZ 0x00425025
MOV ECX,dword ptr [ESP + 0x10]
PUSH 0x0
PUSH EDI
PUSH 0x14e
PUSH ECX
CALL ESI
MOV EAX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x20]
INC EDX
ADD EBP,0x50
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x20],EDX
MOV EAX,ECX
SHL EAX,0x3
SUB EAX,ECX
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[ECX + EAX*0x2]
LEA ECX,[ECX + EAX*0x4]
MOV EAX,[0x0050b5ac]
MOV EAX,dword ptr [EAX + 0x4]
CMP EDX,dword ptr [EAX + ECX*0x4 + 0x2a4]
JC 0x00424f96
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
