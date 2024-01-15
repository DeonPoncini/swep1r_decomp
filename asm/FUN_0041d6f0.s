; FUN_0041d6f0
PUSH ECX
MOV EAX,dword ptr [ESP + 0x8]
PUSH EBX
PUSH ESI
XOR EBX,EBX
LEA ESI,[EAX + 0x28]
MOV EAX,[0x004d5e00]
CMP EAX,EBX
JZ 0x0041d8ba
MOV EAX,dword ptr [ESI]
ADD ESI,0x4
CMP EAX,EBX
JLE 0x0041d8ba
PUSH EDI
PUSH EBP
MOV dword ptr [ESP + 0x18],EAX
MOV EDI,dword ptr [ESI]
ADD ESI,0x4
MOV ECX,EDI
ADD ESI,0x4
SHL ECX,0x5
SUB ECX,EDI
ADD ESI,0x4
ADD ESI,0x4
LEA EDX,[EDI + ECX*0x8]
MOV ECX,dword ptr [ESI + -0xc]
ADD ESI,0x4
LEA EAX,[EDI + EDX*0x4]
ADD ESI,0x4
SHL EAX,0x3
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0720],ECX
MOV EDX,dword ptr [ESI + -0x14]
MOV dword ptr [EAX + 0xea0730],EDX
MOV ECX,dword ptr [ESI + -0x10]
MOV dword ptr [EAX + 0xea0740],ECX
MOV EDX,dword ptr [ESI + -0xc]
MOV dword ptr [EAX + 0xea0750],EDX
MOV ECX,dword ptr [ESI + -0x8]
MOV dword ptr [EAX + 0xea0724],ECX
MOV EDX,dword ptr [ESI + -0x4]
MOV dword ptr [EAX + 0xea0734],EDX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0744],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0754],EDX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0728],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0738],EDX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0748],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea0758],EDX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea072c],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea073c],EDX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea074c],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EAX + 0xea075c],EDX
MOV EAX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EDI*0x4 + 0xec7640],EAX
MOV ECX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EDI*0x4 + 0xea0360],ECX
MOV EDX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EDI*0x4 + 0xea0420],EDX
MOV EAX,dword ptr [ESI]
ADD ESI,0x4
MOV dword ptr [EDI*0x4 + 0xea0480],EAX
MOV ECX,dword ptr [ESI]
MOV EDX,dword ptr [ESI + 0x4]
ADD ESI,0x4
ADD ESI,0x4
FLD dword ptr [ESI]
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
ADD ESI,0x4
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [ESI]
MOV EBP,dword ptr [ESI + 0x4]
ADD ESI,0x4
MOV dword ptr [EDI*0x4 + 0xea03c0],EBP
MOV EBP,dword ptr [ESI + 0x4]
ADD ESI,0x4
ADD ESI,0x4
CMP EAX,0x41414949
MOV dword ptr [EDI*0x4 + 0xea01a0],EBP
JNZ 0x0041d87c
MOV EAX,EDI
SHL EAX,0x4
FSTP ST0
MOV dword ptr [EAX + 0xea05c0],0x29a
MOV dword ptr [EAX + 0xea05c4],EBX
MOV dword ptr [EAX + 0xea05c8],EBX
MOV dword ptr [EAX + 0xea05cc],EBX
JMP 0x0041d89d
MOV EAX,EDI
SHL EAX,0x4
MOV dword ptr [EAX + 0xea05c0],ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0xea05c4],EDX
FSTP dword ptr [EAX + 0xea05c8]
MOV dword ptr [EAX + 0xea05cc],ECX
CALL 0x0048c490
MOV dword ptr [EDI*0x4 + 0xea0200],EAX
MOV EAX,dword ptr [ESP + 0x18]
DEC EAX
MOV dword ptr [ESP + 0x18],EAX
JNZ 0x0041d71c
POP EBP
POP EDI
POP ESI
MOV EAX,0x1
POP EBX
POP ECX
RET
