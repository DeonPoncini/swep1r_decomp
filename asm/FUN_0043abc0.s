; FUN_0043abc0
SUB ESP,0x10c
MOV EAX,[0x004c4000]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x11c]
PUSH EDI
PUSH 0x14
XOR EDI,EDI
PUSH EAX
PUSH ESI
MOV dword ptr [ESP + 0x24],EDI
MOV byte ptr [ESP + 0x1f],0x0
CALL 0x0043da90
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x0043b09f
CMP dword ptr [0x004c4000],EDI
JZ 0x0043acb3
PUSH ESI
MOV dword ptr [0x004c4000],EDI
MOV dword ptr [0x0050c544],EDI
MOV dword ptr [0x0050c548],EDI
MOV dword ptr [0x00e99358],0xc3960000
MOV dword ptr [0x0050c470],EDI
MOV dword ptr [0x0050c954],EDI
MOV dword ptr [0x0050c934],EDI
CALL 0x0045a840
MOV EAX,dword ptr [ESI + 0x34]
XOR EDX,EDX
SUB EAX,0x4
ADD ESP,0x4
MOVSX ECX,byte ptr [EAX + EAX*0x2 + 0xe29860]
MOV EAX,ECX
MOV dword ptr [0x00e295d0],ECX
SHL EAX,0x3
SUB EAX,ECX
SHL EAX,0x3
MOVSX ECX,byte ptr [EAX + 0xe2a6c0]
MOV DL,byte ptr [EAX + 0xe2a6c1]
SHL ECX,0x4
PUSH EDX
MOVSX EAX,byte ptr [ECX + 0x4c1cb9]
MOVSX ECX,byte ptr [ECX + 0x4c1cbb]
MOVSX EDX,byte ptr [ESI + 0x73]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0045cf60
ADD ESP,0x10
CALL 0x0043eb50
PUSH ESI
CALL 0x00440b50
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0043acaa
MOV EAX,dword ptr [ESI + 0x34]
PUSH EDI
PUSH -0x1
PUSH EAX
PUSH ESI
CALL 0x0045bee0
ADD ESP,0x10
JMP 0x0043acb3
MOV word ptr [0x0050c930],0x5
PUSH 0x10
PUSH EDI
CALL 0x00427670
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0043ad1c
PUSH 0x20
PUSH EDI
CALL 0x00427670
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0043ad1c
PUSH 0x20
PUSH EDI
CALL 0x004276a0
ADD ESP,0x8
PUSH 0x4
PUSH EDI
CALL 0x00427670
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0043ad06
PUSH 0x4
PUSH EDI
CALL 0x00427690
ADD ESP,0x8
PUSH EDI
PUSH 0x35
PUSH EDI
PUSH 0x2
CALL 0x00427410
ADD ESP,0x10
JMP 0x0043ad1c
PUSH EDI
PUSH 0x37
PUSH 0x33
PUSH 0x2f
PUSH 0x25
PUSH 0x1f
PUSH EDI
PUSH 0x2
CALL 0x00427590
ADD ESP,0x20
PUSH ESI
CALL 0x0043ec10
MOV EAX,dword ptr [ESI + 0x34]
MOV EBP,0x3
ADD ESP,0x4
CMP EAX,EBP
JZ 0x0043ad44
PUSH 0x43070000
PUSH 0x41a00000
PUSH ESI
CALL 0x004550d0
ADD ESP,0xc
MOV EAX,[0x0050c934]
MOV EBX,0x1
CMP EAX,EDI
JZ 0x0043ad5e
CMP dword ptr [0x0050c940],EDI
JZ 0x0043ae12
CMP dword ptr [ESI + 0x34],EBP
JZ 0x0043ae12
MOV EAX,[0x00e295d0]
MOV ECX,EAX
SHL ECX,0x3
SUB ECX,EAX
MOVSX EDX,byte ptr [ECX*0x8 + 0xe2a6c0]
SHL EDX,0x4
MOV EAX,dword ptr [EDX + 0x4c1cc4]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0bc0
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0xc
LEA EDX,[ESP + 0x1c]
PUSH EDX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH 0x19
PUSH 0xa0
CALL 0x00450530
ADD ESP,0x1c
LEA EAX,[ESP + 0x1c]
MOV dword ptr [0x00e295bc],EBX
MOV dword ptr [0x00e295b8],EBX
PUSH EDI
PUSH EAX
CALL 0x0042de10
ADD ESP,0x8
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH 0x1a
PUSH EDI
PUSH ECX
CALL 0x0042de10
MOV dword ptr [ESP + 0x24],EAX
ADD ESP,0x8
FILD dword ptr [ESP + 0x1c]
FMUL qword ptr [0x004ac7c0]
FSUBR qword ptr [0x004ac7c8]
CALL 0x0049ed20
PUSH EAX
CALL 0x00440150
ADD ESP,0xc
PUSH ESI
CALL 0x0043dba0
ADD ESP,0x4
PUSH ESI
CALL 0x00455dc0
MOV ECX,dword ptr [0x0050c934]
MOV EAX,[0x0050c548]
ADD ESP,0x4
CMP ECX,EDI
JZ 0x0043ae4d
CMP dword ptr [0x0050c940],EDI
JNZ 0x0043ae4d
CMP dword ptr [0x0050c470],EDI
JNZ 0x0043ae4d
CMP EAX,EDI
JNZ 0x0043ae4d
MOV dword ptr [0x0050c544],EBX
CMP dword ptr [0x0050c544],EDI
JZ 0x0043ae6e
MOV dword ptr [0x0050c474],EBX
MOV dword ptr [0x0050c470],EBX
MOV word ptr [0x00e99400],DI
MOV dword ptr [0x0050c544],EDI
CMP ECX,EDI
JZ 0x0043ae8e
CMP dword ptr [0x0050c46c],EDI
JNZ 0x0043ae8e
CMP EAX,EDI
JZ 0x0043ae8e
PUSH EDI
PUSH ESI
MOV dword ptr [0x0050c548],EDI
CALL 0x0045c9d0
ADD ESP,0x8
MOV AL,byte ptr [ESI + 0x70]
MOV dword ptr [ESP + 0x14],EDI
TEST AL,AL
JLE 0x0043b09f
MOV EBP,0x50c908
CMP dword ptr [0x0050c940],EDI
JNZ 0x0043b09f
CMP word ptr [0x0050c468],DI
JNZ 0x0043b09f
CMP dword ptr [0x004d6b48],EDI
JZ 0x0043af28
PUSH 0x54
CALL 0x00440550
MOV EAX,[0x0050c934]
ADD ESP,0x4
CMP EAX,EDI
JNZ 0x0043aeee
PUSH EBX
PUSH ESI
CALL 0x0045c9d0
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0x8
CMP EAX,0x3
JZ 0x0043b08b
JMP 0x0043af28
CMP word ptr [0x00e99400],DI
JNZ 0x0043af00
PUSH ESI
CALL 0x00440800
ADD ESP,0x4
MOV dword ptr [0x0050c474],EBX
MOV word ptr [0x00e99400],DI
MOV dword ptr [0x0050c470],EDI
MOV dword ptr [0x0050c954],EBX
MOV word ptr [0x0050c468],0xffff
MOV dword ptr [0x0050c548],EBX
CMP dword ptr [0x004eb39c],EDI
JNZ 0x0043af80
CMP dword ptr [0x004d6b44],EDI
JZ 0x0043af80
PUSH 0x4d
CALL 0x00440550
MOV EAX,[0x0050c470]
ADD ESP,0x4
CMP EAX,EDI
JZ 0x0043af75
MOV dword ptr [0x0050c474],EBX
MOV dword ptr [0x0050c470],EDI
MOV dword ptr [0x0050c954],EBX
MOV word ptr [0x00e99400],DI
MOV word ptr [0x0050c468],0xffff
MOV dword ptr [0x0050c548],EBX
JMP 0x0043af80
PUSH 0x3
PUSH ESI
CALL 0x00454d40
ADD ESP,0x8
MOV EAX,[0x0050c934]
MOV dword ptr [0x00e295b4],EDI
CMP EAX,EDI
MOV dword ptr [0x00e295b0],EDI
JNZ 0x0043afe0
CMP dword ptr [0x0050c470],EDI
JNZ 0x0043afe0
MOV EAX,dword ptr [EBP]
MOV CX,word ptr [0x0050c930]
TEST EAX,0x10000
JZ 0x0043afc4
CMP CX,0x5
JZ 0x0043afb9
CMP CX,DI
JNZ 0x0043afbe
MOV byte ptr [ESP + 0x13],0xff
MOV dword ptr [0x00e295b0],EBX
TEST EAX,0x20000
JZ 0x0043afe0
CMP CX,0x5
JZ 0x0043afd6
CMP CX,DI
JNZ 0x0043afda
MOV byte ptr [ESP + 0x13],BL
MOV dword ptr [0x00e295b4],EBX
MOV AL,byte ptr [ESP + 0x13]
TEST AL,AL
JZ 0x0043b00d
MOVSX DX,AL
PUSH EBX
PUSH EDX
PUSH ESI
CALL 0x0045bde0
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0xc
CMP EAX,0x3
JZ 0x0043b003
MOV dword ptr [ESP + 0x18],EBX
PUSH 0x58
CALL 0x00440550
ADD ESP,0x4
CMP dword ptr [ESP + 0x18],EDI
JZ 0x0043b068
MOV EAX,dword ptr [ESI + 0x34]
XOR EDX,EDX
SUB EAX,0x4
MOVSX ECX,byte ptr [EAX + EAX*0x2 + 0xe29860]
MOV EAX,ECX
MOV dword ptr [0x00e295d0],ECX
SHL EAX,0x3
SUB EAX,ECX
SHL EAX,0x3
MOVSX ECX,byte ptr [EAX + 0xe2a6c0]
MOV DL,byte ptr [EAX + 0xe2a6c1]
SHL ECX,0x4
PUSH EDX
MOVSX EAX,byte ptr [ECX + 0x4c1cb9]
MOVSX ECX,byte ptr [ECX + 0x4c1cbb]
MOVSX EDX,byte ptr [ESI + 0x73]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0045cf60
ADD ESP,0x10
CALL 0x0043eb50
XOR EDI,EDI
MOV EAX,dword ptr [ESP + 0x14]
ADD EBP,0x4
MOVSX ECX,byte ptr [ESI + 0x70]
INC EAX
CMP EAX,ECX
MOV dword ptr [ESP + 0x14],EAX
JL 0x0043aea2
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10c
RET
MOV dword ptr [0x0050c944],0xffffffff
MOV dword ptr [0x004bfedc],0x7
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10c
RET
