; FUN_0045dad0
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
TEST EAX,EAX
JZ 0x0045daee
MOV dword ptr [ESI + 0x1e0],EAX
MOV dword ptr [ESI + 0x1e4],0x0
MOV EAX,dword ptr [ESI + 0x1e0]
TEST EAX,EAX
JZ 0x0045dd5d
CMP EAX,0x5
JZ 0x0045dd5d
CMP EAX,0x4
JNZ 0x0045db1e
MOV dword ptr [ESI + 0x1e0],0x5
MOV dword ptr [ESI + 0x1e4],0x3f800000
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x0
CALL 0x004831d0
ADD ESP,0x14
PUSH -0x1
PUSH 0x2
CALL 0x00483230
MOV AL,byte ptr [ESI + 0x8]
ADD ESP,0x8
TEST AL,0x60
JNZ 0x0045dd16
CALL 0x0045d350
PUSH 0x0
PUSH 0xffffff37
MOV EDI,EAX
CALL 0x004285d0
MOV EAX,dword ptr [ESI + 0x1e0]
ADD ESP,0x8
DEC EAX
CMP EAX,0x4
JA 0x0045dd5d
JMP dword ptr [EAX*0x4 + 0x45dd60]
PUSH 0x5
PUSH 0x1
CALL 0x00483230
ADD ESP,0x8
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
ADD ESP,0x14
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0x42c80000
PUSH 0x1
CALL 0x00483590
ADD ESP,0x18
MOV dword ptr [ESI + 0x1e0],0x0
POP EDI
POP ESI
RET
PUSH 0x5
PUSH 0x1
CALL 0x00483230
ADD ESP,0x8
PUSH 0xc0
PUSH 0x138
PUSH 0x30
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
ADD ESP,0x14
PUSH 0xc0
PUSH 0x138
PUSH 0x30
PUSH 0x8
PUSH 0x0
CALL 0x004831d0
MOV EAX,[0x004c4a5c]
MOV ECX,dword ptr [0x004c4a60]
ADD ESP,0x14
PUSH 0xbf800000
PUSH EAX
PUSH ECX
PUSH 0xbf800000
PUSH 0x42340000
PUSH 0x1
CALL 0x00483590
ADD ESP,0x18
POP EDI
POP ESI
RET
PUSH 0x7
PUSH 0x1
CALL 0x00483230
ADD ESP,0x8
CMP EDI,0x1
JZ 0x0045dd22
TEST EDI,EDI
JZ 0x0045dd22
CMP EDI,0x2
JNZ 0x0045dd5d
PUSH 0x8
PUSH EDI
CALL 0x00483230
ADD ESP,0x8
PUSH 0x77
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
ADD ESP,0x14
PUSH 0xe8
PUSH 0x138
PUSH 0x79
PUSH 0x8
PUSH EDI
CALL 0x004831d0
MOV EAX,[0x0050ca14]
ADD ESP,0x14
TEST EAX,EAX
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
JZ 0x0045dce1
PUSH 0x42f00000
PUSH 0x1
CALL 0x00483590
ADD ESP,0x18
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0x42f00000
PUSH EDI
CALL 0x00483590
ADD ESP,0x18
POP EDI
POP ESI
RET
PUSH 0x42c80000
PUSH 0x1
CALL 0x00483590
ADD ESP,0x18
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0x42c80000
PUSH 0x2
CALL 0x00483590
ADD ESP,0x18
POP EDI
POP ESI
RET
PUSH 0x7
PUSH 0x1
CALL 0x00483230
ADD ESP,0x8
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
ADD ESP,0x14
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0xbf800000
PUSH 0x42c80000
PUSH 0x1
CALL 0x00483590
ADD ESP,0x18
POP EDI
POP ESI
RET