; FUN_00405ea0
SUB ESP,0xc
XOR EAX,EAX
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x18]
PUSH ESI
CMP EBP,EAX
PUSH EDI
JNZ 0x00405f22
MOV EAX,[0x00ec879c]
MOV ECX,dword ptr [0x00ec887c]
MOV EBX,dword ptr [0x00ec8824]
MOV EDI,0x4d5fc0
MOV dword ptr [ESP + 0x20],EAX
MOV dword ptr [ESP + 0x18],ECX
MOV ECX,0xc3
XOR EAX,EAX
MOV dword ptr [ESP + 0x10],EDI
MOV ESI,0x4b2958
STOSD.REP ES:EDI
MOV EAX,[0x004b297c]
MOV ECX,0x6
MOV EDI,0xec8880
MOV EDX,0x4b2f80
TEST EBX,EBX
MOV dword ptr [ESP + 0x14],EBX
MOV [0x00ec876c],EAX
MOVSD.REP ES:EDI,ESI
JZ 0x00405fab
MOV ECX,dword ptr [ESP + 0x20]
MOV EAX,0x4
CMP ECX,EAX
JLE 0x00405fab
MOV dword ptr [ESP + 0x20],EAX
JMP 0x00405fab
CMP EBP,0x1
JNZ 0x00405f79
MOV ECX,dword ptr [0x00ec8770]
MOV dword ptr [ESP + 0x14],EAX
MOV EAX,[0x00ec8808]
MOV EDI,0x4d6518
MOV dword ptr [ESP + 0x20],ECX
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,0xc3
XOR EAX,EAX
MOV dword ptr [ESP + 0x10],EDI
MOV EDX,0x4b3290
STOSD.REP ES:EDI
MOV ECX,dword ptr [0x004b2970]
MOV EAX,[0x004b2974]
MOV dword ptr [0x00ec8790],ECX
MOV ECX,dword ptr [0x004b2978]
MOV [0x00ec8794],EAX
MOV dword ptr [0x00ec8798],ECX
JMP 0x00405fab
CMP EBP,0x2
JNZ 0x00405fa7
MOV EDI,0x4d6828
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x18],EAX
MOV ECX,0xc3
XOR EAX,EAX
MOV dword ptr [ESP + 0x10],EDI
MOV EDX,0x4b35a0
MOV dword ptr [ESP + 0x20],0x100
STOSD.REP ES:EDI
JMP 0x00405fab
MOV EDX,dword ptr [ESP + 0x20]
MOV dword ptr [EBP*0x4 + 0x4d5e20],0x0
MOV dword ptr [EBP*0x4 + 0xec8780],0x3f800000
CMP byte ptr [EDX],0xff
JZ 0x00406061
MOV ECX,EDX
MOV EAX,EDX
TEST byte ptr [ECX],0x8
JZ 0x00405fde
MOV EDX,dword ptr [EAX + 0x4]
MOV ECX,dword ptr [ESP + 0x20]
CMP EDX,ECX
JL 0x0040601e
MOV DL,byte ptr [EAX]
TEST DL,0x8
JZ 0x00406009
MOV ECX,dword ptr [EAX + 0x4]
CMP ECX,0x10
JL 0x00406003
MOV ESI,dword ptr [ESP + 0x14]
XOR EBX,EBX
LEA ESI,[ESI*0x4 + 0xf]
CMP ECX,ESI
SETLE BL
MOV ECX,EBX
JMP 0x00406005
XOR ECX,ECX
TEST ECX,ECX
JNZ 0x0040601e
TEST DL,0x4
JZ 0x00406050
MOV ECX,dword ptr [EAX + 0x4]
MOV EDX,0x1
SHL EDX,CL
TEST dword ptr [ESP + 0x18],EDX
JZ 0x00406050
MOV ECX,dword ptr [EBP*0x4 + 0x4d5e20]
MOV EDX,dword ptr [ESP + 0x10]
LEA ECX,[ECX + ECX*0x2]
LEA ECX,[EDX + ECX*0x4]
MOV EDX,EAX
MOV ESI,dword ptr [EDX]
MOV dword ptr [ECX],ESI
MOV ESI,dword ptr [EDX + 0x4]
MOV dword ptr [ECX + 0x4],ESI
MOV EDX,dword ptr [EDX + 0x8]
MOV dword ptr [ECX + 0x8],EDX
MOV ECX,dword ptr [EBP*0x4 + 0x4d5e20]
INC ECX
MOV dword ptr [EBP*0x4 + 0x4d5e20],ECX
MOV DL,byte ptr [EAX + 0xc]
ADD EAX,0xc
CMP DL,0xff
MOV ECX,EAX
JNZ 0x00405fce
MOV EAX,dword ptr [EBP*0x4 + 0x4d5e20]
MOV ECX,dword ptr [ESP + 0x10]
POP EDI
POP ESI
LEA EAX,[EAX + EAX*0x2]
POP EBP
POP EBX
MOV byte ptr [ECX + EAX*0x4],0xff
ADD ESP,0xc
RET
