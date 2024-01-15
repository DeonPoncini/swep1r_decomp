; FUN_0044e290
MOV EAX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x14]
AND EAX,0xff
AND ECX,0xff
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x1c]
AND EDX,0xff
MOV dword ptr [ESP + 0x14],ECX
FILD dword ptr [ESP + 0x14]
AND ESI,0xff
MOV dword ptr [ESP + 0x10],EDX
FILD dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x14],ESI
POP ESI
FILD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [0x004acca0]
FXCH ST2
FMUL dword ptr [0x004acca0]
FXCH
FMUL dword ptr [0x004acca0]
FXCH ST3
FMUL dword ptr [0x004acca0]
FXCH ST2
FSTP dword ptr [0x00e37530]
FSTP dword ptr [0x00e37534]
FXCH
FSTP dword ptr [0x00e37538]
FSTP dword ptr [0x00e3753c]
RET
