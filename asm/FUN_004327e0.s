; FUN_004327e0
PUSH ECX
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x0048dba0
XOR ECX,ECX
MOV dword ptr [EAX],0x2e
MOV dword ptr [EAX + 0x4],0x1
MOV dword ptr [EAX + 0x8],0x4
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0x3c],ECX
MOV EDX,dword ptr [0x00e996a4]
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x1c],EDX
MOV dword ptr [EAX + 0x34],ECX
MOV ECX,dword ptr [0x00df7f2c]
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [EAX + 0x10]
MOV EDX,dword ptr [ECX + 0x48]
MOVSX ECX,word ptr [ESP + 0x18]
FLD dword ptr [EDX + 0x4]
FLD ST0
MOVSX EDX,word ptr [ESP + 0x1c]
FLD ST1
FLD ST2
MOV dword ptr [ESP + 0x18],ECX
MOV dword ptr [ESP + 0x1c],EDX
MOVSX ECX,word ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x18]
MOVSX EDX,word ptr [ESP + 0x24]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
FILD dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,dword ptr [EAX + 0x14]
MOV EAX,dword ptr [EAX + 0x18]
MOV dword ptr [ESP + 0x24],ECX
MOV ECX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x18],EDX
MOVSX ESI,word ptr [ESP + 0x28]
FXCH
FSTP dword ptr [ECX]
FILD dword ptr [ESP + 0x1c]
MOVSX EDI,word ptr [ESP + 0x2c]
FXCH
FSTP dword ptr [ECX + 0x4]
FILD dword ptr [ESP + 0x18]
MOVSX EBX,word ptr [ESP + 0x30]
FXCH ST4
FSTP dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x1c],ESI
MOV dword ptr [ESP + 0x18],EDI
FILD dword ptr [ESP + 0x1c]
MOVSX EBP,word ptr [ESP + 0x34]
FXCH
FSTP dword ptr [ECX + 0xc]
FILD dword ptr [ESP + 0x18]
FXCH ST4
FSTP dword ptr [ECX + 0x10]
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x18],EBP
FILD dword ptr [ESP + 0x1c]
FXCH ST3
FSTP dword ptr [ECX + 0x14]
FILD dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ECX + 0x18]
FXCH ST3
FSTP dword ptr [ECX + 0x1c]
FSTP dword ptr [ECX + 0x20]
FSTP dword ptr [ECX + 0x24]
FSTP dword ptr [ECX + 0x28]
FSTP dword ptr [ECX + 0x2c]
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [EAX + 0x30],EDX
MOV ECX,dword ptr [0x00e37530]
MOV dword ptr [EAX + 0x20],ECX
MOV EDX,dword ptr [0x00e37530]
PUSH 0x7
MOV dword ptr [EAX + 0x10],EDX
MOV ECX,dword ptr [0x00e37530]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x34],EDX
MOV ECX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x24],ECX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x14],EDX
MOV ECX,dword ptr [0x00e37534]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x38],EDX
MOV ECX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x28],ECX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x18],EDX
MOV ECX,dword ptr [0x00e37538]
MOV dword ptr [EAX + 0x8],ECX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x3c],EDX
MOV ECX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x2c],ECX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0x1c],EDX
MOV ECX,dword ptr [0x00e3753c]
MOV dword ptr [EAX + 0xc],ECX
MOV EAX,dword ptr [ESP + 0x28]
MOV EDX,0x3f800000
XOR ECX,ECX
MOV dword ptr [EAX],EDX
MOV dword ptr [EAX + 0x8],EDX
MOV dword ptr [EAX + 0xc],EDX
MOV dword ptr [EAX + 0x14],EDX
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [EAX + 0x4],ECX
MOV dword ptr [EAX + 0x10],ECX
MOV dword ptr [EAX + 0x18],ECX
MOV dword ptr [EAX + 0x1c],ECX
MOV EAX,dword ptr [EDX + 0x8]
PUSH EAX
CALL 0x0048de10
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
POP ECX
RET
