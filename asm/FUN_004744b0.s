; FUN_004744b0
SUB ESP,0x34
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x48]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x44]
PUSH EDI
TEST EBP,EBP
MOV dword ptr [ESP + 0x10],EBP
MOV dword ptr [ESP + 0x50],EBP
JNZ 0x00474530
FLD dword ptr [ESI + 0xb4]
FMUL dword ptr [0x004adbd0]
FCOM dword ptr [0x004adba0]
FNSTSW AX
TEST AH,0x1
JZ 0x004744ea
FSUB dword ptr [0x004adbd4]
CALL 0x0049ed20
NEG EAX
MOV dword ptr [ESP + 0x48],EAX
FILD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004adbd8]
FCOM dword ptr [0x004adbdc]
FSTP dword ptr [ESI + 0xb4]
FNSTSW AX
TEST AH,0x1
JNZ 0x00474530
LEA EAX,[ESI + 0xac]
MOV dword ptr [ESI + 0xb4],0x0
PUSH EAX
PUSH 0x1
MOV EAX,dword ptr [EAX]
PUSH EAX
CALL 0x0044eaa0
ADD ESP,0xc
MOV EBX,dword ptr [ESP + 0x4c]
MOV dword ptr [ESP + 0x34],0x0
MOV dword ptr [ESP + 0x38],0x0
MOV dword ptr [ESP + 0x3c],0xbf800000
MOV dword ptr [ESP + 0x40],0x459c4000
TEST EBP,EBP
MOV EDI,0x1
JZ 0x00474588
MOV ECX,dword ptr [EBX + 0x30]
MOV EDX,dword ptr [EBX + 0x34]
MOV EAX,dword ptr [EBX + 0x38]
MOV dword ptr [ESP + 0x28],ECX
MOV dword ptr [ESP + 0x2c],EDX
MOV EDX,dword ptr [ESI + 0x13c]
LEA ECX,[ESP + 0x28]
MOV dword ptr [ESP + 0x30],EAX
PUSH ECX
PUSH EDX
CALL 0x00444e40
ADD ESP,0x8
JMP 0x00474597
LEA EAX,[ESI + 0xac]
PUSH EAX
CALL 0x0047f890
ADD ESP,0x4
TEST EAX,EAX
JZ 0x004745b1
PUSH EAX
CALL 0x004318b0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x004745b3
TEST dword ptr [EAX + 0x2c],0x16000
JZ 0x004745b3
XOR EDI,EDI
TEST EDI,EDI
JZ 0x004745e9
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0x1c]
PUSH ECX
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
PUSH 0x1
PUSH ESI
LEA ECX,[EBX + 0x30]
PUSH 0x44610000
PUSH ECX
PUSH 0x54657374
CALL 0x00450e70
ADD ESP,0x20
TEST EAX,EAX
JLE 0x004745e5
XOR EDI,EDI
TEST EDI,EDI
JNZ 0x00474667
MOV EAX,dword ptr [ESP + 0x50]
TEST EAX,EAX
JZ 0x00474637
FLD dword ptr [ESI + 0xb4]
FMUL dword ptr [0x004adbd0]
MOV dword ptr [ESP + 0x50],0x0
FCOM dword ptr [0x004adba0]
FNSTSW AX
TEST AH,0x1
JZ 0x00474618
FSUB dword ptr [0x004adbd4]
CALL 0x0049ed20
NEG EAX
MOV dword ptr [ESP + 0x48],EAX
XOR EBP,EBP
FILD dword ptr [ESP + 0x48]
FMUL dword ptr [0x004adbd8]
FSTP dword ptr [ESI + 0xb4]
JMP 0x00474655
FLD dword ptr [ESI + 0xb4]
TEST EBP,EBP
JZ 0x00474649
FSUB dword ptr [0x004adbe4]
JMP 0x0047464f
FSUB dword ptr [0x004adbe8]
FSTP dword ptr [ESI + 0xb4]
LEA EDX,[ESI + 0xac]
PUSH EBX
PUSH EDX
CALL 0x0044ed80
ADD ESP,0x8
JMP 0x0047469c
TEST EBP,EBP
JNZ 0x0047469c
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
JZ 0x0047469c
FLD dword ptr [ESI + 0xb4]
FSUB dword ptr [0x004adbec]
LEA EAX,[ESI + 0xac]
PUSH EBX
PUSH EAX
MOV EBP,0x1
FSTP dword ptr [ESI + 0xb4]
CALL 0x0044ed80
ADD ESP,0x8
XOR EDI,EDI
TEST EDI,EDI
JZ 0x00474554
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x34
RET