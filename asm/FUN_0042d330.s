; FUN_0042d330
MOVSX EAX,word ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FIDIV dword ptr [0x00ec85e8]
FMUL dword ptr [0x004ac594]
CALL 0x0049ed20
MOVSX ECX,word ptr [ESP + 0x8]
MOV dword ptr [ESP + 0xc],ECX
PUSH EAX
FILD dword ptr [ESP + 0x10]
FIDIV dword ptr [0x00ec86c4]
FMUL dword ptr [0x004ac598]
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x8]
PUSH EAX
PUSH EDX
CALL 0x004286c0
ADD ESP,0xc
RET
