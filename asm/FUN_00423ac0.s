; FUN_00423ac0
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
XOR EAX,EAX
TEST EDX,EDX
SETNZ AL
PUSH EAX
PUSH ECX
CALL 0x00423ae0
ADD ESP,0x8
RET
