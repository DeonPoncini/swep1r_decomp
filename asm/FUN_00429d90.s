; FUN_00429d90
FLD dword ptr [ESP + 0xc]
FMUL dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
FILD dword ptr [ESI]
FADDP
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [ESI],EAX
CMP EAX,ECX
JGE 0x00429db2
MOV dword ptr [ESI],ECX
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESI]
CMP ECX,EAX
JLE 0x00429dbe
MOV dword ptr [ESI],EAX
POP ESI
RET
