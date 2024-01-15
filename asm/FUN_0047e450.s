; FUN_0047e450
SUB ESP,0x84
PUSH EBX
PUSH ESI
PUSH EDI
CALL 0x004816b0
CALL 0x004816b0
MOV EBX,dword ptr [ESP + 0x94]
MOV ESI,0xe25e00
MOV EDI,0x4c7bc0
FLD dword ptr [EDI]
FCOMP dword ptr [0x004ade50]
FNSTSW AX
TEST AH,0x41
JZ 0x0047e555
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
LEA EAX,[EBX + 0x20]
FILD dword ptr [ESP + 0xc]
LEA ECX,[ESP + 0x50]
PUSH EAX
PUSH ECX
FMUL dword ptr [0x004ade88]
FMUL dword ptr [0x004adf04]
FSUB dword ptr [0x004adef0]
FSTP dword ptr [EDI]
CALL 0x0044bb10
FLD dword ptr [EBX + 0x1a0]
FLD dword ptr [EDI]
FMUL dword ptr [0x004adf08]
FXCH
FMUL dword ptr [0x004adf0c]
ADD ESP,0x8
LEA EDX,[ESP + 0x10]
FMULP
PUSH ECX
LEA EAX,[EBX + 0xac]
FMUL dword ptr [0x004adf10]
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
CALL 0x0044eeb0
FLD dword ptr [ESP + 0x4c]
FLD dword ptr [ESP + 0x54]
FSUB dword ptr [0x004adec0]
FLD dword ptr [ESP + 0x50]
FXCH ST2
FSTP dword ptr [ESI]
FXCH
FSTP dword ptr [ESI + 0x4]
ADD ESP,0xc
FSTP dword ptr [ESI + 0x8]
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ade88]
FMUL dword ptr [0x004adf14]
FSUB dword ptr [0x004ade7c]
FADD dword ptr [ESI]
FSTP dword ptr [ESI]
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ade88]
FMUL dword ptr [0x004adf14]
FSUB dword ptr [0x004ade7c]
FADD dword ptr [ESI + 0x4]
FSTP dword ptr [ESI + 0x4]
ADD EDI,0x4
ADD ESI,0xc
CMP EDI,0x4c7be0
JL 0x0047e474
POP EDI
POP ESI
POP EBX
ADD ESP,0x84
RET
