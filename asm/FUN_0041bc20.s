; FUN_0041bc20
FLD dword ptr [ESP + 0x4]
FMUL dword ptr [0x004ac414]
PUSH ESI
PUSH EDI
FLD ST0
CALL 0x0049ed20
MOV EDI,EAX
MOV dword ptr [ESP + 0xc],EDI
FISUB dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ac418]
FLD ST0
CALL 0x0049ed20
MOV ESI,EAX
MOV dword ptr [ESP + 0xc],ESI
FILD dword ptr [ESP + 0xc]
FSUBR ST0,ST1
FSUB dword ptr [0x004ac41c]
FMUL dword ptr [0x004ac420]
CALL 0x0049ed20
CMP EAX,0x64
FSTP ST0
JNZ 0x0041bc77
XOR EAX,EAX
INC ESI
CMP ESI,0x3c
JNZ 0x0041bc77
INC EDI
TEST EDI,EDI
PUSH EAX
PUSH ESI
JZ 0x0041bc98
PUSH EDI
PUSH 0x4b6738
PUSH 0x4e9f20
CALL 0x0049eb80
ADD ESP,0x14
MOV EAX,0x4e9f20
POP EDI
POP ESI
RET
PUSH 0x4b672c
PUSH 0x4e9f20
CALL 0x0049eb80
ADD ESP,0x10
MOV EAX,0x4e9f20
POP EDI
POP ESI
RET
