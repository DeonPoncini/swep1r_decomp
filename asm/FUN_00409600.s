; FUN_00409600
MOVSX EAX,word ptr [ESP + 0x14]
MOVSX ECX,word ptr [ESP + 0x8]
MOVSX EDX,word ptr [ESP + 0x18]
PUSH EBX
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
MOVSX EBX,word ptr [ESP + 0x14]
PUSH ESI
MOV dword ptr [ESP + 0x10],ECX
MOVSX ESI,word ptr [ESP + 0x14]
FILD dword ptr [ESP + 0x10]
MOVSX ECX,word ptr [ESP + 0x28]
PUSH EDI
MOV dword ptr [ESP + 0x20],EDX
MOVSX EDI,word ptr [ESP + 0x28]
FILD dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x14],ESI
FILD dword ptr [ESP + 0x14]
MOVSX EDX,word ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x20],EDI
MOV dword ptr [ESP + 0x14],EBX
FILD dword ptr [ESP + 0x20]
FILD dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x20],ECX
POP EDI
FILD dword ptr [ESP + 0x1c]
MOVSX ECX,word ptr [ESP + 0x30]
SHL EAX,0x4
MOV dword ptr [ESP + 0x1c],EDX
POP ESI
FSTP dword ptr [EAX + 0x4b4348]
FILD dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x18],ECX
MOV ECX,0x3f800000
POP EBX
FSTP dword ptr [EAX + 0x4b434c]
FILD dword ptr [ESP + 0x14]
FSTP dword ptr [EAX + 0x4b4350]
FXCH ST5
FMUL dword ptr [0x004ac358]
FSTP dword ptr [EAX + 0x4b4418]
FXCH ST3
FMUL dword ptr [0x004ac358]
FXCH ST2
FMUL dword ptr [0x004ac358]
FXCH
FMUL dword ptr [0x004ac358]
FXCH ST3
FMUL dword ptr [0x004ac358]
FXCH ST4
FMUL dword ptr [0x004ac358]
FXCH ST2
FSTP dword ptr [EAX + 0x4b4688]
FSTP dword ptr [EAX + 0x4b441c]
FXCH
FSTP dword ptr [EAX + 0x4b468c]
FXCH
FSTP dword ptr [EAX + 0x4b4420]
MOV dword ptr [EAX + 0x4b4424],ECX
FSTP dword ptr [EAX + 0x4b4690]
MOV dword ptr [EAX + 0x4b4694],ECX
RET
