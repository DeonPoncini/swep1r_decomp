; FUN_0045a420
PUSH ECX
FLD dword ptr [ESP + 0x8]
FDIV dword ptr [ESP + 0xc]
LEA EAX,[ESP + 0x8]
LEA ECX,[ESP]
PUSH EAX
PUSH ECX
PUSH ECX
FMUL dword ptr [0x004ad114]
FSTP dword ptr [ESP]
CALL 0x0042f380
FLD dword ptr [0x004acf54]
FSUB dword ptr [ESP + 0x14]
ADD ESP,0xc
FMUL dword ptr [0x004ad118]
FMUL dword ptr [ESP + 0xc]
POP ECX
RET
