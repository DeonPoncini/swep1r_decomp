; FUN_00474d80
SUB ESP,0x20
MOV ECX,dword ptr [ESP + 0x28]
PUSH EBX
PUSH EBP
OR EDX,0xffffffff
MOV EAX,dword ptr [ECX]
PUSH ESI
CMP EAX,0x46726565
PUSH EDI
MOV dword ptr [ESP + 0x10],EDX
JG 0x00474db9
JZ 0x00475aba
CMP EAX,0x416c6f63
JNZ 0x004758fa
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EAX,0x48697474
JG 0x004756e8
JZ 0x00474dee
CMP EAX,0x476f2121
JNZ 0x004758fa
MOV EAX,dword ptr [ESP + 0x34]
MOV ECX,dword ptr [EAX + 0x60]
AND ECX,0xfffffff2
OR ECX,0x2
MOV dword ptr [EAX + 0x60],ECX
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV ESI,dword ptr [ESP + 0x34]
XOR EBP,EBP
CMP dword ptr [ESI + 0x1e70],EBP
JZ 0x00475aba
MOV EAX,dword ptr [ESP + 0x3c]
MOV EBX,dword ptr [ECX + 0x4]
MOV dword ptr [ESP + 0x38],EBX
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESI + 0x60]
TEST EAX,0x40000000
JZ 0x00474e1e
FMUL dword ptr [0x004adbfc]
FMUL dword ptr [0x004adc00]
TEST AL,0x20
FSTP dword ptr [ESP + 0x3c]
JZ 0x00474e53
MOV EAX,[0x0050cb38]
FLD dword ptr [ESP + 0x3c]
MOV byte ptr [EAX + 0x4c7ab0],BL
FSTP dword ptr [EAX*0x4 + 0x50cb18]
INC EAX
CMP EAX,0x8
MOV [0x0050cb38],EAX
JL 0x00474e53
MOV dword ptr [0x0050cb38],EBP
CMP EBX,0x426f746d
JG 0x00474fee
JZ 0x00474e80
CMP EBX,0x42697473
JNZ 0x00475aba
MOV dword ptr [ESI + 0x324],EDX
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
FLD dword ptr [ESP + 0x3c]
CALL 0x0049ed20
CMP EAX,0x6
MOV dword ptr [ESP + 0x34],EAX
JLE 0x00474e9b
MOV EAX,0x6
MOV dword ptr [ESP + 0x34],EAX
CMP EAX,0x1
JGE 0x00474ea9
MOV EAX,0x1
MOV dword ptr [ESP + 0x34],EAX
CMP EAX,EBP
MOV dword ptr [ESI + 0x2b8],0x3f800000
JLE 0x00474ee5
FILD dword ptr [ESP + 0x34]
MOV EDI,EAX
FDIVR dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x34]
MOV EBX,dword ptr [ESP + 0x34]
CALL 0x004816b0
XOR EDX,EDX
MOV ECX,0x6
DIV ECX
PUSH EBX
PUSH EDX
PUSH ESI
CALL 0x00474cd0
ADD ESP,0xc
DEC EDI
JNZ 0x00474ec9
FILD dword ptr [ESI + 0x1998]
FCOMP qword ptr [0x004adc08]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
CALL 0x004816b0
FLD dword ptr [ESI + 0x1a0]
FMUL dword ptr [0x004adc14]
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FXCH
FSUB dword ptr [0x004adc18]
FXCH
FMUL dword ptr [0x004adbac]
FXCH
FST dword ptr [ESP + 0x34]
FCOMP dword ptr [0x004adbdc]
FMUL dword ptr [0x004adc10]
FNSTSW AX
FSUB dword ptr [0x004adbe8]
TEST AH,0x41
FSTP dword ptr [ESP + 0x3c]
JNZ 0x00474f50
MOV dword ptr [ESP + 0x34],0x3f800000
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00474f89
PUSH EBP
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x13
CALL 0x00409ee0
MOV EDX,dword ptr [0x004c7aa8]
MOV EAX,dword ptr [ESP + 0x48]
MOV ECX,dword ptr [ESP + 0x50]
ADD ESP,0x14
LEA EDI,[ESI + 0x50]
PUSH 0x43480000
PUSH 0x41200000
PUSH EDX
PUSH EBP
PUSH EDI
PUSH EAX
PUSH ECX
JMP 0x00474fa3
MOV EDX,dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESP + 0x3c]
PUSH 0x43480000
PUSH 0x41200000
LEA EDI,[ESI + 0x50]
PUSH EBP
PUSH EBP
PUSH EDI
PUSH EDX
PUSH EAX
PUSH 0x6
PUSH 0x37
CALL 0x00426d10
MOV AL,byte ptr [ESI + 0x60]
ADD ESP,0x24
TEST AL,0x20
JZ 0x00475aba
CALL 0x004816b0
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004adbac]
FCOMP dword ptr [0x004adc1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
PUSH EDI
PUSH 0x8
PUSH 0x8
PUSH 0x7
PUSH 0x7
PUSH 0x7
JMP 0x0047535a
CMP EBX,0x4c744674
JG 0x004751c5
JZ 0x0047537d
CMP EBX,0x4b506f77
JNZ 0x00475aba
MOV EBX,0x1
MOV dword ptr [ESI + 0x2b8],0x3f800000
MOV dword ptr [ESP + 0x34],EBX
MOV dword ptr [ESP + 0x18],0x3
CALL 0x004816b0
MOV dword ptr [ESP + 0x38],EAX
FILD dword ptr [ESP + 0x38]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adbf0]
FNSTSW AX
TEST BL,AH
JZ 0x00475053
MOV EBX,0x2
MOV dword ptr [ESP + 0x1c],EBP
MOV dword ptr [ESP + 0x34],EBX
CALL 0x004816b0
MOV dword ptr [ESP + 0x38],EAX
FILD dword ptr [ESP + 0x38]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x00475080
MOV dword ptr [ESP + EBX*0x4 + 0x18],0x4
INC EBX
MOV dword ptr [ESP + 0x34],EBX
CALL 0x004816b0
MOV dword ptr [ESP + 0x38],EAX
FILD dword ptr [ESP + 0x38]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x004750ad
MOV dword ptr [ESP + EBX*0x4 + 0x18],0x1
INC EBX
MOV dword ptr [ESP + 0x34],EBX
CMP EBX,EBP
JLE 0x004750da
FILD dword ptr [ESP + 0x34]
MOV EBP,EBX
LEA EDI,[ESP + 0x18]
FDIVR dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x34]
MOV EBX,dword ptr [ESP + 0x34]
MOV ECX,dword ptr [EDI]
PUSH EBX
PUSH ECX
PUSH ESI
CALL 0x00474cd0
ADD ESP,0xc
ADD EDI,0x4
DEC EBP
JNZ 0x004750c7
FILD dword ptr [ESI + 0x1998]
FCOMP qword ptr [0x004adc08]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
CALL 0x004816b0
FLD dword ptr [ESI + 0x1a0]
FMUL dword ptr [0x004adc14]
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FXCH
FSUB dword ptr [0x004adc18]
FXCH
FMUL dword ptr [0x004adbac]
FXCH
FST dword ptr [ESP + 0x34]
FCOMP dword ptr [0x004adbdc]
FMUL dword ptr [0x004adc10]
FNSTSW AX
FSUB dword ptr [0x004adbe8]
TEST AH,0x41
FSTP dword ptr [ESP + 0x3c]
JNZ 0x00475145
MOV dword ptr [ESP + 0x34],0x3f800000
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00475180
PUSH 0x0
PUSH -0x1
PUSH 0x0
PUSH -0x1
PUSH 0x14
CALL 0x00409ee0
MOV EDX,dword ptr [0x004c7aa8]
MOV EAX,dword ptr [ESP + 0x48]
MOV ECX,dword ptr [ESP + 0x50]
ADD ESP,0x14
LEA EDI,[ESI + 0x50]
PUSH 0x43480000
PUSH 0x41200000
PUSH EDX
PUSH 0x0
PUSH EDI
PUSH EAX
PUSH ECX
JMP 0x0047519c
MOV EDX,dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESP + 0x3c]
PUSH 0x43480000
PUSH 0x41200000
LEA EDI,[ESI + 0x50]
PUSH 0x0
PUSH 0x0
PUSH EDI
PUSH EDX
PUSH EAX
PUSH 0x6
PUSH 0x37
CALL 0x00426d10
MOV AL,byte ptr [ESI + 0x60]
ADD ESP,0x24
TEST AL,0x20
JZ 0x00475aba
CALL 0x004816b0
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
JMP 0x00475338
CMP EBX,0x52744674
JG 0x004751ec
JZ 0x0047537d
CMP EBX,0x4c745364
JZ 0x0047537d
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EBX,0x52745364
JZ 0x0047537d
CMP EBX,0x54323031
JZ 0x00475219
CMP EBX,0x56684c74
JZ 0x0047537d
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [0x004adc28]
MOV dword ptr [ESI + 0x2b8],0x3f800000
MOV EDI,0x3
FSTP dword ptr [ESP + 0x34]
MOV EBX,dword ptr [ESP + 0x34]
CALL 0x004816b0
XOR EDX,EDX
MOV ECX,0x6
DIV ECX
PUSH EBX
PUSH EDX
PUSH ESI
CALL 0x00474cd0
ADD ESP,0xc
DEC EDI
JNZ 0x0047523a
FILD dword ptr [ESI + 0x1998]
FCOMP qword ptr [0x004adc08]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
CALL 0x004816b0
FLD dword ptr [ESI + 0x1a0]
FMUL dword ptr [0x004adc14]
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FXCH
FSUB dword ptr [0x004adc18]
FXCH
FMUL dword ptr [0x004adbac]
FXCH
FST dword ptr [ESP + 0x34]
FCOMP dword ptr [0x004adbdc]
FMUL dword ptr [0x004adc10]
FNSTSW AX
FSUB dword ptr [0x004adbe8]
TEST AH,0x41
FSTP dword ptr [ESP + 0x3c]
JNZ 0x004752c1
MOV dword ptr [ESP + 0x34],0x3f800000
TEST byte ptr [ESI + 0x60],0x20
JZ 0x004752fa
PUSH EBP
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x13
CALL 0x00409ee0
MOV EDX,dword ptr [0x004c7aa8]
MOV EAX,dword ptr [ESP + 0x48]
MOV ECX,dword ptr [ESP + 0x50]
ADD ESP,0x14
LEA EDI,[ESI + 0x50]
PUSH 0x43480000
PUSH 0x41200000
PUSH EDX
PUSH EBP
PUSH EDI
PUSH EAX
PUSH ECX
JMP 0x00475314
MOV EDX,dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESP + 0x3c]
PUSH 0x43480000
PUSH 0x41200000
LEA EDI,[ESI + 0x50]
PUSH EBP
PUSH EBP
PUSH EDI
PUSH EDX
PUSH EAX
PUSH 0x6
PUSH 0x37
CALL 0x00426d10
MOV AL,byte ptr [ESI + 0x60]
ADD ESP,0x24
TEST AL,0x20
JZ 0x00475aba
CALL 0x004816b0
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004adbac]
FCOMP dword ptr [0x004adc1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
PUSH EDI
PUSH 0x7
PUSH 0x6
PUSH 0x5
PUSH 0x6
PUSH 0x5
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EDX]
PUSH EAX
PUSH 0x1
CALL 0x00427590
ADD ESP,0x20
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EBX,0x52744674
MOV dword ptr [ESI + 0x2b8],0x3f800000
MOV EDI,0x4
JNZ 0x0047540c
MOV EBP,0x1
MOV dword ptr [ESP + 0x18],0x3
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adbf0]
FNSTSW AX
TEST AH,0x1
JZ 0x004753d6
MOV EBP,0x2
MOV dword ptr [ESP + 0x1c],0x0
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x004753ff
MOV dword ptr [ESP + EBP*0x4 + 0x18],EDI
INC EBP
MOV dword ptr [ESP + 0x34],EBP
MOV dword ptr [ESP + 0x10],0x2d
JMP 0x004755ea
CMP EBX,0x4c744674
JNZ 0x00475490
MOV EBP,0x1
MOV dword ptr [ESP + 0x18],0x0
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adbf0]
FNSTSW AX
TEST AH,0x1
JZ 0x00475456
MOV EBP,0x2
MOV dword ptr [ESP + 0x1c],0x3
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x00475483
MOV dword ptr [ESP + EBP*0x4 + 0x18],0x1
INC EBP
MOV dword ptr [ESP + 0x34],EBP
MOV dword ptr [ESP + 0x10],0x13b
JMP 0x004755ea
CMP EBX,0x52745364
JNZ 0x00475510
MOV EBP,0x1
MOV dword ptr [ESP + 0x18],0x3
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adbf0]
FNSTSW AX
TEST AH,0x1
JZ 0x004754d6
MOV EBP,0x2
MOV dword ptr [ESP + 0x1c],EDI
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x00475503
MOV dword ptr [ESP + EBP*0x4 + 0x18],0x5
INC EBP
MOV dword ptr [ESP + 0x34],EBP
MOV dword ptr [ESP + 0x10],0x5a
JMP 0x004755ea
CMP EBX,0x4c745364
JNZ 0x0047558d
MOV EBP,0x1
MOV dword ptr [ESP + 0x18],0x0
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adbf0]
FNSTSW AX
TEST AH,0x1
JZ 0x00475556
MOV dword ptr [ESP + 0x1c],EBP
MOV EBP,0x2
MOV dword ptr [ESP + 0x34],EBP
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004adbac]
FCOMP qword ptr [0x004adc20]
FNSTSW AX
TEST AH,0x1
JZ 0x00475583
MOV dword ptr [ESP + EBP*0x4 + 0x18],0x2
INC EBP
MOV dword ptr [ESP + 0x34],EBP
MOV dword ptr [ESP + 0x10],0x10e
JMP 0x004755ea
CMP EBX,0x56684c74
JNZ 0x004755e6
MOV EBP,0x4
LEA EDI,[ESP + 0x18]
MOV dword ptr [ESP + 0x34],EBP
MOV EBX,EBP
CALL 0x004816b0
XOR EDX,EDX
MOV ECX,0x6
DIV ECX
ADD EDI,0x4
DEC EBX
MOV dword ptr [EDI + -0x4],EDX
JNZ 0x004755a4
CALL 0x004816b0
MOV dword ptr [ESP + 0x14],EAX
MOV EBX,dword ptr [ESP + 0x38]
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004adbac]
FMUL dword ptr [0x004adc2c]
FSUB dword ptr [0x004adbb0]
FSTP dword ptr [ESI + 0x308]
JMP 0x004755ea
MOV EBP,dword ptr [ESP + 0x34]
TEST EBP,EBP
JLE 0x00475619
FILD dword ptr [ESP + 0x34]
LEA EDI,[ESP + 0x18]
FDIVR dword ptr [ESP + 0x3c]
FSTP dword ptr [ESP + 0x34]
MOV EBX,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [EDI]
PUSH EBX
PUSH EDX
PUSH ESI
CALL 0x00474cd0
ADD ESP,0xc
ADD EDI,0x4
DEC EBP
JNZ 0x00475602
MOV EBX,dword ptr [ESP + 0x38]
FILD dword ptr [ESI + 0x1998]
FCOMP qword ptr [0x004adc08]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
TEST byte ptr [ESI + 0x60],0x20
JZ 0x00475aba
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x0
PUSH -0x1
PUSH EAX
PUSH -0x1
PUSH 0x14
CALL 0x00409ee0
MOV AL,byte ptr [ESI + 0x60]
ADD ESP,0x14
TEST AL,0x20
JZ 0x00475aba
CALL 0x004816b0
MOV dword ptr [ESP + 0x34],EAX
FILD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004adbac]
FCOMP dword ptr [0x004adc1c]
FNSTSW AX
TEST AH,0x1
JZ 0x00475aba
CMP EBX,0x56684c74
JNZ 0x004756b7
MOV EDX,dword ptr [ESI + 0x1e70]
LEA ECX,[ESI + 0x50]
PUSH ECX
PUSH 0x5
MOV EAX,dword ptr [EDX + 0x18]
PUSH 0x6
PUSH 0x5
PUSH 0x6
MOV ECX,dword ptr [EAX]
PUSH 0x1
PUSH ECX
PUSH 0x1
CALL 0x00427590
ADD ESP,0x20
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,dword ptr [ESI + 0x1e70]
LEA EDX,[ESI + 0x50]
PUSH EDX
PUSH 0x7
MOV ECX,dword ptr [EAX + 0x18]
PUSH 0x6
PUSH 0x5
PUSH 0x6
MOV EDX,dword ptr [ECX]
PUSH 0x5
PUSH EDX
PUSH 0x1
CALL 0x00427590
ADD ESP,0x20
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EAX,0x51657279
JG 0x004757b6
JZ 0x0047571a
CMP EAX,0x4c6f6164
JNZ 0x004758fa
MOV EAX,dword ptr [ESP + 0x34]
PUSH EAX
CALL 0x00450e30
ADD ESP,0x4
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
LEA EAX,[ECX + 0x4]
MOV ECX,dword ptr [ECX + 0x4]
CMP ECX,0x51657279
JZ 0x00475aba
MOV EDI,dword ptr [ESP + 0x34]
MOV ESI,EAX
MOV EBX,0x2
MOV EBP,0x1
MOV EDX,dword ptr [EAX]
MOV ECX,dword ptr [ESI + 0x4]
CMP EDX,0x3173743f
JNZ 0x00475757
MOV EDX,dword ptr [EDI + 0x1e70]
CMP word ptr [EDX + 0x5c],BP
JNZ 0x00475757
MOV dword ptr [ECX],EDI
CMP dword ptr [EAX],0x326e643f
JNZ 0x0047576d
MOV EDX,dword ptr [EDI + 0x1e70]
CMP word ptr [EDX + 0x5c],BX
JNZ 0x0047576d
MOV dword ptr [ECX],EDI
CMP dword ptr [EAX],0x3372643f
JNZ 0x00475784
MOV EDX,dword ptr [EDI + 0x1e70]
CMP word ptr [EDX + 0x5c],0x3
JNZ 0x00475784
MOV dword ptr [ECX],EDI
CMP dword ptr [EAX],0x43616d50
JNZ 0x00475799
MOV EAX,dword ptr [ESI + 0x4]
PUSH EDI
PUSH EAX
CALL 0x00473e40
ADD ESP,0x8
MOV ECX,dword ptr [ESI + 0x8]
ADD ESI,0x8
CMP ECX,0x51657279
MOV EAX,ESI
JNZ 0x0047573c
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EAX,0x526d436e
JG 0x0047582f
JZ 0x004757e4
CMP EAX,0x52536574
JNZ 0x004758fa
MOV ECX,dword ptr [ESP + 0x34]
PUSH ECX
CALL 0x00450e30
ADD ESP,0x4
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,dword ptr [ESP + 0x34]
TEST byte ptr [EAX + 0x60],0x40
JZ 0x00475aba
MOV EDX,dword ptr [EAX + 0x1eb4]
MOV ESI,dword ptr [ECX + 0x4]
CMP EDX,ESI
JNZ 0x00475aba
MOV EDX,dword ptr [ESP + 0x3c]
MOV ESI,dword ptr [EDX + 0x8]
MOV dword ptr [EAX + 0x1eb8],ESI
MOV EDX,dword ptr [EDX + 0xc]
MOV dword ptr [EAX + 0x1ebc],EDX
MOV ECX,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0x1ec0],ECX
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EAX,0x526d4c63
JG 0x004758dd
JZ 0x0047589d
CMP EAX,0x526d4869
JNZ 0x004758fa
MOV EAX,dword ptr [ESP + 0x34]
TEST byte ptr [EAX + 0x60],0x40
JZ 0x00475aba
MOV ESI,dword ptr [EAX + 0x1eb4]
XOR EDX,EDX
CMP ESI,EDX
JGE 0x00475aba
MOV ECX,dword ptr [ECX + 0x4]
LEA ESI,[EAX + 0x8]
MOV dword ptr [EAX + 0x1eb4],ECX
LEA EDI,[EAX + 0x1ecc]
MOV ECX,0x6
MOV dword ptr [EAX + 0x1ebc],EDX
MOV dword ptr [EAX + 0x1eb8],EDX
MOV dword ptr [EAX + 0x1ec0],EDX
MOVSD.REP ES:EDI,ESI
MOV EAX,0x2
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,dword ptr [ESP + 0x34]
TEST byte ptr [EAX + 0x60],0x40
JZ 0x00475aba
MOV EDX,dword ptr [EAX + 0x1eb4]
MOV ESI,dword ptr [ECX + 0x4]
CMP EDX,ESI
JNZ 0x00475aba
MOV ECX,dword ptr [ESP + 0x3c]
LEA EDI,[EAX + 0x1ecc]
MOV EAX,0x1
LEA ESI,[ECX + 0x8]
MOV ECX,0x6
MOVSD.REP ES:EDI,ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
CMP EAX,0x526d5468
JZ 0x00475a96
CMP EAX,0x536e6170
JZ 0x00475a0f
CMP EAX,0x734c4f44
JZ 0x00475904
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV ESI,dword ptr [ESP + 0x34]
MOV EDX,dword ptr [ESI + 0x344]
TEST EDX,EDX
JZ 0x00475aba
MOV EAX,dword ptr [ECX + 0x4]
MOV CL,byte ptr [ESI + 0x60]
TEST CL,0x20
JZ 0x00475998
MOV ECX,dword ptr [EDX + 0x14]
SHL EAX,0x5
MOV EDI,EAX
LEA EAX,[EDI + 0x4c7ab8]
PUSH EAX
PUSH ECX
CALL 0x00481b30
MOV EDX,dword ptr [ESI + 0x344]
ADD ESP,0x8
LEA EDI,[EDI + 0x4c7abc]
MOV EAX,dword ptr [EDX + 0x4]
PUSH EDI
PUSH EAX
CALL 0x00481b30
MOV ECX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EDX,dword ptr [ECX + 0x8]
PUSH EDI
PUSH EDX
CALL 0x00481b30
MOV EAX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV ECX,dword ptr [EAX + 0xc]
PUSH EDI
PUSH ECX
CALL 0x00481b30
MOV EDX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EAX,dword ptr [EDX + 0x10]
PUSH EDI
PUSH EAX
CALL 0x00481b30
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EDX,dword ptr [EDX + 0x14]
SHL EAX,0x5
MOV EDI,EAX
LEA ECX,[EDI + 0x4c7b38]
PUSH ECX
PUSH EDX
CALL 0x00481b30
MOV EAX,dword ptr [ESI + 0x344]
ADD ESP,0x8
LEA EDI,[EDI + 0x4c7b3c]
MOV ECX,dword ptr [EAX + 0x4]
PUSH EDI
PUSH ECX
CALL 0x00481b30
MOV EDX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EAX,dword ptr [EDX + 0x8]
PUSH EDI
PUSH EAX
CALL 0x00481b30
MOV ECX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV EDX,dword ptr [ECX + 0xc]
PUSH EDI
PUSH EDX
CALL 0x00481b30
MOV EAX,dword ptr [ESI + 0x344]
ADD ESP,0x8
MOV ECX,dword ptr [EAX + 0x10]
PUSH EDI
PUSH ECX
CALL 0x00481b30
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV ECX,dword ptr [ECX + 0x4]
TEST ECX,ECX
JGE 0x00475a35
MOV EDX,dword ptr [ESP + 0x34]
PUSH 0xbdcccccd
PUSH EDX
CALL 0x00473f40
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
JLE 0x00475a7a
CMP ECX,0x1
JLE 0x00475a5b
MOV EAX,dword ptr [ESP + 0x34]
PUSH 0x3c23d70a
PUSH EAX
CALL 0x00473f40
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV ECX,dword ptr [ESP + 0x34]
PUSH 0x3dcccccd
PUSH ECX
CALL 0x00473f40
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EDX,dword ptr [ESP + 0x34]
PUSH 0x0
PUSH EDX
CALL 0x00473f40
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x20
RET
MOV EAX,dword ptr [ESP + 0x34]
TEST byte ptr [EAX + 0x60],0x40
JZ 0x00475aba
MOV EDX,dword ptr [EAX + 0x1eb4]
MOV ESI,dword ptr [ECX + 0x4]
CMP EDX,ESI
JNZ 0x00475aba
MOV ECX,dword ptr [ESP + 0x3c]
MOV EDX,dword ptr [ECX + 0xc]
MOV dword ptr [EAX + 0x1ec8],EDX
POP EDI
POP ESI
POP EBP
MOV EAX,0x1
POP EBX
ADD ESP,0x20
RET
