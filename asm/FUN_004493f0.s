; FUN_004493f0
MOV EAX,dword ptr [ESP + 0x8]
PUSH EBX
PUSH ESI
CMP EAX,0x6
PUSH EDI
JA 0x00449ce0
JMP dword ptr [EAX*0x4 + 0x449ce4]
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV EBX,0x3f800000
JNZ 0x0044944b
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acac4]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449436
MOV dword ptr [ECX],EBX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac8]
FNSTSW AX
TEST AH,0x1
JZ 0x0044944b
MOV dword ptr [ECX],0x3c23d70a
CMP EDX,0x2
JNZ 0x00449482
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acacc]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044946d
MOV dword ptr [ECX],EBX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449482
MOV dword ptr [ECX],0x3c23d70a
CMP EDX,0x3
JNZ 0x004494b9
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acad0]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x004494a4
MOV dword ptr [ECX],EBX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac8]
FNSTSW AX
TEST AH,0x1
JZ 0x004494b9
MOV dword ptr [ECX],0x3c23d70a
CMP EDX,0x4
JNZ 0x004494f0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acad4]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x004494db
MOV dword ptr [ECX],EBX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac8]
FNSTSW AX
TEST AH,0x1
JZ 0x004494f0
MOV dword ptr [ECX],0x3c23d70a
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acad8]
FADD dword ptr [ECX]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449516
MOV dword ptr [ECX],EBX
FLD dword ptr [ECX]
FCOMP dword ptr [0x004acac8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX],0x3c23d70a
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV ESI,0x42480000
MOV EDI,0x447a0000
JNZ 0x0044957d
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acadc]
FADD dword ptr [ECX + 0x4]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044956a
MOV dword ptr [ECX + 0x4],EDI
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004acae4]
FNSTSW AX
TEST AH,0x1
JZ 0x0044957d
MOV dword ptr [ECX + 0x4],ESI
CMP EDX,0x2
JNZ 0x004495b5
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acae8]
FADD dword ptr [ECX + 0x4]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004495a2
MOV dword ptr [ECX + 0x4],EDI
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004acae4]
FNSTSW AX
TEST AH,0x1
JZ 0x004495b5
MOV dword ptr [ECX + 0x4],ESI
CMP EDX,0x3
JNZ 0x004495ed
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acaec]
FADD dword ptr [ECX + 0x4]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004495da
MOV dword ptr [ECX + 0x4],EDI
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004acae4]
FNSTSW AX
TEST AH,0x1
JZ 0x004495ed
MOV dword ptr [ECX + 0x4],ESI
CMP EDX,0x4
JNZ 0x00449625
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acaf0]
FADD dword ptr [ECX + 0x4]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449612
MOV dword ptr [ECX + 0x4],EDI
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004acae4]
FNSTSW AX
TEST AH,0x1
JZ 0x00449625
MOV dword ptr [ECX + 0x4],ESI
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acaf4]
FADD dword ptr [ECX + 0x4]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044964e
MOV dword ptr [ECX + 0x4],EDI
FLD dword ptr [ECX + 0x4]
FCOMP dword ptr [0x004acae4]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0x4],ESI
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV EDI,0x3dcccccd
MOV ESI,0x40a00000
JNZ 0x004496bf
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acaf8]
FSUB dword ptr [0x004acafc]
FMUL dword ptr [ECX + 0xc]
FCOM dword ptr [0x004acb00]
FSTP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x004496ac
MOV dword ptr [ECX + 0xc],ESI
FLD dword ptr [ECX + 0xc]
FCOMP dword ptr [0x004acacc]
FNSTSW AX
TEST AH,0x1
JZ 0x004496bf
MOV dword ptr [ECX + 0xc],EDI
CMP EDX,0x2
JNZ 0x00449703
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb04]
FSUB dword ptr [0x004acb08]
FMUL dword ptr [ECX + 0xc]
FCOM dword ptr [0x004acb00]
FSTP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x004496f0
MOV dword ptr [ECX + 0xc],ESI
FLD dword ptr [ECX + 0xc]
FCOMP dword ptr [0x004acacc]
FNSTSW AX
TEST AH,0x1
JZ 0x00449703
MOV dword ptr [ECX + 0xc],EDI
CMP EDX,0x3
JNZ 0x00449747
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb0c]
FSUB dword ptr [0x004acb10]
FMUL dword ptr [ECX + 0xc]
FCOM dword ptr [0x004acb00]
FSTP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449734
MOV dword ptr [ECX + 0xc],ESI
FLD dword ptr [ECX + 0xc]
FCOMP dword ptr [0x004acacc]
FNSTSW AX
TEST AH,0x1
JZ 0x00449747
MOV dword ptr [ECX + 0xc],EDI
CMP EDX,0x4
JNZ 0x0044978b
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb14]
FSUB dword ptr [0x004acb18]
FMUL dword ptr [ECX + 0xc]
FCOM dword ptr [0x004acb00]
FSTP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449778
MOV dword ptr [ECX + 0xc],ESI
FLD dword ptr [ECX + 0xc]
FCOMP dword ptr [0x004acacc]
FNSTSW AX
TEST AH,0x1
JZ 0x0044978b
MOV dword ptr [ECX + 0xc],EDI
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb1c]
FSUB dword ptr [0x004acb20]
FMUL dword ptr [ECX + 0xc]
FCOM dword ptr [0x004acb00]
FSTP dword ptr [ECX + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x004497c0
MOV dword ptr [ECX + 0xc],ESI
FLD dword ptr [ECX + 0xc]
FCOMP dword ptr [0x004acacc]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0xc],EDI
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV EDI,0x43e10000
MOV ESI,0x44228000
JNZ 0x00449825
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb24]
FADD dword ptr [ECX + 0x10]
FCOM dword ptr [0x004acb28]
FSTP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449812
MOV dword ptr [ECX + 0x10],ESI
FLD dword ptr [ECX + 0x10]
FCOMP dword ptr [0x004acaac]
FNSTSW AX
TEST AH,0x1
JZ 0x00449825
MOV dword ptr [ECX + 0x10],EDI
CMP EDX,0x2
JNZ 0x0044985d
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb2c]
FADD dword ptr [ECX + 0x10]
FCOM dword ptr [0x004acb28]
FSTP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044984a
MOV dword ptr [ECX + 0x10],ESI
FLD dword ptr [ECX + 0x10]
FCOMP dword ptr [0x004acaac]
FNSTSW AX
TEST AH,0x1
JZ 0x0044985d
MOV dword ptr [ECX + 0x10],EDI
CMP EDX,0x3
JNZ 0x00449895
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb30]
FADD dword ptr [ECX + 0x10]
FCOM dword ptr [0x004acb28]
FSTP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449882
MOV dword ptr [ECX + 0x10],ESI
FLD dword ptr [ECX + 0x10]
FCOMP dword ptr [0x004acaac]
FNSTSW AX
TEST AH,0x1
JZ 0x00449895
MOV dword ptr [ECX + 0x10],EDI
CMP EDX,0x4
JNZ 0x004498cd
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb34]
FADD dword ptr [ECX + 0x10]
FCOM dword ptr [0x004acb28]
FSTP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x004498ba
MOV dword ptr [ECX + 0x10],ESI
FLD dword ptr [ECX + 0x10]
FCOMP dword ptr [0x004acaac]
FNSTSW AX
TEST AH,0x1
JZ 0x004498cd
MOV dword ptr [ECX + 0x10],EDI
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb38]
FADD dword ptr [ECX + 0x10]
FCOM dword ptr [0x004acb28]
FSTP dword ptr [ECX + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x004498f6
MOV dword ptr [ECX + 0x10],ESI
FLD dword ptr [ECX + 0x10]
FCOMP dword ptr [0x004acaac]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0x10],EDI
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV EBX,0x3f800000
MOV EDI,0x447a0000
JNZ 0x00449967
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb3c]
FSUB dword ptr [0x004acb40]
FMUL dword ptr [ECX + 0x14]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449954
MOV dword ptr [ECX + 0x14],EDI
FLD dword ptr [ECX + 0x14]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449967
MOV dword ptr [ECX + 0x14],EBX
CMP EDX,0x2
JNZ 0x004499ab
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb44]
FSUB dword ptr [0x004acb48]
FMUL dword ptr [ECX + 0x14]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449998
MOV dword ptr [ECX + 0x14],EDI
FLD dword ptr [ECX + 0x14]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x004499ab
MOV dword ptr [ECX + 0x14],EBX
CMP EDX,0x3
JNZ 0x004499ef
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb4c]
FSUB dword ptr [0x004acb50]
FMUL dword ptr [ECX + 0x14]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x004499dc
MOV dword ptr [ECX + 0x14],EDI
FLD dword ptr [ECX + 0x14]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x004499ef
MOV dword ptr [ECX + 0x14],EBX
CMP EDX,0x4
JNZ 0x00449a33
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb54]
FSUB dword ptr [0x004acb58]
FMUL dword ptr [ECX + 0x14]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449a20
MOV dword ptr [ECX + 0x14],EDI
FLD dword ptr [ECX + 0x14]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449a33
MOV dword ptr [ECX + 0x14],EBX
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [0x004acaa8]
FSUB dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb5c]
FSUB dword ptr [0x004acb60]
FMUL dword ptr [ECX + 0x14]
FCOM dword ptr [0x004acae0]
FSTP dword ptr [ECX + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449a68
MOV dword ptr [ECX + 0x14],EDI
FLD dword ptr [ECX + 0x14]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0x14],EBX
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
CMP EDX,0x1
MOV EBX,0x3f800000
MOV ESI,0x41a00000
JNZ 0x00449acd
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb64]
FADD dword ptr [ECX + 0x24]
FCOM dword ptr [0x004acb68]
FSTP dword ptr [ECX + 0x24]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449aba
MOV dword ptr [ECX + 0x24],ESI
FLD dword ptr [ECX + 0x24]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449acd
MOV dword ptr [ECX + 0x24],EBX
CMP EDX,0x2
JNZ 0x00449b05
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb6c]
FADD dword ptr [ECX + 0x24]
FCOM dword ptr [0x004acb68]
FSTP dword ptr [ECX + 0x24]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449af2
MOV dword ptr [ECX + 0x24],ESI
FLD dword ptr [ECX + 0x24]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449b05
MOV dword ptr [ECX + 0x24],EBX
CMP EDX,0x3
JNZ 0x00449b3d
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb70]
FADD dword ptr [ECX + 0x24]
FCOM dword ptr [0x004acb68]
FSTP dword ptr [ECX + 0x24]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449b2a
MOV dword ptr [ECX + 0x24],ESI
FLD dword ptr [ECX + 0x24]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449b3d
MOV dword ptr [ECX + 0x24],EBX
CMP EDX,0x4
JNZ 0x00449b75
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb74]
FADD dword ptr [ECX + 0x24]
FCOM dword ptr [0x004acb68]
FSTP dword ptr [ECX + 0x24]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449b62
MOV dword ptr [ECX + 0x24],ESI
FLD dword ptr [ECX + 0x24]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449b75
MOV dword ptr [ECX + 0x24],EBX
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acab8]
FADD dword ptr [ECX + 0x24]
FCOM dword ptr [0x004acb68]
FSTP dword ptr [ECX + 0x24]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449b9e
MOV dword ptr [ECX + 0x24],ESI
FLD dword ptr [ECX + 0x24]
FCOMP dword ptr [0x004acaa8]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0x24],EBX
POP EDI
POP ESI
POP EBX
RET
MOV EDX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x10]
XOR ESI,ESI
CMP EDX,0x1
MOV EBX,0x3f800000
JNZ 0x00449c00
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acacc]
FADD dword ptr [ECX + 0x2c]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449bed
MOV dword ptr [ECX + 0x2c],EBX
FLD dword ptr [ECX + 0x2c]
FCOMP dword ptr [0x004acb78]
FNSTSW AX
TEST AH,0x1
JZ 0x00449c00
MOV dword ptr [ECX + 0x2c],ESI
CMP EDX,0x2
JNZ 0x00449c38
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acad4]
FADD dword ptr [ECX + 0x2c]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449c25
MOV dword ptr [ECX + 0x2c],EBX
FLD dword ptr [ECX + 0x2c]
FCOMP dword ptr [0x004acb78]
FNSTSW AX
TEST AH,0x1
JZ 0x00449c38
MOV dword ptr [ECX + 0x2c],ESI
CMP EDX,0x3
JNZ 0x00449c70
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb7c]
FADD dword ptr [ECX + 0x2c]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449c5d
MOV dword ptr [ECX + 0x2c],EBX
FLD dword ptr [ECX + 0x2c]
FCOMP dword ptr [0x004acb78]
FNSTSW AX
TEST AH,0x1
JZ 0x00449c70
MOV dword ptr [ECX + 0x2c],ESI
CMP EDX,0x4
JNZ 0x00449ca8
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb80]
FADD dword ptr [ECX + 0x2c]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449c95
MOV dword ptr [ECX + 0x2c],EBX
FLD dword ptr [ECX + 0x2c]
FCOMP dword ptr [0x004acb78]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ca8
MOV dword ptr [ECX + 0x2c],ESI
CMP EDX,0x5
JNZ 0x00449ce0
FLD dword ptr [ESP + 0x1c]
FMUL dword ptr [0x004acb84]
FADD dword ptr [ECX + 0x2c]
FCOM dword ptr [0x004acaa8]
FSTP dword ptr [ECX + 0x2c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00449ccd
MOV dword ptr [ECX + 0x2c],EBX
FLD dword ptr [ECX + 0x2c]
FCOMP dword ptr [0x004acb78]
FNSTSW AX
TEST AH,0x1
JZ 0x00449ce0
MOV dword ptr [ECX + 0x2c],ESI
POP EDI
POP ESI
POP EBX
RET
