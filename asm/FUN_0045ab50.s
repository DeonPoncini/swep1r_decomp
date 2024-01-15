; FUN_0045ab50
PUSH EBP
MOV EBP,ESP
AND ESP,0xfffffff8
SUB ESP,0x44
MOV EAX,0x1
PUSH EBX
MOV dword ptr [ESP + 0x2c],EAX
MOV dword ptr [ESP + 0x30],EAX
MOV ECX,0x2
MOV EAX,0x3
PUSH ESI
PUSH EDI
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x3c],ECX
MOV dword ptr [ESP + 0x40],EAX
MOV dword ptr [ESP + 0x44],EAX
MOV dword ptr [ESP + 0x4c],EAX
MOV ECX,0x97
XOR EAX,EAX
MOV EDI,0xe29600
STOSD.REP ES:EDI
MOV ECX,0x97
MOV EDI,0xe2afa0
MOV ESI,dword ptr [EBP + 0x8]
XOR EBX,EBX
STOSD.REP ES:EDI
MOV ECX,0x97
MOV EDI,0xe29900
STOSD.REP ES:EDI
MOV ECX,0x97
MOV EDI,0xe29160
STOSD.REP ES:EDI
PUSH ESI
MOV dword ptr [ESP + 0x4c],EBX
MOV dword ptr [0x00e295a0],EBX
MOV dword ptr [0x00e295a4],EBX
MOV dword ptr [0x00e295a8],EBX
MOV dword ptr [0x00e295ac],EBX
MOV dword ptr [0x00e295b0],EBX
MOV dword ptr [0x00e295b4],EBX
MOV dword ptr [0x00e295cc],EBX
MOV dword ptr [0x00e295d0],EBX
MOV dword ptr [0x00e295d4],EBX
MOV dword ptr [0x00e295d8],EBX
MOV dword ptr [0x00e295dc],EBX
MOV dword ptr [0x00e295e0],EBX
MOV dword ptr [0x00e295c0],EBX
MOV dword ptr [0x00e295c4],EBX
MOV dword ptr [0x00e295c8],EBX
CALL 0x0043d970
ADD ESP,0x4
PUSH 0xe364a0
CALL 0x0044e320
ADD ESP,0x4
CALL 0x0044e4e0
CALL 0x00454d10
MOV EAX,0x1
OR EDI,0xffffffff
MOV dword ptr [ESI + 0x8],EAX
MOV dword ptr [ESI + 0xc],EAX
MOV dword ptr [ESI + 0x10],EDI
MOV dword ptr [ESI + 0x14],EBX
MOV dword ptr [ESI + 0x18],EBX
MOV dword ptr [ESI + 0x1c],0x3
MOV dword ptr [ESI + 0x20],EBX
MOV dword ptr [ESI + 0x24],EBX
PUSH EBX
MOV dword ptr [ESI + 0x2c],EBX
PUSH EBX
LEA EAX,[ESI + 0x44]
MOV dword ptr [ESI + 0x28],EBX
PUSH EBX
MOV dword ptr [ESI + 0x30],EBX
PUSH EAX
MOV dword ptr [ESI + 0x34],EBX
MOV dword ptr [ESI + 0x3c],EDI
MOV dword ptr [ESI + 0x38],EDI
MOV dword ptr [ESI + 0x40],EDI
CALL 0x0042f7b0
ADD ESP,0x10
MOV byte ptr [ESI + 0x50],BL
MOV byte ptr [ESI + 0x51],BL
MOV dword ptr [ESI + 0x54],EBX
MOV dword ptr [ESI + 0x58],EBX
MOV byte ptr [ESI + 0x5c],0x1
MOV EAX,0x64
MOV ECX,0x258
MOV word ptr [ESI + 0x98],AX
MOV word ptr [ESI + 0xa0],AX
MOV word ptr [ESI + 0x92],0x320
MOV word ptr [ESI + 0x94],0x2bc
MOV word ptr [ESI + 0x96],CX
MOV word ptr [ESI + 0x9a],0x4b0
MOV word ptr [ESI + 0x9c],CX
MOV word ptr [ESI + 0x9e],0x12c
MOV word ptr [ESI + 0xa2],0x898
MOV word ptr [ESI + 0xa4],BX
MOV word ptr [ESI + 0xa6],BX
MOV word ptr [ESI + 0xa8],BX
MOV byte ptr [ESI + 0x5d],BL
MOV byte ptr [ESI + 0x5e],BL
MOV byte ptr [ESI + 0x5f],BL
MOV byte ptr [ESI + 0x60],BL
MOV byte ptr [ESI + 0x8a],0x4
MOV dword ptr [ESI + 0xb4],EBX
MOV dword ptr [ESI + 0xb8],EBX
MOV dword ptr [ESI + 0xbc],EBX
MOV dword ptr [ESI + 0xc0],EBX
MOV dword ptr [ESI + 0xc4],EBX
MOV dword ptr [ESI + 0xc8],EBX
XOR EAX,EAX
MOV byte ptr [EAX + ESI*0x1 + 0xcc],AL
INC EAX
CMP EAX,0x3
JL 0x0045ad35
PUSH ESI
CALL 0x0045bd90
ADD ESP,0x4
MOV EAX,0xe29bc4
MOV dword ptr [EAX + -0x4],EDI
MOV dword ptr [EAX],EDI
MOV dword ptr [EAX + 0x4],EDI
MOV dword ptr [EAX + 0x8],EBX
MOV byte ptr [EAX + 0xc],0xff
MOV byte ptr [EAX + 0xd],0xff
MOV dword ptr [EAX + 0x10],EDI
MOV dword ptr [EAX + 0x14],EBX
MOV dword ptr [EAX + 0x80],EBX
MOV dword ptr [EAX + 0x18],EBX
MOV dword ptr [EAX + 0x1c],EBX
MOV dword ptr [EAX + 0x20],EBX
MOV dword ptr [EAX + 0x24],EBX
MOV dword ptr [EAX + 0x28],EBX
MOV dword ptr [EAX + 0x2c],EBX
MOV dword ptr [EAX + 0x30],EBX
MOV dword ptr [EAX + 0x34],EBX
MOV dword ptr [EAX + 0x38],EBX
MOV dword ptr [EAX + 0x3c],EBX
MOV dword ptr [EAX + 0x40],EBX
MOV dword ptr [EAX + 0x44],EBX
MOV dword ptr [EAX + 0x48],EBX
MOV dword ptr [EAX + 0x4c],EBX
MOV dword ptr [EAX + 0x50],EBX
MOV dword ptr [EAX + 0x54],EBX
MOV word ptr [EAX + 0x58],BX
MOV dword ptr [EAX + 0x70],EBX
LEA EDX,[EAX + 0x5c]
MOV dword ptr [EAX + 0x74],EBX
XOR ECX,ECX
MOV dword ptr [EAX + 0x78],EBX
MOV dword ptr [EDX],ECX
ADD EAX,0x88
MOV dword ptr [EDX + 0x4],ECX
CMP EAX,0xe2a664
MOV dword ptr [EDX + 0x8],ECX
MOV dword ptr [EDX + 0xc],ECX
MOV dword ptr [EDX + 0x10],ECX
JL 0x0045ad50
XOR EDX,EDX
MOV EAX,0xe98f44
LEA ESI,[ESP + 0x30]
MOV ECX,dword ptr [ESI]
MOV dword ptr [EAX + -0x4],EDX
LEA EDI,[EDX + ECX*0x1 + -0x1]
ADD EDX,ECX
CMP ECX,EBX
MOV dword ptr [EAX],EDI
JNZ 0x0045adf4
MOV dword ptr [EAX + -0x4],0xffffffff
MOV dword ptr [EAX],0xfffffffe
ADD EAX,0x5c
ADD ESI,0x4
CMP EAX,0xe99224
JL 0x0045add6
XOR ESI,ESI
MOV dword ptr [ESP + 0x14],ESI
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
LEA EDI,[ESI + ESI*0x2]
FILD dword ptr [ESP + 0x10]
SHL EDI,0x3
SUB EDI,ESI
FMUL dword ptr [0x004acfa8]
SHL EDI,0x2
CMP ESI,0x6
FMUL qword ptr [0x004ad138]
FSTP dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0xe98f48],EAX
JZ 0x0045ae92
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004ad140]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045ae60
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad0ec]
FNSTSW AX
TEST AH,0x1
JNZ 0x0045ae82
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004ad148]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045ae92
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ad150]
FNSTSW AX
TEST AH,0x1
JZ 0x0045ae92
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ad108]
FSTP dword ptr [EDI + 0xe98f48]
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad138]
FSTP dword ptr [EDI + 0xe98f4c]
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad138]
FSTP dword ptr [EDI + 0xe98f54]
CALL 0x0045cf00
FSTP qword ptr [ESP + 0x28]
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
CMP ESI,0x6
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad158]
FSUB qword ptr [0x004ad160]
FMUL qword ptr [ESP + 0x28]
FST dword ptr [EDI + 0xe98f50]
JNZ 0x0045af15
FMUL dword ptr [0x004acfcc]
FSTP dword ptr [0x00e99178]
JMP 0x0045af17
FSTP ST0
CALL 0x0045cf00
FSTP qword ptr [ESP + 0x28]
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad168]
FSUB qword ptr [0x004ad170]
FMUL qword ptr [ESP + 0x28]
FADD dword ptr [EDI + 0xe98f50]
FSTP dword ptr [EDI + 0xe98f58]
MOV EDX,dword ptr [EDI + 0xe98f40]
MOV EAX,dword ptr [EDI + 0xe98f44]
CMP EDX,EAX
MOV dword ptr [ESP + 0x10],EDX
JG 0x0045b10f
LEA ECX,[EDX + EDX*0x2]
LEA ESI,[ECX*0x8 + 0xe293d0]
JMP 0x0045af77
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [EDI + 0xe98f40]
SUB EAX,ECX
SUB EDX,ECX
INC EAX
MOV dword ptr [ESP + 0x20],EDX
FILD dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x18],EAX
FILD dword ptr [ESP + 0x18]
FSTP qword ptr [ESP + 0x28]
FSTP qword ptr [ESP + 0x18]
CALL 0x004816b0
FLD qword ptr [0x004ad138]
FDIV qword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x20],EAX
FLD qword ptr [ESP + 0x18]
FMUL qword ptr [0x004ad178]
FILD dword ptr [ESP + 0x20]
FXCH
FDIV qword ptr [ESP + 0x28]
FXCH
FMUL dword ptr [0x004acfa8]
FXCH ST2
FMULP ST2
FSUBP
FSTP dword ptr [ESI + -0x4]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FLD qword ptr [ESP + 0x18]
FMUL qword ptr [0x004ad190]
FXCH
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad180]
FSUB qword ptr [0x004ad188]
FXCH
FSUBP
FSTP qword ptr [ESP + 0x28]
CALL 0x0045cf00
FLD qword ptr [ESP + 0x18]
FXCH
FMUL qword ptr [ESP + 0x28]
FXCH
FMUL qword ptr [0x004ad198]
FXCH
FSTP dword ptr [ESI]
FSTP qword ptr [ESP + 0x28]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad158]
FSUB qword ptr [0x004ad1a0]
FSUB qword ptr [ESP + 0x28]
FSTP qword ptr [ESP + 0x20]
CALL 0x0045cf00
FMUL qword ptr [ESP + 0x20]
FSTP dword ptr [ESI + -0x10]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad158]
FSUB qword ptr [0x004ad1a0]
FSUB qword ptr [ESP + 0x28]
FSTP qword ptr [ESP + 0x28]
CALL 0x0045cf00
FMUL qword ptr [ESP + 0x28]
FSTP dword ptr [ESI + -0xc]
CALL 0x0045cf00
FSTP qword ptr [ESP + 0x28]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad1a8]
FSUB qword ptr [0x004ad160]
FMUL qword ptr [ESP + 0x28]
FSTP dword ptr [ESI + -0x8]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
MOV ECX,dword ptr [ESP + 0x10]
FILD dword ptr [ESP + 0x20]
FLD qword ptr [ESP + 0x18]
FMUL qword ptr [0x004ad1c0]
FXCH
FMUL dword ptr [0x004acfa8]
MOV EAX,dword ptr [EDI + 0xe98f44]
INC ECX
ADD ESI,0x18
CMP ECX,EAX
FMUL qword ptr [0x004ad1b0]
MOV dword ptr [ESP + 0x10],ECX
FSUB qword ptr [0x004ad1b8]
FXCH
FSUBP
FMUL dword ptr [0x004ad1c8]
FSTP dword ptr [ESI + -0x14]
JLE 0x0045af73
MOV ESI,dword ptr [ESP + 0x14]
INC ESI
CMP ESI,0x8
MOV dword ptr [ESP + 0x14],ESI
JL 0x0045ae07
PUSH 0x4c4a38
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe98f5c
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c4a14
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe98fb8
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c49f0
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe99014
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c49cc
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe99070
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c49ac
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe990cc
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c4988
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe99128
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c4968
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe99184
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x4c4944
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xe991e0
CALL 0x0049eb80
ADD ESP,0x8
MOV dword ptr [0x0050c950],EBX
POP EDI
POP ESI
POP EBX
MOV ESP,EBP
POP EBP
RET
