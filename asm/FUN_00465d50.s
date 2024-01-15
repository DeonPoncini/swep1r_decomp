; FUN_00465d50
SUB ESP,0xac
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0xbc]
PUSH EDI
MOV EAX,dword ptr [ESI + 0x64]
LEA EBX,[ESI + 0x64]
MOV dword ptr [ESI + 0xa4],EAX
MOV ECX,dword ptr [ESI + 0x68]
MOV dword ptr [ESI + 0xa8],ECX
MOV EDX,dword ptr [ESI + 0x6c]
MOV dword ptr [ESI + 0xac],EDX
MOV EAX,dword ptr [ESI + 0x70]
MOV dword ptr [ESI + 0xb0],EAX
MOV ECX,dword ptr [ESI + 0x74]
MOV dword ptr [ESI + 0xb4],ECX
MOV EDX,dword ptr [ESI + 0x78]
MOV dword ptr [ESI + 0xb8],EDX
MOV EAX,dword ptr [ESI + 0x7c]
MOV dword ptr [ESI + 0xbc],EAX
MOV ECX,dword ptr [ESI + 0x80]
MOV EAX,dword ptr [ESI + 0x88]
MOV dword ptr [ESI + 0xc0],ECX
MOV EDX,dword ptr [ESI + 0x84]
MOV ECX,dword ptr [ESI + 0x8c]
MOV dword ptr [ESI + 0xc4],EDX
MOV EDX,dword ptr [ESI + 0x90]
MOV dword ptr [ESI + 0xcc],ECX
MOV ECX,dword ptr [ESI + 0x98]
MOV dword ptr [ESI + 0xc8],EAX
MOV EAX,dword ptr [ESI + 0x94]
MOV dword ptr [ESI + 0xd8],ECX
MOV dword ptr [ESI + 0xd0],EDX
MOV EDX,dword ptr [ESI + 0x9c]
MOV dword ptr [ESI + 0xd4],EAX
MOV EAX,dword ptr [ESI + 0xa0]
LEA ECX,[ESP + 0x7c]
PUSH ECX
MOV dword ptr [ESI + 0xdc],EDX
MOV dword ptr [ESI + 0xe0],EAX
CALL 0x004800c0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x004660f3
MOV EAX,dword ptr [ESI + 0x68]
MOV EDX,dword ptr [EBX]
MOV ECX,dword ptr [ESI + 0x6c]
MOV dword ptr [ESI + 0xe8],EAX
MOV EAX,dword ptr [ESI + 0x74]
MOV dword ptr [ESI + 0xe4],EDX
MOV EDX,dword ptr [ESI + 0x70]
MOV dword ptr [ESI + 0xf4],EAX
MOV EAX,dword ptr [ESI + 0x80]
MOV dword ptr [ESI + 0xec],ECX
MOV ECX,dword ptr [ESI + 0x78]
MOV dword ptr [ESI + 0xf0],EDX
MOV EDX,dword ptr [ESI + 0x7c]
MOV dword ptr [ESI + 0x100],EAX
MOV EAX,dword ptr [ESI + 0x8c]
MOV dword ptr [ESI + 0xf8],ECX
MOV ECX,dword ptr [ESI + 0x84]
MOV dword ptr [ESI + 0xfc],EDX
MOV EDX,dword ptr [ESI + 0x88]
MOV dword ptr [ESI + 0x10c],EAX
MOV EAX,dword ptr [ESI + 0x98]
MOV dword ptr [ESI + 0x104],ECX
MOV ECX,dword ptr [ESI + 0x90]
MOV dword ptr [ESI + 0x108],EDX
MOV EDX,dword ptr [ESI + 0x94]
MOV dword ptr [ESI + 0x118],EAX
LEA EAX,[ESP + 0x10]
MOV dword ptr [ESI + 0x110],ECX
MOV ECX,dword ptr [ESI + 0x9c]
MOV dword ptr [ESI + 0x114],EDX
MOV EDX,dword ptr [ESI + 0xa0]
PUSH EAX
PUSH EBX
MOV dword ptr [ESI + 0x11c],ECX
MOV dword ptr [ESI + 0x120],EDX
MOV dword ptr [ESI + 0x1c8],0x1
CALL 0x00430b80
FLD dword ptr [EBX]
MOV ECX,dword ptr [ESI + 0x68]
MOV EDX,dword ptr [ESP + 0x20]
FLD ST0
FMUL dword ptr [0x004ad4f8]
MOV dword ptr [ESP + 0x7c],ECX
ADD ESP,0x8
MOV dword ptr [ESP + 0x18],EDX
MOV dword ptr [ESP + 0x20],0x0
FSUBR dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x24],0x0
LEA EDI,[ESI + 0x10]
MOV EBX,0x3
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ad4f8]
FSUBR dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ad4fc]
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ad4fc]
FSTP dword ptr [ESP + 0x28]
MOV ECX,dword ptr [EDI]
LEA EAX,[ESP + 0x10]
PUSH EAX
PUSH ECX
CALL 0x00431710
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESP + 0x20]
ADD ESP,0x8
ADD EDI,0x4
DEC EBX
MOV dword ptr [ESP + 0x18],EDX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ESP + 0x28]
FSTP dword ptr [ESP + 0x14]
JNZ 0x00465f49
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x7c]
PUSH EAX
PUSH ECX
CALL 0x00430b80
FLD dword ptr [ESP + 0x88]
FLD dword ptr [ESP + 0x84]
FMUL dword ptr [0x004ad4f8]
FLD dword ptr [ESP + 0x84]
FXCH ST2
FMUL dword ptr [0x004ad4f8]
FLD dword ptr [ESP + 0x88]
FXCH ST3
FMUL dword ptr [0x004ad4fc]
FXCH ST2
FSUBR dword ptr [ESP + 0x18]
FXCH ST3
FMUL dword ptr [0x004ad4fc]
FXCH
FSUBR dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x20]
FLD dword ptr [0x004ad218]
FXCH ST5
FSTP dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x1c]
ADD ESP,0x8
LEA EDI,[ESI + 0x1c]
FSTP dword ptr [ESP + 0x18]
FXCH ST2
FSTP dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x24],0x0
MOV EBX,0x3
FSTP dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x28]
MOV EAX,dword ptr [EDI]
LEA EDX,[ESP + 0x10]
PUSH EDX
PUSH EAX
CALL 0x00431710
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x34]
MOV ECX,dword ptr [ESP + 0x20]
ADD ESP,0x8
ADD EDI,0x4
DEC EBX
MOV dword ptr [ESP + 0x18],ECX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ESP + 0x28]
FSTP dword ptr [ESP + 0x14]
JNZ 0x0046600f
MOV EDX,dword ptr [ESP + 0x7c]
MOV EAX,dword ptr [ESP + 0x80]
MOV ECX,dword ptr [ESP + 0x84]
MOV dword ptr [ESP + 0x30],EDX
MOV EDX,dword ptr [ESP + 0x88]
MOV dword ptr [ESP + 0x34],EAX
MOV EAX,dword ptr [ESP + 0x8c]
MOV dword ptr [ESP + 0x38],ECX
MOV ECX,dword ptr [ESP + 0x90]
MOV dword ptr [ESP + 0x3c],EDX
MOV EDX,dword ptr [ESP + 0x94]
MOV dword ptr [ESP + 0x40],EAX
MOV EAX,dword ptr [ESP + 0x98]
MOV dword ptr [ESP + 0x44],ECX
MOV ECX,dword ptr [ESP + 0x9c]
MOV dword ptr [ESP + 0x48],EDX
MOV EDX,dword ptr [ESP + 0xa0]
MOV dword ptr [ESP + 0x4c],EAX
MOV EAX,dword ptr [ESP + 0xa4]
MOV dword ptr [ESP + 0x50],ECX
MOV ECX,dword ptr [ESP + 0xa8]
MOV dword ptr [ESP + 0x54],EDX
MOV EDX,dword ptr [ESP + 0xac]
MOV dword ptr [ESP + 0x58],EAX
MOV EAX,dword ptr [ESP + 0xb0]
MOV dword ptr [ESP + 0x5c],ECX
MOV ECX,dword ptr [ESP + 0xb8]
MOV dword ptr [ESP + 0x60],EDX
FLD dword ptr [ESP + 0xb4]
MOV dword ptr [ESP + 0x64],EAX
MOV dword ptr [ESP + 0x6c],ECX
JMP 0x004662f6
LEA EDX,[ESP + 0x10]
PUSH EDX
PUSH EBX
CALL 0x00430b80
MOV EAX,dword ptr [EBX]
ADD ESP,0x8
FLD dword ptr [ESI + 0x68]
MOV dword ptr [ESP + 0x70],EAX
LEA EDI,[ESI + 0x10]
FLD dword ptr [ESP + 0x70]
FLD ST1
FXCH
FMUL dword ptr [0x004ad2fc]
FLD dword ptr [ESP + 0x70]
FXCH ST2
FMUL dword ptr [0x004ad2fc]
FXCH ST2
FMUL dword ptr [0x004ad4fc]
FXCH
FSUBR dword ptr [ESP + 0x10]
FXCH ST3
FMUL dword ptr [0x004ad4fc]
FXCH ST2
FSUBR dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FLD dword ptr [0x004ad218]
FXCH ST5
FSTP dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x24],0x0
MOV EBP,0x6
FSTP dword ptr [ESP + 0x18]
FXCH ST2
FSTP dword ptr [ESP + 0x20]
FXCH
FSTP dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x28]
MOV EDX,dword ptr [EDI]
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH EDX
CALL 0x00431710
FLD dword ptr [ESP + 0x18]
FSUB dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x8
ADD EDI,0x4
DEC EBP
MOV dword ptr [ESP + 0x18],EAX
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [ESP + 0x28]
FSTP dword ptr [ESP + 0x14]
JNZ 0x0046617a
MOV ECX,dword ptr [EBX]
MOV EDX,dword ptr [ESI + 0x68]
MOV EAX,dword ptr [ESI + 0x6c]
MOV dword ptr [ESP + 0x30],ECX
MOV ECX,dword ptr [ESI + 0x70]
MOV dword ptr [ESP + 0x34],EDX
MOV EDX,dword ptr [ESI + 0x74]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,dword ptr [ESI + 0x78]
MOV dword ptr [ESP + 0x3c],ECX
MOV ECX,dword ptr [ESI + 0x7c]
MOV dword ptr [ESP + 0x40],EDX
MOV EDX,dword ptr [ESI + 0x80]
MOV dword ptr [ESP + 0x44],EAX
MOV EAX,dword ptr [ESI + 0x84]
MOV dword ptr [ESP + 0x48],ECX
MOV ECX,dword ptr [ESI + 0x88]
MOV dword ptr [ESP + 0x4c],EDX
MOV EDX,dword ptr [ESI + 0x8c]
MOV dword ptr [ESP + 0x50],EAX
MOV EAX,dword ptr [ESI + 0x90]
MOV dword ptr [ESP + 0x54],ECX
MOV ECX,dword ptr [ESI + 0x94]
MOV dword ptr [ESP + 0x58],EDX
MOV EDX,dword ptr [ESI + 0x98]
MOV dword ptr [ESP + 0x5c],EAX
MOV EAX,dword ptr [ESI + 0xa0]
MOV dword ptr [ESP + 0x60],ECX
MOV ECX,dword ptr [ESI + 0xa4]
MOV dword ptr [ESP + 0x64],EDX
MOV EDX,dword ptr [ESI + 0xa8]
MOV dword ptr [ESP + 0x6c],EAX
MOV EAX,dword ptr [ESI + 0xac]
MOV dword ptr [ESI + 0xe4],ECX
MOV ECX,dword ptr [ESI + 0xb0]
MOV dword ptr [ESI + 0xe8],EDX
MOV EDX,dword ptr [ESI + 0xb4]
MOV dword ptr [ESI + 0xec],EAX
MOV EAX,dword ptr [ESI + 0xb8]
MOV dword ptr [ESI + 0xf0],ECX
MOV ECX,dword ptr [ESI + 0xbc]
MOV dword ptr [ESI + 0xf4],EDX
MOV EDX,dword ptr [ESI + 0xc0]
MOV dword ptr [ESI + 0xf8],EAX
MOV EAX,dword ptr [ESI + 0xc4]
MOV dword ptr [ESI + 0xfc],ECX
MOV ECX,dword ptr [ESI + 0xc8]
MOV dword ptr [ESI + 0x100],EDX
MOV EDX,dword ptr [ESI + 0xcc]
MOV dword ptr [ESI + 0x104],EAX
MOV EAX,dword ptr [ESI + 0xd0]
MOV dword ptr [ESI + 0x108],ECX
MOV ECX,dword ptr [ESI + 0xd4]
MOV dword ptr [ESI + 0x10c],EDX
MOV EDX,dword ptr [ESI + 0xd8]
MOV dword ptr [ESI + 0x110],EAX
MOV EAX,dword ptr [ESI + 0xdc]
MOV dword ptr [ESI + 0x114],ECX
MOV ECX,dword ptr [ESI + 0xe0]
MOV dword ptr [ESI + 0x118],EDX
FLD dword ptr [ESI + 0x9c]
MOV dword ptr [ESI + 0x11c],EAX
MOV dword ptr [ESI + 0x120],ECX
FSUB dword ptr [0x004ad500]
LEA EDX,[ESP + 0x30]
LEA EAX,[ESP + 0x30]
PUSH EDX
PUSH 0x3f800000
PUSH 0x0
PUSH 0x0
FSTP dword ptr [ESP + 0x78]
PUSH 0x43340000
PUSH EAX
CALL 0x00431390
MOV EDX,dword ptr [ESI + 0x28]
ADD ESP,0x18
LEA ECX,[ESP + 0x30]
PUSH ECX
PUSH EDX
CALL 0x00431640
MOV EAX,dword ptr [ESI + 0x28]
ADD ESP,0x8
PUSH 0x0
PUSH 0x0
PUSH 0xff
PUSH 0x0
PUSH -0x1
PUSH -0x1
PUSH EAX
CALL 0x0042b640
MOV ESI,dword ptr [ESI + 0x28]
ADD ESP,0x1c
TEST ESI,ESI
JZ 0x00466364
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xac
RET
