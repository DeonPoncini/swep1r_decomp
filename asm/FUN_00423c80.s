; FUN_00423c80
CALL 0x004238a0
TEST EAX,EAX
JNZ 0x00423ca3
MOV EAX,[0x0050b594]
MOV ECX,dword ptr [0x004eb550]
PUSH EAX
PUSH ECX
PUSH 0x50b560
CALL 0x00423840
ADD ESP,0xc
RET
