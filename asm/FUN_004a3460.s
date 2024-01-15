; FUN_004a3460
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
XOR EDX,EDX
SUB ECX,dword ptr [EAX + 0x10]
SAR ECX,0xc
MOV ESI,dword ptr [EAX + ECX*0x8 + 0x18]
LEA EAX,[EAX + ECX*0x8 + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
MOV DL,byte ptr [ECX]
ADD ESI,EDX
MOV dword ptr [EAX],ESI
MOV byte ptr [ECX],0x0
MOV ECX,dword ptr [EAX]
MOV dword ptr [EAX + 0x4],0xf1
CMP ECX,0xf0
JNZ 0x004a34b1
MOV EAX,[0x00dfab60]
INC EAX
CMP EAX,0x20
MOV [0x00dfab60],EAX
JNZ 0x004a34b1
PUSH 0x10
CALL 0x004a3330
ADD ESP,0x4
POP ESI
RET
