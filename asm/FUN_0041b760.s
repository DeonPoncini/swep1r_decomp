; FUN_0041b760
MOV EAX,[0x004e9eac]
PUSH EBX
MOV EBX,dword ptr [ESP + 0x10]
PUSH EDI
AND EBX,EAX
MOV EDI,0x1
JNZ 0x0041b779
MOV EAX,EDI
POP EDI
POP EBX
RET
MOV EAX,[0x004eb3b4]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
TEST BL,0x1
MOV dword ptr [ESI + 0x1c],EAX
JZ 0x0041b7dc
MOV EAX,dword ptr [ESP + 0x1c]
MOV EDI,dword ptr [ESP + 0x14]
TEST EAX,EAX
JZ 0x0041b7ca
MOV AX,[0x004b6710]
TEST AX,AX
JNZ 0x0041b7ac
MOV AX,0x1
MOV [0x004b6710],AX
MOV word ptr [ESI + 0x26],AX
INC word ptr [0x004b6710]
PUSH ESI
MOV dword ptr [ESI + 0xc],EDI
CALL 0x0041b950
MOV EAX,dword ptr [ESI + 0x14]
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x0041b7d0
MOV word ptr [ESI + 0x26],0x0
PUSH EDI
PUSH ESI
CALL 0x004047b0
ADD ESP,0x8
MOV EDI,EAX
TEST BL,0x4
JZ 0x0041b7ea
PUSH ESI
CALL 0x00426910
ADD ESP,0x4
MOV EAX,EDI
POP ESI
POP EDI
POP EBX
RET