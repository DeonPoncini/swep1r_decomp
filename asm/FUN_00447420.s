; FUN_00447420
PUSH EDI
PUSH 0x3
CALL 0x0042d680
ADD ESP,0x4
PUSH 0x4
PUSH 0xe9823c
PUSH 0x0
PUSH 0x3
CALL 0x0042d640
MOV ECX,dword ptr [0x00e9823c]
ADD ESP,0x10
MOV EAX,ECX
MOV EDX,ECX
AND EAX,0xff00
SHL EDX,0x10
OR EAX,EDX
MOV EDX,ECX
SHR EDX,0x10
AND ECX,0xff0000
OR EDX,ECX
SHL EAX,0x8
SHR EDX,0x8
OR EAX,EDX
CMP EAX,0x6a4
MOV [0x00e9823c],EAX
JLE 0x00447475
JMP 0x00447473
MOV ECX,0x6a4
XOR EAX,EAX
MOV EDI,0xe93860
PUSH 0x3
STOSD.REP ES:EDI
CALL 0x0042d6f0
ADD ESP,0x4
POP EDI
RET
