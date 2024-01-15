; FUN_0041b960
MOV AX,word ptr [ESP + 0x8]
MOV word ptr [0x004d8c16],0x0
MOV [0x004d8c18],AX
MOV EAX,dword ptr [ESP + 0x4]
PUSH EAX
PUSH 0x4d8bf0
MOV [0x004d8bfc],EAX
MOV word ptr [0x004d8c14],0x28
MOV dword ptr [0x004d8c10],0x2
CALL 0x004047b0
ADD ESP,0x8
RET
