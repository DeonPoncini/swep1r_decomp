; FUN_0047ddc0
SUB ESP,0x40
MOV ECX,0x32
XOR EAX,EAX
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x4c]
PUSH EDI
MOV EDI,0xe27000
MOV [0x0050cb48],EAX
STOSD.REP ES:EDI
MOV [0x0050cb44],EAX
MOV EAX,[0x0050cb40]
XOR EBX,EBX
MOV dword ptr [0x0050cb4c],ESI
TEST EAX,EAX
JZ 0x0047ddf8
CALL 0x0047d890
MOV EDI,dword ptr [ESP + 0x58]
CMP ESI,0x1
JNZ 0x0047df5e
CALL 0x0047dd90
PUSH 0xfe
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
PUSH 0x0
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe0],EAX
JZ 0x0047de4f
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
PUSH 0xfb
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e64],EAX
PUSH 0x1
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe4],EAX
JZ 0x0047dea6
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV EDX,dword ptr [ESI]
PUSH 0xc4
MOV dword ptr [EAX*0x4 + 0xe259c0],EDX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e68],EAX
PUSH 0x2
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe8],EAX
JZ 0x0047defd
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
PUSH 0xc5
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
MOV [0x00e25e6c],EAX
MOV EDX,dword ptr [ESI]
ADD ESP,0x4
MOV EAX,dword ptr [EDX + 0x18]
TEST EDI,EDI
MOV EAX,dword ptr [EAX + 0x4]
MOV [0x00e26fec],EAX
MOV [0x00e26fcc],EAX
MOV ECX,dword ptr [ESI]
MOV EDX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EDX]
MOV [0x00e26ff0],EAX
MOV [0x00e26fd0],EAX
JZ 0x0047df5e
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
CMP dword ptr [ESP + 0x50],0x2
JNZ 0x0047dfff
CALL 0x0047dd90
PUSH 0x9b
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
MOV ESI,dword ptr [ESI]
PUSH 0x132
MOV dword ptr [0x00e26fe0],ESI
MOV dword ptr [0x00e26fc0],ESI
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e64],EAX
PUSH 0x1
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe4],EAX
JZ 0x0047dfde
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
TEST EDI,EDI
MOV [0x00e25df4],EAX
JZ 0x0047dfff
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
MOV ESI,dword ptr [ESP + 0x50]
CMP ESI,0x3
JNZ 0x0047e01c
CALL 0x0047dd90
TEST EDI,EDI
MOV EBX,EAX
JZ 0x0047e01c
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
CMP ESI,0x4
JNZ 0x0047e1c0
CALL 0x0047dd90
PUSH 0x128
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
PUSH 0x0
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe0],EAX
JZ 0x0047e06f
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV EDX,dword ptr [ESI]
PUSH 0x127
MOV dword ptr [EAX*0x4 + 0xe259c0],EDX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e64],EAX
PUSH 0x1
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe4],EAX
JZ 0x0047e0c6
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
PUSH 0x132
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e6c],EAX
PUSH 0x3
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fec],EAX
JZ 0x0047e11d
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV EDX,dword ptr [ESI]
PUSH 0x13d
MOV dword ptr [EAX*0x4 + 0xe259c0],EDX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e68],EAX
MOV ESI,dword ptr [ESI]
PUSH 0x137
MOV dword ptr [0x00e26fe8],ESI
MOV dword ptr [0x00e26fc8],ESI
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e74],EAX
PUSH 0x5
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26ff4],EAX
JZ 0x0047e19f
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
TEST EDI,EDI
MOV [0x00e25df4],EAX
JZ 0x0047e1c0
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
CMP dword ptr [ESP + 0x50],0x5
JNZ 0x0047e265
CALL 0x0047dd90
PUSH 0x138
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
MOV ESI,dword ptr [ESI]
PUSH 0x13d
MOV dword ptr [0x00e26fe0],ESI
MOV dword ptr [0x00e26fc0],ESI
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e68],EAX
MOV ESI,dword ptr [ESI]
LEA EDX,[ESP + 0xc]
PUSH 0x4019999a
PUSH 0x4019999a
PUSH 0x4019999a
PUSH EDX
MOV dword ptr [0x00e26fe8],ESI
MOV dword ptr [0x00e26fc8],ESI
CALL 0x004310b0
MOV ECX,dword ptr [0x00e26fe8]
ADD ESP,0x10
LEA EAX,[ESP + 0xc]
PUSH EAX
PUSH ECX
CALL 0x00431640
ADD ESP,0x8
TEST EDI,EDI
JZ 0x0047e265
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
CMP dword ptr [ESP + 0x50],0x6
JNZ 0x0047e2d7
CALL 0x0047dd90
PUSH 0x133
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
PUSH 0x0
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe0],EAX
JZ 0x0047e2b6
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV EDX,dword ptr [ESI]
MOV dword ptr [EAX*0x4 + 0xe259c0],EDX
INC EAX
TEST EDI,EDI
MOV [0x00e25df4],EAX
JZ 0x0047e2d7
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
CMP dword ptr [ESP + 0x50],0x7
JNZ 0x0047e349
CALL 0x0047dd90
PUSH 0x135
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
PUSH 0x0
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe0],EAX
JZ 0x0047e328
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
TEST EDI,EDI
MOV [0x00e25df4],EAX
JZ 0x0047e349
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
MOV EAX,dword ptr [ESP + 0x50]
TEST EAX,EAX
JNZ 0x0047e442
CALL 0x0047dd90
PUSH 0xfc
MOV EBX,EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e60],EAX
PUSH 0x0
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe0],EAX
JZ 0x0047e39f
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV EDX,dword ptr [ESI]
PUSH 0xfb
MOV dword ptr [EAX*0x4 + 0xe259c0],EDX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
ADD ESP,0x4
MOV [0x00e25e64],EAX
PUSH 0x1
CALL 0x0047bee0
MOV EAX,dword ptr [ESI]
ADD ESP,0x4
TEST EAX,EAX
MOV [0x00e26fe4],EAX
JZ 0x0047e3f6
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,[0x00e25df4]
MOV ECX,dword ptr [ESI]
PUSH 0x134
MOV dword ptr [EAX*0x4 + 0xe259c0],ECX
INC EAX
MOV [0x00e25df4],EAX
CALL 0x00448780
ADD ESP,0x4
MOV ESI,EAX
PUSH ESI
CALL 0x00448bd0
MOV [0x00e25e68],EAX
MOV ESI,dword ptr [ESI]
ADD ESP,0x4
MOV dword ptr [0x00e26fe8],ESI
TEST EDI,EDI
MOV dword ptr [0x00e26fc8],ESI
JZ 0x0047e442
PUSH EDI
CALL 0x0047dc40
ADD ESP,0x4
POP EDI
MOV EAX,EBX
POP ESI
POP EBX
ADD ESP,0x40
RET