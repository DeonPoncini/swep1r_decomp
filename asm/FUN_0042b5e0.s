; FUN_0042b5e0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0042b63d
MOV EAX,dword ptr [EAX + 0xc]
TEST EAX,EAX
JZ 0x0042b63d
MOV CX,word ptr [ESP + 0x8]
TEST CX,CX
JL 0x0042b5fc
MOV byte ptr [EAX + 0x20],CL
MOV CX,word ptr [ESP + 0xc]
TEST CX,CX
JL 0x0042b609
MOV byte ptr [EAX + 0x21],CL
MOV CX,word ptr [ESP + 0x10]
TEST CX,CX
JL 0x0042b616
MOV byte ptr [EAX + 0x22],CL
MOV CX,word ptr [ESP + 0x14]
TEST CX,CX
JL 0x0042b623
MOV byte ptr [EAX + 0x23],CL
MOV CX,word ptr [ESP + 0x18]
TEST CX,CX
JL 0x0042b630
MOV byte ptr [EAX + 0x24],CL
MOV CX,word ptr [ESP + 0x1c]
TEST CX,CX
JL 0x0042b63d
MOV byte ptr [EAX + 0x25],CL
RET
