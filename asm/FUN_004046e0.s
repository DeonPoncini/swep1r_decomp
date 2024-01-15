; FUN_004046e0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
MOV ECX,0xd
LEA EDX,[ESI + 0x8]
XOR EAX,EAX
MOV EDI,EDX
STOSD.REP ES:EDI
LEA EAX,[ESI + 0x3c]
LEA ECX,[ESI + 0xbc]
MOV dword ptr [ESI + 0x2c],EAX
LEA EAX,[ESI + 0x13c]
MOV dword ptr [ESI + 0x28],ECX
MOV dword ptr [EDX],0x34
MOV ECX,EAX
XOR EDX,EDX
MOV dword ptr [ESI + 0xc],0x71
MOV dword ptr [ESI + 0x24],0x20
MOV dword ptr [ESI + 0x30],EAX
MOV dword ptr [ECX],EDX
MOV dword ptr [ECX + 0x4],EDX
MOV dword ptr [ECX + 0x8],EDX
MOV dword ptr [ECX + 0xc],EDX
MOV dword ptr [ECX + 0x10],EDX
MOV dword ptr [EAX],0x14
MOV EAX,dword ptr [ESI + 0x150]
TEST EAX,EAX
JZ 0x00404759
MOV EDX,dword ptr [0x00ecc420]
PUSH EAX
CALL dword ptr [EDX + 0x24]
ADD ESP,0x4
MOV dword ptr [ESI + 0x150],0x0
POP EDI
POP ESI
RET
