; FUN_00473f40
MOV EAX,dword ptr [ESP + 0x8]
SUB ESP,0x58
LEA ECX,[ESP + 0x18]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x68]
PUSH EDI
PUSH EAX
LEA EDX,[ESI + 0xac]
PUSH ECX
PUSH EDX
CALL 0x0044eeb0
ADD ESP,0xc
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x28]
PUSH EAX
PUSH ECX
CALL 0x00430b80
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x1c]
LEA EAX,[ESI + 0x8]
ADD ESP,0x8
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ESP + 0x18]
MOV dword ptr [ESI + 0xc],ECX
MOV ECX,dword ptr [ESP + 0x1c]
MOV dword ptr [ESI + 0x10],EDX
MOV EDX,dword ptr [ESP + 0x20]
MOV dword ptr [ESI + 0x14],ECX
MOV ECX,dword ptr [ESP + 0x24]
MOV dword ptr [ESI + 0x18],EDX
LEA EDX,[ESI + 0x20]
PUSH EAX
PUSH EDX
MOV dword ptr [ESI + 0x1c],ECX
CALL 0x00431060
MOV EDX,dword ptr [ESI + 0x60]
XOR EDI,EDI
AND EDX,0xff65fdef
MOV EBP,0x3f800000
MOV dword ptr [ESI + 0x60],EDX
MOV ECX,dword ptr [ESI + 0x64]
AND ECX,0xff3fffff
ADD ESP,0x8
FLD dword ptr [ESP + 0x70]
MOV dword ptr [ESI + 0x64],ECX
MOV EAX,dword ptr [ESI + 0x60]
FCOMP dword ptr [0x004adba0]
AND EAX,0xfbffffff
MOV dword ptr [ESI + 0x60],EAX
MOV dword ptr [ESI + 0xdc],EDI
MOV dword ptr [ESI + 0xec],EDI
MOV dword ptr [ESI + 0xf8],EDI
MOV dword ptr [ESI + 0x100],EDI
MOV dword ptr [ESI + 0x124],EBP
MOV dword ptr [ESI + 0x118],EDI
MOV dword ptr [ESI + 0x11c],EDI
MOV dword ptr [ESI + 0x120],EBP
MOV word ptr [ESI + 0x10c],DI
FNSTSW AX
MOV word ptr [ESI + 0x10e],DI
MOV dword ptr [ESI + 0x110],EDI
TEST AH,0x1
MOV dword ptr [ESI + 0x114],EDI
JZ 0x00474040
MOV EAX,dword ptr [ESI + 0xe0]
MOV dword ptr [ESI + 0xe8],EAX
PUSH 0xbf800000
PUSH EDI
LEA ECX,[ESI + 0x194]
PUSH EDI
MOV dword ptr [ESI + 0x18c],EDI
PUSH ECX
MOV dword ptr [ESI + 0x190],0x42000000
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESI + 0x1b8]
MOV dword ptr [ESI + 0x1a0],EDI
MOV dword ptr [ESI + 0x1b0],EDI
PUSH EDI
PUSH EDI
PUSH EDI
PUSH EDX
MOV dword ptr [ESI + 0x1b4],EDI
MOV dword ptr [ESI + 0x1a4],EDI
MOV dword ptr [ESI + 0x1a8],EDI
MOV dword ptr [ESI + 0x218],0x42c80000
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESI + 0x1c4]
MOV dword ptr [ESI + 0x1efc],0x3e800000
MOV dword ptr [ESI + 0x1ec],EDI
PUSH EDI
PUSH EDI
PUSH EDI
PUSH EAX
MOV dword ptr [ESI + 0x1f0],EDI
MOV dword ptr [ESI + 0x228],EDI
MOV dword ptr [ESI + 0x220],EDI
MOV dword ptr [ESI + 0x224],EDI
MOV dword ptr [ESI + 0x1f4],EDI
MOV dword ptr [ESI + 0x1f8],EDI
MOV dword ptr [ESI + 0x1fc],EDI
MOV dword ptr [ESI + 0x200],EDI
MOV dword ptr [ESI + 0x204],EDI
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x1d0]
PUSH EDI
PUSH EDI
PUSH EDI
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EDX,[ESI + 0x1dc]
PUSH EDI
PUSH EDI
PUSH EDI
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESI + 0x154]
PUSH EDI
PUSH EDI
PUSH EDI
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x144]
PUSH EBP
PUSH EDI
PUSH EDI
PUSH ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EBX,[ESI + 0x50]
LEA EDX,[ESI + 0x16c]
PUSH EBX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESI + 0x178]
PUSH EBX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
MOV dword ptr [ESI + 0x150],EDI
MOV dword ptr [ESI + 0x1f18],EDI
MOV dword ptr [ESI + 0x250],EDI
MOV dword ptr [ESI + 0x338],EDI
MOV dword ptr [ESI + 0x33c],EDI
MOV dword ptr [ESI + 0x340],EDI
MOV dword ptr [ESI + 0x1f14],EDI
MOV dword ptr [ESI + 0x208],EDI
MOV dword ptr [ESI + 0x20c],EDI
MOV dword ptr [ESI + 0x264],EDI
MOV dword ptr [ESI + 0x19b0],EDI
MOV dword ptr [ESI + 0x184],EDI
MOV dword ptr [ESI + 0x188],EDI
MOV dword ptr [ESI + 0x268],0x42700000
MOV dword ptr [ESI + 0x19ac],EBP
MOV dword ptr [ESI + 0x19b4],EBP
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x58
RET
