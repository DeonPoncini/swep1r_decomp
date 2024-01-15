; FUN_0044bc20
MOV EAX,[0x0050c6f4]
MOV ECX,dword ptr [0x004c3c08]
MOV dword ptr [0x004c3c0c],0x0
MOV dword ptr [0x0050c6f8],0x1
LEA EAX,[EAX + EAX*0x2]
SHL EAX,0x4
ADD EAX,0xe375c0
TEST ECX,ECX
JZ 0x0044bc74
FLD dword ptr [EAX + 0x24]
FSUB dword ptr [0x0050c6e8]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
FXCH ST2
FSTP dword ptr [EAX + 0x24]
FSUB dword ptr [0x0050c6ec]
FSTP dword ptr [EAX + 0x28]
FSUB dword ptr [0x0050c6f0]
FSTP dword ptr [EAX + 0x2c]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
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
FSTP dword ptr [0x00e37480]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
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
FSTP dword ptr [0x00e37484]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
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
FSTP dword ptr [0x00e37488]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
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
FSTP dword ptr [0x00e3748c]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [0x00e37590]
FXCH
FMUL dword ptr [0x00e37580]
FXCH ST2
FMUL dword ptr [0x00e375a0]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e37490]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [0x00e37594]
FXCH
FMUL dword ptr [0x00e37584]
FXCH ST2
FMUL dword ptr [0x00e375a4]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e37494]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [0x00e37598]
FXCH
FMUL dword ptr [0x00e37588]
FXCH ST2
FMUL dword ptr [0x00e375a8]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e37498]
FLD dword ptr [EAX + 0x10]
FLD dword ptr [EAX + 0xc]
FLD dword ptr [EAX + 0x14]
FXCH ST2
FMUL dword ptr [0x00e3759c]
FXCH
FMUL dword ptr [0x00e3758c]
FXCH ST2
FMUL dword ptr [0x00e375ac]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e3749c]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [0x00e37580]
FXCH
FMUL dword ptr [0x00e375a0]
FXCH ST2
FMUL dword ptr [0x00e37590]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e374a0]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [0x00e37584]
FXCH
FMUL dword ptr [0x00e375a4]
FXCH ST2
FMUL dword ptr [0x00e37594]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e374a4]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [0x00e37588]
FXCH
FMUL dword ptr [0x00e375a8]
FXCH ST2
FMUL dword ptr [0x00e37598]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e374a8]
FLD dword ptr [EAX + 0x18]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [0x00e3758c]
FXCH
FMUL dword ptr [0x00e375ac]
FXCH ST2
FMUL dword ptr [0x00e3759c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [0x00e374ac]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
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
FSTP dword ptr [0x00e374b0]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
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
FSTP dword ptr [0x00e374b4]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
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
MOV ECX,dword ptr [0x004c3c08]
TEST ECX,ECX
FADD dword ptr [0x00e375b8]
FSTP dword ptr [0x00e374b8]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FLD dword ptr [EAX + 0x2c]
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
FSTP dword ptr [0x00e374bc]
JZ 0x0044bfa6
FLD dword ptr [0x0050c6e8]
FADD dword ptr [EAX + 0x24]
FSTP dword ptr [EAX + 0x24]
FLD dword ptr [0x0050c6ec]
FADD dword ptr [EAX + 0x28]
FSTP dword ptr [EAX + 0x28]
FLD dword ptr [0x0050c6f0]
FADD dword ptr [EAX + 0x2c]
FSTP dword ptr [EAX + 0x2c]
JMP 0x0044bbe0
