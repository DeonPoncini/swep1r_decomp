; FUN_0040a0b0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
PUSH ESI
CALL 0x0040a160
MOV ECX,EAX
ADD ESP,0x4
SHL ECX,0x5
SUB ECX,EAX
LEA ECX,[ECX + ECX*0x2]
LEA EDI,[ECX*0x4 + 0x4d6da0]
MOV ECX,dword ptr [ESI*0x4 + 0x4d6ce8]
TEST ECX,ECX
JZ 0x0040a0e6
MOV dword ptr [ESI*0x4 + 0x4d6ce8],0x0
TEST EDI,EDI
JZ 0x0040a110
MOV ECX,dword ptr [EDI + 0x4]
TEST ECX,ECX
JZ 0x0040a110
PUSH ESI
PUSH EAX
CALL 0x0040a190
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0040a110
PUSH EDI
CALL 0x00404230
ADD ESP,0x4
MOV EAX,0x1
POP EDI
POP ESI
RET
POP EDI
XOR EAX,EAX
POP ESI
RET