; FUN_004219d0
SUB ESP,0x154
MOV EAX,[0x004b6c90]
PUSH EBX
PUSH ESI
PUSH EDI
XOR EBX,EBX
MOV ECX,0x14
MOV ESI,0xe364b4
LEA EDI,[ESP + 0x10]
TEST EAX,EAX
MOV dword ptr [ESP + 0xc],0x10003
MOVSD.REP ES:EDI,ESI
JGE 0x00421a08
XOR EAX,EAX
POP EDI
POP ESI
POP EBX
ADD ESP,0x154
RET
MOV EAX,dword ptr [ESP + 0x164]
LEA ECX,[ESP + 0x60]
PUSH EAX
PUSH 0x4b4f6c
PUSH 0x4b2524
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x10
LEA EDX,[ESP + 0x60]
PUSH 0x4b4f7c
PUSH EDX
CALL 0x00484600
ADD ESP,0x8
LEA EAX,[ESP + 0x60]
PUSH 0x4b6cfc
PUSH EAX
CALL 0x0049f1e0
MOV ESI,EAX
ADD ESP,0x8
TEST ESI,ESI
JZ 0x00421aa1
PUSH ESI
PUSH 0x4
LEA ECX,[ESP + 0x14]
PUSH 0x1
PUSH ECX
CALL 0x004a0160
ADD ESP,0x10
TEST EAX,EAX
JNZ 0x00421a6c
MOV EBX,0x1
PUSH ESI
PUSH 0x50
LEA EDX,[ESP + 0x18]
PUSH 0x1
PUSH EDX
CALL 0x004a0160
ADD ESP,0x10
TEST EAX,EAX
JNZ 0x00421a87
MOV EBX,0x1
PUSH ESI
CALL 0x0049f0f0
ADD ESP,0x4
XOR EAX,EAX
TEST EBX,EBX
SETZ AL
POP EDI
POP ESI
POP EBX
ADD ESP,0x154
RET
MOV EBX,0x1
XOR EAX,EAX
TEST EBX,EBX
POP EDI
POP ESI
SETZ AL
POP EBX
ADD ESP,0x154
RET
