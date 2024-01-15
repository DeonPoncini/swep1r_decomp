; FUN_004667e0
SUB ESP,0x100
FLD dword ptr [0x004ad57c]
FLD dword ptr [0x004ad2d8]
FLD dword ptr [0x004ad56c]
FLD dword ptr [0x004ad218]
FLD dword ptr [0x004ad218]
FXCH ST4
FSTP dword ptr [0x004c707c]
MOV EAX,dword ptr [ESP + 0x104]
MOV dword ptr [0x004c7084],0xffffffff
FXCH ST2
FSTP dword ptr [0x004c7080]
MOV dword ptr [0x0050cb58],0x0
MOV ECX,dword ptr [EAX + 0x1ac]
MOV EDX,dword ptr [EAX + 0x1c0]
PUSH EBX
FSTP dword ptr [ESP + 0xf8]
PUSH ESI
PUSH EDI
FSTP dword ptr [ESP + 0x104]
MOV dword ptr [ESP + 0xc],0x410a3d71
MOV dword ptr [ESP + 0x10],0x41a00000
MOV dword ptr [ESP + 0x14],0x41333333
MOV dword ptr [ESP + 0x18],0x42180000
MOV dword ptr [ESP + 0x1c],0x0
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x24],0x0
MOV dword ptr [ESP + 0x28],0x0
MOV dword ptr [ESP + 0x2c],0x410c8b44
MOV dword ptr [ESP + 0x30],0x420c0000
MOV dword ptr [ESP + 0x34],0x411b3334
MOV dword ptr [ESP + 0x38],0x42180000
MOV dword ptr [ESP + 0x3c],0x412ccccd
MOV dword ptr [ESP + 0x40],0x42180000
MOV dword ptr [ESP + 0x44],0x4135999a
MOV dword ptr [ESP + 0x48],0x42000000
MOV dword ptr [ESP + 0x4c],0x410c6666
MOV dword ptr [ESP + 0x50],0x41d00000
MOV dword ptr [ESP + 0x54],0x411b3334
MOV dword ptr [ESP + 0x58],0x420c0000
MOV dword ptr [ESP + 0x5c],0x411fdb23
MOV dword ptr [ESP + 0x60],0x42200000
MOV dword ptr [ESP + 0x64],0x0
MOV dword ptr [ESP + 0x68],0x0
MOV dword ptr [ESP + 0x6c],0x411eecc0
MOV dword ptr [ESP + 0x70],0x42100000
MOV dword ptr [ESP + 0x74],0x412d999a
MOV dword ptr [ESP + 0x78],0x420c0000
MOV dword ptr [ESP + 0x7c],0x4124cccd
MOV dword ptr [ESP + 0x80],0x420c0000
MOV dword ptr [ESP + 0x84],0x0
MOV dword ptr [ESP + 0x88],0x0
MOV dword ptr [ESP + 0x8c],0x4120a1cb
MOV dword ptr [ESP + 0x90],0x42140000
MOV dword ptr [ESP + 0x94],0x41200000
MOV dword ptr [ESP + 0x98],0x42080000
MOV dword ptr [ESP + 0x9c],0x4120cccd
MOV dword ptr [ESP + 0xa0],0x420c0000
MOV dword ptr [ESP + 0xa4],0x41273333
MOV dword ptr [ESP + 0xa8],0x41d80000
MOV dword ptr [ESP + 0xac],0x41075c28
MOV dword ptr [ESP + 0xb0],0x41b80000
MOV dword ptr [ESP + 0xb4],0x41139999
MOV dword ptr [ESP + 0xb8],0x42200000
MOV dword ptr [ESP + 0xbc],0x411b3334
MOV dword ptr [ESP + 0xc0],0x420c0000
MOV dword ptr [ESP + 0xc4],0x0
MOV dword ptr [ESP + 0xc8],0x0
MOV dword ptr [ESP + 0xcc],0x410cd4fd
MOV dword ptr [ESP + 0xd0],0x41c80000
MOV dword ptr [ESP + 0xd4],0x41266666
MOV dword ptr [ESP + 0xd8],0x41f00000
MOV dword ptr [ESP + 0xdc],0x4129999a
MOV dword ptr [ESP + 0xe0],0x42040000
MOV dword ptr [ESP + 0xe4],0x0
MOV dword ptr [ESP + 0xe8],0x0
MOV dword ptr [ESP + 0xec],0x410dd70a
MOV dword ptr [ESP + 0xf0],0x42000000
MOV dword ptr [ESP + 0xf4],0x411f147b
MOV dword ptr [ESP + 0xf8],0x41f00000
MOV dword ptr [ESP + 0xfc],0x4121999a
LEA ECX,[EDX + ECX*0x4]
FSTP dword ptr [ESP + 0x108]
FLD dword ptr [ESP + ECX*0x8 + 0xc]
FMUL dword ptr [0x004ad234]
MOV ESI,0x1
MOV EBX,0x2
MOV EDI,0x3
FSTP dword ptr [0x004c707c]
MOV EDX,dword ptr [EAX + 0x1ac]
MOV ECX,dword ptr [EAX + 0x1c0]
LEA EDX,[ECX + EDX*0x4]
FLD dword ptr [ESP + EDX*0x8 + 0x10]
FSTP dword ptr [0x004c7080]
CMP dword ptr [EAX + 0x1ac],ESI
JNZ 0x00466b18
CMP dword ptr [EAX + 0x1c0],EDI
JZ 0x00466b18
MOV dword ptr [0x004c7084],ESI
MOV ECX,dword ptr [EAX + 0x1c0]
TEST ECX,ECX
JNZ 0x00466afc
MOV dword ptr [0x0050cb58],ESI
CMP dword ptr [EAX + 0x1c0],ESI
JNZ 0x00466b0a
MOV dword ptr [0x0050cb58],EBX
CMP dword ptr [EAX + 0x1c0],EBX
JNZ 0x00466b18
MOV dword ptr [0x0050cb58],EDI
CMP dword ptr [EAX + 0x1ac],EDI
JNZ 0x00466b44
CMP dword ptr [EAX + 0x1c0],ESI
JNZ 0x00466b32
MOV dword ptr [0x004c7084],0x6
CMP dword ptr [EAX + 0x1c0],EBX
JNZ 0x00466b44
MOV dword ptr [0x004c7084],0x5
MOV ECX,dword ptr [EAX + 0x1ac]
MOV EDX,0x4
CMP ECX,EDX
JNZ 0x00466b83
MOV ECX,dword ptr [EAX + 0x1c0]
CMP ECX,EDI
JZ 0x00466b83
TEST ECX,ECX
JNZ 0x00466b67
MOV dword ptr [0x004c7084],EBX
CMP dword ptr [EAX + 0x1c0],ESI
JNZ 0x00466b75
MOV dword ptr [0x004c7084],EDI
CMP dword ptr [EAX + 0x1c0],EBX
JNZ 0x00466b83
MOV dword ptr [0x004c7084],EDX
MOV ECX,dword ptr [EAX + 0x1c4]
CMP ECX,-0x1
JNZ 0x00466b9c
FLD dword ptr [0x004c707c]
FMUL dword ptr [0x004ad580]
JMP 0x00466bac
CMP ECX,ESI
JNZ 0x00466bb2
FLD dword ptr [0x004c707c]
FMUL dword ptr [0x004ad584]
FSTP dword ptr [0x004c707c]
TEST byte ptr [EAX + 0x8],0x20
JZ 0x00466bc2
MOV dword ptr [0x004c7080],0x40000000
POP EDI
POP ESI
POP EBX
ADD ESP,0x100
RET
