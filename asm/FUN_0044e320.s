; FUN_0044e320
SUB ESP,0x8
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x14]
PUSH ESI
PUSH EDI
MOV ECX,0x3f5
XOR EAX,EAX
MOV EDI,EBP
STOSD.REP ES:EDI
MOV EBX,0x3
XOR EDI,EDI
MOV byte ptr [EBP + 0x4],0x1
MOV byte ptr [EBP + 0x5],0xe1
MOV byte ptr [EBP + 0x6],0xc8
MOV byte ptr [EBP + 0x7],AL
MOV dword ptr [EBP + 0x8],EBX
MOV dword ptr [0x0050c75c],EDI
CALL 0x00426910
MOV dword ptr [EBP + 0x10],0x22e01
MOV byte ptr [EBP + 0xc],0x7
MOV byte ptr [EBP + 0xd],BL
MOV byte ptr [EBP + 0xe],0x1
MOV byte ptr [EBP + 0xf],0x0
MOV dword ptr [ESP + 0x1c],EDI
LEA ECX,[EBP + 0x21c]
LEA EAX,[EBP + 0x924]
MOV dword ptr [ESP + 0x14],0x19
MOV BL,0x41
XOR ESI,ESI
MOV dword ptr [ESP + 0x10],0x2
JMP 0x0044e398
MOV BL,0x41
MOV dword ptr [ECX + 0xffffff38],0x4560ffd7
MOV dword ptr [ECX],0x4560ffd7
MOV EDX,0x20
MOV byte ptr [EAX + 0xfffff9c0],BL
MOV byte ptr [EAX],BL
INC EAX
DEC EDX
JNZ 0x0044e3ad
MOV EBX,dword ptr [ESP + 0x1c]
LEA EDX,[EBP + EDI*0x2 + 0xf64]
INC ESI
ADD ECX,0x4
MOV BL,byte ptr [EBX + 0x4bfef2]
MOV byte ptr [EDX + ESI*0x1 + -0x1],BL
MOV EBX,dword ptr [ESP + 0x1c]
LEA EDX,[EBP + EDI*0x2 + 0xf96]
MOV BL,byte ptr [EBX + 0x4bfef2]
MOV byte ptr [EDX + ESI*0x1 + -0x1],BL
MOV EDX,dword ptr [ESP + 0x10]
DEC EDX
MOV dword ptr [ESP + 0x10],EDX
JNZ 0x0044e396
MOV ESI,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x14]
INC EDI
ADD ESI,0xc
DEC EDX
MOV dword ptr [ESP + 0x1c],ESI
MOV dword ptr [ESP + 0x14],EDX
JNZ 0x0044e388
XOR ESI,ESI
MOV EDI,0x4
PUSH ESI
PUSH 0x1
CALL 0x0043ea00
ADD ESP,0x8
INC ESI
DEC EDI
JNZ 0x0044e414
PUSH 0xe364a0
CALL 0x0044e440
ADD ESP,0x4
MOV [0x00e364a0],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET
