; FUN_00456200
SUB ESP,0x7c
FLD dword ptr [0x00e2af94]
FSUB dword ptr [0x00e298f4]
FLD dword ptr [0x00e298f0]
FSUB dword ptr [0x00e2af90]
FXCH
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH ECX
FSTP dword ptr [ESP]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0042f560
FLD dword ptr [0x004acff8]
FLD dword ptr [0x004acffc]
FLD dword ptr [0x004ad000]
FXCH ST3
FSTP dword ptr [ESP + 0x1c]
MOV AL,[0x00e35aa0]
ADD ESP,0x8
FXCH
FSTP dword ptr [ESP + 0x1c]
TEST AL,AL
FSTP dword ptr [ESP + 0x20]
MOV EBP,0x0
FSTP dword ptr [ESP + 0x24]
JBE 0x0045658c
MOV EBX,0xe29a74
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,dword ptr [EBX + 0xffffff5c]
FILD dword ptr [ESP + 0x10]
LEA ECX,[ESP + 0x28]
PUSH ECX
PUSH EAX
FMUL dword ptr [0x004acfa8]
FMUL qword ptr [0x004ad008]
FSUB qword ptr [0x004ad010]
FSTP dword ptr [ESP + 0x20]
CALL 0x0044afb0
FLD dword ptr [ESP + 0x38]
FCOMP dword ptr [0x004ad018]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x41
JNZ 0x00456574
MOV EAX,dword ptr [EBX]
TEST EAX,EAX
JZ 0x004565d5
MOV ESI,dword ptr [EAX]
TEST ESI,ESI
JZ 0x0045644c
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
PUSH 0xff
PUSH 0xff
PUSH 0xc8
PUSH 0xc8
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x0042b640
ADD ESP,0x1c
LEA EDX,[EBP + 0x34]
PUSH EDX
PUSH 0x456c6d6f
CALL 0x00450b30
MOV EDI,EAX
ADD ESP,0x8
MOV EAX,dword ptr [EDI + 0x34]
PUSH EAX
CALL 0x0044b470
MOVSX ECX,word ptr [0x004c25f8]
MOV dword ptr [ESP + 0x14],ECX
ADD ESP,0x4
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad01c]
FCOMPP
FNSTSW AX
TEST AH,0x41
JZ 0x0045644c
MOV EDX,dword ptr [EDI + 0x34]
PUSH EDX
CALL 0x0044b470
MOVSX EAX,word ptr [0x004c25fa]
MOV dword ptr [ESP + 0x14],EAX
ADD ESP,0x4
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ad01c]
FCOMPP
FNSTSW AX
TEST AH,0x1
JNZ 0x0045644c
MOV dword ptr [ESP + 0x1c],0x42a00000
MOV dword ptr [ESP + 0x20],0x42960000
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
MOV EDX,dword ptr [ESP + 0x14]
FILD dword ptr [ESP + 0x10]
PUSH 0xc2b40000
PUSH 0x0
LEA ECX,[ESP + 0x54]
PUSH EDX
FMUL dword ptr [0x004acfa8]
PUSH ECX
FMUL qword ptr [0x004ad020]
FSUB qword ptr [0x004ad028]
FSUB dword ptr [0x004ad030]
FSTP dword ptr [ESP + 0x34]
CALL 0x00431020
ADD ESP,0x10
LEA EAX,[ESP + 0x28]
LEA ECX,[ESP + 0x7c]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
FLD dword ptr [ESP + 0x84]
FCOMP dword ptr [0x004acf50]
FLD dword ptr [ESP + 0x84]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x004563f6
FSUB dword ptr [0x004ad034]
JMP 0x004563fc
FSUB dword ptr [0x004ad038]
FSTP dword ptr [ESP + 0x7c]
MOV EAX,dword ptr [ESP + 0x18]
LEA EDX,[ESP + 0x4c]
FLD dword ptr [ESP + 0x84]
FSUB dword ptr [0x004ad03c]
PUSH EDX
PUSH EAX
PUSH EAX
PUSH EAX
LEA EAX,[ESP + 0x5c]
FSTP dword ptr [ESP + 0x94]
PUSH EAX
CALL 0x00431450
ADD ESP,0x14
LEA ECX,[ESP + 0x4c]
PUSH ECX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
MOV EDX,dword ptr [EBX + -0x10]
MOV ESI,dword ptr [EDX]
TEST ESI,ESI
JZ 0x00456574
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
LEA EAX,[ESP + 0x4c]
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH EAX
CALL 0x00431020
ADD ESP,0x10
LEA ECX,[ESP + 0x28]
LEA EDX,[ESP + 0x7c]
PUSH ECX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x4c]
LEA ECX,[ESP + 0x4c]
PUSH EAX
PUSH 0x3e99999a
PUSH 0x3e99999a
PUSH 0x3e99999a
PUSH ECX
CALL 0x00431450
FLD dword ptr [ESP + 0x98]
FSUB dword ptr [0x004ad040]
ADD ESP,0x14
LEA EDX,[ESP + 0x4c]
PUSH EDX
PUSH ESI
FSTP dword ptr [ESP + 0x8c]
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
MOV EAX,dword ptr [EBX + 0xfffffeb8]
ADD ESP,0x14
MOV ESI,dword ptr [EAX]
TEST ESI,ESI
JZ 0x00456574
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
LEA ECX,[ESP + 0x4c]
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH ECX
CALL 0x00431020
ADD ESP,0x10
LEA EDX,[ESP + 0x28]
LEA EAX,[ESP + 0x7c]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x4c]
LEA EDX,[ESP + 0x4c]
PUSH ECX
PUSH 0x3e99999a
PUSH 0x3e99999a
PUSH 0x3e99999a
PUSH EDX
CALL 0x00431450
ADD ESP,0x14
LEA EAX,[ESP + 0x4c]
MOV dword ptr [ESP + 0x84],0xc31d0000
PUSH EAX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
MOV ECX,dword ptr [0x00e35aa0]
INC EBP
AND ECX,0xff
ADD EBX,0x4
CMP EBP,ECX
JL 0x0045626e
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x40]
PUSH EDX
LEA ECX,[ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH -0x1
MOV dword ptr [ESP + 0x50],0x437f0000
MOV dword ptr [ESP + 0x54],0x437f0000
MOV dword ptr [ESP + 0x58],0x43480000
MOV dword ptr [ESP + 0x44],0x0
MOV dword ptr [ESP + 0x48],0x0
MOV dword ptr [ESP + 0x4c],0xc71c4000
CALL 0x00483840
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x7c
RET
