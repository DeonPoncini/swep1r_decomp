; FUN_00404330
MOV EAX,[0x004b2910]
PUSH EBX
PUSH EBP
PUSH ESI
TEST EAX,EAX
PUSH EDI
JZ 0x004043c6
MOV ESI,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JZ 0x004043c6
MOV EDI,dword ptr [ESP + 0x18]
TEST EDI,EDI
JL 0x004043c6
CMP EDI,0x168
JG 0x004043c6
PUSH ESI
CALL 0x004042f0
ADD ESP,0x4
CMP EAX,EDI
JNZ 0x00404373
MOV EAX,0x2
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESI + 0x2c]
LEA ECX,[EDI + EDI*0x4]
NEG EAX
LEA ECX,[ECX + ECX*0x4]
SBB EAX,EAX
XOR EDI,EDI
SHL ECX,0x2
AND EAX,0xe0000000
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [ESI]
ADD EAX,0x40000000
TEST ECX,ECX
JLE 0x004043bc
MOV EBX,EAX
LEA EBP,[ESI + 0x8]
OR EBX,0x40
MOV EAX,dword ptr [ESI + 0x4]
PUSH EBX
PUSH EBP
MOV EAX,dword ptr [EAX + EDI*0x4]
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x18]
TEST EAX,EAX
JL 0x004043c6
MOV EAX,dword ptr [ESI]
INC EDI
CMP EDI,EAX
JL 0x004043a3
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
