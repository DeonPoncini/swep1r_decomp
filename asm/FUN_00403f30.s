; FUN_00403f30
MOV EAX,[0x004b2910]
PUSH EBX
PUSH EBP
PUSH ESI
TEST EAX,EAX
PUSH EDI
JNZ 0x00403f44
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,[0x004d55d0]
MOV ECX,dword ptr [ESP + 0x18]
PUSH EAX
PUSH ECX
CALL dword ptr [0x004ac060]
MOV EDX,dword ptr [ESP + 0x14]
TEST EAX,EAX
MOV dword ptr [EDX + 0x40],EAX
JNZ 0x00403f68
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EBP,dword ptr [ESP + 0x1c]
XOR EBX,EBX
ADD EDX,0x1a0
XOR EAX,EAX
TEST EBX,EBX
JLE 0x00403f7e
MOV EAX,dword ptr [EBP + -0x4]
INC EAX
MOV ECX,dword ptr [ESP + 0x20]
MOV dword ptr [EDX + -0x4],EAX
ADD EBP,0x4
MOV EDI,dword ptr [ECX + EAX*0x4]
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
SUB EDI,ECX
MOV EAX,ECX
MOV ESI,EDI
MOV EDI,EDX
ADD EDX,0x174
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EAX
AND ECX,0x3
INC EBX
MOVSB.REP ES:EDI,ESI
MOV ECX,dword ptr [EBP + -0x4]
CMP EBX,0x6
MOV dword ptr [EDX + 0xfffffea4],ECX
JL 0x00403f74
POP EDI
POP ESI
POP EBP
MOV EAX,0x6
POP EBX
RET
