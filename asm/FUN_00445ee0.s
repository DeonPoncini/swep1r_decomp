; FUN_00445ee0
SUB ESP,0x100
MOV EAX,dword ptr [ESP + 0x120]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x128]
MOV EBX,dword ptr [EAX]
MOV byte ptr [ESP + 0x1b],0x0
MOV byte ptr [ESP + 0x1a],0x0
MOV EBP,dword ptr [ESI]
MOV dword ptr [ESI],0x0
TEST EBP,EBP
MOV dword ptr [EAX],0x0
JZ 0x00446362
PUSH EDI
PUSH 0x4b48cc
CALL 0x0048e680
ADD ESP,0x4
MOV EDI,EAX
MOV dword ptr [ESP + 0x2c],EDI
PUSH EDI
PUSH EBP
CALL 0x00408fb0
MOV CL,byte ptr [ESP + 0x140]
LEA EAX,[ESP + 0x38]
MOV dword ptr [ESI],EDI
MOV ESI,dword ptr [ESP + 0x128]
MOV dword ptr [ESP + 0x20],EAX
MOV EAX,dword ptr [ESP + 0x124]
ADD ESP,0x8
MOV dword ptr [ESP + 0x20],EAX
TEST CL,0x10
MOV dword ptr [ESP + 0x28],ESI
JZ 0x00445f89
MOV ECX,dword ptr [ESP + 0x124]
ADD EAX,EAX
CMP EAX,ECX
MOV byte ptr [ESP + 0x1f],0x1
MOV dword ptr [ESP + 0x20],EAX
JLE 0x00445f89
PUSH EAX
CALL 0x00445c90
ADD ESP,0x4
MOV dword ptr [ESP + 0x124],EAX
TEST byte ptr [ESP + 0x138],0x1
JZ 0x00445fba
MOV ECX,dword ptr [ESP + 0x128]
LEA EAX,[ESI + ESI*0x1]
CMP EAX,ECX
MOV byte ptr [ESP + 0x1e],0x1
MOV dword ptr [ESP + 0x28],EAX
JLE 0x00445fba
PUSH EAX
CALL 0x00445c90
ADD ESP,0x4
MOV dword ptr [ESP + 0x128],EAX
MOV ESI,dword ptr [ESP + 0x128]
IMUL ESI,dword ptr [ESP + 0x124]
SHL ESI,0x1
PUSH ESI
PUSH EBP
CALL 0x00408e60
ADD ESP,0x8
MOV dword ptr [ESP + 0x24],EAX
PUSH 0x4b48c0
PUSH EDI
CALL 0x0049eb80
FILD dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0x11c]
MOV ECX,dword ptr [ESP + 0x120]
ADD ESP,0x8
MOV EAX,0x4
FIDIV dword ptr [ESP + 0x124]
TEST EDX,EDX
FSTP dword ptr [EDI + 0xa]
FILD dword ptr [ESP + 0x28]
FIDIV dword ptr [ESP + 0x128]
FSTP dword ptr [EDI + 0xe]
MOV dword ptr [EDI + 0x40],0x0
JNZ 0x00446026
CMP ECX,0x3
JZ 0x0044609e
CMP EDX,0x5
JNZ 0x00446039
CMP ECX,0x1
JZ 0x0044609e
CMP EDX,EDX
JNZ 0x00446039
CMP ECX,0x3
JZ 0x0044609e
CMP EDX,EAX
JZ 0x0044609e
CMP EDX,0x3
JNZ 0x00446046
TEST ECX,ECX
JZ 0x0044609e
MOV EAX,0x5
LEA EDX,[EDI + 0x44]
MOV dword ptr [EDI + 0x4c],EAX
MOV dword ptr [EDI + 0x50],EAX
MOV dword ptr [EDI + 0x54],EAX
MOV EAX,0x1
MOV ECX,0x3
MOV dword ptr [EDX],0x2
MOV dword ptr [EDI + 0x48],0x10
MOV dword ptr [EDI + 0x70],EAX
MOV dword ptr [EDI + 0x58],0xb
MOV dword ptr [EDI + 0x5c],0x6
MOV dword ptr [EDI + 0x60],EAX
MOV dword ptr [EDI + 0x74],0x0
MOV dword ptr [EDI + 0x64],ECX
MOV dword ptr [EDI + 0x68],ECX
MOV dword ptr [EDI + 0x6c],ECX
MOV dword ptr [EDI + 0x78],0x7
MOV dword ptr [EDI + 0x7c],EAX
JMP 0x004460e5
LEA EDX,[EDI + 0x44]
MOV dword ptr [EDI + 0x48],0x10
MOV dword ptr [EDI + 0x4c],EAX
MOV dword ptr [EDI + 0x50],EAX
MOV dword ptr [EDX],0x2
MOV dword ptr [EDI + 0x54],EAX
MOV dword ptr [EDI + 0x70],EAX
MOV dword ptr [EDI + 0x58],0xc
MOV dword ptr [EDI + 0x5c],0x8
MOV dword ptr [EDI + 0x60],EAX
MOV dword ptr [EDI + 0x74],0x0
MOV dword ptr [EDI + 0x64],EAX
MOV dword ptr [EDI + 0x68],EAX
MOV dword ptr [EDI + 0x6c],EAX
MOV dword ptr [EDI + 0x78],EAX
MOV dword ptr [EDI + 0x7c],0x2
MOV ECX,dword ptr [ESP + 0x2c]
MOV EAX,dword ptr [ESP + 0x124]
MOV EDI,dword ptr [ESP + 0x128]
MOV dword ptr [ESP + 0x10],EBP
MOV dword ptr [ECX + 0x80],EAX
MOV dword ptr [ECX + 0x84],EDI
MOV dword ptr [ECX + 0x88],0x1
MOV dword ptr [ECX + 0x8c],0x0
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX],0x0
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0x4],0x0
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0x8],0x0
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0xc],EAX
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0x10],EDI
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0x14],ESI
MOV ESI,dword ptr [ESP + 0x18]
LEA ECX,[EAX + EAX*0x1]
MOV dword ptr [ESI + 0x18],ECX
MOV ECX,dword ptr [ESP + 0x18]
MOV ESI,EDX
MOV EDX,dword ptr [ESP + 0x24]
MOV dword ptr [ECX + 0x1c],EAX
MOV ECX,dword ptr [ESP + 0x18]
LEA EDI,[ECX + 0x20]
MOV ECX,0xe
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [ESP + 0x18]
MOV EDI,dword ptr [ESP + 0x118]
MOV ESI,EBP
MOV dword ptr [ECX + 0x58],EDX
MOV ECX,dword ptr [ESP + 0x18]
MOV dword ptr [ECX + 0x5c],0x0
MOV ECX,dword ptr [ESP + 0x114]
CMP ECX,0x4
JNZ 0x0044636c
TEST EDI,EDI
JNZ 0x0044636c
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV EBP,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV EAX,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST EAX,EAX
JLE 0x0044621d
XOR ECX,ECX
ADD EDX,0x2
MOV CL,byte ptr [ESI]
ADD EDI,0x2
SHR ECX,0x4
MOV EAX,ECX
ADD EDX,0x2
AND EAX,0xf
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
MOV word ptr [EDX + -0x4],AX
MOV CL,byte ptr [ESI]
AND ECX,0xf
INC ESI
MOV EAX,ECX
AND EAX,0xf
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
MOV word ptr [EDX + -0x2],AX
MOV EAX,dword ptr [ESP + 0x11c]
CMP EDI,EAX
JL 0x004461cc
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x00446245
MOV EBX,EAX
XOR EAX,EAX
SUB EBX,EDI
MOV EDI,EDX
MOV ECX,EBX
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBX*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
DEC EBP
JNZ 0x004461bf
MOV EDI,dword ptr [ESP + 0x120]
MOV ECX,dword ptr [ESP + 0x14]
MOV ESI,dword ptr [ESP + 0x128]
CMP ECX,ESI
JGE 0x00446297
MOV EBX,dword ptr [ESP + 0x11c]
SUB ESI,ECX
MOV dword ptr [ESP + 0x10],ESI
TEST EAX,EAX
JLE 0x0044628a
LEA ESI,[EBX + EBX*0x1]
MOV ECX,EAX
MOV EBP,EDX
ADD EDX,0x2
SUB EBP,ESI
DEC ECX
MOV BP,word ptr [EBP]
MOV word ptr [EDX + -0x2],BP
JNZ 0x00446278
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x0044626f
JMP 0x0044629e
MOV EBX,dword ptr [ESP + 0x11c]
MOV CL,byte ptr [ESP + 0x1f]
TEST CL,CL
JZ 0x004462ed
MOV EDX,dword ptr [ESP + 0x24]
MOV EBP,dword ptr [ESP + 0x20]
TEST EDI,EDI
LEA ECX,[EDX + EBP*0x2 + -0x2]
JLE 0x004462f5
MOV dword ptr [ESP + 0x10],EDI
TEST EBX,EBX
JLE 0x004462d3
MOV ESI,EBX
MOV BP,word ptr [EDX]
ADD EDX,0x2
MOV word ptr [ECX],BP
SUB ECX,0x2
DEC ESI
JNZ 0x004462c0
MOV EBP,dword ptr [ESP + 0x20]
LEA ESI,[EAX + EBX*0x1]
LEA ECX,[ECX + ESI*0x2]
MOV ESI,EAX
SUB ESI,EBX
LEA EDX,[EDX + ESI*0x2]
MOV ESI,dword ptr [ESP + 0x10]
DEC ESI
MOV dword ptr [ESP + 0x10],ESI
JNZ 0x004462ba
JMP 0x004462f1
MOV EBP,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x24]
MOV CL,byte ptr [ESP + 0x1e]
TEST CL,CL
JZ 0x00446334
MOV ECX,dword ptr [ESP + 0x28]
DEC ECX
IMUL ECX,EAX
TEST EDI,EDI
LEA ECX,[EDX + ECX*0x2]
JLE 0x00446334
TEST EBP,EBP
JLE 0x00446321
MOV ESI,EBP
MOV BX,word ptr [EDX]
ADD EDX,0x2
MOV word ptr [ECX],BX
ADD ECX,0x2
DEC ESI
JNZ 0x00446312
LEA ESI,[EBP + EAX*0x1]
NEG ESI
LEA ECX,[ECX + ESI*0x2]
MOV ESI,EAX
SUB ESI,EBP
DEC EDI
LEA EDX,[EDX + ESI*0x2]
JNZ 0x0044630c
MOV ESI,dword ptr [ESP + 0x2c]
MOV EDX,dword ptr [ESI + 0x90]
PUSH EDX
CALL 0x0048aa40
MOV EAX,dword ptr [ESI + 0x7c]
MOV EDX,dword ptr [ESI + 0x90]
ADD ESP,0x4
LEA ECX,[ESP + 0x18]
PUSH EAX
PUSH 0x1
PUSH ECX
PUSH EDX
CALL 0x0048a5e0
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x100
RET
MOV ECX,dword ptr [ESP + 0x114]
CMP ECX,0x3
JNZ 0x0044640f
TEST EDI,EDI
JNZ 0x0044640f
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV EBP,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV EAX,dword ptr [ESP + 0x11c]
XOR ECX,ECX
TEST EAX,EAX
JLE 0x004463df
XOR EAX,EAX
ADD EDX,0x2
MOV AL,byte ptr [ESI]
ADD EDX,0x2
AND AL,0xf0
SHL EAX,0x8
OR EAX,0xfff
INC ECX
MOV word ptr [EDX + -0x4],AX
MOV AL,byte ptr [ESI]
AND EAX,0xf
SHL EAX,0xc
OR EAX,0xfff
INC ESI
MOV word ptr [EDX + -0x2],AX
MOV EAX,dword ptr [ESP + 0x11c]
INC ECX
CMP ECX,EAX
JL 0x004463a8
MOV EAX,dword ptr [ESP + 0x124]
CMP ECX,EAX
JGE 0x00446407
MOV EBX,EAX
XOR EAX,EAX
SUB EBX,ECX
MOV EDI,EDX
MOV ECX,EBX
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBX*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
DEC EBP
JNZ 0x0044639b
JMP 0x0044624c
CMP ECX,0x4
JNZ 0x0044652f
CMP EDI,0x1
JNZ 0x0044652f
CMP byte ptr [ESP + 0x134],0x1
JNZ 0x004464b5
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV EDI,dword ptr [ESP + 0x11c]
XOR EBP,EBP
TEST EDI,EDI
JLE 0x0044647d
MOV EBP,EDI
XOR ECX,ECX
ADD EDX,0x2
MOV CL,byte ptr [ESI]
SHR ECX,0x4
MOV EAX,ECX
INC ESI
AND EAX,0xf
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
SHL EAX,0x4
OR EAX,ECX
DEC EDI
MOV word ptr [EDX + -0x2],AX
JNZ 0x00446457
MOV EAX,dword ptr [ESP + 0x124]
CMP EBP,EAX
JGE 0x004464a5
MOV EBX,EAX
XOR EAX,EAX
SUB EBX,EBP
MOV EDI,EDX
MOV ECX,EBX
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBX*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x00446448
JMP 0x0044624c
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV EBP,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ECX,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ECX,ECX
JLE 0x004464ff
MOV EDI,ECX
XOR EAX,EAX
ADD EDX,0x2
MOV AL,byte ptr [ESI]
SHR EAX,0x4
MOV EBX,EAX
INC ESI
OR EBX,0xfff0
SHL EBX,0x4
OR EBX,EAX
SHL EBX,0x4
OR EBX,EAX
DEC ECX
MOV word ptr [EDX + -0x2],BX
JNZ 0x004464db
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x00446527
MOV EBX,EAX
XOR EAX,EAX
SUB EBX,EDI
MOV EDI,EDX
MOV ECX,EBX
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBX*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
DEC EBP
JNZ 0x004464cc
JMP 0x0044624c
CMP ECX,0x2
JNZ 0x00446690
TEST EDI,EDI
JNZ 0x004465f8
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV EAX,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST EAX,EAX
JLE 0x004465bc
XOR EAX,EAX
XOR ECX,ECX
MOV AL,byte ptr [ESI]
ADD EDX,0x2
SHR EAX,0x4
ADD EDX,0x2
MOV AX,word ptr [EBX + EAX*0x2]
MOV CH,AL
MOV CL,AH
MOV EAX,ECX
MOV CX,AX
SHR CX,0x1
SHL EAX,0xf
OR ECX,EAX
INC EDI
MOV word ptr [EDX + -0x4],CX
MOV AL,byte ptr [ESI]
AND EAX,0xf
XOR ECX,ECX
INC ESI
MOV AX,word ptr [EBX + EAX*0x2]
MOV CH,AL
MOV CL,AH
MOV EAX,ECX
MOV CX,AX
SHR CX,0x1
SHL EAX,0xf
OR ECX,EAX
MOV EAX,dword ptr [ESP + 0x11c]
MOV word ptr [EDX + -0x2],CX
INC EDI
CMP EDI,EAX
JL 0x00446566
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x004465e4
MOV EBP,EAX
XOR EAX,EAX
SUB EBP,EDI
MOV EDI,EDX
MOV ECX,EBP
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBP*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x00446559
JMP 0x0044624c
CMP ECX,0x2
JNZ 0x00446690
CMP EDI,0x1
JNZ 0x00446690
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV EBP,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST EBP,EBP
JLE 0x00446658
MOV EDI,EBP
XOR EAX,EAX
XOR ECX,ECX
MOV AL,byte ptr [ESI]
INC ESI
ADD EDX,0x2
MOV AX,word ptr [EBX + EAX*0x2]
MOV CH,AL
MOV CL,AH
MOV EAX,ECX
MOV CX,AX
SHR CX,0x1
SHL EAX,0xf
OR ECX,EAX
DEC EBP
MOV word ptr [EDX + -0x2],CX
JNZ 0x00446632
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x00446680
MOV EBP,EAX
XOR EAX,EAX
SUB EBP,EDI
MOV EDI,EDX
MOV ECX,EBP
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + EBP*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x00446623
JMP 0x0044624c
CMP ECX,0x5
JNZ 0x00446771
CMP EDI,0x1
JNZ 0x00446702
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV EBP,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ECX,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ECX,ECX
JLE 0x004466de
MOV EDI,ECX
XOR EAX,EAX
ADD EDX,0x2
MOV AL,byte ptr [ESI]
SHR EAX,0x4
SHL EAX,0xc
OR EAX,0xfff
INC ESI
MOV word ptr [EDX + -0x2],AX
DEC ECX
JNZ 0x004466c4
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x004466fa
MOV ECX,EAX
SUB ECX,EDI
MOV DI,word ptr [EDX + -0x2]
MOV word ptr [EDX],DI
ADD EDX,0x2
DEC ECX
JNZ 0x004466ed
DEC EBP
JNZ 0x004466b5
JMP 0x0044624c
CMP ECX,0x5
JNZ 0x00446771
CMP EDI,0x2
JNZ 0x00446771
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV EBX,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ESI,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ESI,ESI
JLE 0x0044674d
MOV EDI,ESI
MOV ECX,dword ptr [ESP + 0x10]
ADD EDX,0x2
MOV AX,word ptr [ECX]
ADD ECX,0x2
OR AH,0x80
DEC ESI
MOV word ptr [EDX + -0x2],AX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x00446732
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x00446769
MOV ECX,EAX
SUB ECX,EDI
MOV SI,word ptr [EDX + -0x2]
MOV word ptr [EDX],SI
ADD EDX,0x2
DEC ECX
JNZ 0x0044675c
DEC EBX
JNZ 0x00446723
JMP 0x0044624c
TEST ECX,ECX
JNZ 0x004467fd
CMP EDI,0x2
JNZ 0x004467fd
MOV EDI,dword ptr [ESP + 0x120]
TEST EDI,EDI
JLE 0x00446257
MOV EBP,EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ESI,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ESI,ESI
JLE 0x004467cd
MOV EDI,ESI
MOV ECX,dword ptr [ESP + 0x10]
ADD EDX,0x2
MOV AX,word ptr [ECX]
ADD ECX,0x2
MOV dword ptr [ESP + 0x10],ECX
XOR ECX,ECX
MOV CH,AL
MOV CL,AH
MOV EAX,ECX
MOV CX,AX
SHR CX,0x1
SHL EAX,0xf
OR ECX,EAX
DEC ESI
MOV word ptr [EDX + -0x2],CX
JNZ 0x004467a2
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x004467f5
MOV ESI,EAX
XOR EAX,EAX
SUB ESI,EDI
MOV EDI,EDX
MOV ECX,ESI
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + ESI*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
DEC EBP
JNZ 0x00446793
JMP 0x0044624c
CMP ECX,0x5
JNZ 0x00446935
CMP EDI,0x3
JNZ 0x0044689d
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ECX,dword ptr [ESP + 0x11c]
XOR ESI,ESI
TEST ECX,ECX
JLE 0x00446871
MOV ESI,ECX
MOV EAX,dword ptr [EBP]
ADD EBP,0x4
MOV EDI,EAX
MOV EBX,EAX
SHR EDI,0x1c
SHR EBX,0x14
SHL EDI,0x4
AND EBX,0xf
ADD EDX,0x2
OR EDI,EBX
MOV EBX,EAX
SHR EBX,0xc
SHL EDI,0x4
AND EBX,0xf
OR EDI,EBX
SHR EAX,0x4
SHL EDI,0x4
AND EAX,0xf
OR EDI,EAX
DEC ECX
MOV word ptr [EDX + -0x2],DI
JNZ 0x00446837
MOV EAX,dword ptr [ESP + 0x124]
CMP ESI,EAX
JGE 0x0044688d
MOV ECX,EAX
SUB ECX,ESI
MOV SI,word ptr [EDX + -0x2]
MOV word ptr [EDX],SI
ADD EDX,0x2
DEC ECX
JNZ 0x00446880
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x00446828
JMP 0x0044624c
CMP ECX,0x5
JNZ 0x00446935
CMP EDI,0x7
JNZ 0x00446935
MOV EDI,dword ptr [ESP + 0x120]
XOR ECX,ECX
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ECX,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ECX,ECX
JLE 0x00446909
MOV EDI,ECX
MOV EAX,dword ptr [ESI]
ADD EDX,0x2
MOV EBX,EAX
MOV EBP,EAX
SHR EBX,0x13
OR EBX,0xffe0
ADD ESI,0x3
SHR EBP,0xb
SHL EBX,0x5
AND EBP,0x1f
OR EBX,EBP
SHR EAX,0x3
SHL EBX,0x5
AND EAX,0x1f
OR EBX,EAX
DEC ECX
MOV word ptr [EDX + -0x2],BX
JNZ 0x004468d7
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x00446925
MOV ECX,EAX
SUB ECX,EDI
MOV DI,word ptr [EDX + -0x2]
MOV word ptr [EDX],DI
ADD EDX,0x2
DEC ECX
JNZ 0x00446918
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x004468c8
JMP 0x0044624c
TEST ECX,ECX
JNZ 0x00446a05
CMP EDI,0x3
JNZ 0x00446a05
MOV EDI,dword ptr [ESP + 0x120]
TEST EDI,EDI
JLE 0x00446257
MOV dword ptr [ESP + 0x10],EDI
MOV dword ptr [ESP + 0x14],EDI
MOV ESI,dword ptr [ESP + 0x11c]
XOR EDI,EDI
TEST ESI,ESI
JLE 0x004469c9
MOV EDI,ESI
MOV ECX,dword ptr [EBP]
ADD EBP,0x4
MOV EAX,ECX
MOV EBX,ECX
AND EAX,0xff00
ADD EDX,0x2
SHL EBX,0x10
OR EAX,EBX
MOV EBX,ECX
SHR EBX,0x10
AND ECX,0xff0000
OR EBX,ECX
SHL EAX,0x8
SHR EBX,0x8
OR EAX,EBX
MOV ECX,EAX
MOV EBX,EAX
SHR ECX,0x4
SHR EBX,0x1c
SHL ECX,0x4
AND EBX,0xf
OR ECX,EBX
MOV EBX,EAX
SHR EBX,0x14
SHL ECX,0x4
AND EBX,0xf
OR ECX,EBX
SHR EAX,0xc
SHL ECX,0x4
AND EAX,0xf
OR ECX,EAX
DEC ESI
MOV word ptr [EDX + -0x2],CX
JNZ 0x0044696c
MOV EAX,dword ptr [ESP + 0x124]
CMP EDI,EAX
JGE 0x004469f1
MOV ESI,EAX
XOR EAX,EAX
SUB ESI,EDI
MOV EDI,EDX
MOV ECX,ESI
SHR ECX,0x1
STOSD.REP ES:EDI
ADC ECX,ECX
LEA EDX,[EDX + ESI*0x2]
STOSW.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x124]
MOV ECX,dword ptr [ESP + 0x10]
DEC ECX
MOV dword ptr [ESP + 0x10],ECX
JNZ 0x0044695d
JMP 0x0044624c
MOV ECX,dword ptr [ESP + 0x14]
MOV EDI,dword ptr [ESP + 0x120]
JMP 0x00446257
