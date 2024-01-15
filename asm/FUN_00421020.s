; FUN_00421020
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
LEA ECX,[EAX + EAX*0x4]
LEA EAX,[EAX + ECX*0x2]
SHL EAX,0x4
ADD EAX,0xe9f3c0
MOV ECX,dword ptr [EAX + 0x84]
MOV dword ptr [EAX + 0x88],EDX
OR ECX,0x5
MOV dword ptr [EAX + 0xac],0x0
MOV dword ptr [EAX + 0x84],ECX
MOV EAX,[0x004eb3b8]
INC EAX
MOV [0x004eb3b8],EAX
CALL 0x00420fc0
MOV EAX,0x1
RET
