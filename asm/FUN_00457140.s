; FUN_00457140
SUB ESP,0xa8
FLD dword ptr [ESP + 0xb8]
FMUL dword ptr [0x004ad094]
FLD dword ptr [ESP + 0xb4]
FLD dword ptr [ESP + 0xb0]
FSUB dword ptr [0x004ad08c]
FXCH
FSUB dword ptr [0x004ad090]
FXCH ST2
FMUL dword ptr [0x004acf68]
FXCH
FSTP dword ptr [ESP + 0xb0]
MOV EAX,dword ptr [ESP + 0xac]
PUSH ESI
FXCH
FSTP dword ptr [ESP + 0xb8]
MOV ECX,dword ptr [EAX*0x4 + 0xe29a4c]
FSTP dword ptr [ESP + 0x10]
MOV ESI,dword ptr [ECX]
TEST ESI,ESI
JZ 0x00457342
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
CALL 0x0043e210
LEA EDX,[ESP + 0x54]
PUSH 0xe298c0
PUSH EDX
CALL 0x0044bb10
ADD ESP,0x8
LEA EAX,[ESP + 0x4]
PUSH 0xe298f0
PUSH EAX
CALL 0x0042f7d0
MOV ECX,dword ptr [ESP + 0xbc]
ADD ESP,0x8
LEA EDX,[ESP + 0x4]
LEA EAX,[ESP + 0x4]
PUSH 0xe298c0
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
LEA ECX,[ESP + 0x4]
LEA EDX,[ESP + 0x4]
PUSH 0xe298d0
PUSH 0x42fc0000
PUSH ECX
PUSH EDX
CALL 0x0042fa80
MOV EAX,dword ptr [ESP + 0xc8]
ADD ESP,0x10
LEA ECX,[ESP + 0x4]
LEA EDX,[ESP + 0x4]
PUSH 0xe298e0
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042fa80
ADD ESP,0x10
LEA EAX,[ESP + 0x4]
LEA ECX,[ESP + 0x94]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0xa0]
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESP + 0x94]
LEA ECX,[ESP + 0x14]
PUSH EAX
PUSH ECX
CALL 0x00431060
MOV EDX,dword ptr [ESP + 0x84]
MOV EAX,dword ptr [ESP + 0x80]
MOV ECX,dword ptr [ESP + 0x7c]
ADD ESP,0x8
PUSH EDX
PUSH EAX
PUSH ECX
LEA EDX,[ESP + 0x20]
PUSH 0x0
LEA EAX,[ESP + 0x24]
PUSH EDX
PUSH EAX
CALL 0x00431410
MOV ECX,dword ptr [ESP + 0x84]
MOV EDX,dword ptr [ESP + 0x80]
MOV EAX,dword ptr [ESP + 0x7c]
ADD ESP,0x18
PUSH ECX
PUSH EDX
PUSH EAX
LEA ECX,[ESP + 0x20]
PUSH 0x0
LEA EDX,[ESP + 0x24]
PUSH ECX
PUSH EDX
CALL 0x00431410
MOV EAX,dword ptr [ESP + 0x94]
MOV ECX,dword ptr [ESP + 0x90]
MOV EDX,dword ptr [ESP + 0x8c]
ADD ESP,0x18
PUSH EAX
PUSH ECX
PUSH EDX
LEA EAX,[ESP + 0x20]
PUSH 0x0
LEA ECX,[ESP + 0x24]
PUSH EAX
PUSH ECX
CALL 0x00431410
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0x18
LEA EDX,[ESP + 0x14]
PUSH EDX
PUSH EAX
PUSH EAX
PUSH EAX
LEA EAX,[ESP + 0x24]
PUSH EAX
CALL 0x00431450
ADD ESP,0x14
LEA ECX,[ESP + 0x4]
LEA EDX,[ESP + 0x44]
PUSH ECX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
POP ESI
ADD ESP,0xa8
RET
