; FUN_004226c0
MOV EAX,[0x004b6d34]
PUSH ESI
PUSH EDI
XOR EDI,EDI
MOV ESI,dword ptr [EAX + 0x28]
CMP ESI,EDI
JZ 0x00422763
CMP dword ptr [EAX + 0x20],EDI
JBE 0x0042273d
PUSH EBP
PUSH EBX
XOR EBX,EBX
MOV EBP,0xfffffffd
MOV EAX,dword ptr [ESI + 0x24]
TEST AL,0x1
JZ 0x00422713
MOV ECX,dword ptr [0x004b6d2c]
TEST ECX,ECX
JNZ 0x00422702
TEST AL,0x2
JNZ 0x0042270e
PUSH ESI
CALL 0x00422d10
ADD ESP,0x4
JMP 0x00422713
PUSH ESI
CALL 0x00422d10
MOV EAX,dword ptr [ESI + 0x24]
ADD ESP,0x4
AND EAX,EBP
MOV dword ptr [ESI + 0x24],EAX
MOV EAX,[0x004b6d34]
MOV ECX,dword ptr [EAX + 0x28]
ADD ECX,EBX
PUSH ECX
CALL 0x004231f0
MOV EAX,[0x004b6d34]
ADD ESP,0x4
INC EDI
ADD EBX,0x4c
MOV ECX,dword ptr [EAX + 0x20]
ADD ESI,0x4c
CMP EDI,ECX
JC 0x004226e2
POP EBX
XOR EDI,EDI
POP EBP
MOV EDX,dword ptr [EAX + 0x28]
PUSH EDX
CALL 0x0049f200
MOV EAX,[0x004b6d34]
ADD ESP,0x4
MOV dword ptr [EAX + 0x20],EDI
MOV ECX,dword ptr [0x004b6d34]
MOV dword ptr [ECX + 0x24],EDI
MOV EDX,dword ptr [0x004b6d34]
MOV dword ptr [EDX + 0x28],EDI
POP EDI
POP ESI
RET