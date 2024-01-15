; FUN_0044efa0
SUB ESP,0x8
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x14]
ADD EAX,ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x4],EAX
FILD dword ptr [ESP + 0x4]
ADD EDX,ECX
MOV dword ptr [ESP],EDX
FILD dword ptr [ESP]
FILD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [0x004accc8]
FILD dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [0x004accc8]
FILD dword ptr [ESP + 0x14]
FXCH ST4
FSUB ST0,ST2
FXCH
FSTP dword ptr [ESP + 0x1c]
FXCH ST2
FSUB dword ptr [ESP + 0x1c]
FXCH ST2
FST dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x34]
FXCH ST2
FST dword ptr [ESP + 0x10]
FMUL dword ptr [ESP + 0x30]
FXCH ST3
FSUB dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x18]
FLD ST3
FXCH
FSUB ST0,ST3
FXCH ST5
FSTP dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FXCH ST2
FADD ST0,ST4
FXCH ST3
FST dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x10]
FXCH ST7
FST dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x34]
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0x30]
FSTP dword ptr [ESP + 0x10]
FMUL dword ptr [ESP + 0x30]
FXCH ST6
FMUL dword ptr [ESP + 0x34]
FXCH ST3
FSUB dword ptr [0x004acccc]
FXCH
FMUL dword ptr [ESP + 0x34]
FXCH ST6
FSTP dword ptr [ESP + 0x34]
FXCH
FMUL dword ptr [ESP + 0x30]
FXCH ST2
FSTP dword ptr [ESP + 0x30]
FXCH ST4
FSTP dword ptr [ESP + 0x14]
FSTP dword ptr [ESP]
FXCH ST2
CALL 0x0049ed20
FLD dword ptr [ESP + 0x1c]
FADD dword ptr [ESP + 0x10]
SAR AX,0x2
FADD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004acccc]
PUSH EAX
CALL 0x0049ed20
FSUB dword ptr [ESP + 0x38]
SAR AX,0x2
PUSH EAX
FADD ST0,ST1
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESP + 0x18]
SAR AX,0x2
PUSH EAX
FADD dword ptr [ESP + 0x3c]
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [ESP + 0x40]
SAR AX,0x2
PUSH EAX
FADD ST0,ST1
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x2c]
FADD dword ptr [ESP + 0x40]
SAR AX,0x2
PUSH EAX
FADD dword ptr [ESP + 0x14]
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
FLD dword ptr [ESP + 0x28]
FSUB dword ptr [ESP + 0x2c]
SAR AX,0x2
PUSH EAX
FADD ST0,ST1
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
FSTP ST0
FLD dword ptr [ESP + 0x34]
FADD dword ptr [ESP + 0x18]
SAR AX,0x2
PUSH EAX
FADD dword ptr [ESP + 0x20]
FSUB dword ptr [0x004acccc]
CALL 0x0049ed20
SAR AX,0x2
PUSH EAX
CALL 0x004327e0
ADD ESP,0x20
ADD ESP,0x8
RET
