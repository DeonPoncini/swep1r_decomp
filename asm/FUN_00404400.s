; FUN_00404400
MOV EAX,[0x004b2910]
PUSH EBX
PUSH EBP
PUSH ESI
TEST EAX,EAX
PUSH EDI
JZ 0x00404491
MOV ESI,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x00404491
MOV EDI,dword ptr [ESP + 0x18]
TEST EDI,EDI
JL 0x00404491
CMP EDI,0x64
JG 0x00404491
PUSH ESI
CALL 0x004043d0
ADD ESP,0x4
CMP EAX,EDI
JNZ 0x00404440
MOV EAX,0x2
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
LEA ECX,[EDI + EDI*0x4]
NEG EAX
LEA ECX,[ECX + ECX*0x4]
SBB EAX,EAX
XOR EDI,EDI
SHL ECX,0x2
AND EAX,0xe0000000
MOV dword ptr [ESI + 0x18],ECX
MOV ECX,dword ptr [ESI]
ADD EAX,0x40000000
TEST ECX,ECX
JLE 0x00404487
MOV EBX,EAX
LEA EBP,[ESI + 0x8]
OR EBX,0x4
MOV EDX,dword ptr [ESI + 0x4]
PUSH EBX
PUSH EBP
MOV EAX,dword ptr [EDX + EDI*0x4]
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x18]
TEST EAX,EAX
JL 0x00404491
MOV EAX,dword ptr [ESI]
INC EDI
CMP EDI,EAX
JL 0x0040446e
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
RET
POP EDI
POP ESI
POP EBP
XOR EAX,EAX
POP EBX
RET
