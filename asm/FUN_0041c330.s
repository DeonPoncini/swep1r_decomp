; FUN_0041c330
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
MOV ECX,0xea0260
LEA EDX,[ESI + 0x28]
MOV EAX,EDX
MOV EDI,dword ptr [EAX]
ADD EAX,0x4
MOV dword ptr [ECX],EDI
ADD ECX,0x4
CMP ECX,0xea02b0
JL 0x0041c340
MOV ECX,dword ptr [EAX]
ADD EAX,0x4
MOV dword ptr [0x00ea02b0],ECX
PUSH EDX
MOV ECX,dword ptr [EAX]
ADD EAX,0x4
MOV dword ptr [0x00ea02b4],ECX
MOV ECX,dword ptr [EAX]
MOV dword ptr [0x00ea02b8],ECX
MOV EAX,dword ptr [EAX + 0x4]
XOR ECX,ECX
MOV [0x00ea02bc],EAX
MOV CX,word ptr [ESI + 0x24]
PUSH ECX
CALL 0x00411120
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
