; FUN_0042ba20
SUB ESP,0x8
FLD dword ptr [0x004ac57c]
FSUB dword ptr [ESP + 0x20]
MOV EAX,[0x00ec86c4]
MOV ECX,dword ptr [ESP + 0x10]
CDQ
FMUL dword ptr [0x004ac588]
SUB EAX,EDX
PUSH ESI
SAR EAX,0x1
FSUBR dword ptr [0x004ac58c]
SUB ECX,EAX
MOV dword ptr [ESP + 0x4],EAX
MOV dword ptr [ESP + 0x14],ECX
FSTP dword ptr [ESP + 0x8]
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x20]
FIADD dword ptr [ESP + 0x4]
CALL 0x0049ed20
MOV ESI,EAX
MOV EAX,[0x00ec85e8]
CDQ
SUB EAX,EDX
MOV EDX,dword ptr [ESP + 0x18]
SAR EAX,0x1
SUB EDX,EAX
MOV dword ptr [ESP + 0x4],EAX
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x20]
FIADD dword ptr [ESP + 0x4]
CALL 0x0049ed20
PUSH EAX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
PUSH ESI
CALL 0x0042bb00
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ac590]
ADD ESP,0xc
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x2c]
MOV EDX,dword ptr [ESP + 0x28]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x34]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x00428740
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [ESP + 0x30]
ADD ESP,0x14
FSTP dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH EAX
PUSH ESI
CALL 0x004286f0
ADD ESP,0xc
PUSH 0x1
PUSH ESI
CALL 0x004285d0
ADD ESP,0x8
POP ESI
ADD ESP,0x8
RET
