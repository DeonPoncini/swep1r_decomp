; FUN_004686b0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
XOR EDI,EDI
CMP ESI,EDI
JZ 0x004687f4
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x14]
AND byte ptr [ESI + 0x7],0xfe
PUSH EDI
PUSH EDI
LEA EDX,[ESI + 0x44]
PUSH EDI
PUSH EDX
MOV dword ptr [ESI + 0x30],EAX
MOV dword ptr [ESI + 0x34],ECX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESI + 0x50]
PUSH EDI
PUSH EDI
PUSH EDI
PUSH EAX
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x5c]
PUSH EDI
PUSH EDI
PUSH EDI
PUSH ECX
CALL 0x0042f7b0
MOV EDX,dword ptr [ESP + 0x28]
ADD ESP,0x10
MOV dword ptr [ESI + 0x88],0xffffffff
MOV dword ptr [ESI + 0x8],EDX
MOV dword ptr [ESI + 0x10],EDI
MOV dword ptr [ESI + 0x14],EDI
MOV dword ptr [ESI + 0x18],EDI
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
PUSH EDI
FILD dword ptr [ESP + 0x10]
PUSH EDI
LEA EAX,[ESI + 0x20]
PUSH EDI
PUSH EAX
FMUL dword ptr [0x004ad594]
FMUL dword ptr [0x004ad598]
FSUB dword ptr [0x004ad608]
FSTP dword ptr [ESI + 0x1c]
CALL 0x0042f7b0
ADD ESP,0x10
LEA ECX,[ESI + 0x38]
MOV dword ptr [ESI + 0x2c],EDI
PUSH EDI
PUSH EDI
PUSH EDI
PUSH ECX
CALL 0x0042f7b0
MOV EAX,0x42b40000
MOV ECX,0x3f800000
MOV dword ptr [ESI + 0x68],EAX
MOV dword ptr [ESI + 0x6c],EAX
MOV dword ptr [ESI + 0x70],EAX
MOV EAX,0xbf800000
ADD ESP,0x10
MOV dword ptr [ESI + 0x74],EDI
MOV dword ptr [ESI + 0x78],ECX
MOV dword ptr [ESI + 0x7c],EDI
MOV dword ptr [ESI + 0x80],EAX
MOV dword ptr [ESI + 0x84],EAX
MOV dword ptr [ESI + 0x8c],EDI
MOV dword ptr [ESI + 0x90],EDI
MOV dword ptr [ESI + 0x94],ECX
MOV dword ptr [ESI + 0x98],EDI
MOV dword ptr [ESI + 0x9c],EDI
MOV dword ptr [ESI + 0xa0],EDI
MOV dword ptr [ESI + 0xa4],0xffffffff
MOV dword ptr [ESI + 0xa8],EDI
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad594]
FADD ST0,ST0
MOV dword ptr [ESI + 0xb0],EDI
MOV dword ptr [ESI + 0xb4],EDI
MOV dword ptr [ESI + 0xb8],0xffffffff
FSUB dword ptr [0x004ad608]
FSTP dword ptr [ESI + 0xac]
POP EDI
POP ESI
RET
