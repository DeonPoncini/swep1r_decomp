; FUN_0048fab0
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JNZ 0x0048fabe
MOV [0x00df7f18],EAX
RET
DEC EAX
NEG EAX
SBB EAX,EAX
AND AL,0x0
ADD EAX,0x200
MOV [0x00df7f18],EAX
RET