; FUN_00448bd0
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH ESI
PUSH EDI
CMP dword ptr [EAX],-0x1
JZ 0x00448be7
MOV ECX,dword ptr [EAX + 0x4]
ADD EAX,0x4
CMP ECX,-0x1
JNZ 0x00448bdc
MOV ECX,dword ptr [EAX + 0x4]
ADD EAX,0x4
OR EDI,0xffffffff
CMP ECX,0x44617461
JNZ 0x00448c08
MOV ECX,dword ptr [EAX + 0x4]
ADD EAX,0x4
ADD EAX,0x4
TEST ECX,ECX
JLE 0x00448c08
LEA EAX,[EAX + ECX*0x4]
CMP dword ptr [EAX],0x416e696d
JNZ 0x00448c38
LEA ESI,[EAX + 0x4]
MOV EBX,ESI
MOV EAX,dword ptr [ESI]
TEST EAX,EAX
JZ 0x00448c3a
PUSH EAX
CALL 0x00425900
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
CMP EAX,EDI
JNC 0x00448c2c
MOV EDI,EAX
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
TEST EAX,EAX
JNZ 0x00448c1b
JMP 0x00448c3a
XOR EBX,EBX
CMP EDI,-0x1
JNZ 0x00448c4f
MOV dword ptr [0x00e98248],0x0
MOV EAX,EBX
POP EDI
POP ESI
POP EBX
RET
MOV EAX,[0x00e6b164]
MOV ECX,dword ptr [0x00e981e0]
SUB EAX,EDI
POP EDI
MOV [0x00e98248],EAX
SUB ECX,EAX
MOV EAX,EBX
POP ESI
MOV dword ptr [0x00e981e0],ECX
POP EBX
RET