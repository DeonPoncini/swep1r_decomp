; FUN_0048efe0
PUSH EBP
MOV EBP,ESP
PUSH ECX
MOV EAX,dword ptr [EBP + 0x8]
PUSH ESI
XOR ESI,ESI
MOV [0x00df7ef8],EAX
MOV dword ptr [0x00ecc474],ESI
MOV dword ptr [0x00ecc470],ESI
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [0x00df7cec],ECX
MOV EDX,dword ptr [EAX + 0x38]
CMP EDX,0x2
JZ 0x0048f153
MOV EAX,dword ptr [EAX + 0x2c]
PUSH EDI
CMP EAX,-0x1
PUSH EBX
JNZ 0x0048f01d
MOV EAX,dword ptr [ECX + 0x70]
LEA EAX,[ECX + EAX*0x8 + 0x44]
MOV [0x00deb110],EAX
CALL 0x0048db80
MOV ECX,dword ptr [0x00df7ef8]
MOV EDI,dword ptr [EBP + 0xc]
CMP dword ptr [ECX + 0x18],EAX
JNZ 0x0048f04a
MOV EAX,[0x00df7f2c]
MOV EDX,dword ptr [EAX + 0x4]
MOV EDX,dword ptr [EDX + 0x4]
CMP dword ptr [EDX + 0x24],0x8
JNZ 0x0048f05f
PUSH EDI
PUSH ECX
CALL 0x00493310
MOV ECX,dword ptr [0x00df7ef8]
MOV EAX,[0x00df7f2c]
ADD ESP,0x8
MOV ECX,dword ptr [ECX + 0x34]
MOV EDX,dword ptr [0x00ecc424]
CMP ECX,EDX
JL 0x0048f06e
MOV ECX,EDX
CMP ECX,0x1
MOV dword ptr [0x00df7cf0],ECX
JLE 0x0048f135
MOV dword ptr [0x00df7f08],ESI
MOV ECX,dword ptr [EAX + 0x6c]
CMP ECX,ESI
MOV dword ptr [EBP + 0x8],ESI
JBE 0x0048f135
XOR EDX,EDX
MOV EBX,0x70
MOV ECX,dword ptr [EAX + EBX*0x1]
CMP dword ptr [ECX + 0x8],0x1
JNZ 0x0048f11d
MOV ESI,dword ptr [ECX + 0x4]
CMP ESI,0x1
JNZ 0x0048f15a
FLD dword ptr [EAX + EDX*0x1 + 0x270]
FSUB dword ptr [EDI + 0x24]
FLD dword ptr [EAX + EDX*0x1 + 0x274]
FSUB dword ptr [EDI + 0x28]
FLD dword ptr [EAX + EDX*0x1 + 0x278]
FSUB dword ptr [EDI + 0x2c]
FLD ST2
FMUL ST3
FLD ST2
FMUL ST3
FADDP
FLD ST1
FMUL ST2
FADDP
FSTP dword ptr [EBP + 0xc]
FSTP ST0
FSTP ST0
FSTP ST0
FLD dword ptr [EBP + 0xc]
FSQRT
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
MOV EAX,[0x00df7cec]
FLD dword ptr [ECX + 0x28]
FADD dword ptr [EAX + 0x80]
FCOMPP
FNSTSW AX
TEST AH,0x41
JNZ 0x0048f118
MOV EAX,[0x00df7f08]
MOV dword ptr [EAX*0x4 + 0xdeb4e8],ECX
INC EAX
MOV [0x00df7f08],EAX
MOV EAX,[0x00df7f2c]
MOV ECX,dword ptr [EBP + 0x8]
MOV ESI,dword ptr [EAX + 0x6c]
INC ECX
ADD EBX,0x4
ADD EDX,0xc
CMP ECX,ESI
MOV dword ptr [EBP + 0x8],ECX
JC 0x0048f098
MOV ECX,dword ptr [0x00df7cec]
MOV EDX,dword ptr [ECX + 0x78]
PUSH EDX
CALL 0x0048f180
ADD ESP,0x4
MOV EAX,0x1
POP EBX
POP EDI
POP ESI
MOV ESP,EBP
POP EBP
RET
XOR EAX,EAX
POP ESI
MOV ESP,EBP
POP EBP
RET
TEST ESI,ESI
JNZ 0x0048f11d
MOV ESI,dword ptr [0x00df7f08]
MOV dword ptr [ESI*0x4 + 0xdeb4e8],ECX
INC ESI
MOV dword ptr [0x00df7f08],ESI
JMP 0x0048f11d
