; FUN_0044db70
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EAX]
MOV EAX,[0x0050c6b0]
XOR EBX,EBX
PUSH ESI
CMP EAX,EBX
PUSH EDI
MOV dword ptr [0x00e374c0],ECX
MOV dword ptr [0x00e67c04],EBP
JNZ 0x0044dd35
CMP dword ptr [0x0050c6b4],EBX
JNZ 0x0044dd35
PUSH 0x90
CALL 0x00408e40
ADD ESP,0x4
MOV [0x0050c6b0],EAX
PUSH EAX
CALL 0x0048ee10
MOV EDX,dword ptr [0x0050c6b0]
MOV ESI,0x1
ADD ESP,0x4
MOV dword ptr [EDX + 0x40],EBX
MOV EAX,[0x0050c6b0]
MOV dword ptr [EAX + 0x68],EBX
MOV ECX,dword ptr [0x0050c6b0]
MOV dword ptr [ECX + 0x6c],EBX
MOV EDX,dword ptr [0x0050c6b0]
MOV dword ptr [EDX + 0x64],ESI
MOV EAX,[0x0050c6b0]
MOV ECX,dword ptr [EAX + 0x70]
LEA EDX,[EAX + ECX*0x8 + 0x44]
MOV dword ptr [0x00e37bf0],EDX
CALL 0x00409270
PUSH 0xd8cc0
CALL 0x00408e40
MOV ECX,dword ptr [0x00e37bf0]
ADD ESP,0x4
MOV dword ptr [ECX + 0x4],EAX
MOV EDX,dword ptr [0x00e37bf0]
MOV ECX,0x36330
XOR EAX,EAX
MOV EDI,dword ptr [EDX + 0x4]
PUSH EBX
STOSD.REP ES:EDI
CALL 0x00490b70
MOV [0x0050c6b4],EAX
MOV dword ptr [EAX],ESI
MOV EAX,[0x0050c6b4]
ADD ESP,0x4
MOV dword ptr [EAX + 0x14],ESI
MOV ECX,dword ptr [0x0050c6b4]
MOV EDX,dword ptr [0x0050c6b0]
OR ESI,0xffffffff
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,[0x0050c6b4]
PUSH 0x1abbc0
MOV dword ptr [EAX + 0x2c],ESI
MOV ECX,dword ptr [0x0050c6b4]
MOV EAX,0x4
MOV dword ptr [ECX + 0x30],EAX
MOV EDX,dword ptr [0x0050c6b4]
MOV dword ptr [EDX + 0x8],EAX
MOV EAX,[0x0050c6b4]
MOV dword ptr [EAX + 0x24],EBX
MOV ECX,dword ptr [0x0050c6b4]
MOV dword ptr [ECX + 0x20],EBX
CALL 0x00408e40
MOV EDX,dword ptr [0x0050c6b0]
ADD ESP,0x4
MOV dword ptr [EDX + 0x78],EAX
MOV EAX,[0x0050c6b0]
MOV ECX,dword ptr [EAX + 0x78]
MOV dword ptr [ECX + 0x80],EBX
MOV EDX,dword ptr [0x0050c6b0]
MOV ECX,dword ptr [0x004c3c20]
MOV EAX,dword ptr [EDX + 0x78]
MOV dword ptr [EAX],ECX
MOV DL,byte ptr [0x004c3c24]
MOV byte ptr [EAX + 0x4],DL
MOV EAX,[0x0050c6b0]
MOV ECX,dword ptr [EAX + 0x78]
MOV dword ptr [ECX + 0x8c],EBX
MOV EDX,dword ptr [0x0050c6b0]
MOV EAX,dword ptr [EDX + 0x78]
MOV dword ptr [EAX + 0x98],EBX
MOV ECX,dword ptr [0x0050c6b0]
MOV EDX,dword ptr [ECX + 0x78]
MOV dword ptr [EDX + 0x94],EBX
MOV EAX,[0x0050c6b0]
MOV ECX,dword ptr [EAX + 0x78]
MOV dword ptr [ECX + 0x90],EBX
MOV EDX,dword ptr [0x0050c6b0]
MOV EAX,dword ptr [EDX + 0x78]
MOV dword ptr [EAX + 0x84],0x1
MOV ECX,dword ptr [0x0050c6b0]
MOV EDX,dword ptr [ECX + 0x78]
MOV ECX,0xc
MOV dword ptr [EDX + 0x88],ESI
MOV EAX,[0x0050c6b0]
MOV ESI,0x4af880
MOV EDI,dword ptr [EAX + 0x78]
ADD EDI,0xc0
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [0x0050c6b0]
MOV dword ptr [ECX + 0x74],0x1
MOV EDX,dword ptr [0x0050c6b0]
PUSH EDX
CALL 0x00408f70
ADD ESP,0x4
MOV word ptr [0x0050c6e0],BX
CALL 0x0044bb40
MOV EAX,[0x0050c6c0]
MOV ECX,0x10
INC EAX
MOV EDI,0xe374e0
MOV [0x0050c6c0],EAX
XOR EAX,EAX
STOSD.REP ES:EDI
MOV EAX,[0x00e996dc]
MOV dword ptr [0x0050c6bc],EBX
SHR EAX,0xe
AND EAX,0x1
MOV [0x0050c6d0],EAX
MOV ECX,dword ptr [EBP + 0x168]
PUSH ECX
CALL 0x0044d7c0
MOV ECX,dword ptr [0x00e374e0]
ADD ESP,0x4
MOV EAX,0xe374e4
MOV EDI,dword ptr [EAX]
ADD EAX,0x4
ADD ECX,EDI
CMP EAX,0xe37520
MOV dword ptr [0x00e374e0],ECX
JL 0x0044dda6
MOV EAX,[0x00e996dc]
TEST AH,0x40
JZ 0x0044ddda
MOV EDX,dword ptr [0x00ec86c4]
MOV EAX,[0x0050c6b4]
PUSH EDX
PUSH 0x1
PUSH 0x4af880
PUSH EAX
JMP 0x0044ddee
MOV ECX,dword ptr [0x00ec86c4]
MOV EDX,dword ptr [0x0050c6b4]
PUSH ECX
PUSH EBX
PUSH 0x4af880
PUSH EDX
CALL 0x00490c80
MOV ECX,dword ptr [ESP + 0x24]
MOV EAX,[0x00e374c0]
ADD ESP,0x10
MOV dword ptr [ECX],EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
