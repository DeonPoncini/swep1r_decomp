; FUN_00420d90
SUB ESP,0x400
PUSH EBX
PUSH ESI
XOR EBX,EBX
PUSH EDI
MOV dword ptr [0x004eb1ec],EBX
CALL 0x004049e0
PUSH 0x186af
PUSH EBX
MOV dword ptr [0x004eb388],EBX
CALL 0x00414d90
MOV EDX,dword ptr [EAX + 0x4d4]
OR ECX,0xffffffff
MOV EDI,EDX
XOR EAX,EAX
ADD ESP,0x8
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
CMP ECX,0x100
JBE 0x00420ddb
MOV ESI,0x100
JMP 0x00420de9
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
MOV ESI,ECX
PUSH ESI
LEA EAX,[ESP + 0x210]
PUSH EDX
PUSH EAX
CALL 0x0048c340
ADD ESP,0xc
MOV ECX,0x80
XOR EAX,EAX
LEA EDI,[ESP + 0xc]
PUSH 0x186b1
PUSH EBX
STOSD.REP ES:EDI
MOV word ptr [ESP + ESI*0x2 + 0x214],BX
CALL 0x00414d90
MOV EDX,dword ptr [EAX + 0x4d4]
ADD ESP,0x8
CMP EDX,EBX
JZ 0x00420e65
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
CMP ECX,0x100
JBE 0x00420e43
MOV ESI,0x100
JMP 0x00420e51
MOV EDI,EDX
OR ECX,0xffffffff
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
MOV ESI,ECX
PUSH ESI
LEA ECX,[ESP + 0x10]
PUSH EDX
PUSH ECX
CALL 0x0048c340
ADD ESP,0xc
MOV word ptr [ESP + ESI*0x2 + 0xc],BX
MOV ECX,dword ptr [0x004eb38c]
LEA EDX,[ESP + 0xc]
LEA EAX,[ESP + 0x20c]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00404960
ADD ESP,0xc
CMP EAX,EBX
JZ 0x00420f3f
CMP EAX,0x8877014a
JZ 0x00420ec0
PUSH 0x1
PUSH EBX
CMP EAX,0x88770154
PUSH EBX
PUSH 0x4b6a7c
JZ 0x00420eb0
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4b6a04
JMP 0x00420ed7
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4b69c0
JMP 0x00420ed7
PUSH 0x1
PUSH EBX
PUSH EBX
PUSH 0x4b6a7c
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4b6988
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4b69ec
CALL 0x00421360
MOV ESI,dword ptr [ESP + 0x428]
ADD ESP,0x4
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH ESI
CALL 0x004145b0
ADD ESP,0x24
CALL 0x004208c0
CALL 0x00420810
PUSH 0x1
MOV dword ptr [0x004eb39c],EBX
CALL 0x004336d0
ADD ESP,0x4
PUSH EBX
PUSH ESI
CALL 0x00414e60
ADD ESP,0x8
CALL 0x004117e0
PUSH 0xb
CALL 0x00411820
ADD ESP,0x4
POP EDI
POP ESI
POP EBX
ADD ESP,0x400
RET
CALL 0x0041c4f0
PUSH EBX
CALL 0x0041c760
ADD ESP,0x4
CALL 0x0041b700
MOV EDX,dword ptr [0x00ec7620]
PUSH EDX
CALL 0x0041cde0
ADD ESP,0x4
POP EDI
POP ESI
POP EBX
ADD ESP,0x400
RET
