; FUN_0041d4e0
MOV EAX,[0x004d5e00]
PUSH ESI
TEST EAX,EAX
PUSH EDI
JZ 0x0041d53d
MOV ESI,dword ptr [ESP + 0xc]
LEA EAX,[ESI + ESI*0x2]
SHL EAX,0x2
MOV ECX,dword ptr [EAX + 0x4ea020]
TEST ECX,ECX
JZ 0x0041d53d
MOV EDX,dword ptr [EAX + 0x4ea024]
MOV ECX,dword ptr [0x004eb3b4]
MOV EDI,dword ptr [ESP + 0x10]
SHR EDX,CL
XOR ECX,ECX
AND EDX,0x1
TEST EDI,EDI
MOV EDI,dword ptr [EAX + 0x4ea028]
SETNZ CL
TEST EDI,EDI
JZ 0x0041d529
CMP EDX,ECX
JZ 0x0041d53d
PUSH ECX
PUSH ESI
MOV dword ptr [EAX + 0x4ea028],0x1
CALL 0x0041d420
ADD ESP,0x8
POP EDI
POP ESI
RET
