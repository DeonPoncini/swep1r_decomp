; FUN_00431df0
SUB ESP,0x80
PUSH ESI
MOV ESI,dword ptr [ESP + 0x88]
PUSH 0x5
PUSH 0x4bfd10
PUSH ESI
MOV dword ptr [ESP + 0x10],0x0
CALL 0x0049f000
ADD ESP,0xc
TEST EAX,EAX
JZ 0x00431edb
PUSH EDI
PUSH EBP
PUSH EBX
PUSH 0x4bfd10
PUSH ESI
CALL 0x0049eb80
MOV EAX,dword ptr [ESI + 0x90]
ADD ESP,0x8
LEA EDX,[ESP + 0x10]
MOV EAX,dword ptr [EAX + 0x7c]
PUSH EDX
PUSH 0x4af208
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX]
MOV ECX,0x1f
XOR EAX,EAX
LEA EDI,[ESP + 0x14]
PUSH 0x0
STOSD.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x14]
LEA EDX,[ESP + 0x18]
PUSH 0x1
MOV dword ptr [ESP + 0x1c],0x7c
MOV ECX,dword ptr [EAX]
PUSH EDX
PUSH 0x0
PUSH EAX
CALL dword ptr [ECX + 0x64]
MOV AL,byte ptr [ESP + 0x18]
MOV ESI,dword ptr [ESP + 0x38]
MOV EBX,dword ptr [ESP + 0x20]
TEST AL,0x8
JZ 0x00431e8c
MOV EAX,dword ptr [ESP + 0x24]
CDQ
SUB EAX,EDX
SAR EAX,0x1
JMP 0x00431e90
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x1c]
TEST ECX,ECX
JLE 0x00431ec9
MOV EBP,ECX
TEST EBX,EBX
JLE 0x00431ebf
MOV EDI,EBX
MOV CX,word ptr [ESI]
ADD ESI,0x2
MOV EDX,ECX
AND ECX,0xf000
AND EDX,0xfff
NOT EDX
OR ECX,EDX
DEC EDI
MOV word ptr [ESI + -0x2],CX
JNZ 0x00431ea0
MOV ECX,EAX
SUB ECX,EBX
DEC EBP
LEA ESI,[ESI + ECX*0x2]
JNZ 0x00431e9a
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x0
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x80]
POP EBX
POP EBP
POP EDI
POP ESI
ADD ESP,0x80
RET
