; FUN_00483fc0
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV ESI,0xdfb040
PUSH EDI
PUSH ESI
CALL 0x00431a00
ADD ESI,0x16c
ADD ESP,0x8
CMP ESI,0xdfb5f0
JL 0x00483fcb
POP EDI
POP ESI
RET
