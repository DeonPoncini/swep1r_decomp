; FUN_00490bf0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JZ 0x00490c0e
PUSH ESI
CALL 0x00490c10
MOV EAX,[0x00ecc428]
ADD ESP,0x4
PUSH ESI
CALL dword ptr [EAX + 0x24]
ADD ESP,0x4
POP ESI
RET
