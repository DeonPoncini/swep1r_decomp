; FUN_00449040
PUSH EDI
PUSH 0x800000
CALL 0x0049f270
LEA ECX,[EAX + 0x800000]
MOV [0x00e98234],EAX
MOV dword ptr [0x00e981e4],ECX
MOV [0x00e98200],EAX
MOV ECX,0xa
XOR EAX,EAX
MOV EDI,0xe98204
ADD ESP,0x4
STOSD.REP ES:EDI
CALL 0x00448f40
CALL 0x00449000
CALL 0x00445b90
POP EDI
RET
