; FUN_00450280
MOV EAX,[0x0050c764]
TEST EAX,EAX
JG 0x00450292
MOV EAX,[0x0050c750]
TEST EAX,EAX
JLE 0x004502a6
CALL 0x0044f5f0
CALL 0x00450100
CALL 0x0044ff30
JMP 0x00426910
RET