; FUN_00484a20
MOV EAX,[0x0050d548]
TEST EAX,EAX
JZ 0x00484a75
MOV EAX,[0x0050d564]
TEST EAX,EAX
JZ 0x00484a38
MOV ECX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [ECX + 0x8]
MOV EAX,[0x0050d560]
TEST EAX,EAX
JZ 0x00484a47
MOV EDX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [EDX + 0x8]
MOV EAX,[0x0050d548]
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x8]
MOV dword ptr [0x0050d564],0x0
MOV dword ptr [0x0050d560],0x0
MOV dword ptr [0x0050d548],0x0
JMP 0x0049e960
RET
