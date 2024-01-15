; FUN_00444200
FLD dword ptr [ESP + 0x8]
FMUL dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV [0x00e985b0],EAX
MOV EAX,dword ptr [ESP + 0xc]
FSTP dword ptr [0x00e98e6c]
MOV EDX,dword ptr [ECX]
MOV dword ptr [0x00e98e30],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [0x00e98e34],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [0x00e98e38],EDX
MOV EDX,dword ptr [EAX]
MOV dword ptr [0x00e985a0],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [0x00e985a4],EDX
MOV EDX,dword ptr [EAX + 0x8]
FLD dword ptr [0x00e98e6c]
FMUL dword ptr [0x004aca7c]
MOV dword ptr [0x00e985a8],EDX
MOV EDX,dword ptr [EAX]
MOV dword ptr [0x00e98e10],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [0x00e98e14],EDX
MOV EDX,dword ptr [EAX + 0x8]
MOV dword ptr [0x00e98e18],EDX
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ECX + 0x4]
FLD dword ptr [ECX]
FXCH ST2
FMUL dword ptr [ECX + 0x8]
FXCH ST2
FMUL dword ptr [EAX]
FXCH ST2
FADDP
FXCH ST2
FSTP dword ptr [0x00e98258]
XOR EAX,EAX
MOV word ptr [0x00e98e1c],0x3
FADDP
MOV [0x00e98254],EAX
MOV [0x00e98e70],EAX
MOV [0x00e98250],EAX
MOV dword ptr [0x00e98e20],0x4437c0
FLD ST0
FADD dword ptr [ESP + 0x10]
FXCH
FADD dword ptr [ESP + 0x14]
FXCH
MOV dword ptr [0x00e985ac],0x443560
FSTP dword ptr [0x00e9827c]
MOV EAX,[0x00e9827c]
FSTP dword ptr [0x00e98e00]
MOV ECX,dword ptr [0x00e98e00]
MOV [0x00e9826c],EAX
MOV dword ptr [0x00e98280],ECX
JMP 0x00445150
