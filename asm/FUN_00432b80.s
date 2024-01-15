; FUN_00432b80
SUB ESP,0x18
MOV EDX,dword ptr [ESP + 0x1c]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [EDX + 0x54]
MOV EBX,dword ptr [EDX + 0x58]
MOV ECX,dword ptr [EDX + 0x74]
PUSH ESI
MOV dword ptr [ESP + 0xc],EAX
MOV EAX,dword ptr [EBP]
PUSH EDI
XOR EDI,EDI
TEST EAX,EAX
MOV dword ptr [ESP + 0x24],0x3f800000
MOV dword ptr [ESP + 0x20],0x3f800000
MOV dword ptr [ESP + 0x1c],0x3f800000
MOV dword ptr [ESP + 0x18],0x3f800000
MOV dword ptr [ESP + 0x14],EBX
JZ 0x00432d28
MOV ESI,dword ptr [EAX + 0xc]
TEST ESI,ESI
JZ 0x00432c48
MOV DL,byte ptr [EDX + 0x88]
TEST DL,0x1
JZ 0x00432c28
XOR EBX,EBX
MOV BL,byte ptr [ESI + 0x22]
MOV dword ptr [ESP + 0x30],EBX
XOR EBX,EBX
FILD dword ptr [ESP + 0x30]
MOV BL,byte ptr [ESI + 0x23]
MOV dword ptr [ESP + 0x30],EBX
XOR EBX,EBX
FMUL dword ptr [0x004ac730]
MOV BL,byte ptr [ESI + 0x24]
FSTP dword ptr [ESP + 0x18]
FILD dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x30],EBX
MOV EBX,dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ac730]
FSTP dword ptr [ESP + 0x1c]
FILD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ac730]
FSTP dword ptr [ESP + 0x20]
TEST DL,0x2
JZ 0x00432c44
XOR EDX,EDX
MOV DL,byte ptr [ESI + 0x25]
MOV dword ptr [ESP + 0x30],EDX
FILD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ac730]
FSTP dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x2c]
TEST byte ptr [EAX],0x11
JZ 0x00432c52
MOV EDI,0x1
MOV EAX,dword ptr [EBP + 0x34]
TEST EDI,EDI
JNZ 0x00432cbe
TEST byte ptr [EDX + 0x88],0x4
JNZ 0x00432cbe
TEST ECX,ECX
JBE 0x00432d28
LEA EBP,[EAX + 0xc]
MOV EAX,EBX
MOV dword ptr [ESP + 0x2c],ECX
MOV EDI,dword ptr [ESP + 0x10]
XOR ECX,ECX
LEA ESI,[ESP + 0x18]
SUB EDI,EBX
XOR EDX,EDX
ADD ESI,0x4
MOV DL,byte ptr [ECX + EBP*0x1]
INC ECX
MOV dword ptr [ESP + 0x30],EDX
ADD EAX,0x4
FILD dword ptr [ESP + 0x30]
CMP ECX,0x3
FMUL dword ptr [ESI + -0x4]
FMUL dword ptr [0x004ac730]
FST dword ptr [EDI + EAX*0x1 + -0x4]
FSTP dword ptr [EAX + -0x4]
JBE 0x00432c7f
MOV ECX,dword ptr [ESP + 0x2c]
ADD EBP,0x10
DEC ECX
MOV dword ptr [ESP + 0x2c],ECX
JNZ 0x00432c73
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
TEST ECX,ECX
JBE 0x00432d28
LEA EBP,[EAX + 0xf]
LEA EDI,[EBX + 0xc]
MOV dword ptr [ESP + 0x30],ECX
MOV EDX,dword ptr [ESP + 0x10]
LEA ECX,[ESP + 0x18]
LEA EAX,[EDI + -0xc]
SUB EDX,EBX
MOV ESI,0x4
FLD dword ptr [ECX]
ADD ECX,0x4
FST dword ptr [EAX + EDX*0x1]
FSTP dword ptr [EAX]
ADD EAX,0x4
DEC ESI
JNZ 0x00432cde
MOV EAX,dword ptr [ESP + 0x2c]
TEST byte ptr [EAX + 0x88],0x4
JZ 0x00432d17
XOR ECX,ECX
MOV CL,byte ptr [EBP]
MOV dword ptr [ESP + 0x14],ECX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x24]
FMUL dword ptr [0x004ac730]
FST dword ptr [EDI + EDX*0x1]
FSTP dword ptr [EDI]
MOV EAX,dword ptr [ESP + 0x30]
ADD EBP,0x10
ADD EDI,0x10
DEC EAX
MOV dword ptr [ESP + 0x30],EAX
JNZ 0x00432ccc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x18
RET
