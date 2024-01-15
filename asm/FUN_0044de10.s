; FUN_0044de10
MOV EAX,dword ptr [ESP + 0x4]
PUSH EBX
MOV [0x00e67c04],EAX
MOV EAX,[0x0050c6b0]
XOR EBX,EBX
PUSH EBP
CMP EAX,EBX
MOV EBP,0x1
JNZ 0x0044dfc5
CMP dword ptr [0x0050c6b4],EBX
JNZ 0x0044dfc5
PUSH EDI
PUSH ESI
PUSH 0x90
CALL 0x00408e40
ADD ESP,0x4
MOV [0x0050c6b0],EAX
PUSH EAX
CALL 0x0048ee10
MOV ECX,dword ptr [0x0050c6b0]
ADD ESP,0x4
MOV dword ptr [ECX + 0x40],EBX
MOV EDX,dword ptr [0x0050c6b0]
MOV dword ptr [EDX + 0x68],EBX
MOV EAX,[0x0050c6b0]
MOV dword ptr [EAX + 0x6c],EBX
MOV ECX,dword ptr [0x0050c6b0]
MOV dword ptr [ECX + 0x64],EBP
MOV EAX,[0x0050c6b0]
MOV EDX,dword ptr [EAX + 0x70]
LEA EAX,[EAX + EDX*0x8 + 0x44]
MOV [0x00e37bf0],EAX
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
MOV dword ptr [EAX],EBP
MOV EAX,[0x0050c6b4]
OR ESI,0xffffffff
ADD ESP,0x4
MOV dword ptr [EAX + 0x14],EBP
MOV ECX,dword ptr [0x0050c6b4]
MOV EDX,dword ptr [0x0050c6b0]
PUSH 0x1abbc0
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,[0x0050c6b4]
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
MOV dword ptr [EAX + 0x84],EBP
MOV ECX,dword ptr [0x0050c6b0]
MOV EDX,dword ptr [ECX + 0x78]
MOV ECX,0xc
MOV dword ptr [EDX + 0x88],ESI
MOV EAX,[0x0050c6b0]
MOV ESI,0x4af880
MOV EDI,dword ptr [EAX + 0x78]
ADD EDI,0xc0
MOVSD.REP ES:EDI,ESI
POP ESI
POP EDI
MOV ECX,dword ptr [0x0050c6b0]
MOV dword ptr [ECX + 0x74],EBP
MOV EDX,dword ptr [0x0050c6b0]
PUSH EDX
CALL 0x00408f70
MOV EAX,dword ptr [ESP + 0x10]
ADD ESP,0x4
MOV word ptr [0x0050c6e0],BX
MOV ECX,dword ptr [EAX + 0x168]
PUSH ECX
CALL 0x0044dae0
ADD ESP,0x4
POP EBP
POP EBX
RET
