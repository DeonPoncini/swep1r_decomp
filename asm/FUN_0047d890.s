; FUN_0047d890
MOV EAX,[0x0050cb40]
SUB ESP,0x14
CMP EAX,0x1
JNZ 0x0047d8bf
MOV dword ptr [ESP],0xc604d000
MOV dword ptr [ESP + 0x10],0x455ac000
MOV dword ptr [ESP + 0xc],0x451c4000
MOV dword ptr [ESP + 0x8],0xc5abe000
JMP 0x0047d8e4
CMP EAX,0x2
JNZ 0x0047d8e4
MOV dword ptr [ESP],0xc6115000
MOV dword ptr [ESP + 0x10],0x460ca000
MOV dword ptr [ESP + 0xc],0x45ea6000
MOV dword ptr [ESP + 0x8],0xc5ea6000
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [ESP]
FLD dword ptr [ESP + 0xc]
FSUB dword ptr [ESP + 0x8]
FXCH
FMUL dword ptr [0x004adeec]
FXCH
FMUL dword ptr [0x004adee8]
FXCH
FST dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
FLD ST5
FLD dword ptr [ESP + 0x8]
FADD ST0,ST7
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP]
MOV [0x00e270d0],EAX
FSTP dword ptr [0x00e270d4]
FLD dword ptr [ESP + 0xc]
FSUB ST0,ST7
MOV dword ptr [0x00e270dc],ECX
MOV dword ptr [0x00e27100],EDX
FSTP dword ptr [0x00e270d8]
FLD dword ptr [ESP]
FADD dword ptr [ESP + 0x4]
FSTP dword ptr [0x00e27104]
FXCH ST5
FMUL dword ptr [0x004adef0]
FSUBR dword ptr [ESP]
FSTP dword ptr [0x00e27108]
FXCH ST3
FMUL dword ptr [0x004adef4]
FLD dword ptr [ESP + 0x10]
FXCH
FSUBR dword ptr [ESP]
FSTP dword ptr [0x00e2710c]
FXCH ST2
FMUL dword ptr [0x004adef8]
FLD dword ptr [ESP + 0x4]
FXCH
FSUBR dword ptr [ESP]
FSTP dword ptr [0x00e27110]
FXCH
FMUL dword ptr [0x004adefc]
FXCH ST2
FSUB dword ptr [ESP + 0x4]
FXCH ST3
FMUL dword ptr [0x004adf00]
FXCH ST2
FSUBR dword ptr [ESP]
FXCH ST4
FMUL dword ptr [0x004adebc]
FXCH ST2
FSUBR dword ptr [ESP]
FXCH
FMUL dword ptr [0x004adebc]
FLD dword ptr [ESP + 0x10]
FXCH ST5
FSTP dword ptr [0x00e27114]
FXCH
FSTP dword ptr [0x00e27118]
FXCH ST2
FSTP dword ptr [0x00e2711c]
FXCH ST2
FSTP dword ptr [0x00e27120]
FXCH
FSTP dword ptr [0x00e27124]
FSTP dword ptr [0x00e27128]
FSTP ST0
ADD ESP,0x14
RET
