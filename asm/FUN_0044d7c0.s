; FUN_0044d7c0
SUB ESP,0x34
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x44]
XOR EBP,EBP
CMP EDI,EBP
JZ 0x0044dace
MOV EAX,[0x00e67c04]
PUSH 0x2
PUSH EDI
MOV ESI,dword ptr [EAX + 0x158]
CALL 0x00431b00
AND EAX,ESI
ADD ESP,0x8
CMP EAX,ESI
JNZ 0x0044dace
PUSH 0x2
PUSH EDI
CALL 0x00431b00
MOV ECX,dword ptr [0x00e67c04]
ADD ESP,0x8
TEST dword ptr [ECX + 0x15c],EAX
JZ 0x0044dace
MOV EAX,[0x0050c710]
PUSH EBX
MOV EDX,EAX
INC EAX
CMP EDX,0xa
MOV [0x0050c710],EAX
JLE 0x0044d82f
MOV dword ptr [0x0050c710],EBP
CALL 0x00426910
PUSH EDI
CALL 0x00431770
MOV ECX,dword ptr [EDI + 0x10]
ADD ESP,0x4
MOV ESI,EAX
MOV AX,word ptr [EDI + 0xe]
PUSH EAX
PUSH ECX
CALL 0x0044c440
ADD ESP,0x8
CMP ESI,0x5064
MOV dword ptr [ESP + 0x10],EAX
JG 0x0044d8e2
JZ 0x0044d877
CMP ESI,0x3064
JNZ 0x0044dac0
PUSH EDI
CALL 0x0044ca00
ADD ESP,0x4
JMP 0x0044dac0
PUSH EDI
CALL 0x00431780
ADD ESP,0x4
CMP EAX,EBP
MOV dword ptr [ESP + 0x48],EAX
JLE 0x0044dac0
MOV EDX,dword ptr [EDI + 0x18]
MOV ESI,dword ptr [EDX + EBP*0x4]
TEST ESI,ESI
JZ 0x0044d8d4
MOV EAX,[0x00e67c04]
PUSH 0x2
PUSH ESI
MOV EBX,dword ptr [EAX + 0x158]
CALL 0x00431b00
AND EAX,EBX
ADD ESP,0x8
CMP EAX,EBX
JNZ 0x0044d8d4
PUSH 0x2
PUSH ESI
CALL 0x00431b00
MOV ECX,dword ptr [0x00e67c04]
ADD ESP,0x8
TEST dword ptr [ECX + 0x15c],EAX
JZ 0x0044d8d4
PUSH ESI
CALL 0x0044d7c0
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x48]
INC EBP
CMP EBP,EAX
JL 0x0044d88c
JMP 0x0044dac0
CMP ESI,0xd064
JG 0x0044da0c
JZ 0x0044da01
SUB ESI,0x5065
JZ 0x0044d91a
DEC ESI
JNZ 0x0044dac0
PUSH EDI
CALL 0x0044d740
ADD ESP,0x4
CMP EAX,-0x1
JZ 0x0044dac0
JMP 0x0044d9a8
PUSH EDI
CALL 0x00431780
MOV ECX,EAX
MOV EAX,dword ptr [EDI + 0x1c]
ADD ESP,0x4
CMP EAX,-0x2
MOV dword ptr [ESP + 0x48],ECX
JZ 0x0044dac0
CMP EAX,-0x1
JNZ 0x0044d998
CMP ECX,EBP
JLE 0x0044dac0
MOV EDX,dword ptr [EDI + 0x18]
MOV ESI,dword ptr [EDX + EBP*0x4]
TEST ESI,ESI
JZ 0x0044d98a
MOV EAX,[0x00e67c04]
PUSH 0x2
PUSH ESI
MOV EBX,dword ptr [EAX + 0x158]
CALL 0x00431b00
AND EAX,EBX
ADD ESP,0x8
CMP EAX,EBX
JNZ 0x0044d98a
PUSH 0x2
PUSH ESI
CALL 0x00431b00
MOV ECX,dword ptr [0x00e67c04]
ADD ESP,0x8
TEST dword ptr [ECX + 0x15c],EAX
JZ 0x0044d98a
PUSH ESI
CALL 0x0044d7c0
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x48]
INC EBP
CMP EBP,EAX
JL 0x0044d942
JMP 0x0044dac0
CMP EAX,EBP
JL 0x0044dac0
CMP EAX,ECX
JGE 0x0044dac0
MOV EDX,dword ptr [EDI + 0x18]
MOV ESI,dword ptr [EDX + EAX*0x4]
CMP ESI,EBP
JZ 0x0044dac0
MOV EAX,[0x00e67c04]
PUSH 0x2
PUSH ESI
MOV EDI,dword ptr [EAX + 0x158]
CALL 0x00431b00
AND EAX,EDI
ADD ESP,0x8
CMP EAX,EDI
JNZ 0x0044dac0
PUSH 0x2
PUSH ESI
CALL 0x00431b00
MOV ECX,dword ptr [0x00e67c04]
ADD ESP,0x8
TEST dword ptr [ECX + 0x15c],EAX
JZ 0x0044dac0
PUSH ESI
CALL 0x0044d7c0
ADD ESP,0x4
JMP 0x0044dac0
PUSH EDI
ADD EDI,0x1c
PUSH EDI
PUSH EBP
JMP 0x0044dab8
SUB ESI,0xd065
JZ 0x0044da29
DEC ESI
JNZ 0x0044dac0
PUSH EDI
CALL 0x0044d310
ADD ESP,0x4
JMP 0x0044dac0
PUSH EDI
CALL 0x00431780
ADD ESP,0x4
TEST EAX,EAX
JLE 0x0044dac0
TEST byte ptr [EDI + 0xc],0x10
JZ 0x0044dab1
MOV EDX,dword ptr [EDI + 0x1c]
LEA EAX,[EDI + 0x1c]
MOV ECX,dword ptr [EDI + 0x20]
MOV dword ptr [ESP + 0x14],EDX
MOV EDX,dword ptr [EDI + 0x24]
MOV dword ptr [ESP + 0x18],ECX
MOV ECX,dword ptr [EDI + 0x28]
MOV dword ptr [ESP + 0x1c],EDX
MOV EDX,dword ptr [EDI + 0x2c]
MOV dword ptr [ESP + 0x20],ECX
MOV ECX,dword ptr [EDI + 0x30]
MOV dword ptr [ESP + 0x24],EDX
MOV EDX,dword ptr [EDI + 0x34]
MOV dword ptr [ESP + 0x28],ECX
MOV ECX,dword ptr [EDI + 0x38]
MOV dword ptr [ESP + 0x2c],EDX
MOV EDX,dword ptr [EDI + 0x3c]
MOV dword ptr [ESP + 0x30],ECX
MOV ECX,dword ptr [EDI + 0x40]
MOV dword ptr [ESP + 0x34],EDX
MOV EDX,dword ptr [EDI + 0x44]
MOV dword ptr [ESP + 0x38],ECX
MOV ECX,dword ptr [EDI + 0x48]
MOV dword ptr [ESP + 0x3c],EDX
LEA EDX,[EDI + 0x4c]
MOV dword ptr [ESP + 0x40],ECX
PUSH EDX
PUSH EAX
LEA EAX,[ESP + 0x1c]
PUSH EAX
CALL 0x0044d1e0
ADD ESP,0xc
LEA ECX,[ESP + 0x14]
PUSH EDI
PUSH ECX
JMP 0x0044dab6
PUSH EDI
ADD EDI,0x1c
PUSH EDI
PUSH 0x1
CALL 0x0044d240
ADD ESP,0xc
MOV EDX,dword ptr [ESP + 0x10]
PUSH EDX
CALL 0x0044c4c0
ADD ESP,0x4
POP EBX
POP EDI
POP ESI
POP EBP
ADD ESP,0x34
RET
