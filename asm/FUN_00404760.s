; FUN_00404760
MOV EAX,dword ptr [ESP + 0x4]
PUSH EAX
CALL 0x00486bc0
ADD ESP,0x4
CMP EAX,0x887700fa
JNZ 0x0040478c
PUSH 0xecbc20
PUSH 0x4b292c
PUSH 0x4b75f8
CALL 0x0049eb80
ADD ESP,0xc
RET
TEST EAX,EAX
JZ 0x004047a7
PUSH 0xecbc20
PUSH 0x4b2918
PUSH 0x4b75f8
CALL 0x0049eb80
ADD ESP,0xc
RET
