; FUN_004503e0
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JNZ 0x0045048f
MOV EAX,[0x0050c750]
CMP EAX,0x80
JGE 0x0045052f
MOV ECX,dword ptr [ESP + 0x20]
TEST ECX,ECX
JL 0x00450422
MOV EDX,dword ptr [ESP + 0x1c]
SHL EAX,0x7
PUSH EDX
PUSH ECX
ADD EAX,0xe2c380
PUSH 0x4c3e48
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x10
JMP 0x0045043d
MOV ECX,dword ptr [ESP + 0x1c]
SHL EAX,0x7
PUSH ECX
ADD EAX,0xe2c380
PUSH 0x4b2304
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
MOV EAX,[0x0050c750]
MOV DX,word ptr [ESP + 0x4]
MOV CX,word ptr [ESP + 0x8]
MOV word ptr [EAX*0x4 + 0xe34860],DX
MOV DL,byte ptr [ESP + 0xc]
MOV word ptr [EAX*0x4 + 0xe34862],CX
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX*0x4 + 0xe2b480],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX*0x4 + 0xe2b481],CL
MOV CL,byte ptr [ESP + 0x18]
MOV byte ptr [EAX*0x4 + 0xe2b482],DL
MOV byte ptr [EAX*0x4 + 0xe2b483],CL
INC EAX
MOV [0x0050c750],EAX
RET
MOV EAX,[0x0050c758]
CMP EAX,0x20
JGE 0x0045052f
MOV ECX,dword ptr [ESP + 0x20]
TEST ECX,ECX
JL 0x004504c3
MOV EDX,dword ptr [ESP + 0x1c]
SHL EAX,0x7
PUSH EDX
PUSH ECX
ADD EAX,0xe303a0
PUSH 0x4c3e48
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x10
JMP 0x004504de
MOV ECX,dword ptr [ESP + 0x1c]
SHL EAX,0x7
PUSH ECX
ADD EAX,0xe303a0
PUSH 0x4b2304
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
MOV EAX,[0x0050c758]
MOV DX,word ptr [ESP + 0x4]
MOV CX,word ptr [ESP + 0x8]
MOV word ptr [EAX*0x4 + 0xe34660],DX
MOV DL,byte ptr [ESP + 0xc]
MOV word ptr [EAX*0x4 + 0xe34662],CX
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX*0x4 + 0xe343a0],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX*0x4 + 0xe343a1],CL
MOV CL,byte ptr [ESP + 0x18]
MOV byte ptr [EAX*0x4 + 0xe343a2],DL
MOV byte ptr [EAX*0x4 + 0xe343a3],CL
INC EAX
MOV [0x0050c758],EAX
RET
