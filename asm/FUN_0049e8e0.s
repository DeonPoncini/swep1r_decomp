; FUN_0049e8e0
PUSH ECX
MOV EDX,dword ptr [ESP + 0x8]
LEA EAX,[ESP]
PUSH EDI
LEA ECX,[ESP + 0xc]
PUSH EAX
PUSH ECX
PUSH 0x0
PUSH 0xf003f
PUSH 0x0
PUSH 0x4d1d6c
PUSH 0x0
PUSH EDX
PUSH 0x80000000
CALL dword ptr [0x004ac008]
MOV EDX,dword ptr [ESP + 0x14]
OR ECX,0xffffffff
MOV EDI,EDX
XOR EAX,EAX
SCASB.REPNE ES:EDI
NOT ECX
DEC ECX
PUSH ECX
MOV ECX,dword ptr [ESP + 0x10]
PUSH EDX
PUSH 0x1
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH ECX
CALL dword ptr [0x004ac00c]
MOV EDX,dword ptr [ESP + 0xc]
PUSH EDX
CALL dword ptr [0x004ac004]
POP EDI
POP ECX
RET
