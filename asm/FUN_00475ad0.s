; FUN_00475ad0
SUB ESP,0x6c
MOV ECX,dword ptr [ESP + 0x74]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x7c]
XOR EBX,EBX
PUSH EDI
LEA EAX,[ESI + 0xac]
CMP ECX,EBX
MOV dword ptr [EAX],ECX
MOV dword ptr [EAX + 0x4],EBX
MOV dword ptr [EAX + 0x8],EBX
MOV dword ptr [EAX + 0xc],EBX
MOV dword ptr [EAX + 0x20],EBX
MOV dword ptr [EAX + 0x24],EBX
MOV dword ptr [EAX + 0x28],EBX
MOV dword ptr [EAX + 0x2c],EBX
JZ 0x00475b0c
PUSH EBX
PUSH EAX
CALL 0x0044eef0
ADD ESP,0x8
MOV dword ptr [ESI + 0xb4],0x3c23d70a
MOV dword ptr [ESI + 0x60],EBX
MOV dword ptr [ESI + 0x64],EBX
MOV EDI,dword ptr [ESI + 0x60]
AND EDI,0xfffffff0
MOV dword ptr [ESI + 0x60],EDI
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EAX,EDI
MOV ECX,dword ptr [ECX + 0x4]
CMP ECX,0x4c6f636c
JNZ 0x00475b3c
OR AL,0x20
JMP 0x00475b5f
CMP ECX,0x52454d4f
JNZ 0x00475b55
OR AL,0x40
MOV dword ptr [ESI + 0x60],EAX
MOV dword ptr [ESI + 0x1eb4],0xffffffff
JMP 0x00475b62
CMP ECX,0x41414949
JNZ 0x00475b62
OR AL,0x80
MOV dword ptr [ESI + 0x60],EAX
MOV EDX,dword ptr [ESI + 0x1e70]
TEST byte ptr [EDX + 0x8],0x20
MOV EAX,dword ptr [ESI + 0x60]
JZ 0x00475b76
OR AH,0x1
JMP 0x00475b79
AND AH,0xfe
MOV dword ptr [ESI + 0x60],EAX
MOV EAX,dword ptr [ESI + 0x1e70]
LEA EBP,[ESI + 0x20]
LEA EDI,[ESI + 0x50]
MOV ECX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESI + 0x6c],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x20]
MOV dword ptr [ESI + 0x70],EAX
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x24]
MOV dword ptr [ESI + 0x74],EDX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x28]
MOV dword ptr [ESI + 0x78],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x2c]
MOV dword ptr [ESI + 0x7c],EAX
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x30]
MOV dword ptr [ESI + 0x80],EDX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x34]
MOV dword ptr [ESI + 0x84],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x38]
MOV dword ptr [ESI + 0x88],EAX
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x3c]
MOV dword ptr [ESI + 0x8c],EDX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x40]
MOV dword ptr [ESI + 0x90],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x48]
MOV dword ptr [ESI + 0x98],EAX
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x44]
MOV dword ptr [ESI + 0x94],EDX
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x4c]
MOV dword ptr [ESI + 0x9c],ECX
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x50]
MOV dword ptr [ESI + 0xa0],EAX
MOV EAX,dword ptr [ESP + 0x94]
MOV dword ptr [ESI + 0xa4],0x40000000
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x54]
MOV dword ptr [ESI + 0xa8],EDX
MOV ECX,dword ptr [EAX]
MOV dword ptr [EBP],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ESI + 0x24],EDX
MOV ECX,dword ptr [EAX + 0x8]
MOV dword ptr [ESI + 0x28],ECX
MOV EDX,dword ptr [EAX + 0xc]
MOV dword ptr [ESI + 0x2c],EDX
MOV ECX,dword ptr [EAX + 0x10]
MOV dword ptr [ESI + 0x30],ECX
MOV EDX,dword ptr [EAX + 0x14]
MOV dword ptr [ESI + 0x34],EDX
MOV ECX,dword ptr [EAX + 0x18]
MOV dword ptr [ESI + 0x38],ECX
MOV EDX,dword ptr [EAX + 0x1c]
MOV dword ptr [ESI + 0x3c],EDX
MOV ECX,dword ptr [EAX + 0x20]
MOV dword ptr [ESI + 0x40],ECX
MOV EDX,dword ptr [EAX + 0x24]
MOV dword ptr [ESI + 0x44],EDX
MOV ECX,dword ptr [EAX + 0x28]
MOV dword ptr [ESI + 0x48],ECX
MOV EDX,dword ptr [EAX + 0x2c]
MOV dword ptr [ESI + 0x4c],EDX
MOV ECX,dword ptr [EAX + 0x30]
MOV dword ptr [EDI],ECX
MOV EDX,dword ptr [EAX + 0x34]
MOV dword ptr [ESI + 0x54],EDX
MOV ECX,dword ptr [EAX + 0x38]
MOV dword ptr [ESI + 0x58],ECX
MOV EDX,dword ptr [EAX + 0x3c]
MOV dword ptr [ESI + 0x5c],EDX
MOV EAX,dword ptr [EDI]
MOV ECX,dword ptr [ESI + 0x54]
MOV EDX,dword ptr [ESI + 0x58]
MOV dword ptr [ESP + 0x40],EAX
MOV dword ptr [ESP + 0x44],ECX
LEA EAX,[ESP + 0x10]
MOV dword ptr [ESP + 0x48],EDX
LEA ECX,[ESP + 0x1c]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x90]
LEA EDX,[ESP + 0x44]
PUSH ECX
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x68],0x42200000
MOV dword ptr [ESP + 0x5c],0x0
MOV dword ptr [ESP + 0x60],0x0
MOV dword ptr [ESP + 0x64],0xbf800000
CALL 0x00444d10
FSUB dword ptr [ESI + 0x94]
ADD ESP,0x10
LEA ECX,[ESI + 0x8]
FSUBR dword ptr [ESI + 0x58]
PUSH ECX
PUSH EBP
FSTP dword ptr [ESI + 0x58]
CALL 0x00430b80
MOV dword ptr [ESI + 0x2bc],EBX
MOV EAX,0x3f666666
MOV dword ptr [ESI + 0xdc],EBX
MOV dword ptr [ESI + 0xe0],EAX
MOV dword ptr [ESI + 0xe4],EAX
MOV dword ptr [ESI + 0xe8],EBX
MOV dword ptr [ESI + 0xec],EBX
MOV dword ptr [ESI + 0xf8],EBX
MOV dword ptr [ESI + 0x100],EBX
MOV EAX,0x3f800000
MOV dword ptr [ESI + 0xf0],EBX
MOV dword ptr [ESI + 0x124],EAX
MOV dword ptr [ESI + 0x118],EBX
MOV dword ptr [ESI + 0x11c],EBX
MOV dword ptr [ESI + 0x120],EAX
MOV dword ptr [ESI + 0x128],EBX
MOV dword ptr [ESI + 0x130],EBX
MOV dword ptr [ESI + 0x134],EBX
MOV dword ptr [ESI + 0x138],EBX
MOV dword ptr [ESI + 0x12c],EBX
MOV dword ptr [ESI + 0x104],0x3e4ccccd
MOV dword ptr [ESI + 0x108],0x45fd2000
MOV word ptr [ESI + 0x10c],BX
MOV word ptr [ESI + 0x10e],BX
MOV dword ptr [ESI + 0x110],EBX
MOV dword ptr [ESI + 0x114],EBX
MOV dword ptr [ESI + 0x310],EBX
MOV dword ptr [ESI + 0x338],EBX
MOV dword ptr [ESI + 0x33c],EBX
XOR EDX,EDX
MOV dword ptr [ESI + 0x340],EBX
MOV dword ptr [ESI + 0x314],EDX
MOV dword ptr [ESI + 0x318],EDX
ADD ESP,0x8
MOV dword ptr [ESI + 0x31c],EDX
LEA EAX,[ESI + 0x194]
MOV dword ptr [ESI + 0x320],EDX
MOV dword ptr [ESI + 0x328],EBX
PUSH 0xbf800000
MOV dword ptr [ESI + 0x32c],EBX
PUSH EBX
MOV dword ptr [ESI + 0x324],0xffffffff
PUSH EBX
MOV dword ptr [ESI + 0x18c],EBX
PUSH EAX
MOV dword ptr [ESI + 0x190],0x42000000
CALL 0x0042f7b0
MOV dword ptr [ESI + 0x1a0],EBX
MOV dword ptr [ESI + 0x1b0],EBX
MOV dword ptr [ESI + 0x1b4],EBX
ADD ESP,0x10
MOV dword ptr [ESI + 0x1a4],EBX
PUSH EBX
PUSH EBX
LEA ECX,[ESI + 0x1b8]
PUSH EBX
PUSH ECX
MOV dword ptr [ESI + 0x1a8],EBX
CALL 0x0042f7b0
MOV dword ptr [ESI + 0x1efc],0x3e800000
MOV dword ptr [ESI + 0x1ec],EBX
MOV dword ptr [ESI + 0x1f0],EBX
ADD ESP,0x10
MOV dword ptr [ESI + 0x228],EBX
MOV dword ptr [ESI + 0x220],EBX
MOV dword ptr [ESI + 0x224],EBX
MOV dword ptr [ESI + 0x1f4],EBX
PUSH EBX
MOV dword ptr [ESI + 0x1f8],EBX
PUSH EBX
LEA EDX,[ESI + 0x1c4]
MOV dword ptr [ESI + 0x1fc],EBX
PUSH EBX
MOV dword ptr [ESI + 0x200],EBX
PUSH EDX
MOV dword ptr [ESI + 0x204],EBX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESI + 0x1d0]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x1dc]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESI + 0x144]
PUSH 0x3f800000
PUSH EBX
PUSH EBX
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESI + 0x154]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x16c]
PUSH EDI
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESI + 0x178]
PUSH EDI
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
MOV EDI,0x3f800000
LEA EAX,[ESI + 0x160]
PUSH EDI
PUSH EBX
PUSH EBX
PUSH EAX
CALL 0x0042f7b0
MOV dword ptr [ESI + 0x150],EBX
MOV dword ptr [ESI + 0x1f18],EBX
MOV dword ptr [ESI + 0x250],EBX
MOV dword ptr [ESI + 0x218],0x42c80000
ADD ESP,0x10
MOV dword ptr [ESI + 0x1f00],0x42a00000
MOV dword ptr [ESI + 0x1f04],EBX
XOR ECX,ECX
MOV dword ptr [ESI + 0x1f08],EBX
MOV dword ptr [ESI + 0x2f0],ECX
MOV dword ptr [ESI + 0x2f4],ECX
MOV dword ptr [ESI + 0x2f8],EBX
MOV dword ptr [ESI + 0x2fc],EBX
MOV dword ptr [ESI + 0x19b8],EBX
MOV dword ptr [ESI + 0x1f14],EBX
MOV dword ptr [ESI + 0x208],EBX
MOV dword ptr [ESI + 0x20c],EBX
MOV dword ptr [ESI + 0x1e6c],EBX
MOV dword ptr [ESI + 0x184],EBX
MOV dword ptr [ESI + 0x188],EBX
MOV dword ptr [ESI + 0x1ac],EDI
MOV EAX,dword ptr [ESP + 0x98]
MOV dword ptr [ESI + 0x244],EDI
MOV dword ptr [ESI + 0x240],EBX
MOV dword ptr [ESI + 0x248],EDI
MOV dword ptr [ESI + 0x330],EBX
MOV dword ptr [ESI + 0x334],EBX
MOV dword ptr [ESI + 0x24c],EDI
MOV dword ptr [ESI + 0x1e8],EBX
MOV dword ptr [ESI + 0x22c],EDI
MOV dword ptr [ESI + 0x230],EDI
MOV dword ptr [ESI + 0x234],0x41200000
CMP EAX,EBX
MOV dword ptr [ESI + 0x238],EAX
JGE 0x00476021
MOV dword ptr [ESI + 0x238],EBX
JMP 0x00476046
INC EAX
CMP EAX,0x2
MOV dword ptr [ESI + 0x238],EAX
JLE 0x00476034
DEC EAX
MOV dword ptr [ESI + 0x238],EAX
MOV EAX,dword ptr [ESI + 0x238]
CMP EAX,0x5
JLE 0x00476046
DEC EAX
MOV dword ptr [ESI + 0x238],EAX
MOV EDX,dword ptr [ESI + 0x238]
MOV dword ptr [ESI + 0x264],EBX
MOV dword ptr [ESI + 0x23c],EDX
MOV dword ptr [ESI + 0x268],0x42700000
MOV dword ptr [ESI + 0x1998],EBX
MOV dword ptr [ESI + 0x26c],0xffffff00
MOV dword ptr [ESI + 0x140],EBX
MOV dword ptr [ESI + 0x1f24],EBX
MOV dword ptr [ESI + 0x1f1c],EBX
MOV dword ptr [ESI + 0x1f20],EBX
MOV dword ptr [ESI + 0x21c],EBX
LEA EAX,[ESI + 0x288]
MOV ECX,0x6
MOV dword ptr [EAX + -0x18],EBX
MOV dword ptr [EAX],EBX
MOV dword ptr [EAX + 0x18],EBX
ADD EAX,0x4
DEC ECX
JNZ 0x0047609b
MOV dword ptr [ESI + 0x2b8],EBX
MOV dword ptr [ESI + 0x2bc],EBX
MOV dword ptr [ESI + 0x2c0],EBX
MOV dword ptr [ESI + 0x2c4],EBX
MOV dword ptr [ESI + 0x2c8],EBX
MOV dword ptr [ESI + 0x30c],EBX
MOV dword ptr [ESI + 0x308],EBX
MOV dword ptr [ESI + 0x1e3c],EBX
LEA EDI,[ESI + 0x19bc]
MOV dword ptr [ESP + 0x80],0x12
PUSH EBP
PUSH EDI
CALL 0x0044bb10
MOV EAX,dword ptr [ESP + 0x88]
ADD ESP,0x8
ADD EDI,0x40
DEC EAX
MOV dword ptr [ESP + 0x80],EAX
JNZ 0x004760ea
PUSH EBX
PUSH EBX
LEA EAX,[ESI + 0x1e48]
PUSH EBX
PUSH EAX
MOV dword ptr [ESI + 0x1e40],0x9
MOV dword ptr [ESI + 0x1e44],0x6
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x1e54]
PUSH EBX
PUSH EBX
PUSH EBX
PUSH ECX
CALL 0x0042f7b0
MOV EAX,dword ptr [ESP + 0x9c]
MOV EDX,dword ptr [ESP + 0x98]
MOV ECX,dword ptr [ESP + 0xa0]
MOV dword ptr [ESI + 0x13c],EAX
MOV EAX,dword ptr [ESP + 0xb4]
ADD ESP,0x10
CMP EAX,EBX
MOV dword ptr [ESI + 0x1e60],EBX
MOV dword ptr [ESI + 0x344],EDX
MOV dword ptr [ESI + 0x300],ECX
MOV dword ptr [ESI + 0x304],EBX
JZ 0x00476199
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00476199
MOV EDX,dword ptr [ESI + 0x1e70]
CMP byte ptr [EDX + 0x10],BL
JZ 0x00476199
MOV dword ptr [ESI + 0x304],0x2
LEA EBP,[ESI + 0x1610]
LEA EDI,[ESI + 0x350]
MOV dword ptr [ESP + 0x8c],0x4b
PUSH EDI
CALL 0x004313d0
ADD ESP,0x4
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EBP
CALL 0x0042f7b0
MOV EAX,dword ptr [ESP + 0x9c]
ADD ESP,0x10
ADD EDI,0x40
ADD EBP,0xc
DEC EAX
MOV dword ptr [ESP + 0x8c],EAX
JNZ 0x004761b0
MOV EAX,0xc4fa0000
LEA EDI,[ESI + 0x199c]
MOV dword ptr [ESI + 0x13c8],EAX
MOV dword ptr [ESI + 0x1408],EAX
MOV EBP,0x4
CALL 0x004816b0
MOV dword ptr [ESP + 0x8c],EAX
ADD EDI,0x4
FILD dword ptr [ESP + 0x8c]
DEC EBP
FMUL dword ptr [0x004adbac]
FMUL dword ptr [0x004adc34]
FSTP dword ptr [EDI + -0x4]
JNZ 0x004761f8
MOV EAX,0x3f800000
MOV dword ptr [ESI + 0x19b0],EBX
MOV dword ptr [ESI + 0x19ac],EAX
MOV dword ptr [ESI + 0x19b4],EAX
MOV EAX,[0x00ec86bc]
LEA ECX,[ESP + 0x5c]
DEC EAX
PUSH ECX
NEG EAX
SBB EAX,EAX
PUSH ESI
AND AL,0xfe
MOV dword ptr [ESP + 0x64],0x734c4f44
ADD EAX,0x2
MOV dword ptr [ESP + 0x68],EAX
CALL 0x00450c00
ADD ESP,0x8
PUSH ESI
CALL 0x0046d4c0
MOV EAX,dword ptr [ESI + 0x344]
ADD ESP,0x4
CMP EAX,EBX
MOV EDI,0x1
JZ 0x004762b5
MOV EAX,dword ptr [EAX + 0xf8]
CMP EAX,EBX
JZ 0x00476285
OR dword ptr [EAX + 0x10],EDI
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0x8]
CMP EAX,EBX
JZ 0x00476295
OR dword ptr [EAX + 0x10],EDI
MOV EAX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EAX + 0x10]
CMP EAX,EBX
JZ 0x004762a5
OR dword ptr [EAX + 0x10],EDI
MOV ECX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [ECX + 0x38]
CMP EAX,EBX
JZ 0x004762b5
OR dword ptr [EAX + 0x10],EDI
MOV EAX,0x40000000
MOV dword ptr [ESI + 0x1e64],EAX
MOV dword ptr [ESI + 0x1e68],EAX
MOV EAX,dword ptr [ESI + 0x344]
CMP EAX,EBX
JZ 0x0047631d
MOV EAX,dword ptr [EAX + 0xf8]
CMP EAX,EBX
JZ 0x0047631d
LEA EDX,[ESP + 0x28]
PUSH EBX
PUSH EDX
PUSH EAX
CALL 0x00482000
ADD ESP,0xc
TEST EAX,EAX
JZ 0x0047631d
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x38]
FSUB dword ptr [ESP + 0x2c]
FXCH
FSUB dword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [0x004adc38]
FXCH
FMUL dword ptr [0x004adc3c]
FXCH
FSTP dword ptr [ESI + 0x1e68]
FSTP dword ptr [ESI + 0x1e64]
MOV EAX,dword ptr [ESI + 0x1e70]
MOV ECX,dword ptr [EAX + 0x18]
CMP dword ptr [ECX],0xe
JNZ 0x0047633f
MOV dword ptr [ESI + 0x1e64],0x40400000
MOV dword ptr [ESI + 0x1e68],0x40a00000
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00476357
PUSH EBX
CALL 0x0040a120
ADD ESP,0x4
PUSH ESI
CALL 0x0040b110
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x60]
TEST AL,0x20
JNZ 0x00476363
TEST AH,0x1
JZ 0x00476378
MOV EDX,dword ptr [ESI + 0x1e70]
MOV EAX,dword ptr [EDX + 0x18]
MOV ECX,dword ptr [EAX]
PUSH ECX
PUSH EDI
CALL 0x00426910
ADD ESP,0x8
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00476387
PUSH ESI
CALL 0x0046d690
ADD ESP,0x4
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x6c
RET
