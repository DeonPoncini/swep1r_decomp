; FUN_0043b1d0
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV dword ptr [0x00e295d0],0x0
XOR ESI,ESI
MOV CL,byte ptr [EDI + 0x5e]
MOVSX EAX,CL
MOV DL,byte ptr [EAX + 0x4bfee0]
TEST DL,DL
JLE 0x0043b231
LEA EDX,[EAX*0x8 + 0x0]
SUB EDX,EAX
MOVSX EAX,byte ptr [EDI + 0x5d]
ADD EDX,ESI
CMP dword ptr [EDX*0x4 + 0x4c0018],EAX
JZ 0x0043b231
PUSH ESI
PUSH ECX
PUSH EDI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JZ 0x0043b21f
INC dword ptr [0x00e295d0]
MOV CL,byte ptr [EDI + 0x5e]
INC ESI
MOVSX EAX,CL
MOVSX EDX,byte ptr [EAX + 0x4bfee0]
CMP ESI,EDX
JL 0x0043b1f2
POP EDI
POP ESI
RET
