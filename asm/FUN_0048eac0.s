; FUN_0048eac0
MOV EAX,[0x00deb10c]
TEST EAX,EAX
JZ 0x0048ead4
MOV ECX,dword ptr [ESP + 0x4]
PUSH ECX
CALL EAX
ADD ESP,0x4
RET
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH ESI
CALL 0x0048eb00
MOV EDX,dword ptr [0x00ecc428]
ADD ESP,0x4
PUSH ESI
CALL dword ptr [EDX + 0x24]
ADD ESP,0x4
POP ESI
RET
