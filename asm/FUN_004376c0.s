; FUN_004376c0
MOV EAX,[0x004c4000]
SUB ESP,0x124
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x130]
PUSH ESI
PUSH EDI
PUSH 0x14
PUSH EAX
PUSH EBP
CALL 0x0043da90
MOV EAX,[0x004c4000]
XOR EBX,EBX
ADD ESP,0xc
CMP EAX,EBX
JZ 0x00437807
MOV dword ptr [0x004c4000],EBX
MOV dword ptr [0x00e99358],0xc3960000
MOV word ptr [0x0050c468],BX
MOV EAX,dword ptr [EBP + 0x3c]
CMP EAX,EBX
JZ 0x00437718
PUSH EBP
CALL 0x0045a840
ADD ESP,0x4
MOV ECX,dword ptr [0x00e35aa0]
MOV EAX,0x4
AND ECX,0xff
MOV dword ptr [0x0050c46c],EBX
SUB EAX,ECX
MOV dword ptr [0x0050c52c],EBX
MOV [0x0050c1f8],EAX
MOV ECX,dword ptr [EBP + 0x10]
CMP ECX,EBX
JNZ 0x004377bf
OR ESI,0xffffffff
PUSH EBX
PUSH ESI
PUSH 0x1
PUSH EBP
CALL 0x0045bee0
ADD ESP,0x10
MOV dword ptr [0x0050c934],EBX
PUSH 0x1
PUSH EBP
CALL 0x0045c9d0
MOV ECX,dword ptr [0x00e295d0]
XOR EDX,EDX
MOV EAX,ECX
ADD ESP,0x8
SHL EAX,0x3
SUB EAX,ECX
MOV dword ptr [0x0050c474],0x1
SHL EAX,0x3
MOVSX ECX,byte ptr [EAX + 0xe2a6c0]
MOV DL,byte ptr [EAX + 0xe2a6c1]
SHL ECX,0x4
PUSH EDX
MOVSX EAX,byte ptr [ECX + 0x4c1cb9]
MOVSX ECX,byte ptr [ECX + 0x4c1cbb]
MOVSX EDX,byte ptr [EBP + 0x73]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0045cf60
MOV EAX,[0x00e295d0]
ADD ESP,0x10
MOV [0x004c020c],EAX
MOV EDI,0x1
JMP 0x0043780f
MOV ECX,dword ptr [0x00e35a98]
MOV word ptr [0x00e99400],BX
CMP ECX,0x3e8
MOV EDI,0x1
JGE 0x004377e0
MOV word ptr [0x00e99400],DI
CMP EAX,EBX
JZ 0x004377ea
MOV dword ptr [0x0050c52c],EDI
PUSH EBP
CALL 0x00440b50
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0043780c
PUSH EBX
PUSH -0x1
PUSH 0x2
PUSH EBP
CALL 0x0045bee0
ADD ESP,0x10
JMP 0x0043780c
MOV EDI,0x1
OR ESI,0xffffffff
PUSH EBP
CALL 0x00437ea0
MOV EAX,dword ptr [EBP + 0x10]
ADD ESP,0x4
CMP EAX,EBX
JNZ 0x00437882
MOV ECX,dword ptr [0x00e295d0]
MOV EAX,[0x004c020c]
CMP EAX,ECX
JZ 0x004378c6
MOV EAX,ECX
MOV dword ptr [0x004c020c],ECX
SHL EAX,0x3
SUB EAX,ECX
XOR ECX,ECX
SHL EAX,0x3
MOV dword ptr [0x0050c474],EDI
MOVSX ESI,byte ptr [EAX + 0xe2a6c0]
MOV CL,byte ptr [EAX + 0xe2a6c1]
SHL ESI,0x4
PUSH ECX
MOVSX EDX,byte ptr [ESI + 0x4c1cb9]
MOVSX EAX,byte ptr [ESI + 0x4c1cbb]
MOVSX ECX,byte ptr [EBP + 0x73]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0045cf60
ADD ESP,0x10
CALL 0x0043eb50
OR ESI,0xffffffff
JMP 0x004378c6
MOV ECX,dword ptr [0x0050c1f8]
CMP ECX,EBX
JLE 0x004378c6
CMP word ptr [0x0050c930],DI
JZ 0x004378c6
FLD dword ptr [0x00e99358]
FCOMP dword ptr [0x004ac848]
FNSTSW AX
TEST AH,0x40
JZ 0x004378c6
ADD ECX,0x33
PUSH 0x3
PUSH ECX
MOV word ptr [0x0050c468],DI
MOV word ptr [0x0050c930],0x5
CALL 0x00468fe0
ADD ESP,0x8
MOV EAX,dword ptr [EBP + 0x34]
PUSH EBP
CMP EAX,EDI
JNZ 0x004378eb
CALL 0x0043ec10
ADD ESP,0x4
PUSH 0x43070000
PUSH 0x41a00000
PUSH EBP
CALL 0x004550d0
ADD ESP,0xc
JMP 0x004378f3
CALL 0x0043f380
ADD ESP,0x4
CMP dword ptr [0x0050c470],EBX
JNZ 0x004379c6
CMP word ptr [0x0050c468],BX
JNZ 0x004379c6
CMP dword ptr [EBP + 0x34],EDI
JNZ 0x004379c6
MOV AX,[0x0050c930]
CMP AX,BX
JZ 0x0043792a
CMP AX,0x5
JNZ 0x004379c6
MOV EAX,[0x00e295d0]
MOV EDX,EAX
SHL EDX,0x3
SUB EDX,EAX
MOVSX EAX,byte ptr [EDX*0x8 + 0xe2a6c0]
SHL EAX,0x4
MOV ECX,dword ptr [EAX + 0x4c1cc4]
PUSH ECX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c0bc0
CALL 0x00421360
ADD ESP,0x4
LEA EDX,[ESP + 0x38]
PUSH EAX
PUSH EDX
CALL 0x0049eb80
ADD ESP,0xc
LEA EAX,[ESP + 0x34]
PUSH EAX
PUSH ESI
PUSH ESI
PUSH ESI
PUSH 0x32
PUSH 0x19
PUSH 0xa0
CALL 0x00450530
ADD ESP,0x1c
LEA ECX,[ESP + 0x34]
PUSH EBX
PUSH ECX
CALL 0x0042de10
ADD ESP,0x8
LEA EDX,[ESP + 0x34]
PUSH EAX
PUSH 0x1a
PUSH EBX
PUSH EDX
CALL 0x0042de10
MOV dword ptr [ESP + 0x20],EAX
ADD ESP,0x8
FILD dword ptr [ESP + 0x18]
FMUL qword ptr [0x004ac7c0]
FSUBR qword ptr [0x004ac7c8]
CALL 0x0049ed20
PUSH EAX
CALL 0x00440150
ADD ESP,0xc
PUSH EBP
CALL 0x0043dba0
ADD ESP,0x4
PUSH EBP
CALL 0x00455dc0
MOV dword ptr [0x0050c474],EBX
MOV EAX,dword ptr [EBP + 0x8]
ADD ESP,0x4
CMP EAX,0x3
JZ 0x00437e54
MOV AL,byte ptr [EBP + 0x70]
MOV dword ptr [ESP + 0x10],EBX
CMP AL,BL
JLE 0x00437e54
MOV dword ptr [ESP + 0x14],0x50c908
CMP word ptr [0x0050c468],BX
JNZ 0x00437cf1
CMP dword ptr [0x004eb39c],EBX
JNZ 0x00437cf1
CMP dword ptr [0x004d6b48],EBX
JZ 0x00437c4a
PUSH 0x54
CALL 0x00440550
MOV EAX,dword ptr [EBP + 0x10]
ADD ESP,0x4
SUB EAX,EBX
JZ 0x00437bb8
DEC EAX
JNZ 0x00437c4a
CMP dword ptr [0x0050c52c],EBX
JNZ 0x00437a7e
MOV EAX,[0x0050c1f8]
CMP EAX,EBX
JLE 0x00437c4a
ADD EAX,0x33
PUSH 0x3
PUSH EAX
MOV dword ptr [0x0050c52c],EDI
MOV word ptr [0x0050c468],DI
MOV word ptr [0x00e99400],BX
CALL 0x00468fe0
ADD ESP,0x8
JMP 0x00437c4a
CMP word ptr [0x00e99400],DI
JNZ 0x00437ad7
MOV EAX,[0x0050c1f8]
PUSH 0x4
ADD EAX,0x33
MOV word ptr [0x00e99400],BX
PUSH EAX
MOV dword ptr [0x0050c52c],EBX
MOV word ptr [0x0050c468],SI
CALL 0x00468fe0
MOV EAX,[0x0050c47c]
ADD ESP,0x8
CMP EAX,0x2
JNZ 0x00437e79
MOV dword ptr [0x0050c47c],EBX
MOV dword ptr [0x004bfedc],0x8
MOV dword ptr [0x0050c944],ESI
JMP 0x00437c4a
CMP dword ptr [0x00e35a98],0x3e8
JL 0x00437c4a
MOV EDX,dword ptr [0x0050c1f8]
LEA ECX,[ESP + 0x1c]
PUSH ECX
MOV EAX,dword ptr [EDX*0x4 + 0xe299cc]
PUSH EAX
CALL 0x0044afb0
ADD ESP,0x8
LEA ECX,[ESP + 0x28]
PUSH 0x4c401c
PUSH ECX
CALL 0x0042f7d0
FLD dword ptr [0x004ac850]
FSUB dword ptr [ESP + 0x28]
ADD ESP,0x8
MOV dword ptr [ESP + 0x30],0xc2700000
PUSH ECX
FSTP dword ptr [ESP]
FLD dword ptr [ESP + 0x20]
FSUB dword ptr [0x004ac7ac]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [0x0050c1f8]
ADD ESP,0x8
LEA EDX,[ESP + 0x28]
ADD ECX,0x33
PUSH EAX
PUSH EAX
LEA EAX,[ESP + 0x24]
PUSH EDX
PUSH EAX
PUSH 0xa
PUSH ECX
CALL 0x00468800
MOV ECX,dword ptr [0x00e35a98]
MOV AL,[0x00e35aa0]
MOV EDX,dword ptr [0x0050c1f8]
ADD ESP,0x18
SUB ECX,0x3e8
INC AL
DEC EDX
MOV dword ptr [0x00e35a98],ECX
MOV [0x00e35aa0],AL
MOV dword ptr [0x0050c1f8],EDX
CALL 0x0044e560
MOV EAX,[0x0050c1f8]
CMP EAX,EDI
JL 0x00437e27
ADD EAX,0x33
PUSH 0x3
PUSH EAX
CALL 0x00468fe0
ADD ESP,0x8
JMP 0x00437c4a
CMP dword ptr [0x00e295d0],ESI
JZ 0x00437c4a
CMP dword ptr [0x0050c470],EBX
JNZ 0x00437bfe
MOV AX,[0x0050c930]
CMP AX,BX
JZ 0x00437bdd
CMP AX,0x5
JNZ 0x00437c4a
MOV dword ptr [0x0050c474],EDI
MOV dword ptr [0x0050c470],EDI
MOV word ptr [0x00e99400],BX
MOV word ptr [0x0050c468],DI
CALL 0x0043eb50
JMP 0x00437c4a
CMP word ptr [0x00e99400],BX
JNZ 0x00437c1e
PUSH 0x19
PUSH 0x1c
CALL 0x00468fe0
ADD ESP,0x8
PUSH EBP
CALL 0x00440800
ADD ESP,0x4
JMP 0x00437c2a
PUSH 0x1a
PUSH 0x1c
CALL 0x00468fe0
ADD ESP,0x8
MOV dword ptr [0x0050c474],EDI
MOV word ptr [0x00e99400],BX
MOV dword ptr [0x0050c470],EBX
MOV dword ptr [0x0050c954],EDI
MOV word ptr [0x0050c468],SI
CMP dword ptr [0x004d6b44],EBX
JZ 0x00437cf1
PUSH 0x4d
CALL 0x00440550
MOV EAX,[0x0050c52c]
ADD ESP,0x4
CMP EAX,EBX
JZ 0x00437c9d
MOV EAX,[0x0050c47c]
MOV word ptr [0x00e99400],BX
CMP EAX,0x2
MOV word ptr [0x0050c468],SI
JNZ 0x00437e79
MOV dword ptr [0x0050c47c],EBX
MOV dword ptr [0x004bfedc],0x8
MOV dword ptr [0x0050c944],ESI
JMP 0x00437cf1
CMP dword ptr [0x0050c470],EBX
JZ 0x00437cd3
PUSH 0x1a
PUSH 0x1c
CALL 0x00468fe0
ADD ESP,0x8
MOV dword ptr [0x0050c474],EDI
MOV dword ptr [0x0050c470],EBX
MOV dword ptr [0x0050c954],EDI
MOV word ptr [0x00e99400],BX
MOV word ptr [0x0050c468],SI
JMP 0x00437cf1
MOV EAX,[0x0050c47c]
MOV dword ptr [0x0050c474],EDI
CMP EAX,EDI
JZ 0x00437e44
PUSH 0x3
PUSH EBP
CALL 0x00454d40
ADD ESP,0x8
CMP dword ptr [EBP + 0x10],EBX
JNZ 0x00437dfc
PUSH EBX
PUSH 0x3f800000
PUSH EBX
CALL 0x00469c30
MOV EAX,[0x0050c470]
ADD ESP,0xc
CMP EAX,EBX
JNZ 0x00437dfc
MOV EDX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [EDX]
MOV EDX,dword ptr [0x00e295d0]
TEST ECX,0x20000
JZ 0x00437d92
MOV EAX,[0x00e295cc]
DEC EAX
CMP EDX,EAX
JGE 0x00437d92
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac854]
FADD dword ptr [0x0050c938]
FST dword ptr [0x0050c938]
FCOMP dword ptr [0x004ac76c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00437d63
MOV dword ptr [0x0050c938],0x3fc00000
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac858]
FSUBR dword ptr [0x0050c93c]
FST dword ptr [0x0050c93c]
FCOMP dword ptr [0x004ac85c]
FNSTSW AX
TEST AH,0x1
JZ 0x00437d92
MOV dword ptr [0x0050c93c],0xbf800000
TEST ECX,0x10000
JZ 0x00437dfc
CMP EDX,EBX
JLE 0x00437dfc
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac854]
FADD dword ptr [0x0050c938]
FST dword ptr [0x0050c938]
FCOMP dword ptr [0x004ac76c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00437dcd
MOV dword ptr [0x0050c938],0x3fc00000
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac858]
FADD dword ptr [0x0050c93c]
FST dword ptr [0x0050c93c]
FCOMP dword ptr [0x004ac764]
FNSTSW AX
TEST AH,0x41
JNZ 0x00437dfc
MOV dword ptr [0x0050c93c],0x3f800000
MOV ECX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x10]
ADD ECX,0x4
INC EAX
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESP + 0x10],EAX
MOVSX ECX,byte ptr [EBP + 0x70]
CMP EAX,ECX
JL 0x00437a01
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x124
RET
MOV EAX,[0x0050c47c]
MOV dword ptr [0x0050c52c],EBX
CMP EAX,0x2
MOV word ptr [0x0050c468],SI
JNZ 0x00437e5f
MOV dword ptr [0x0050c47c],EBX
MOV dword ptr [0x004bfedc],0x8
MOV dword ptr [0x0050c944],ESI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x124
RET
PUSH 0x3
PUSH EBP
MOV byte ptr [EBP + 0x5f],0x1
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x124
RET
PUSH 0x3
PUSH EBP
MOV dword ptr [0x0050c52c],EBX
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x124
RET
