; FUN_00482120
SUB ESP,0xa4
MOV EAX,dword ptr [ESP + 0xa8]
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xbc]
MOVSX ECX,word ptr [EAX]
MOVSX EDX,word ptr [EAX + 0x2]
MOV dword ptr [ESP + 0x8],ECX
PUSH EDI
FILD dword ptr [ESP + 0xc]
MOVSX EAX,word ptr [EAX + 0x4]
FSTP dword ptr [ESP + 0x34]
MOV dword ptr [ESP + 0xc],EDX
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],EAX
MOV EAX,dword ptr [ESP + 0xb8]
MOVSX ECX,word ptr [EAX]
FSTP dword ptr [ESP + 0x38]
FILD dword ptr [ESP + 0xc]
MOVSX EDX,word ptr [EAX + 0x2]
FSTP dword ptr [ESP + 0x3c]
MOV dword ptr [ESP + 0xc],ECX
FILD dword ptr [ESP + 0xc]
MOVSX EAX,word ptr [EAX + 0x4]
FSTP dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0xc],EDX
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],EAX
MOV EAX,dword ptr [ESP + 0xbc]
MOVSX ECX,word ptr [EAX]
FSTP dword ptr [ESP + 0x2c]
FILD dword ptr [ESP + 0xc]
MOVSX EDX,word ptr [EAX + 0x2]
FSTP dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0xc],ECX
LEA ECX,[ESP + 0x34]
FILD dword ptr [ESP + 0xc]
MOVSX EAX,word ptr [EAX + 0x4]
FSTP dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0xc],EDX
LEA EDX,[ESP + 0x58]
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0xc],EAX
PUSH ECX
PUSH EDX
FSTP dword ptr [ESP + 0x4c]
FILD dword ptr [ESP + 0x14]
FSTP dword ptr [ESP + 0x50]
CALL 0x00430a00
ADD ESP,0xc
LEA EAX,[ESP + 0x24]
LEA ECX,[ESP + 0x60]
PUSH EDI
PUSH EAX
PUSH ECX
CALL 0x00430a00
ADD ESP,0xc
LEA EDX,[ESP + 0x3c]
LEA EAX,[ESP + 0x48]
PUSH EDI
PUSH EDX
PUSH EAX
CALL 0x00430a00
MOV ESI,dword ptr [ESP + 0xcc]
ADD ESP,0xc
LEA ECX,[ESP + 0x18]
LEA EDX,[ESP + 0xc]
MOV EAX,dword ptr [ESI]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x50]
PUSH EAX
PUSH ECX
MOV ECX,dword ptr [ESP + 0xd4]
LEA EDX,[ESP + 0x70]
LEA EAX,[ESP + 0x64]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00480dc0
FCOM dword ptr [0x004ae018]
ADD ESP,0x1c
FNSTSW AX
TEST AH,0x1
JNZ 0x00482310
FCOM dword ptr [ESI]
FNSTSW AX
TEST AH,0x1
JZ 0x00482310
FLD dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0xc8]
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x14]
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0x18]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,dword ptr [ESP + 0xcc]
MOV ECX,dword ptr [ESP + 0x20]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0x4],EDX
MOV dword ptr [EAX + 0x8],ECX
FSTP dword ptr [ESI]
MOV ECX,dword ptr [0x0050ccd0]
TEST ECX,ECX
JL 0x00482312
XOR EAX,EAX
TEST ECX,ECX
JLE 0x004822be
MOV ECX,dword ptr [0x00e229dc]
MOV EDX,dword ptr [EAX*0x4 + 0xe229e0]
MOV dword ptr [ECX + EAX*0x4],EDX
MOV ECX,dword ptr [0x0050ccd0]
INC EAX
CMP EAX,ECX
JL 0x004822a3
MOV EDX,dword ptr [0x00e229dc]
LEA EAX,[ESP + 0x6c]
PUSH EDI
PUSH EAX
MOV dword ptr [EDX + ECX*0x4],0x0
CALL 0x00430810
ADD ESP,0x8
LEA ECX,[ESP + 0x6c]
LEA EDX,[ESP + 0xc]
PUSH ECX
PUSH EDX
PUSH 0xe229d0
CALL 0x00430a00
ADD ESP,0xc
LEA EAX,[ESP + 0x6c]
LEA ECX,[ESP + 0x18]
PUSH EAX
PUSH ECX
PUSH 0xe229c0
CALL 0x00430980
ADD ESP,0xc
POP EDI
POP ESI
ADD ESP,0xa4
RET
FSTP ST0
POP EDI
POP ESI
ADD ESP,0xa4
RET
