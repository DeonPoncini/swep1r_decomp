; FUN_00464b90
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
PUSH EDI
XOR EDI,EDI
MOV ECX,dword ptr [ESI + 0x1ac]
MOV dword ptr [ESI + 0x1b8],0xffffffff
CMP ECX,EDI
JNZ 0x00464bd1
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464bc2
MOV dword ptr [ESI + 0x1b8],0x19
CMP EAX,0x1
JNZ 0x00464bd1
MOV dword ptr [ESI + 0x1b8],0x2d
CMP ECX,0x1
JNZ 0x00464c17
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464bea
MOV dword ptr [ESI + 0x1b8],0x11
CMP EAX,0x1
JNZ 0x00464bf9
MOV dword ptr [ESI + 0x1b8],0x1e
CMP EAX,0x2
JNZ 0x00464c08
MOV dword ptr [ESI + 0x1b8],0x1f
CMP EAX,0x3
JNZ 0x00464c17
MOV dword ptr [ESI + 0x1b8],0x2e
CMP ECX,0x2
JNZ 0x00464c4e
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464c30
MOV dword ptr [ESI + 0x1b8],0x22
CMP EAX,0x1
JNZ 0x00464c3f
MOV dword ptr [ESI + 0x1b8],0x52
CMP EAX,0x2
JNZ 0x00464c4e
MOV dword ptr [ESI + 0x1b8],0x30
CMP ECX,0x3
JNZ 0x00464c85
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464c67
MOV dword ptr [ESI + 0x1b8],0x24
CMP EAX,0x1
JNZ 0x00464c76
MOV dword ptr [ESI + 0x1b8],0x26
CMP EAX,0x2
JNZ 0x00464c85
MOV dword ptr [ESI + 0x1b8],0x28
CMP ECX,0x4
JNZ 0x00464ccb
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464c9e
MOV dword ptr [ESI + 0x1b8],0x53
CMP EAX,0x1
JNZ 0x00464cad
MOV dword ptr [ESI + 0x1b8],0x58
CMP EAX,0x2
JNZ 0x00464cbc
MOV dword ptr [ESI + 0x1b8],0x59
CMP EAX,0x3
JNZ 0x00464ccb
MOV dword ptr [ESI + 0x1b8],0x2f
CMP ECX,0x5
JNZ 0x00464d02
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464ce4
MOV dword ptr [ESI + 0x1b8],0x38
CMP EAX,0x1
JNZ 0x00464cf3
MOV dword ptr [ESI + 0x1b8],0x39
CMP EAX,0x2
JNZ 0x00464d02
MOV dword ptr [ESI + 0x1b8],0x54
CMP ECX,0x6
JNZ 0x00464d39
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464d1b
MOV dword ptr [ESI + 0x1b8],0x29
CMP EAX,0x1
JNZ 0x00464d2a
MOV dword ptr [ESI + 0x1b8],0x2a
CMP EAX,0x2
JNZ 0x00464d39
MOV dword ptr [ESI + 0x1b8],0x2b
CMP ECX,0x7
JNZ 0x00464d70
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464d52
MOV dword ptr [ESI + 0x1b8],0x23
CMP EAX,0x1
JNZ 0x00464d61
MOV dword ptr [ESI + 0x1b8],0x3b
CMP EAX,0x2
JNZ 0x00464d70
MOV dword ptr [ESI + 0x1b8],0x3e
MOV EAX,dword ptr [ESI + 0x1b8]
MOV dword ptr [ESI + 0x130],EDI
CMP EAX,EDI
JL 0x00465196
CALL 0x00445b40
MOV EBX,EAX
MOV EAX,dword ptr [ESI + 0x1b8]
PUSH EAX
CALL 0x004472e0
ADD ESP,0x4
MOV dword ptr [ESI + 0x1a4],EAX
CALL 0x00445b40
MOV EDX,dword ptr [0x00e288b4]
SUB EAX,EBX
MOV ECX,dword ptr [ESP + 0x1c]
ADD EDX,EAX
MOV dword ptr [0x00e288b4],EDX
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,EDI
JNZ 0x00464dca
MOV EDX,dword ptr [ECX + 0xc]
MOV dword ptr [ESP + 0x14],EDX
CMP EAX,0x1
JNZ 0x00464dd6
MOV EDX,dword ptr [ECX + 0x10]
MOV dword ptr [ESP + 0x14],EDX
CMP EAX,0x2
JNZ 0x00464de2
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [ESP + 0x14],EDX
CMP EAX,0x3
JNZ 0x00464dee
MOV EAX,dword ptr [ECX + 0xc]
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,dword ptr [ESI + 0x1a4]
CMP EAX,EDI
JZ 0x00465196
CMP dword ptr [ESP + 0x14],EDI
JZ 0x00465196
LEA EBX,[ESI + 0x134]
MOV dword ptr [ESI + 0x130],EDI
CMP EAX,EDI
MOV dword ptr [EBX],EAX
MOV dword ptr [EBX + 0x4],EDI
MOV dword ptr [EBX + 0x8],EDI
MOV dword ptr [EBX + 0xc],EDI
MOV dword ptr [EBX + 0x20],EDI
MOV dword ptr [EBX + 0x24],EDI
MOV dword ptr [EBX + 0x28],EDI
MOV dword ptr [EBX + 0x2c],EDI
JZ 0x00464e37
PUSH EDI
PUSH EBX
CALL 0x0044eef0
ADD ESP,0x8
LEA EAX,[ESI + 0x164]
PUSH EDI
PUSH EAX
PUSH EBX
CALL 0x0044eeb0
MOV EBP,dword ptr [ESP + 0x24]
ADD ESP,0xc
CMP EBP,EDI
MOV dword ptr [ESP + 0x1c],EDI
JZ 0x00464e81
CMP dword ptr [EBP],EDI
JZ 0x00464e81
MOV EDI,dword ptr [EBP]
MOV ECX,dword ptr [ESP + 0x14]
CMP dword ptr [EDI + 0x124],ECX
JNZ 0x00464e77
PUSH 0x30
PUSH EDI
CALL 0x00426820
ADD ESP,0x8
MOV dword ptr [ESP + 0x1c],EDI
MOV EAX,dword ptr [EBP + 0x4]
ADD EBP,0x4
TEST EAX,EAX
JNZ 0x00464e59
MOV EAX,dword ptr [ESP + 0x1c]
TEST EAX,EAX
JNZ 0x00464e92
MOV dword ptr [EBX + 0x4],0x3f800000
JMP 0x00464eaa
MOV ECX,dword ptr [ESI + 0x1a4]
FILD dword ptr [ECX + 0x4]
FSUB dword ptr [0x004ad22c]
FDIV dword ptr [EAX + 0x108]
FSTP dword ptr [EBX + 0x4]
LEA EAX,[ESI + 0x164]
PUSH 0x0
PUSH EAX
PUSH 0x2
PUSH 0x5
CALL 0x00428a60
MOV EDX,dword ptr [ESP + 0x24]
ADD ESP,0x10
PUSH 0x2
PUSH EDX
PUSH 0x5
CALL 0x00428b10
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0xc
MOV dword ptr [ESI + 0x1a8],EAX
MOV dword ptr [0x004c4a60],0x40a00000
MOV dword ptr [0x004c4a5c],0x459c4000
MOV EAX,dword ptr [ESI + 0x1ac]
XOR EDI,EDI
TEST EAX,EAX
JNZ 0x00464f1d
MOV dword ptr [0x004c4a5c],0x458ca000
MOV EDI,0x3e4
MOV EBX,0xdc
MOV EBP,0xea
MOV dword ptr [ESP + 0x14],0xe5
JMP 0x00464f25
MOV EBX,dword ptr [ESP + 0x14]
MOV EBP,dword ptr [ESP + 0x14]
CMP dword ptr [ESI + 0x1ac],0x1
JNZ 0x00464f6e
MOV EAX,dword ptr [ESI + 0x1c0]
MOV dword ptr [0x004c4a5c],0x462be000
CMP EAX,0x3
MOV EDI,0x3e4
JNZ 0x00464f5c
MOV EBX,0xad
MOV EBP,0xb9
MOV dword ptr [ESP + 0x14],0xc6
JMP 0x00464f6e
MOV EBX,0xd2
MOV EBP,0xd7
MOV dword ptr [ESP + 0x14],0xe1
CMP dword ptr [ESI + 0x1ac],0x2
JNZ 0x00464fc0
MOV EAX,dword ptr [ESI + 0x1c0]
TEST EAX,EAX
JNZ 0x00464f8d
MOV dword ptr [0x004c4a5c],0x455ac000
JMP 0x00464fc0
CMP EAX,0x1
JNZ 0x00464fb1
MOV EBX,0x78
MOV dword ptr [0x004c4a5c],0x455ac000
MOV EDI,0x3e4
MOV EBP,0x64
MOV dword ptr [ESP + 0x14],EBX
JMP 0x00464fc0
CMP EAX,0x2
JNZ 0x00464fc0
MOV dword ptr [0x004c4a5c],0x462be000
CMP dword ptr [ESI + 0x1ac],0x3
JNZ 0x00464fe6
MOV EBP,0x81
MOV EDI,0x3e2
MOV EBX,0x9a
MOV dword ptr [ESP + 0x14],EBP
MOV dword ptr [0x004c4a5c],0x462be000
CMP dword ptr [ESI + 0x1ac],0x4
JNZ 0x004650a5
MOV EAX,dword ptr [ESI + 0x1c0]
CMP EAX,0x3
JNZ 0x0046500d
MOV dword ptr [0x004c4a5c],0x459c4000
JMP 0x004650a5
TEST EAX,EAX
JNZ 0x00465034
MOV dword ptr [0x004c4a5c],0x459c4000
MOV EDI,0x3e4
MOV EBX,0xca
MOV EBP,0xb7
MOV dword ptr [ESP + 0x14],0xc3
JMP 0x004650a5
CMP EAX,0x1
JNZ 0x00465065
MOV EAX,[0x00e287e0]
MOV dword ptr [0x004c4a5c],0x44960000
TEST EAX,EAX
MOV EDI,0x3e0
MOV EBX,0x9b
MOV EBP,0x9a
MOV dword ptr [ESP + 0x14],0xa7
JZ 0x004650a5
JMP 0x00465094
CMP EAX,0x2
JNZ 0x004650a5
MOV EAX,[0x00e287e0]
MOV dword ptr [0x004c4a5c],0x44bb8000
TEST EAX,EAX
MOV EDI,0x3de
MOV EBX,0x5a
MOV EBP,0x36
MOV dword ptr [ESP + 0x14],0x28
JZ 0x004650a5
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
CMP dword ptr [ESI + 0x1ac],0x5
JNZ 0x00465100
MOV EAX,dword ptr [ESI + 0x1c0]
MOV EBX,0xbe
TEST EAX,EAX
MOV EBP,0x37
MOV dword ptr [ESP + 0x14],0xa
JNZ 0x004650db
MOV dword ptr [0x004c4a5c],0x45fa0000
MOV EDI,0x3de
JMP 0x00465100
CMP EAX,0x1
JNZ 0x004650ec
MOV dword ptr [0x004c4a5c],0x451c4000
JMP 0x004650fb
CMP EAX,0x2
JNZ 0x00465100
MOV dword ptr [0x004c4a5c],0x457a0000
MOV EDI,0x3e4
CMP dword ptr [ESI + 0x1ac],0x6
JNZ 0x00465113
MOV dword ptr [0x004c4a5c],0x462be000
CMP dword ptr [ESI + 0x1ac],0x7
JNZ 0x00465146
MOV ESI,dword ptr [ESI + 0x1c0]
TEST ESI,ESI
JZ 0x0046513c
CMP ESI,0x1
JNZ 0x00465137
MOV dword ptr [0x004c4a5c],0x451c4000
JMP 0x00465146
CMP ESI,0x2
JNZ 0x00465146
MOV dword ptr [0x004c4a5c],0x45bb8000
TEST EDI,EDI
JZ 0x00465185
PUSH 0x1
CALL 0x0044e0c0
MOV ESI,dword ptr [ESP + 0x18]
ADD ESP,0x4
PUSH 0xff
PUSH ESI
PUSH EBP
PUSH EBX
PUSH 0x3e8
PUSH EDI
CALL 0x0044e0e0
ADD ESP,0x18
PUSH ESI
PUSH EBP
PUSH EBX
CALL 0x00483a60
ADD ESP,0xc
OR byte ptr [0x00e996e0],0x2
POP EDI
POP ESI
POP EBP
POP EBX
RET
PUSH 0x0
CALL 0x0044e0c0
ADD ESP,0x4
OR byte ptr [0x00e996e0],0x2
POP EDI
POP ESI
POP EBP
POP EBX
RET
