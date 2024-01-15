; FUN_0045cf00
PUSH ECX
CALL 0x004816b0
MOV dword ptr [ESP],EAX
FILD dword ptr [ESP]
FMUL dword ptr [0x004acfa8]
FADD ST0,ST0
CALL 0x0049ed20
LEA EAX,[EAX + EAX*0x1 + -0x1]
MOV dword ptr [ESP],EAX
FILD dword ptr [ESP]
POP ECX
RET
