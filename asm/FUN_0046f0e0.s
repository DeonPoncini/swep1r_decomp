; FUN_0046f0e0
SUB ESP,0x80
PUSH ESI
MOV ESI,dword ptr [ESP + 0x88]
PUSH EDI
LEA ECX,[ESP + 0xc]
LEA EAX,[ESI + 0x30]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
MOV EDI,dword ptr [ESP + 0x98]
ADD ESP,0x8
LEA EAX,[ESP + 0x30]
LEA EDX,[EDI + 0x30]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
MOV EAX,dword ptr [ESP + 0xa4]
ADD ESP,0x8
LEA EAX,[EAX + EAX*0x2]
PUSH ESI
LEA EAX,[EAX + EAX*0x8]
SHL EAX,0x2
FLD dword ptr [EAX + 0x4c70ac]
FMUL dword ptr [ESP + 0x98]
MOV ECX,dword ptr [EAX + 0x4c70b0]
MOV EDX,dword ptr [EAX + 0x4c70b4]
MOV dword ptr [ESP + 0x20],ECX
MOV ECX,dword ptr [EAX + 0x4c70bc]
MOV dword ptr [ESP + 0x24],EDX
LEA EDX,[ESP + 0x1c]
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [EAX + 0x4c70b8]
FMUL dword ptr [ESP + 0x98]
PUSH EDX
MOV dword ptr [ESP + 0x30],ECX
FSTP dword ptr [ESP + 0x2c]
FLD dword ptr [EAX + 0x4c70c0]
FMUL dword ptr [ESP + 0xa0]
LEA EAX,[ESP + 0x20]
PUSH EAX
FSTP dword ptr [ESP + 0x38]
CALL 0x00430980
ADD ESP,0xc
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP + 0x18]
LEA EAX,[ESP + 0xc]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f830
ADD ESP,0xc
LEA ECX,[ESP + 0x24]
LEA EDX,[ESP + 0x24]
PUSH EDI
PUSH ECX
PUSH EDX
CALL 0x00430980
ADD ESP,0xc
LEA EAX,[ESP + 0x30]
LEA ECX,[ESP + 0x24]
LEA EDX,[ESP + 0x30]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f830
ADD ESP,0xc
LEA EAX,[ESP + 0x30]
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP + 0x3c]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP + 0x3c]
PUSH EAX
CALL 0x0042f8c0
FSTP dword ptr [ESP + 0xc]
ADD ESP,0x4
LEA ECX,[ESP + 0x3c]
PUSH ECX
CALL 0x0042f9b0
MOV EDX,dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x10]
ADD ESP,0x4
FSTP ST0
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x50]
PUSH ECX
PUSH EDX
CALL 0x00431100
ADD ESP,0x10
LEA EAX,[ESP + 0x3c]
LEA ECX,[ESP + 0x58]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0x68]
PUSH 0x3f800000
PUSH 0x0
PUSH 0x0
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
LEA EAX,[ESP + 0x68]
LEA ECX,[ESP + 0x58]
LEA EDX,[ESP + 0x48]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EAX,[ESP + 0x58]
LEA ECX,[ESP + 0x48]
LEA EDX,[ESP + 0x68]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f9f0
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ada18]
ADD ESP,0xc
LEA EAX,[ESP + 0x48]
PUSH EAX
PUSH 0x3b83126f
PUSH ECX
LEA ECX,[ESP + 0x54]
FSTP dword ptr [ESP]
PUSH 0x3b83126f
PUSH ECX
CALL 0x00431450
MOV EAX,dword ptr [ESP + 0xb4]
ADD ESP,0x14
LEA EDX,[ESP + 0x48]
PUSH EDX
PUSH EAX
CALL 0x0044bb10
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0x80
RET