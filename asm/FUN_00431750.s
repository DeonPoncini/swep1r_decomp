; FUN_00431750
MOV EAX,dword ptr [ESP + 0x8]
CMP EAX,0x8
JGE 0x00431769
TEST EAX,EAX
JL 0x00431769
FLD dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x4]
FSTP dword ptr [ECX + EAX*0x4 + 0x1c]
RET
