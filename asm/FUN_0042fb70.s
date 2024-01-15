; FUN_0042fb70
SUB ESP,0x80
MOV ECX,dword ptr [ESP + 0x88]
MOV EAX,dword ptr [ESP + 0x8c]
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [ESP + 0x48],EDX
MOV EDX,dword ptr [ECX + 0xc]
FLD dword ptr [EAX]
MOV dword ptr [ESP + 0x4c],EDX
MOV EDX,dword ptr [ECX + 0x10]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x10]
MOV dword ptr [ESP + 0x50],EDX
MOV EDX,dword ptr [ECX + 0x14]
FLD dword ptr [EAX + 0x14]
MOV dword ptr [ESP + 0x54],EDX
MOV EDX,dword ptr [ECX + 0x18]
FLD dword ptr [ECX]
FLD dword ptr [EAX + 0x20]
MOV dword ptr [ESP + 0x58],EDX
MOV EDX,dword ptr [ECX + 0x1c]
FLD dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x5c],EDX
MOV EDX,dword ptr [ECX + 0x20]
FSTP dword ptr [ESP + 0x44]
MOV dword ptr [ESP + 0x60],EDX
MOV EDX,dword ptr [ECX + 0x24]
FLD dword ptr [EAX + 0x24]
FXCH ST6
FST dword ptr [ESP]
MOV dword ptr [ESP + 0x64],EDX
MOV EDX,dword ptr [ECX + 0x28]
MOV dword ptr [ESP + 0x68],EDX
MOV EDX,dword ptr [ECX + 0x2c]
MOV dword ptr [ESP + 0x6c],EDX
MOV EDX,dword ptr [ECX + 0x30]
MOV dword ptr [ESP + 0x70],EDX
MOV EDX,dword ptr [ECX + 0x34]
FXCH ST5
FST dword ptr [ESP + 0x4]
MOV dword ptr [ESP + 0x74],EDX
MOV EDX,dword ptr [ECX + 0x38]
FXCH ST4
FST dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x78],EDX
MOV EDX,dword ptr [EAX + 0x8]
FXCH ST3
FST dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x18]
FXCH
FST dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ECX + 0x3c]
MOV dword ptr [ESP + 0x18],EDX
MOV EDX,dword ptr [EAX + 0x28]
MOV dword ptr [ESP + 0x7c],ECX
FXCH ST6
FST dword ptr [ESP + 0x24]
MOV ECX,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x28],EDX
MOV EDX,dword ptr [EAX + 0x30]
MOV dword ptr [ESP + 0xc],ECX
FXCH ST5
FMUL ST2
MOV ECX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESP + 0x30],EDX
FLD dword ptr [ESP + 0x30]
FXCH ST4
FMUL dword ptr [ESP + 0x44]
MOV EDX,dword ptr [EAX + 0x38]
MOV dword ptr [ESP + 0x1c],ECX
MOV ECX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESP + 0x38],EDX
FADDP
FXCH ST6
FMUL dword ptr [ESP + 0x48]
MOV dword ptr [ESP + 0x2c],ECX
MOV ECX,dword ptr [EAX + 0x34]
MOV EAX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESP + 0x34],ECX
FADDP ST6,ST0
FXCH ST3
MOV dword ptr [ESP + 0x3c],EAX
FMUL ST1
FLD dword ptr [ESP + 0x34]
FXCH ST3
FMUL dword ptr [ESP + 0x4c]
MOV EAX,dword ptr [ESP + 0x84]
FADDP ST6,ST0
FXCH ST3
FMUL dword ptr [ESP + 0x44]
FXCH ST5
FSTP dword ptr [EAX]
FXCH ST4
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FXCH ST2
FMUL dword ptr [ESP + 0x4c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [EAX + 0x4]
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x10]
FXCH ST5
FMUL ST6
FLD dword ptr [ESP + 0x28]
FXCH ST5
FMUL dword ptr [ESP + 0x44]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x48]
FADDP ST4,ST0
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESP + 0x4c]
FADDP ST5,ST0
FXCH ST4
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x14]
FXCH ST3
FMUL ST6
FLD dword ptr [ESP + 0x2c]
FXCH ST3
FMUL dword ptr [ESP + 0x44]
FADDP
FXCH ST2
FMUL dword ptr [ESP + 0x48]
FADDP ST2,ST0
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [ESP + 0x4c]
FADDP ST3,ST0
FXCH ST2
FSTP dword ptr [EAX + 0xc]
FLD dword ptr [ESP + 0x18]
FXCH
FMUL dword ptr [ESP + 0x50]
FLD dword ptr [ESP + 0x20]
FXCH ST6
FMUL dword ptr [ESP + 0x54]
FADDP
FXCH ST5
FMUL dword ptr [ESP + 0x58]
FADDP ST5,ST0
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x5c]
FADDP ST6,ST0
FXCH ST5
FSTP dword ptr [EAX + 0x10]
FLD dword ptr [ESP + 0x1c]
FXCH ST4
FMUL dword ptr [ESP + 0x50]
FLD dword ptr [ESP + 0x24]
FXCH ST4
FMUL dword ptr [ESP + 0x54]
FADDP
FXCH ST3
FMUL dword ptr [ESP + 0x58]
FADDP ST3,ST0
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [ESP + 0x5c]
FADDP ST4,ST0
FXCH ST3
FSTP dword ptr [EAX + 0x14]
FLD dword ptr [ESP + 0x10]
FXCH ST2
FMUL dword ptr [ESP + 0x50]
FLD dword ptr [ESP + 0x28]
FXCH ST2
FMUL dword ptr [ESP + 0x54]
FADDP
FXCH
FMUL dword ptr [ESP + 0x58]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x50]
FLD dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESP + 0x5c]
FADDP ST6,ST0
FXCH ST5
FSTP dword ptr [EAX + 0x18]
FXCH ST3
FMUL dword ptr [ESP + 0x54]
FLD dword ptr [ESP + 0x20]
FXCH
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x3c]
FXCH ST5
FMUL dword ptr [ESP + 0x58]
FADDP ST4,ST0
FXCH
FMUL dword ptr [ESP + 0x64]
FLD dword ptr [ESP + 0x30]
FXCH ST5
FMUL dword ptr [ESP + 0x5c]
FADDP ST4,ST0
FADDP
FXCH
FMUL dword ptr [ESP + 0x68]
FXCH ST2
FSTP dword ptr [EAX + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FXCH
FADDP ST2,ST0
FADDP
FSTP dword ptr [EAX + 0x20]
FSTP ST0
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x1c]
FXCH ST5
FMUL dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x24]
FXCH ST5
FMUL dword ptr [ESP + 0x64]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x68]
FADDP ST4,ST0
FLD dword ptr [ESP]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [ESP + 0x6c]
FADDP ST5,ST0
FXCH ST4
FSTP dword ptr [EAX + 0x24]
FLD dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x28]
FXCH ST3
FMUL dword ptr [ESP + 0x64]
FADDP
FXCH ST2
FMUL dword ptr [ESP + 0x68]
FADDP ST2,ST0
FLD dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x38]
FMUL dword ptr [ESP + 0x6c]
FADDP ST3,ST0
FXCH ST2
FSTP dword ptr [EAX + 0x28]
FLD dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x60]
FLD dword ptr [ESP + 0x2c]
FXCH ST6
FMUL dword ptr [ESP + 0x64]
FADDP
FXCH ST5
FMUL dword ptr [ESP + 0x68]
FADDP ST5,ST0
FLD dword ptr [ESP + 0x8]
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [ESP + 0x6c]
FADDP ST6,ST0
FXCH ST5
FSTP dword ptr [EAX + 0x2c]
FLD dword ptr [ESP + 0x18]
FXCH ST4
FMUL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x20]
FXCH ST4
FMUL dword ptr [ESP + 0x74]
FADDP
FXCH ST3
FMUL dword ptr [ESP + 0x78]
FADDP ST3,ST0
FLD dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0x7c]
FADDP ST4,ST0
FXCH ST3
FSTP dword ptr [EAX + 0x30]
FLD dword ptr [ESP + 0x1c]
FXCH ST2
FMUL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x24]
FXCH ST2
FMUL dword ptr [ESP + 0x74]
FADDP
FXCH
FMUL dword ptr [ESP + 0x78]
FADDP
FXCH ST4
FMUL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [ESP + 0x7c]
FADDP ST6,ST0
FXCH ST5
FSTP dword ptr [EAX + 0x34]
FXCH ST3
FMUL dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x2c]
FXCH
FADDP ST4,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x70]
FLD dword ptr [ESP + 0x38]
FXCH ST5
FMUL dword ptr [ESP + 0x78]
FADDP ST4,ST0
FXCH
FMUL dword ptr [ESP + 0x74]
FLD dword ptr [ESP + 0x3c]
FXCH ST5
FMUL dword ptr [ESP + 0x7c]
FADDP ST4,ST0
FADDP
FXCH
FMUL dword ptr [ESP + 0x78]
FXCH ST2
FSTP dword ptr [EAX + 0x38]
FXCH ST2
FMUL dword ptr [ESP + 0x7c]
FXCH
FADDP ST2,ST0
FADDP
FSTP dword ptr [EAX + 0x3c]
ADD ESP,0x80
RET
