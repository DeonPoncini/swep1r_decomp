; FUN_00483270
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
LEA ECX,[EAX + EAX*0x4]
LEA ECX,[ECX + ECX*0x8]
LEA EDX,[EAX + ECX*0x2]
MOV ECX,dword ptr [EDX*0x4 + 0xdfb040]
AND ECX,0xfffffffe
LEA ESI,[EDX*0x4 + 0xdfb040]
OR EDX,0xffffffff
MOV dword ptr [ESI],ECX
MOV dword ptr [ESI + 0x4],EDX
MOV dword ptr [ESI + 0x8],EDX
MOV dword ptr [ESI + 0xc],EDX
MOV ECX,dword ptr [0x004c7ce0]
LEA EAX,[ESI + 0x10]
MOV dword ptr [ESI + 0x10],ECX
MOV ECX,dword ptr [0x004c7ce4]
MOV dword ptr [EAX + 0x4],ECX
MOV ECX,dword ptr [0x004c7ce8]
MOV dword ptr [EAX + 0x8],ECX
MOV ECX,dword ptr [0x004c7cec]
MOV dword ptr [EAX + 0xc],ECX
XOR EAX,EAX
MOV dword ptr [ESI + 0x20],EAX
MOV dword ptr [ESI + 0x24],EAX
MOV dword ptr [ESI + 0x28],0x140
MOV ECX,0x3f800000
MOV dword ptr [ESI + 0x2c],0xf0
MOV dword ptr [ESI + 0x30],ECX
MOV dword ptr [ESI + 0x34],EAX
MOV dword ptr [ESI + 0x38],EAX
MOV dword ptr [ESI + 0x3c],EAX
MOV dword ptr [ESI + 0x40],EAX
MOV dword ptr [ESI + 0x44],ECX
MOV dword ptr [ESI + 0x48],EAX
MOV dword ptr [ESI + 0x4c],EAX
MOV dword ptr [ESI + 0x50],EAX
MOV dword ptr [ESI + 0x54],EAX
MOV dword ptr [ESI + 0x58],ECX
MOV dword ptr [ESI + 0x5c],EAX
MOV dword ptr [ESI + 0x60],EAX
MOV dword ptr [ESI + 0x64],EAX
MOV dword ptr [ESI + 0x68],EAX
MOV dword ptr [ESI + 0x6c],ECX
MOV dword ptr [ESI + 0x70],ECX
MOV dword ptr [ESI + 0x74],EAX
MOV dword ptr [ESI + 0x78],EAX
MOV dword ptr [ESI + 0x7c],EAX
MOV dword ptr [ESI + 0x80],EAX
MOV dword ptr [ESI + 0x84],ECX
MOV dword ptr [ESI + 0x88],EAX
MOV dword ptr [ESI + 0x8c],EAX
MOV dword ptr [ESI + 0x90],EAX
MOV dword ptr [ESI + 0x94],EAX
MOV dword ptr [ESI + 0x98],ECX
MOV dword ptr [ESI + 0x9c],EAX
MOV dword ptr [ESI + 0xa0],EAX
MOV dword ptr [ESI + 0xa4],EAX
MOV dword ptr [ESI + 0xa8],EAX
MOV dword ptr [ESI + 0xac],ECX
MOV dword ptr [ESI + 0xb0],ECX
MOV dword ptr [ESI + 0xb4],EAX
MOV dword ptr [ESI + 0xb8],EAX
MOV dword ptr [ESI + 0xbc],EAX
MOV dword ptr [ESI + 0xc0],EAX
MOV dword ptr [ESI + 0xc4],ECX
MOV dword ptr [ESI + 0xc8],EAX
MOV dword ptr [ESI + 0xcc],EAX
MOV dword ptr [ESI + 0xd0],EAX
MOV dword ptr [ESI + 0xd4],EAX
MOV dword ptr [ESI + 0xd8],ECX
MOV dword ptr [ESI + 0xdc],EAX
MOV dword ptr [ESI + 0xe0],EAX
MOV dword ptr [ESI + 0xe4],EAX
MOV dword ptr [ESI + 0xe8],EAX
MOV dword ptr [ESI + 0xec],ECX
MOV dword ptr [ESI + 0xf0],ECX
MOV dword ptr [ESI + 0xf4],EAX
MOV dword ptr [ESI + 0xf8],EAX
MOV dword ptr [ESI + 0xfc],EAX
MOV dword ptr [ESI + 0x100],EAX
PUSH ESI
MOV dword ptr [ESI + 0x104],ECX
MOV dword ptr [ESI + 0x108],EAX
MOV dword ptr [ESI + 0x10c],EAX
MOV dword ptr [ESI + 0x110],EAX
MOV dword ptr [ESI + 0x114],EAX
MOV dword ptr [ESI + 0x118],ECX
MOV dword ptr [ESI + 0x11c],EAX
MOV dword ptr [ESI + 0x120],EAX
MOV dword ptr [ESI + 0x124],EAX
MOV dword ptr [ESI + 0x128],EAX
MOV dword ptr [ESI + 0x12c],ECX
MOV word ptr [ESI + 0x130],0x10
MOV dword ptr [ESI + 0x134],0x42b40000
MOV dword ptr [ESI + 0x138],ECX
MOV dword ptr [ESI + 0x13c],0xbf800000
MOV dword ptr [ESI + 0x140],0x40a00000
MOV dword ptr [ESI + 0x144],0x459c4000
MOV dword ptr [ESI + 0x148],ECX
MOV dword ptr [ESI + 0x14c],EAX
MOV dword ptr [ESI + 0x150],ECX
MOV dword ptr [ESI + 0x154],ECX
MOV dword ptr [ESI + 0x158],0x6
MOV dword ptr [ESI + 0x15c],EDX
MOV dword ptr [ESI + 0x160],EAX
MOV dword ptr [ESI + 0x164],EDX
MOV dword ptr [ESI + 0x168],EAX
CALL 0x004830e0
ADD ESP,0x4
PUSH ESI
CALL 0x00482f10
ADD ESP,0x4
POP ESI
RET
