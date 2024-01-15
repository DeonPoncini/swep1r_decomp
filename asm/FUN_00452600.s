; FUN_00452600
SUB ESP,0x24
PUSH EBX
MOV EBX,dword ptr [ESP + 0x2c]
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [EBX + 0xf4]
XOR EBP,EBP
CMP ESI,EBP
JNZ 0x00452626
PUSH EBX
CALL 0x00451ec0
ADD ESP,0x4
POP ESI
POP EBP
POP EBX
ADD ESP,0x24
RET
FLD dword ptr [EBX + 0x70]
FSUB qword ptr [0x00e22a40]
PUSH EDI
FST dword ptr [EBX + 0x70]
MOV EAX,dword ptr [EBX + 0x6c]
CMP EAX,EBP
JNZ 0x004527e2
FCOM dword ptr [0x004acda0]
FNSTSW AX
TEST AH,0x1
JZ 0x004526ac
LEA EAX,[EBX + 0x1b4]
MOV dword ptr [EBX + 0x70],0x3fc00000
ADD ESI,0xac
MOV ECX,0xc
MOV EDI,EAX
MOV dword ptr [EBX + 0x6c],0x2
FSTP ST0
MOVSD.REP ES:EDI,ESI
FLD dword ptr [EBX + 0x1bc]
FSUB qword ptr [0x004ace60]
FSTP dword ptr [EBX + 0x1bc]
LEA ECX,[EBX + 0x1e4]
MOV dword ptr [EBX + 0x1b8],EBP
PUSH ECX
PUSH EAX
CALL 0x0044ed80
ADD ESP,0x8
MOV dword ptr [EBX + 0x1b8],0x3f088889
MOV dword ptr [ESP + 0x38],0x3f800000
JMP 0x004526b6
FSUBR qword ptr [0x004ace00]
FSTP dword ptr [ESP + 0x38]
LEA ESI,[EBX + 0x15c]
LEA EDX,[EBX + 0x168]
PUSH ESI
LEA EAX,[ESP + 0x2c]
PUSH EDX
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x28]
PUSH ECX
CALL 0x0042f9b0
FSTP ST0
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [0x004ace68]
ADD ESP,0x4
LEA EDX,[ESP + 0x28]
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
PUSH ESI
PUSH EAX
CALL 0x0042fa80
MOV ECX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0x10
MOV dword ptr [EBX + 0x18c],ECX
LEA ECX,[ESP + 0x1c]
PUSH ESI
MOV dword ptr [EBX + 0x190],EDX
PUSH ECX
MOV dword ptr [EBX + 0x194],EAX
CALL 0x0042f7d0
ADD ESP,0x8
FLD dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
MOV EDX,dword ptr [ESP + 0x14]
FSTP dword ptr [EBX + 0x58]
MOV EAX,0x3f800000
MOV dword ptr [EBX + 0x50],ECX
MOV ECX,dword ptr [ESP + 0x20]
MOV dword ptr [EBX + 0x20],EAX
MOV dword ptr [EBX + 0x34],EAX
MOV dword ptr [EBX + 0x48],EAX
MOV dword ptr [EBX + 0x5c],EAX
MOV dword ptr [EBX + 0x108],EAX
MOV dword ptr [EBX + 0x11c],EAX
MOV dword ptr [EBX + 0x130],EAX
MOV dword ptr [EBX + 0x144],EAX
MOV EAX,dword ptr [ESP + 0x1c]
MOV dword ptr [EBX + 0x54],EDX
MOV EDX,dword ptr [ESP + 0x24]
POP EDI
MOV dword ptr [EBX + 0x24],EBP
MOV dword ptr [EBX + 0x28],EBP
MOV dword ptr [EBX + 0x2c],EBP
MOV dword ptr [EBX + 0x30],EBP
MOV dword ptr [EBX + 0x38],EBP
MOV dword ptr [EBX + 0x3c],EBP
MOV dword ptr [EBX + 0x40],EBP
MOV dword ptr [EBX + 0x44],EBP
MOV dword ptr [EBX + 0x4c],EBP
MOV dword ptr [EBX + 0x10c],EBP
MOV dword ptr [EBX + 0x110],EBP
MOV dword ptr [EBX + 0x114],EBP
MOV dword ptr [EBX + 0x118],EBP
MOV dword ptr [EBX + 0x120],EBP
MOV dword ptr [EBX + 0x124],EBP
MOV dword ptr [EBX + 0x128],EBP
MOV dword ptr [EBX + 0x12c],EBP
MOV dword ptr [EBX + 0x134],EBP
POP ESI
MOV dword ptr [EBX + 0x138],EAX
MOV dword ptr [EBX + 0x13c],ECX
MOV dword ptr [EBX + 0x140],EDX
POP EBP
POP EBX
ADD ESP,0x24
RET
CMP EAX,0x2
JNZ 0x00452844
FCOMP dword ptr [0x004acda0]
FNSTSW AX
TEST AH,0x1
JZ 0x004527fe
MOV dword ptr [EBX + 0x70],EBP
MOV dword ptr [EBX + 0x6c],0x3
LEA EDX,[EBX + 0x1e4]
LEA EAX,[EBX + 0x1b4]
PUSH EDX
PUSH EAX
CALL 0x0044ed80
ADD ESP,0x8
ADD ESI,0x50
LEA ECX,[ESP + 0x1c]
PUSH ESI
PUSH ECX
CALL 0x0042f7d0
MOV EDX,dword ptr [EBX + 0x214]
MOV EAX,dword ptr [EBX + 0x218]
FLD dword ptr [EBX + 0x21c]
ADD ESP,0x8
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0x14],EAX
JMP 0x00452731
CMP EAX,0x3
FSTP ST0
JNZ 0x0045272d
MOV ECX,dword ptr [ESI + 0x60]
PUSH EBX
AND CH,0xbf
MOV dword ptr [ESI + 0x30c],0x40400000
OR CH,0x20
MOV dword ptr [ESI + 0x60],ECX
CALL 0x00451ec0
MOV EDX,dword ptr [EBX + 0x50]
MOV EAX,dword ptr [EBX + 0x54]
MOV ECX,dword ptr [EBX + 0x138]
MOV dword ptr [ESP + 0x14],EDX
MOV EDX,dword ptr [EBX + 0x13c]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [EBX + 0x140]
ADD ESP,0x4
FLD dword ptr [EBX + 0x58]
MOV dword ptr [ESP + 0x1c],ECX
MOV dword ptr [ESP + 0x20],EDX
MOV dword ptr [ESP + 0x24],EAX
JMP 0x00452731
