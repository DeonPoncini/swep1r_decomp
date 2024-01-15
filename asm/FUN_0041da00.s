; FUN_0041da00
SUB ESP,0x14
MOV EAX,0xe29bc4
PUSH EBX
PUSH EBP
PUSH ESI
XOR ESI,ESI
PUSH EDI
XOR EDX,EDX
MOV ECX,dword ptr [EAX]
CMP ECX,0x4c6f636c
JZ 0x0041da22
CMP ECX,0x41414949
JNZ 0x0041da23
INC EDX
ADD EAX,0x88
CMP EAX,0xe2a664
JL 0x0041da10
CMP EDX,ESI
JZ 0x0041dc21
MOV EBX,0xea05c0
MOV dword ptr [0x00ec7bc8],EDX
MOV EAX,0xec7bcc
MOV dword ptr [ESP + 0x18],ESI
MOV dword ptr [ESP + 0x1c],EBX
MOV EDX,0xe29bc4
MOV dword ptr [ESP + 0x14],0xea0480
MOV dword ptr [ESP + 0x10],0xea0420
MOV ECX,0xec76b0
MOV EBP,dword ptr [EDX]
CMP EBP,0x4c6f636c
JZ 0x0041da7f
CMP EBP,0x41414949
JNZ 0x0041dbb0
FLD dword ptr [ECX + -0x10]
MOV dword ptr [EAX],ESI
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX]
ADD EAX,0x4
MOV EDI,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x10]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x20]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + -0xc]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x4]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x14]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x24]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + -0x8]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x8]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x18]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x28]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + -0x4]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0xc]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x1c]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ECX + 0x2c]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ESI*0x4 + 0xec7640]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [ESI*0x4 + 0xea0360]
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [EDI]
MOV EDI,dword ptr [ESP + 0x14]
ADD EAX,0x4
FSTP dword ptr [EAX]
MOV EDI,dword ptr [EDI]
ADD EAX,0x4
MOV EBX,dword ptr [ESP + 0x18]
MOV dword ptr [EAX],EDI
MOVSX EDI,word ptr [EDX + 0x58]
ADD EAX,0x4
MOV dword ptr [EAX],EDI
MOV EDI,dword ptr [EDX + 0x74]
ADD EAX,0x4
ADD EBX,EDI
MOV dword ptr [ESP + 0x20],EBX
FLD dword ptr [EBX*0x4 + 0xe29c20]
MOV dword ptr [EAX],EDI
ADD EAX,0x4
FSTP dword ptr [EAX]
FLD dword ptr [EDX + 0x70]
MOV EBX,dword ptr [EDX + 0x80]
ADD EAX,0x4
FSTP dword ptr [EAX]
ADD EAX,0x4
MOV dword ptr [EAX],EBP
MOV EBP,dword ptr [EBX + 0x60]
ADD EAX,0x4
AND EBP,0x87810
MOV dword ptr [EAX],EBP
MOV EBX,dword ptr [EBX + 0x64]
ADD EAX,0x4
AND EBX,0x1e840000
MOV dword ptr [EAX],EBX
MOV EBX,dword ptr [ESP + 0x1c]
ADD EAX,0x4
CMP dword ptr [EBX],0x29a
JZ 0x0041dbb0
MOVSX EBP,word ptr [EDX + 0x58]
MOV dword ptr [EBX],EBP
MOV dword ptr [EBX + 0x4],EDI
MOV EDI,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [EDI*0x4 + 0xe29c20]
MOV dword ptr [EBX + 0x8],EDI
MOV EDI,dword ptr [EDX + 0x70]
MOV dword ptr [EBX + 0xc],EDI
MOV EBP,dword ptr [ESP + 0x10]
MOV EDI,0x4
ADD EBP,EDI
ADD ECX,0x40
MOV dword ptr [ESP + 0x10],EBP
MOV EBP,dword ptr [ESP + 0x14]
ADD EBP,EDI
INC ESI
MOV dword ptr [ESP + 0x14],EBP
MOV EBP,dword ptr [ESP + 0x18]
ADD EBP,0x22
ADD EDX,0x88
ADD EBX,0x10
CMP ECX,0xec7bb0
MOV dword ptr [ESP + 0x18],EBP
MOV dword ptr [ESP + 0x1c],EBX
JL 0x0041da69
PUSH 0x0
PUSH 0x1
SUB EAX,0xec7bc8
PUSH -0x1
PUSH 0xec7ba0
MOV dword ptr [0x00ec7ba4],0x0
MOV word ptr [0x00ec7bc4],0x32
MOV [0x00ec7bc0],EAX
CALL 0x0041b760
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
