; FUN_00489d90
PUSH ESI
MOV ESI,dword ptr [0x0052d450]
TEST ESI,ESI
JZ 0x00489dac
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV ECX,0x14
XOR EAX,EAX
MOVSD.REP ES:EDI,ESI
POP EDI
POP ESI
RET
MOV EAX,0x1
POP ESI
RET