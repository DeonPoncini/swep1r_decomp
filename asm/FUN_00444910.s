; FUN_00444910
SUB ESP,0xc
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x18]
PUSH ESI
PUSH EDI
XOR EDI,EDI
CMP EBP,EDI
JNZ 0x00444933
MOV dword ptr [0x00e98258],0xbf800000
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
CMP dword ptr [0x00e98e70],EDI
JZ 0x0044495a
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x28]
PUSH EAX
PUSH 0xe98e40
PUSH 0x1
PUSH ECX
MOV dword ptr [0x00e98e70],EDI
CALL 0x004447b0
ADD ESP,0x10
MOV EDX,dword ptr [0x00e98e58]
PUSH 0xe98e4c
PUSH EDX
LEA EAX,[ESP + 0x18]
PUSH 0xe98e40
PUSH EAX
CALL 0x0042fa80
FLD dword ptr [0x00e98e4c]
FCOMP dword ptr [0x004aca50]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JZ 0x004449a3
MOV ECX,dword ptr [0x00e98e40]
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [0x00e98260],ECX
MOV dword ptr [0x00e98270],EDX
JMP 0x004449b7
MOV EAX,[0x00e98e40]
MOV ECX,dword ptr [ESP + 0x10]
MOV [0x00e98270],EAX
MOV dword ptr [0x00e98260],ECX
FLD dword ptr [0x00e98e50]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x004449e1
MOV EDX,dword ptr [0x00e98e44]
MOV EAX,dword ptr [ESP + 0x14]
MOV dword ptr [0x00e98264],EDX
MOV [0x00e98274],EAX
JMP 0x004449f7
MOV ECX,dword ptr [0x00e98e44]
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [0x00e98274],ECX
MOV dword ptr [0x00e98264],EDX
FLD dword ptr [0x00e98e54]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x00444a20
MOV EAX,[0x00e98e48]
MOV ECX,dword ptr [ESP + 0x18]
MOV [0x00e98268],EAX
MOV dword ptr [0x00e98278],ECX
JMP 0x00444a35
MOV EDX,dword ptr [0x00e98e48]
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [0x00e98278],EDX
MOV [0x00e98268],EAX
LEA ECX,[EBP + 0x1c]
CMP ECX,EDI
JZ 0x00444ab3
FLD dword ptr [0x00e98260]
FCOMP dword ptr [ECX]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bda
FLD dword ptr [0x00e98270]
FCOMP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bda
FLD dword ptr [0x00e98264]
FCOMP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bda
FLD dword ptr [0x00e98274]
FCOMP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bda
FLD dword ptr [0x00e98268]
FCOMP dword ptr [ECX + 0x8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bda
FLD dword ptr [0x00e98278]
FCOMP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bda
PUSH EBP
CALL 0x00431780
MOV EBX,EAX
ADD ESP,0x4
CMP EBX,EDI
JLE 0x00444bba
MOV ECX,dword ptr [EBP + 0x18]
FLD dword ptr [0x00e98260]
MOV ESI,dword ptr [ECX + EDI*0x4]
FCOMP dword ptr [ESI + 0x8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bb1
FLD dword ptr [0x00e98270]
FCOMP dword ptr [ESI + 0x14]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bb1
FLD dword ptr [0x00e98264]
FCOMP dword ptr [ESI + 0xc]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bb1
FLD dword ptr [0x00e98274]
FCOMP dword ptr [ESI + 0x18]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bb1
FLD dword ptr [0x00e98268]
FCOMP dword ptr [ESI + 0x10]
FNSTSW AX
TEST AH,0x1
JNZ 0x00444bb1
FLD dword ptr [0x00e98278]
FCOMP dword ptr [ESI + 0x1c]
FNSTSW AX
TEST AH,0x41
JZ 0x00444bb1
MOV EAX,[0x0050c5c8]
TEST EAX,EAX
JZ 0x00444b5a
MOV EAX,0x1
MOV [0x0050c5cc],EAX
MOV [0x004c1774],EAX
JMP 0x00444ba6
PUSH 0x1
PUSH ESI
CALL 0x00431770
ADD ESP,0x4
PUSH EAX
CALL 0x00431880
MOV ECX,0x1
ADD ESP,0x8
CMP EAX,ECX
JZ 0x00444b82
CMP EAX,0x3
MOV dword ptr [0x0050c5cc],ECX
JNZ 0x00444b8c
MOV dword ptr [0x0050c5cc],0x0
CMP EAX,0x2
JZ 0x00444b9c
CMP EAX,0x3
MOV dword ptr [0x004c1774],ECX
JNZ 0x00444ba6
MOV dword ptr [0x004c1774],0x0
PUSH ESI
CALL 0x004439f0
FSTP ST0
ADD ESP,0x4
INC EDI
CMP EDI,EBX
JL 0x00444ac6
MOV EAX,[0x00e98250]
TEST EAX,EAX
JZ 0x00444bda
MOV EDX,dword ptr [ESP + 0x28]
PUSH EDX
CALL 0x00443e70
ADD ESP,0x4
MOV dword ptr [0x00e98250],0x0
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xc
RET
