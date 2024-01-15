; FUN_004329c0
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
CALL 0x0048dba0
MOVSX EDX,word ptr [ESP + 0x14]
MOVSX ESI,word ptr [ESP + 0x18]
MOVSX EDI,word ptr [ESP + 0x20]
MOVSX EBX,word ptr [ESP + 0x1c]
XOR ECX,ECX
MOV dword ptr [EAX],0x2e
MOV dword ptr [EAX + 0x4],0x1
MOV dword ptr [EAX + 0x8],0x4
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0x3c],ECX
MOV EBP,dword ptr [0x00e996a4]
MOV dword ptr [EAX + 0x20],ECX
MOV dword ptr [EAX + 0x1c],EBP
MOV dword ptr [EAX + 0x34],ECX
MOV ECX,dword ptr [0x00df7f2c]
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ECX + 0x48]
MOV dword ptr [ESP + 0x18],ESI
FILD dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x18],EDI
FILD dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x20],EBX
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x14]
MOV EDX,dword ptr [EAX + 0x10]
MOV ESI,dword ptr [EAX + 0x14]
MOV ECX,dword ptr [EAX + 0x18]
FLD ST5
FSTP dword ptr [EDX]
FXCH ST4
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [EDX + 0x8]
FLD dword ptr [ESP + 0x18]
FXCH ST5
FSTP dword ptr [EDX + 0xc]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x14]
FXCH ST4
FSTP dword ptr [EDX + 0x14]
MOV EDI,dword ptr [ESP + 0x18]
MOV dword ptr [EDX + 0x4],EDI
MOV EDI,dword ptr [ESP + 0x14]
FXCH
FST dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [EDX + 0x18]
FXCH ST3
FSTP dword ptr [EDX + 0x1c]
MOV dword ptr [EDX + 0x10],EDI
FSTP dword ptr [EDX + 0x20]
FXCH
FSTP dword ptr [EDX + 0x24]
FXCH
FSTP dword ptr [EDX + 0x28]
FSTP dword ptr [EDX + 0x2c]
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [ECX + 0x30],EDX
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [ECX + 0x20],EDX
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [ECX + 0x10],EDX
MOV EDX,dword ptr [0x00e37530]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [ECX + 0x34],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [ECX + 0x24],EDX
MOV EDX,dword ptr [0x00e37534]
PUSH 0x7
MOV dword ptr [ECX + 0x14],EDX
MOV EDX,dword ptr [0x00e37534]
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [ECX + 0x38],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [ECX + 0x28],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [ECX + 0x18],EDX
MOV EDX,dword ptr [0x00e37538]
MOV dword ptr [ECX + 0x8],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [ECX + 0x3c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [ECX + 0x2c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [ECX + 0x1c],EDX
MOV EDX,dword ptr [0x00e3753c]
MOV dword ptr [ECX + 0xc],EDX
MOV EDX,dword ptr [ESP + 0x2c]
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [ESI + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x34]
MOV dword ptr [ESI],ECX
MOV dword ptr [ESI + 0x8],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [ESI + 0xc],EDX
MOV dword ptr [ESI + 0x14],EDX
MOV EDX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESI + 0x10],ECX
MOV dword ptr [ESI + 0x18],ECX
MOV dword ptr [ESI + 0x1c],EDX
MOV EAX,dword ptr [EAX + 0x8]
PUSH EAX
CALL 0x0048de10
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
RET
