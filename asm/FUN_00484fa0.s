; FUN_00484fa0
MOV EAX,[0x0050d548]
TEST EAX,EAX
JZ 0x00484faf
MOV ECX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [ECX + 0x34]
RET