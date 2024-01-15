; FUN_0044bfb0
MOV EAX,[0x0050c6f4]
SUB ESP,0x40
LEA EAX,[EAX + EAX*0x2]
PUSH ESI
SHL EAX,0x4
LEA ESI,[EAX + 0xe37590]
MOV EAX,[0x004c3c08]
TEST EAX,EAX
JZ 0x0044bff4
FLD dword ptr [ESI + 0x24]
FSUB dword ptr [0x0050c6e8]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [ESI + 0x2c]
FXCH ST2
FSTP dword ptr [ESI + 0x24]
FSUB dword ptr [0x0050c6ec]
FSTP dword ptr [ESI + 0x28]
FSUB dword ptr [0x0050c6f0]
FSTP dword ptr [ESI + 0x2c]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [0x00e375a0]
FXCH
FMUL dword ptr [0x00e37590]
FXCH ST2
FMUL dword ptr [0x00e37580]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [0x00e375a4]
FXCH
FMUL dword ptr [0x00e37594]
FXCH ST2
FMUL dword ptr [0x00e37584]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x8]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [0x00e375a8]
FXCH
FMUL dword ptr [0x00e37598]
FXCH ST2
FMUL dword ptr [0x00e37588]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [ESI + 0x8]
FLD dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [0x00e375ac]
FXCH
FMUL dword ptr [0x00e3759c]
FXCH ST2
FMUL dword ptr [0x00e3758c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x14]
FLD dword ptr [ESI + 0xc]
FXCH ST2
FMUL dword ptr [0x00e37590]
FXCH
FMUL dword ptr [0x00e375a0]
FXCH ST2
FMUL dword ptr [0x00e37580]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x14]
FLD dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x14]
FLD dword ptr [ESI + 0xc]
FXCH ST2
FMUL dword ptr [0x00e37594]
FXCH
FMUL dword ptr [0x00e375a4]
FXCH ST2
FMUL dword ptr [0x00e37584]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x14]
FLD dword ptr [ESI + 0xc]
FXCH ST2
FMUL dword ptr [0x00e37598]
FXCH
FMUL dword ptr [0x00e375a8]
FXCH ST2
FMUL dword ptr [0x00e37588]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESI + 0x10]
FLD dword ptr [ESI + 0x14]
FLD dword ptr [ESI + 0xc]
FXCH ST2
FMUL dword ptr [0x00e3759c]
FXCH
FMUL dword ptr [0x00e375ac]
FXCH ST2
FMUL dword ptr [0x00e3758c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x20]
FLD dword ptr [ESI + 0x1c]
FLD dword ptr [ESI + 0x20]
FLD dword ptr [ESI + 0x18]
FXCH ST2
FMUL dword ptr [0x00e37590]
FXCH
FMUL dword ptr [0x00e375a0]
FXCH ST2
FMUL dword ptr [0x00e37580]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x24]
FLD dword ptr [ESI + 0x1c]
FLD dword ptr [ESI + 0x20]
FLD dword ptr [ESI + 0x18]
FXCH ST2
FMUL dword ptr [0x00e37594]
FXCH
FMUL dword ptr [0x00e375a4]
FXCH ST2
FMUL dword ptr [0x00e37584]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x28]
FLD dword ptr [ESI + 0x1c]
FLD dword ptr [ESI + 0x20]
FLD dword ptr [ESI + 0x18]
FXCH ST2
FMUL dword ptr [0x00e37598]
FXCH
FMUL dword ptr [0x00e375a8]
FXCH ST2
FMUL dword ptr [0x00e37588]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [ESI + 0x1c]
FLD dword ptr [ESI + 0x20]
FLD dword ptr [ESI + 0x18]
FXCH ST2
FMUL dword ptr [0x00e3759c]
FXCH
FMUL dword ptr [0x00e375ac]
FXCH ST2
FMUL dword ptr [0x00e3758c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESP + 0x30]
FLD dword ptr [ESI + 0x24]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [ESI + 0x2c]
FXCH ST2
FMUL dword ptr [0x00e37580]
FXCH
FMUL dword ptr [0x00e37590]
FXCH ST2
FMUL dword ptr [0x00e375a0]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [0x00e375b0]
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [ESI + 0x24]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [ESI + 0x2c]
FXCH ST2
FMUL dword ptr [0x00e37584]
FXCH
FMUL dword ptr [0x00e37594]
FXCH ST2
FMUL dword ptr [0x00e375a4]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [0x00e375b4]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [ESI + 0x24]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [ESI + 0x2c]
FXCH ST2
FMUL dword ptr [0x00e37588]
FXCH
FMUL dword ptr [0x00e37598]
FXCH ST2
FMUL dword ptr [0x00e375a8]
FXCH ST2
FADDP
FXCH
FADDP
MOV EAX,[0x004c3c08]
TEST EAX,EAX
FADD dword ptr [0x00e375b8]
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESI + 0x24]
FLD dword ptr [ESI + 0x28]
FLD dword ptr [ESI + 0x2c]
FXCH ST2
FMUL dword ptr [0x00e3758c]
FXCH
FMUL dword ptr [0x00e3759c]
FXCH ST2
FMUL dword ptr [0x00e375ac]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [0x00e375bc]
FSTP dword ptr [ESP + 0x40]
JZ 0x0044c305
FLD dword ptr [0x0050c6e8]
FADD dword ptr [ESI + 0x24]
FSTP dword ptr [ESI + 0x24]
FLD dword ptr [0x0050c6ec]
FADD dword ptr [ESI + 0x28]
FSTP dword ptr [ESI + 0x28]
FLD dword ptr [0x0050c6f0]
FADD dword ptr [ESI + 0x2c]
FSTP dword ptr [ESI + 0x2c]
CALL 0x0044b660
PUSH ESI
PUSH EAX
CALL 0x0044bad0
ADD ESP,0x8
CALL 0x0044b660
LEA ECX,[ESP + 0x4]
PUSH ECX
PUSH EAX
CALL 0x0044bb10
MOV EAX,dword ptr [ESP + 0x50]
MOV EDX,dword ptr [ESI]
ADD ESP,0x8
MOV dword ptr [EAX + 0xf4],EDX
MOV ECX,dword ptr [ESI + 0x4]
MOV dword ptr [EAX + 0xf8],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV dword ptr [EAX + 0xfc],EDX
MOV ECX,dword ptr [ESI + 0xc]
MOV dword ptr [EAX + 0x100],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV dword ptr [EAX + 0x104],EDX
MOV ECX,dword ptr [ESI + 0x14]
MOV dword ptr [EAX + 0x108],ECX
MOV EDX,dword ptr [ESI + 0x18]
MOV dword ptr [EAX + 0x10c],EDX
MOV ECX,dword ptr [ESI + 0x1c]
MOV dword ptr [EAX + 0x110],ECX
MOV EDX,dword ptr [ESI + 0x20]
MOV dword ptr [EAX + 0x114],EDX
MOV ECX,dword ptr [ESI + 0x24]
MOV dword ptr [EAX + 0x118],ECX
MOV EDX,dword ptr [ESI + 0x28]
MOV dword ptr [EAX + 0x11c],EDX
MOV ECX,dword ptr [ESI + 0x2c]
MOV EDX,dword ptr [ESP + 0x4c]
MOV dword ptr [EAX + 0x120],ECX
MOV dword ptr [EAX + 0xf0],EDX
POP ESI
ADD ESP,0x40
RET
