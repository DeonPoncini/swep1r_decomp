; FUN_0044fef0
MOV EAX,[0x0050c764]
CMP EAX,0xbe
JGE 0x0044ff26
MOV CX,word ptr [ESP + 0x8]
MOV DX,word ptr [ESP + 0xc]
MOV word ptr [EAX*0x4 + 0xe2c080],CX
MOV CL,byte ptr [ESP + 0x4]
MOV word ptr [EAX*0x4 + 0xe2c082],DX
MOV byte ptr [EAX + 0xe345a0],CL
INC EAX
MOV [0x0050c764],EAX
RET
