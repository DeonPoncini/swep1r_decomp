; FUN_004834b0
PUSH ESI
CALL 0x0042d470
CALL 0x0042c3e0
CALL 0x0042c400
CALL 0x0042c460
CALL 0x0042c500
XOR ESI,ESI
PUSH ESI
CALL 0x00483270
ADD ESP,0x4
INC ESI
CMP ESI,0x4
JL 0x004834cc
PUSH 0x1
PUSH 0x0
CALL 0x00483230
ADD ESP,0x8
PUSH 0xf0
PUSH 0x140
PUSH 0x0
PUSH 0x0
PUSH 0x0
CALL 0x004831d0
ADD ESP,0x14
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
MOV ECX,dword ptr [0x00e996dc]
ADD ESP,0x14
MOV EAX,0xdfb040
TEST CH,0x4
MOV [0x004c7cdc],EAX
JZ 0x00483555
PUSH 0x0
PUSH 0x1
CALL 0x00483230
ADD ESP,0x8
PUSH 0xe8
PUSH 0x138
PUSH 0x8
PUSH 0x8
PUSH 0x1
CALL 0x004831d0
MOV EAX,[0x004c7cdc]
ADD ESP,0x14
AND dword ptr [EAX],0xfffffffe
CALL 0x0044fcc0
PUSH 0x2
PUSH 0x3
MOV byte ptr [0x00e98244],0x0
MOV byte ptr [0x00e98228],0x0
CALL 0x00445640
ADD ESP,0x8
PUSH 0x0
PUSH 0x5
CALL 0x00445640
ADD ESP,0x8
POP ESI
RET
